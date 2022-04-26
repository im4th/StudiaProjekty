package com.company;

public class Main {

    public static void main(String[] args){
    Thread w = new Thread(new zad1());
    Thread a = new Thread(new zad1());
    Thread b = new Thread(new zad1());
    Thread c = new Thread(new zad1());
    w.start();
    a.start();
    b.start();
    c.start();
    z102Pojemnik j = new z102Pojemnik();
    Thread e = new Thread(new Konsument(j));
    }
}
