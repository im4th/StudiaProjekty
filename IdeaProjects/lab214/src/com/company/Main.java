package com.company;

import java.awt.*;

public class Main {

    public static void main(String[] args)
    {
	    //Klasa a = new Klasa();
        /*System.out.println(a.a);
        System.out.println(a.b);
        System.out.println(a.c);*/
        //Klasa.wypisz();
        //Uczen janek = new Uczen("jan", "kowalski", 20, 4.50);
        //System.out.println(janek.imie + janek.nazwisko + janek.wiek + janek.srednia);
        Owoc kiwi = new Owoc();
        kiwi.setKolor(Color.green);
        kiwi.setMasa(20);
        kiwi.setNazwa("kiwi");
        System.out.println(kiwi.getKolor());
        System.out.println(kiwi.getMasa());
        System.out.println(kiwi.getNazwa());
        Uczen.zad26(12,10,10);
    }
}
