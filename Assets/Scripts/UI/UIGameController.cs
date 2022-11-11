using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIGameController : MonoBehaviour
{
    [SerializeField] private GamePreference setting;
    [SerializeField] private UIGameTopPanel topPanel;
    [SerializeField] private UIGameButtomPanel buttomPanel;
    [SerializeField] private UIPausePanel pausePanel;
    [SerializeField] private UIMessagePanel messagePanel;
    [SerializeField] private Button pauseButton;

    public void Initialise(IPlayerGetData playerData, IGlobalMessage globalMessage)
    {
        messagePanel.Initialise(globalMessage);
        topPanel.Initialise(playerData);
        pauseButton.onClick.AddListener(OnButtonPause);
        pausePanel.Initialise(setting);
    }

    private void OnButtonPause()
    {
        pausePanel.Show();
    }
}
