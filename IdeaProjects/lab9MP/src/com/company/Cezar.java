package com.company;

public class Cezar {
    public static String szyfruj(String wpisanyLancuch, int przesuniecie){
        StringBuilder wynik = new StringBuilder();
        wpisanyLancuch = wpisanyLancuch.toLowerCase();
        for(char i: wpisanyLancuch.toCharArray()) {
            if(Character.isDigit(i))
                wynik.append(i);
            else if (i != ' ') {
                int pozycjaPoczatkowa = (int) i - (int) 'a';
                int pozycjaPoSzyfrowaniu = (pozycjaPoczatkowa + przesuniecie) % 26;
                char nowyZnak = (char) ((int) 'a' + pozycjaPoSzyfrowaniu);
                wynik.append(nowyZnak);
            }
            else
                wynik.append(i);
        }
        //System.out.println("Zaszyfrowany String: " + wynik);
        return String.valueOf(wynik);
    }
    public static String odszyfruj(String wpisanyLancuch, int przesuniecie){
        StringBuilder wynik = new StringBuilder();
        wpisanyLancuch = wpisanyLancuch.toLowerCase();
        for(char i: wpisanyLancuch.toCharArray()) {
            if(Character.isDigit(i))
                wynik.append(i);
            else if (i != ' ') {
                int pozycjaPoczatkowa = (int) i - (int) 'a';
                int pozycjaPoSzyfrowaniu = (pozycjaPoczatkowa - przesuniecie) ;
                if(pozycjaPoSzyfrowaniu<0)
                    pozycjaPoSzyfrowaniu = pozycjaPoSzyfrowaniu+26;
                char nowyZnak = (char) ((int) 'a' + pozycjaPoSzyfrowaniu);
                wynik.append(nowyZnak);
            }
            else
                wynik.append(i);
        }
        //System.out.println("Odszyfrowany String: " + wynik);
        return String.valueOf(wynik);
    }
}
