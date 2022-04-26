package com.company;

import java.util.Random;

public class Okrag {
    double x;
    double y;
    double r;
    Random rand = new Random();
    public Okrag() {
        x = rand.nextInt(90) + 5;
        y = rand.nextInt(90) + 5;
        r = rand.nextInt(4) + 1;
    }
}
