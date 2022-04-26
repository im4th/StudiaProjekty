package com.company;

public class USSValiant extends Statek {

    private Zbrojownia pociski;
    public USSValiant(String _nazwa, String _panstwo)
    {
        super(UZBROJONY, _nazwa, _panstwo); //wywolanie konstruktora klasy bazowej Statek
        pociski = new Zbrojownia();
    }

    public String toString()
    {
        return super.toString() + " Zbrojownia: " + pociski.toString(); //super to odwolanie do klasy bazowej Statek
    }
}
