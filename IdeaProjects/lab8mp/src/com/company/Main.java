package com.company;

import java.util.ArrayList;
import java.util.Comparator;

public class Main {

    public static void main(String[] args) {
        ArrayList<String> a = new ArrayList<String>();
        a.add("matma");
        a.add("java");
        a.add("hla");
        zad11(a, lancuch -> System.out.println(lancuch));
    }
    public interface zad1{
        void wyswietlLancuch(String lancuch);
    }
    public static void zad11(ArrayList<String> lista, zad1 a){
        for (String i:lista) {
            a.wyswietlLancuch(i);
        }
    }
    public static void zad13(ArrayList<String> lista, Comparator<String> comp) {


    }

}
