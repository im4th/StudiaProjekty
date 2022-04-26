package com.company;

import java.util.ArrayList;
import java.util.Random;

public abstract class Statek {

    public static final int UZBROJONY = 1, NIEUZBROJONY = 0;

    private String nazwa, panstwo;
    private int stan;


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


    public abstract void uzbroj(int[] pociski);

    public abstract int[] rozbroj();

    public void bronSie(Statek atakujacy)
    {
        try{
            if(panstwo == atakujacy.panstwo)
                throw new RuntimeException("Statki sa z tego samego panstwa!");

            if(stan == UZBROJONY && atakujacy.stan == UZBROJONY && panstwo != atakujacy.panstwo)
            {
                Random r = new Random();

                if(r.nextBoolean()) {
                    stan = NIEUZBROJONY;
                    atakujacy.stan = NIEUZBROJONY;
                }
            }
        }
        catch (Exception ex)
        {
            System.out.println(ex.getMessage());
        }

    }

    public String toString(){
        String stringStan = stan == 1 ? "Uzbrojony" : "Nieuzbrojony";

        return "Statek: " + nazwa + " Panstwa: " + panstwo + " Stan: " + stringStan;
    }
}
