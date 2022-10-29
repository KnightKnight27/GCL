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
        int arr[] = {10,20,30,40};
        int N = arr.length;
        int K = 2;
        int max_element = 0;
        int sum_of_array = 0;
        for(int i=0;i<N;i++){
            max_element = Math.max(max_element,arr[i]);
            sum_of_array += arr[i];
        }
        int start  = max_element;
        int end    = sum_of_array;
        int ans  = -1;
        while(start<=end){
            int mid = (start+end)>>1;
            if(check(mid,K,arr)){
                ans = mid;
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        System.out.print(ans);
    }
}
