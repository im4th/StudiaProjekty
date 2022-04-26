package com.company;

import java.awt.*;

class Elipsa extends Figura{
    private int a;
    private int b;
    private int fx1;
    private int fy1;
    private int fx2;
    private int fy2;
    private double c;
    public int getA() {
        return a;
    }

    public Elipsa(int pole, int obwod, Color kolor, int a, int b, int fx1, int fy1, int fx2, int fy2, double c) {
        super(pole, obwod, kolor);
        this.a = a;
        this.b = b;
        this.fx1 = fx1;
        this.fy1 = fy1;
        this.fx2 = fx2;
        this.fy2 = fy2;
        this.c = c;
    }

    public Elipsa() {

    }

    public void setA(int a) {
        this.a = a;
    }

    public int getB() {
        return b;
    }

    public void setB(int b) {
        this.b = b;
    }

    public int getFx1() {
        return fx1;
    }

    public void setFx1(int fx1) {
        this.fx1 = fx1;
    }

    public int getFy1() {
        return fy1;
    }

    public void setFy1(int fy1) {
        this.fy1 = fy1;
    }

    public int getFx2() {
        return fx2;
    }

    public void setFx2(int fx2) {
        this.fx2 = fx2;
    }

    public int getFy2() {
        return fy2;
    }

    public void setFy2(int fy2) {
        this.fy2 = fy2;
    }

    public double getC() {
        return c;
    }

    public void setC(double c) {
        this.c = c;
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
    public void obliczOdlOgnisk()
    {
        c = Math.sqrt(Math.pow(a,2)-Math.pow(b,2));
    }
}
