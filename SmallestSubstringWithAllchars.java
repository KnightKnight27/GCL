package com.company;

import java.util.HashMap;

public class Main {
   public static boolean check(String substring,String T){

       HashMap<Character,Integer> freq = new HashMap<>();
       for(Character it:substring.toCharArray()) {
           if (freq.containsKey(it)) {
               freq.put(it, freq.get(it) + 1);
           } else {
               freq.put(it, 1);
           }
       }
       for(int i=0;i<T.length();i++){
           char x = T.charAt(i);
           if(freq.containsKey(x)==false){
               return false;
           }
       }
       return true;
//        for(int i=0;i<T.length();i++){
//            char x = T.charAt(i);
//            if(substring.contains(x+"") == false){
//                return false;
//            }
//        }
//        return true;
   }
    public  static void main(String[] arg) {
       String S = "aabca";
       String T = "abc";
       int N = S.length();
       int minimum = N;
       String ans = S;
       int i = -1;
       int j = -1;
       for(int start=0;start<N;start++){
           HashMap<Character,Integer> freq = new HashMap<>();
           for(int end = start; end<N;end++){
               if(freq.containsKey(S.charAt(end))){
                   freq.put(S.charAt(end),freq.get(S.charAt(end))+1);
               }
               else {
                   freq.put(S.charAt(end), 1);
               }
               // start till end is a substring and your freq represents freq hashmap of substring
               boolean flag = true;
               for(Character it:T.toCharArray()){
                   if(freq.containsKey(it)==false){
                       flag = false;
                       break;
                   }
               }
               if(flag==true){
                   /// substring from start till end has all the characters of T
                   if(minimum>end-start+1){
                       minimum = end-start+1;
                       i = start;
                       j = end;
                   }
               }
           }
       }
       System.out.print(S.substring(i,j+1));
    }
}
