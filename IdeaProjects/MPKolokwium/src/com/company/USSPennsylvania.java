package com.company;

import java.util.Arrays;
import java.util.List;
import java.util.Random;

public class USSPennsylvania extends Statek {
    private Uzbrojenie TAB[];
    private List<Uzbrojenie> tab1;

    public USSPennsylvania(String NAZWA, int STAN) {//Uzbrojenie TAB[]) {
        USTAWSTAN(NAZWA, STAN);
        //this.TAB = TAB;
    }

    public void USTAWUZBROJENIE(Uzbrojenie TAB[]) {
        this.TAB = TAB;
    }
    public void USTAWUZBROJENIE(List<Uzbrojenie> TAB) {
        try {
            this.tab1 = TAB;
        }
        catch(Exception e)
        {
            System.out.println("Sprawdź poprawność listy");
        }
        finally {
            this.USTAWUZBROJENIE(TAB);
        }

    }
    @Override
    public void USTAWSTAN(int STAN) {
        this.STAN = STAN;
    }

    @Override
    public void USTAWSTAN(String NAZWA, int STAN) {
        this.STAN = STAN;
        this.NAZWA = NAZWA;
    }
    @Override
    public String toString() {
        String stringStan = STAN == 1 ? "Sprawny" : "Niesprawny";
        return Arrays.toString(TAB) + "Statek: " + NAZWA +  " Stan: " + stringStan;
    }

    @Override
    public void atakuj(Statek broniacy) {
        Random rn = new Random();
        if (this.STAN == 1) {
            int t = rn.nextInt(2);
            if (t == 1)
                broniacy.USTAWSTAN(NIESPRAWNY); //= NIESPRAWNY;
            else
                this.USTAWSTAN(SPRAWNY);// = SPRAWNY;
        }
    }

}