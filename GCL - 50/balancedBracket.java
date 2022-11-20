package com.company;
import java.util.*;
public class Main {
    public static void main(String[] arg) {
        String A = "()()()))((((()))";
        Stack<Character> St = new Stack<>();
        boolean flag = true;
        for(Character it:A.toCharArray()){
            if(it=='('){
                St.push(it);
            }
            else{
                if(St.size()>0){
                    St.pop();
                }
                else{
                    flag = false;
                    break;
                }
            }
        }
        if(flag==false){
            System.out.print("Not balanced");
        }
        else{
            System.out.print("Balanced");
        }
//        TIME COMPLEXITY ->  O(N)
//        SPACE COMPLEXITY -> O(N)
    }
    

}
