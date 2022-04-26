package com.company;

import java.awt.*;

public class Figura {
    protected  int pole;
    protected  int obwod;
    private Color kolor;
    protected void rysuj(){}
    protected void usun(){}
    protected void przesun(){}
    protected String podajParametry(){return podajParametry();}
    public int getPole() {
        return pole;
    }

    public int getObwod() {
        return obwod;
    }

    public Color getKolor() {
        return kolor;
    }

    public void setPole(int pole) {
        this.pole = pole;
    }

    public void setObwod(int obwod) {
        this.obwod = obwod;
    }

    public void setKolor(Color kolor) {
        this.kolor = kolor;
    }

    public Figura(int pole, int obwod, Color kolor) {
        this.pole = pole;
        this.obwod = obwod;
        this.kolor = kolor;
    }
    public Figura()
    {}
}
