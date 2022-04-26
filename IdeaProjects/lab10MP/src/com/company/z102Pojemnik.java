package com.company;

public class z102Pojemnik {
    int wartosc = 0;
    boolean pelny = false;

    synchronized void zapisz(int nowaWartosc) {
        try {
            while (pelny) {
                wait();
            }
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        pelny = true;
        wartosc = nowaWartosc;
        notifyAll();
    }

    synchronized int pobierz() {
        try {
            while (!pelny) wait();
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
        pelny = false;
        int wartoscLokalna = wartosc;
        notifyAll();
        return wartoscLokalna;
    }
}
