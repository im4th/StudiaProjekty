package com.company;

import java.io.*;

public class Main {

    public static void main(String[] args) {

        zad3(1,"Wiersz.txt");
        for(int i=5;i>0;i--)
        {
            System.out.println();
        }
        zad3(2, "Wiersz2.txt");
    }
    public static void zad3(int i, String nazwa_pliku){
        try(
                BufferedReader br = new BufferedReader(new FileReader(new File(nazwa_pliku)));
                BufferedWriter ae = new BufferedWriter(new FileWriter("Wiersz2.txt",true))
        ) {
            String linia = null;
            if(i==1) {
                while ((linia = br.readLine()) != null) {
                    ae.append(Cezar.szyfruj(linia, 1) + "\n");
                    System.out.println(Cezar.szyfruj(linia, 1));
                }
            }
            else{
                while ((linia = br.readLine()) != null) {
                    System.out.println(Cezar.odszyfruj(linia, 1));

                }
            }
        }
        catch (FileNotFoundException ex){
            System.out.println("Pliku nie odnaleziono!");
            System.err.println(ex.getCause());
        }
        catch(IOException ex){
            System.out.println("Błąd odczytu pliku spowodowany:");
            System.err.println(ex.getCause());
        }
    }
}
