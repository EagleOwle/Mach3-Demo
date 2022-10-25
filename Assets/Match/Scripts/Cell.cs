﻿using DG.Tweening;
using System.Collections.Generic;
using TMPro;
using System.Linq;
using UnityEditor;
using UnityEngine;
using UnityEngine.UI;
using System.Threading;
using Cysharp.Threading.Tasks;
using System.Collections;
using System;

namespace Match
{

    public class Cell : MonoBehaviour
    {
        [SerializeField] private RectTransform rectTransform;
        [SerializeField] private TextMeshProUGUI text;

        public Vector2 Size
        {
            get
            {
                return rectTransform.sizeDelta;
            }

            set
            {
                rectTransform.sizeDelta = value;
            }
        }

        private int x, y;

        public Cell Top;
        public Cell Right;
        public Cell Bottom;
        public Cell Left;

        public Cell lastCell;

        [SerializeField] private Item item;
        public Item Item
        {
            get
            {
                return item;
            }

            set
            {
                this.item = value;
                this.item.transform.SetParent(transform);
            }
        }

        public Type Type
        {
            get
            {
                text.transform.SetAsLastSibling();

                if (item == null)
                {
                    text.text = "None";
                    return Type.None;
                }
                else
                {
                    text.text = item.Type.ToString();
                    return item.Type;
                }
            }
        }

        private GamePreference preference;

        public Item SpawnRandomType()
        {
            item = Instantiate(preference.prefabStore.prefabItem, transform);
            item.Initialise(preference);
            item.SetRandomType();
            item.StartScaleAndShow();
            return item;
        }

        public void Initialise(int x, int y, GamePreference preference, Cell[,] cells)
        {
            this.preference = preference;
            this.x = x;
            this.y = y;
            SetNeiborth(cells);
        }

        private void SetNeiborth(Cell[,] cells)
        {
            Left = x > 0 ? cells[x - 1, y] : null;
            Bottom = y > 0 ? cells[x, y - 1] : null;
            Right = x < cells.GetLength(0) - 1 ? cells[x + 1, y] : null;
            Top = y < cells.GetLength(1) - 1 ? cells[x, y + 1] : null;
        }

        public Sequence ScaleEffect(float tweenDuration, Sequence sequence)
        {
            item.transform.localScale = Vector3.zero;
            sequence.Join(item.transform.DOScale(Vector3.one, tweenDuration));
            return sequence;
        }

        public Sequence HalfScaleEffect(float tweenDuration, Sequence sequence)
        {
            sequence.Join(item.transform.DOScale(Vector3.one * 0.5f, tweenDuration));
            return sequence;
        }

        public void Fall()
        {
            if (item == null) return;

            if (item.onPosition == false) return;

            lastCell = FindLastBottom(Bottom);

            if (lastCell != null)
            {
                if (lastCell.item != null)
                {
                    Debug.LogError("Cell.Item not empty");
                }

                //Vector2 bottomPosition = new Vector2(lastCell.transform.position.x + lastCell.Size.x / 2, lastCell.transform.position.y + lastCell.Size.y / 2);
                lastCell.Item = item;
                lastCell.Item.MovePosition();
                item = null;
            }
        }

        //public void Fall(float tweenDuration, ref Sequence sequence)
        //{
        //    if (item == null) return;

        //    Cell lastCell = FindLastBottom(Bottom);

        //    if (lastCell != null)
        //    {
        //        Vector2 bottomPosition = new Vector2(lastCell.transform.position.x + lastCell.Size.x / 2, lastCell.transform.position.y + lastCell.Size.y / 2);
        //        sequence.Join(item.transform.DOMove(bottomPosition, tweenDuration));
        //        lastCell.Item = item;
        //        item = null;
        //    }
        //}

        public Cell FindLastBottom(Cell cell)
        {
            Cell bottom = null;

            if (cell != null && cell.Type == Type.None)
            {
                bottom = cell;
                Cell tmp = FindLastBottom(cell.Bottom);
                if (tmp != null)
                {
                    bottom = tmp;
                }
            }

            return bottom;
        }

        public void DestroyItem()
        {
            if (item == null) return;

            //CanvasGroup canvasGroup = GameObject.FindObjectOfType<CanvasGroup>();
            //item.transform.SetParent(canvasGroup.transform);
            item.StartScaleAndHide();
            //item = null;
        }

        //private async void ProcessDestroyItem()
        //{
        //    Item item = this.item;
        //    this.item = null;

        //    CanvasGroup canvasGroup = GameObject.FindObjectOfType<CanvasGroup>();

        //    item.transform.SetParent(canvasGroup.transform);
        //    item.transform.SetAsLastSibling();
        //    canvasGroup.alpha = 1;

        //    var sequence = DOTween.Sequence();
        //    sequence.Join(canvasGroup.DOFade(0, preference.boardSetting.tweenDuration));
        //    sequence.Join(item.transform.DOScale(Vector3.one * 1.5f, preference.boardSetting.tweenDuration));
        //    await sequence.Play().AsyncWaitForCompletion();
        //    Destroy(item.gameObject);
        //}

        public void GetMatchNeigbor(Direction direction, Type type, List<Cell> tmpCells)
        {
            if (this.Type == Type.None) return;

            if (tmpCells.Contains(this) == false)
            {
                tmpCells.Add(this);
            }

            switch (direction)
            {
                case Direction.Top:
                    if (Top != null && Top.Type == type)
                    {
                        Top.GetMatchNeigbor(direction, type, tmpCells);
                    }
                    break;
                case Direction.Right:
                    if (Right != null && Right.Type == type)
                    {
                        Right.GetMatchNeigbor(direction, type, tmpCells);
                    }
                    break;
                case Direction.Bottom:
                    if (Bottom != null && Bottom.Type == type)
                    {
                        Bottom.GetMatchNeigbor(direction, type, tmpCells);
                    }
                    break;
                case Direction.Left:
                    if (Left != null && Left.Type == type)
                    {
                        Left.GetMatchNeigbor(direction, type, tmpCells);
                    }
                    break;
                default:
                    Debug.LogError("No direction value: " + direction);
                    break;
            }
        }

    }
}
