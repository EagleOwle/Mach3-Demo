using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerProfile
{
    public PlayerProfile(int coins, int points, int abilitiys)
    {
        this.coins = new Coin(coins);
        this.points = new Point(points);
        this.abilitiys = new Abilitiy(abilitiys);
    }

    public Coin coins;
    public Point points;
    public Abilitiy abilitiys;
}

public class PlayerData { }

public class Coin: PlayerData
{
    public Coin(int count)
    {
        this.count = count;
    }

    public int count;
}

public class Point : PlayerData
{
    public Point(int count)
    {
        this.count = count;
    }

    public int count;
}

public class Abilitiy : PlayerData
{
    public Abilitiy(int count)
    {
        this.count = count;
    }

    public int count;
}
