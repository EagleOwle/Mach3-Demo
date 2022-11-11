using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIPausePanel : Menu
{
    [SerializeField] private Button returnButton;
    [SerializeField] private Button preferenceButton;
    [SerializeField] private Button exitButton;
    [SerializeField] private UIPreferencePanel uiPreferencePanel;
    [SerializeField] private UIMenuExit uiMenuExit;

    public void Initialise(GamePreference setting)
    {
        returnButton.onClick.AddListener(OnButtonReturn);
        preferenceButton.onClick.AddListener(OnButtonPreference);
        exitButton.onClick.AddListener(OnButtonExit);
        uiMenuExit.Initialise();
        uiPreferencePanel.Initialise(setting);
    }

    private void OnButtonReturn()
    {
         Hide();
    }

    private void OnButtonPreference()
    {
        uiPreferencePanel.Show();
    }

    private void OnButtonExit()
    {
        uiMenuExit.Show();
    }

}
