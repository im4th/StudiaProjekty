package com.company;

import java.util.Random;
import java.util.concurrent.ThreadLocalRandom;

public class zad1 implements Runnable{

    public void run(){
        Random r = new Random();
        r.setSeed(0);
        int a = r.nextInt(101);
        int b = ThreadLocalRandom.current().nextInt(101);
        System.out.println("a: "+ a);
        System.out.println("b: "+ b);
    }

}
