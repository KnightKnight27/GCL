package com.company;

import java.util.HashMap;

public class Main {
   public static int Power(int x, int y){
     if(y==0){
      return 1;
     }
     int res = Power(x,y/2);
     if(y%2==0){
        return res*res;
     }
     else{
        return x*res*res;
     }
   }
    public  static void main(String[] arg) {
      int x = 12;
      int y = 13;
      int z = Power(x,y);
    }
}
