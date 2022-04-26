package com.company;

public class Uczen {
    String imie, nazwisko;
    int wiek;
    double srednia;

    public Uczen() {
    }

    public Uczen(String imie, String nazwisko, int wiek, double srednia) {
        this.imie = imie;
        this.nazwisko = nazwisko;
        this.wiek = wiek;
        this.srednia = srednia;
    }

    public static void p() {
        int j = 0;
        for (int i = 6; i < 81; i++) {
            j++;
            if (j % 15 == 0)
                System.out.print(i + " ");
        }
    }

    public static void p2() {
        int i = 5;
        while (i <= 80) {
            i = i + 15;
            System.out.print(i + " ");
        }
    }

    public static void zad27() {
        for (int i = 11; i <= 111; i++)
            if (i % 13 == 0)
                System.out.println(i);
    }

    public static void zad28(int n) {
        int rob1 = 0, rob2 = 1, rob3 = rob1 + rob2;
        if (n >= 1)
            System.out.println(rob1);
        if (n >= 2)
            System.out.println(rob2);
        if (n > 2) {
            for (int i = 3; i <= n; i++) {
                System.out.println(rob3);
                rob1 = rob2;
                rob2 = rob3;
                rob3 = rob1 + rob2;
            }
        }
    }

    public static void zad26(int a, int b, int c) {
        if (a < b + c)
            if (b < a + c)
                if (c < b + a) {
                    System.out.print("Istnieje trójkąt o takich bokach");
                    if (c == a && c == b)
                        System.out.print(", jest to trójkąt równoboczny.");
                    else if (c != a && c != b && a != b)
                        System.out.print(", jest to trójkąt różnoboczny.");
                    else if (c == a || a == b || b==c)
                        System.out.print(", jest to trójkąt równoramienny.");
                }
        else
            System.out.print("Nie istnieje trójkąt o takich bokach.");
            else
                System.out.print("Nie istnieje trójkąt o takich bokach.");
                else
                    System.out.print("Nie istnieje trójkąt o takich bokach.");
    }
}


