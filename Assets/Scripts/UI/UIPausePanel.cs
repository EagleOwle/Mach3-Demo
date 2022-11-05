using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIPausePanel : Menu
{
    [SerializeField] private Button returnButton;
    [SerializeField] private Button exitButton;
    [SerializeField] private UIMenuExit uiMenuExit;

    public void Initialise()
    {
        returnButton.onClick.AddListener(OnButtonReturn);
        exitButton.onClick.AddListener(OnButtonExit);
        uiMenuExit.Initialise();
    }

    private void OnButtonReturn()
    {
         Hide();
    }

    private void OnButtonExit()
    {
        uiMenuExit.Show();
    }

}
