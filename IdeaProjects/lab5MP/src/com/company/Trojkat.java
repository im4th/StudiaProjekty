package com.company;

import java.awt.*;

public class Trojkat extends Wielokat{
    protected  int h;
    protected  int a;

    public Trojkat(int pole, int obwod, Color kolor, int liczbaWierzcholkow, int liczbaBokow, int sumaKatowWew, int h, int a) {
        super(pole, obwod, kolor, liczbaWierzcholkow, liczbaBokow, sumaKatowWew);
        this.h = h;
        this.a = a;
    }
}
