package com.company;

import java.util.Random;

public class Zad42 {
    public static void zad421() {
        Random rand = new Random();
        int a = rand.nextInt(10) + 10;
        int[][] tablica = new int[a][a];
        for (int c = 0; c < a; c++) {
            for(int b=0;b<a;b++){
                if(c==b)
                    if(rand.nextBoolean())
                        tablica[c][b]= 1;
                    else
                        tablica[c][b] = -1;
                else
                    tablica[c][b]=rand.nextInt(40)-20;
            }
        }
        float sumaB = 0;
        float sumaA = 0;
        for (int c = 0; c < a; c++) {
            for (int b = 0; b < a; b++) {
                System.out.printf("%5d", tablica[c][b]);
                if (b==a-1)
                    System.out.println();
                if(c%2==0)
                {
                    sumaB = sumaB + tablica[c][b];
                }
                if(b%2==1)
                {
                    sumaA = sumaA + tablica[c][b];
                }
            }
        }
        System.out.println("Stosunek wynosi: "+ sumaB/sumaA);
    }
}
