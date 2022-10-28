package com.company;
import java.util.*;

public class Main {
    public  static void main(String[] arg) {
        List<Integer> arr = new ArrayList<>();
        arr.add(2);
        arr.add(3);
        arr.add(4);
        int xor = 0;
        for(Integer it:arr){
            xor = it^xor;
        }
        System.out.print(xor);
    }
}
