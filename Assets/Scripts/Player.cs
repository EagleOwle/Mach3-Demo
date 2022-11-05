using System;
using UnityEngine;
using UnityEngine.Events;

public interface IPlayerGetData
{
    event Action<int> eventChangeCoints;
    event Action<int> eventChangePoints;
    event Action<int> eventChangeAbility;

    int GetCoins();
    int GetPoints();
    int GetAbility();
}

public class Player : IPlayerGetData
{
    public event Action<int> eventChangeCoints;
    public event Action<int> eventChangePoints;
    public event Action<int> eventChangeAbility;

    private PlayerProfile profile;

    public void Initialise()
    {
        profile = new PlayerProfile(0, 0, 0);
    }

    int IPlayerGetData.GetCoins()
    {
        return profile.points.count;
    }

    int IPlayerGetData.GetPoints()
    {
        return profile.points.count;
    }

    int IPlayerGetData.GetAbility()
    {
        return profile.abilitiys.count;
    }

    public void SetCoints(int value)
    {
        profile.coins.count += value;
        eventChangeCoints.Invoke(profile.coins.count);
    }

    public void SetPoints(int value)
    {
        profile.points.count += value;
        eventChangePoints.Invoke(profile.points.count);
    }

    public void SetAbility(int value)
    {
        profile.abilitiys.count += value;
        eventChangeAbility.Invoke(profile.abilitiys.count);
    }
}
