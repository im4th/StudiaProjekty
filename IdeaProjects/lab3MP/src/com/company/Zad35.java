package com.company;

import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class Zad35 {
    public static void test(int wpisanaLiczba){
        Pattern pattern = Pattern.compile("10+1");
        String liczbaWDwojkowym = Integer.toBinaryString(wpisanaLiczba);
        Matcher matcher = pattern.matcher(liczbaWDwojkowym);
        System.out.println(liczbaWDwojkowym);
        if(matcher.find()==false)
            System.out.println("Sekwencja zer nie występuje");
    }
}
