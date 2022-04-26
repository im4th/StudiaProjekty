package com.company;

import java.awt.*;

public class Owoc {
    String nazwa;
    Color kolor;
    int masa;

    public int getMasa() {
        return masa;
    }

    public Color getKolor() {
        return kolor;
    }

    public String getNazwa() {
        return nazwa;
    }
    public void setKolor(Color kolor) {
        this.kolor = kolor;
    }
    public void setMasa(int masa) {
        this.masa = masa;
    }

    public void setNazwa(String nazwa) {
        this.nazwa = nazwa;
    }
}
