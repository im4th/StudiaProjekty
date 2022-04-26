package com.company;

import java.util.ArrayList;
import java.util.List;

public class Main {

    public static void main(String[] args) {
     //   ZAD1:
    /*Statek statek1= new Statek();
    Statek statek2= new Statek();
    Statek statek3= new Statek();
    Statek statek4= new Statek();
    statek2.USTAWSTAN("StatekA",1);
    statek3.USTAWSTAN("StatekB",0);
    statek4.USTAWSTAN("StatekC",0);
        System.out.println(statek1.toString());
        statek1.atakuj(statek2);
        System.out.println(statek2.toString());*/
            //ZAD2:
        USSPennsylvania statek2= new USSPennsylvania("USSPennsylvania",1);
        Uzbrojenie tab[] = new Uzbrojenie[2];
        for(int i=0; i< tab.length; i++)
            tab[i] = new Uzbrojenie();
        tab[0].ILOSCUZBROJENIA = 2;
        tab[0].RODZAJ = "Kule";
        tab[1].ILOSCUZBROJENIA = 3;
        tab[1].RODZAJ = "Szable";
        statek2.USTAWUZBROJENIE(tab);
        System.out.println(statek2.toString());
        //Zad 3:
        List<Uzbrojenie> t = new ArrayList<>();
            t.add(1,"Kule");

    }
}
