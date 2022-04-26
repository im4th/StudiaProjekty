package com.company;

import java.lang.reflect.Array;
import java.util.Arrays;
import java.util.Random;

public class Zbrojownia {
    public int pociski[];

    public Zbrojownia()
    {
        pociski = new int[10];
        Random r = new Random();
        for(int i = 0; i < 10; i++)
            pociski[i] = r.nextInt(0, 100);
    }

    public String toString()
    {
        return Arrays.toString(pociski);
    }

    public void setPociski(int[] _pociski)
    {
        pociski = _pociski;
    }

    public int[] getPociski()
    {
        return pociski;
    }
}
