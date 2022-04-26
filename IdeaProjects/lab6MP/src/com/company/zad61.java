package com.company;

import java.util.InputMismatchException;
import java.util.Scanner;


public class zad61 {
    public static void kalkulator() {
        Scanner skaner = new Scanner(System.in);
        try{
            System.out.println("Wybierz dzialanie: \n1.+\n2.-\n3.*\n4./\n5.sqrt\n6.pow\n7.Zakończ\nPodaj teraz:");
            int x = skaner.nextInt();
            switch(x){
                case 1:
                {
                    System.out.println("Podaj liczby a i b; działanie->a+b \n");
                    float a = skaner.nextFloat();
                    float b = skaner.nextFloat();
                    System.out.println("Wynik a+b=" + (a+b));
                    break;
                }
                case 2:
                {
                    System.out.println("Podaj liczby a i b; działanie->a-b \n");
                    float a = skaner.nextFloat();
                    float b = skaner.nextFloat();
                    System.out.println("Wynik a-b=" + (a-b));
                    break;
                }
                case 3:
                {
                    System.out.println("Podaj liczby a i b; działanie->a*b \n");
                    float a = skaner.nextFloat();
                    float b = skaner.nextFloat();
                    System.out.println("Wynik a*b=" + (a*b));
                    break;
                }
                case 4:
                {
                    System.out.println("Podaj liczby a i b; działanie->a/b \n");
                    int a = skaner.nextInt();
                    int b = skaner.nextInt();
                    System.out.println("Wynik a/b=" + (a/b));
                    break;
                }
                case 5:
                {
                    System.out.println("Podaj liczbe a; działanie->sqrt \n");
                    int a = skaner.nextInt();
                    System.out.println("Wynik sqrt(a)=" + Math.sqrt(a));
                    break;
                }
                case 6:
                {
                    System.out.println("Podaj liczbe a; działanie->sqrt \n");
                    int a = skaner.nextInt();
                    System.out.println("Wynik sqrt(a)=" + Math.pow(a,2));
                    break;
                }
                case 7:
                {
                    System.out.println("NAURA");
                    return;
                }
                default:
                {
                    throw  new InputMismatchException("\nPodaj poprawny znak\n");
                }
            }
        }
        catch (InputMismatchException e)
        {
            System.err.println("\nPodaj poprawny znak\n");
            kalkulator();
        }
        catch (ArithmeticException e)
        {
            System.err.println("\nPodano niepoprawne dane do dzialania\n");
            kalkulator();
        }
    }
    public static void zad62()
    {
        Scanner skaner = new Scanner(System.in);
        System.out.println("Podaj liczbe zmiennoprzecinkowa:" );
        String a = skaner.nextLine();
        float rob = Integer.parseInt(a,'.');
        System.out.println(rob);
    }
}
