package com.company;

import java.util.Arrays;

public class Main {

    public static void main(String[] args) {
    //int tab[] = zad41.zad411();
	//zad41.zad411();
    //zad41.zad412(tab);
    //Zad42.zad421();
    Okrag[] tablica = new Okrag[2];
    zad43(tablica);
    zad432(tablica);
    zad433(tablica[0]);
    }
    static public void zad43(Okrag[] tablica){
        for(int i=0; i<2;i++ )
        {
             tablica[i] = new Okrag();
        }
    }
    static public void zad432(Okrag[] tablica) {
        double odleglosc = Math.sqrt(Math.pow(tablica[0].x - tablica[1].x,2) + Math.pow(tablica[0].y - tablica[1].y,2));
        System.out.println(tablica[0].x);
        System.out.println(tablica[1].x);
        System.out.println(tablica[0].y);
        System.out.println(tablica[1].y);
        System.out.println("Potega 1: "+Math.pow(tablica[0].x - tablica[1].x,2));
        System.out.println("Potega 2: "+Math.pow(tablica[0].y - tablica[1].y,2));
        System.out.println("calosc: "+ (Math.pow(tablica[0].x - tablica[1].x,2) + Math.pow(tablica[0].y - tablica[1].y,2)));
        System.out.println("Odlegosc:" + odleglosc);
        System.out.println("Promienie:"+ (tablica[0].r+tablica[1].r));
        if(odleglosc>(tablica[0].r+tablica[1].r))
            System.out.println("Okregi są rozłączne");
        else if(odleglosc==0)
            System.out.println("Okregi sie pokrywaja");
        else if(odleglosc==tablica[0].r+tablica[1].r)
            System.out.println("Okregi są styczne w jednym punkcie");
        else if(odleglosc<tablica[0].r+tablica[1].r)
            System.out.println("Okregi sie przecinaja");
    }
    static public void zad433(Okrag okrag)
    {
    }
}
