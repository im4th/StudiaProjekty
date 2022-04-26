package com.company;

import java.util.Scanner;

public class Zadania {

    public static Scanner sc = new Scanner(System.in);

    public static void zad31(){
        String a;
        String b;
        char c;
        int j=0;
        System.out.println("Podaj String");
        a = sc.nextLine();
        System.out.println("Podaj char");
        b = sc.next();
        c = b.charAt(0);
        for(char i: a.toCharArray()) {
            if (i == c)
                j++;
        }
        System.out.println("Znak wystepuje "+ j + " razy.");
        }
    public static void zad32(){
        String wpisanyLancuch = sc.nextLine();
        int i=0, wynik =0;
        for(char z: wpisanyLancuch.toCharArray()){
            if(Character.isLetter(z)) {
                if (Character.isLowerCase(z))
                    wynik = wynik + wpisanyLancuch.codePointAt(i);
            }
            else if(Character.isDigit(z))
                    wynik = wynik + wpisanyLancuch.codePointAt(i);
        i++;
        }
        System.out.println("Wynik dodawania kodów ascii to: "+ wynik);
    }
    public static void zad33(){
        System.out.println("Podaj liczbe E(33,126)");
        int wpisanaLiczba = sc.nextInt();
        System.out.println((char)wpisanaLiczba);
    }
}
