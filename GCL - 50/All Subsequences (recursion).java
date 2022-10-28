package com.company;
import java.util.*;

public class Main {
    public static void subsequences(int index,List<Integer> arr,List<Integer> current){
        if(index == arr.size()){
            for(Integer it:current){
                System.out.print(it + " ");
            }
            System.out.print("\n");
            return;
        }
        subsequences(index+1,arr,current);
        current.add(arr.get(index));
        subsequences(index+1,arr,current);
        current.remove(current.size()-1);
        return;
    }
    public  static void main(String[] arg) {
        List<Integer> arr = new ArrayList<>();
        arr.add(2);
        arr.add(3);
        arr.add(4);
        subsequences(0,arr,new ArrayList<>());
    }
}
