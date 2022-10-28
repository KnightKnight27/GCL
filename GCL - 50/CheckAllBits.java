package com.company;
import java.util.*;

public class Main {
    public  static void main(String[] arg) {
        int N = 1002;
        for(int i=0;i<31;i++){
          if( (N&(1<<i))>0){
            System.out.print(i+"th bit is set");
          }
        }
    }
}
