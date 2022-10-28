package com.company;
import java.util.*;

public class Main {
    public  static void main(String[] arg) {
        int N= 15;
      int K= 2;
      if( ((N)&(1<<K)) >0){
        System.out.print("YES");
      }
      else{
        System.out.print("NO");
      }
    }
}
