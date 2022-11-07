using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIGameController : MonoBehaviour
{
    [SerializeField] private UIGameTopPanel topPanel;
    [SerializeField] private UIGameButtomPanel buttomPanel;
    [SerializeField] private UIPausePanel pausePanel;
    [SerializeField] private Button pauseButton;

    public void Initialise(IPlayerGetData playerData)
    {
        topPanel.Initialise(playerData);
        pauseButton.onClick.AddListener(OnButtonPause);
        pausePanel.Initialise();
    }

    private void OnButtonPause()
    {
        pausePanel.Show();
    }
}
