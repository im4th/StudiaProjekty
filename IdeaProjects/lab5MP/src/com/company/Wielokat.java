package com.company;

import java.awt.*;

class Wielokat extends Figura{
    private int liczbaWierzcholkow;
    private int liczbaBokow;
    private int sumaKatowWew;

    public Wielokat(int pole, int obwod, Color kolor, int liczbaWierzcholkow, int liczbaBokow, int sumaKatowWew) {
        super(pole, obwod, kolor);
        this.liczbaWierzcholkow = liczbaWierzcholkow;
        this.liczbaBokow = liczbaBokow;
        this.sumaKatowWew = sumaKatowWew;
    }

    public Wielokat() {

    }

    public int getLiczbaWierzcholkow() {
        return liczbaWierzcholkow;
    }

    public int getLiczbaBokow() {
        return liczbaBokow;
    }

    public int getSumaKatowWew() {
        return sumaKatowWew;
    }

    public void setLiczbaWierzcholkow(int liczbaWierzcholkow) {
        this.liczbaWierzcholkow = liczbaWierzcholkow;
    }

    public void setLiczbaBokow(int liczbaBokow) {
        this.liczbaBokow = liczbaBokow;
    }

    public void setSumaKatowWew(int sumaKatowWew) {
        this.sumaKatowWew = sumaKatowWew;
    }

    @Override
    protected void rysuj() {
        super.rysuj();
    }

    @Override
    protected void usun() {
        super.usun();
    }

    @Override
    protected void przesun() {
        super.przesun();
    }

    @Override
    protected String podajParametry() {
        return super.podajParametry();
    }
    public void obliczSumeKatWew()
    {
        sumaKatowWew = (liczbaBokow -2) * 180;
    }
}
