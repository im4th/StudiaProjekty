package com.company;

public class Konsument implements Runnable{

    z102Pojemnik Pojemnik;

    public Konsument(z102Pojemnik pojemnik) {
        this.Pojemnik = pojemnik;
    }

    public void run() {
        for (int i = 0; i < 10; i++) {
            System.out.println(Pojemnik.pobierz());
        }
    }
}
