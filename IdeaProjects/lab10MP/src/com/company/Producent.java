package com.company;

import java.util.Random;

public class Producent implements Runnable{

    z102Pojemnik Pojemnik;

    public Producent(z102Pojemnik pojemnik) {
        this.Pojemnik = pojemnik;
    }

    public void run(){
        Random r = new Random();
        for (int i = 0; i < 10; i++) {
            Pojemnik.zapisz(r.nextInt(101));
        }
    }
}
