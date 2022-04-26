package com.company;

import java.util.ArrayList;

public class USSValiant extends Statek {

    private Zbrojownia zbrojownia;
    public USSValiant(String _nazwa, String _panstwo)
    {
        super(UZBROJONY, _nazwa, _panstwo); //wywolanie konstruktora klasy bazowej Statek
        zbrojownia = new Zbrojownia();
    }

    @Override
    public void uzbroj(int[] pociski) {
        zbrojownia.setPociski(pociski);
        setStan(UZBROJONY);
    }

    @Override
    public int[] rozbroj() {
        int[] temp = zbrojownia.getPociski();
        zbrojownia.setPociski(null);
        setStan(NIEUZBROJONY);
        return temp;
    }

    public String toString()
    {
        return super.toString() + " Zbrojownia: " + zbrojownia.toString(); //super to odwolanie do klasy bazowej Statek
    }
}
