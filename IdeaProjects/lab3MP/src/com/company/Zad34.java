package com.company;

public class Zad34 {
    /*public static void wczytaj(String wpisanyLancuch){
        Scanner sc = new Scanner(System.in);
        wpisanyLancuch = sc.nextLine();
        //System.out.println(wpisanyLancuch);
    }*/
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
    public static void odszyfruj(String wpisanyLancuch, int przesuniecie){
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
        System.out.println("Odszyfrowany String: " + wynik);
    }
    public static boolean CzyPalindrom(String wpisanyLancuch){
        String odwrocony = "";
        int blad = 0;
        for(char i: wpisanyLancuch.toCharArray()) {
            odwrocony = i + odwrocony;
        }
        return wpisanyLancuch.equals(odwrocony);
    }
}
