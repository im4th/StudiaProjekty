package com.company;

import java.util.Random;

public class Statek {

    public static final int UZBROJONY = 1, NIEUZBROJONY = 0;

    private String nazwa, panstwo;
    private int stan;

    public Statek(){}; // to nie powinno sie nigdy stac xd

    public Statek(int _stan, String _nazwa, String _panstwo)
    {
        stan = _stan;
        nazwa = _nazwa;
        panstwo = _panstwo;
    }

    public void setNazwa(String _nazwa) { nazwa = _nazwa; }
    public void setPanstwo(String _panstwo) { panstwo = _panstwo; }
    public void setStan(int _stan) { stan = _stan; }

    public String getNazwa() { return nazwa; }
    public String getPanstwo() { return panstwo; }
    public int getStan() { return stan; }

    void bronSie(Statek atakujacy)
    {
        if(stan == UZBROJONY && atakujacy.stan == UZBROJONY && panstwo != atakujacy.panstwo)
        {
            Random r = new Random();

            if(r.nextBoolean()) {
                stan = NIEUZBROJONY;
                atakujacy.stan = NIEUZBROJONY;
            }
        }
    }

    public String toString(){
        String stringStan = stan == 1 ? "Uzbrojony" : "Nieuzbrojony";

        return "Statek: " + nazwa + " Panstwa: " + panstwo + " Stan: " + stringStan;
    }
}
