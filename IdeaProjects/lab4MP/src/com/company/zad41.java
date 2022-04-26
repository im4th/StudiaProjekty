package com.company;


public class zad41
{
    public static int[] zad411() {

        int[] tablica = new int[100];
        for (int i = 0; i <= 99; i++) {
            tablica[i]=i;
        }
        for (int i = 0; i <= 99; i++) {
            System.out.println(tablica[i]);
        }
        return tablica;
    }
    public static void zad412(int[] tablica){
        for (int i = 0; i <= 99; i++) {
            tablica[i]=i;
        }
        for (int i = 0; i <= 99; i++) {
            if(tablica[i]<10){
                System.out.printf("   " + "%02d",tablica[i]);
            }
            else
                System.out.printf("%5d",tablica[i]);
            if((tablica[i]+1)%10==0)
                System.out.println();
        }
        int srednia;
        int k = 10;
        for(int j=0;j<10;j++) {
            srednia = tablica[j];
            while(k<100){
                srednia = srednia + tablica[k];
                //System.out.println(k);
                k=k+10;
            }
            k=11+j;
            int wynik = srednia/10;
            System.out.printf("%5d", wynik);
            }
    }
}
