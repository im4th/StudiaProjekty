package com.company;

import java.util.Random;

public abstract class Statek {
    public static final int SPRAWNY = 1, NIESPRAWNY = 0;
    protected String NAZWA;
    protected int STAN;

    /*public void USTAWSTAN(int STAN) {
        this.STAN = STAN;
    }*/
    abstract  void USTAWSTAN(int STAN);

    /*public void USTAWSTAN(String NAZWA, int STAN) {
        this.STAN = STAN;
        this.NAZWA = NAZWA;
    }*/
    abstract  void USTAWSTAN(String NAZWA,int STAN);

    public Statek() {
        NAZWA = "StatekM";
        STAN = 1;
    }

    /*public void atakuj(Statek broniacy){
        Random rn = new Random();
        if(this.STAN == 1) {
            int t = rn.nextInt(2);
            if (t == 1)
                broniacy.USTAWSTAN(NIESPRAWNY); //= NIESPRAWNY;
            else
                this.USTAWSTAN(SPRAWNY);// = SPRAWNY;
        }*/
    public abstract void atakuj(Statek broniacy);

    /*@Override
    public String toString(){
        String stringStan = STAN == 1 ? "Sprawny" : "Niesprawny";
        return "Statek: " + NAZWA +  " Stan: " + stringStan;
    }*/
    public abstract String toString();
}
