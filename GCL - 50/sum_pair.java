package com.company;
import java.util.*;

public class Main {
    public static boolean check(int m,int K,int arr[]){
        int s = 0;
        int painter = 1;
        for(int i=0;i<arr.length;i++){
            s+= arr[i];
            if(s>m){
                painter++;
                s = arr[i];
            }
        }
        return painter <= K;
    }
    public  static void main(String[] arg) {
        Scanner sc = new Scanner(System.in);
        int arr [ ] = {1,6,2,9,14,12,3};
        Arrays.sort(arr);
        int start  = 0;
        int end = arr.length -1;
        int K = 15;
        int cnt = 0;
        while(start<end){
            if(arr[start] + arr[end] < K ){
                start++;
            }
            else if(arr[start] + arr[end]> K){
                end--;
            }
            else{
                cnt++;
                start++;
                end--;
            }
        }
        // CURRENT TIME COMPLEXITY  -> O(N*LOGN)
        // c++ -> sort();  O(N logN)

        // when repetition is allowed as a homework

        HashMap<Integer,Boolean> hash = new HashMap<>();
        cnt = 0;
        for(int i=0;i<arr.length;i++){
            if(hash.containsKey(K-arr[i])){
                cnt++;
            }
            else{
                hash.put(arr[i],true);
            }
        }
        System.out.print(cnt);
        // TIME COMPLEXITY -> O(N)
        // SPACE COMPLEXITY -> O(N) 

    }
}
