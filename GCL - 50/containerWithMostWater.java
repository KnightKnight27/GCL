package com.company;
import java.util.*;

public class Main {
    public  static void main(String[] arg) {
        Scanner sc = new Scanner(System.in);
        int arr[] = {};
        int N = arr.length;
        int ans = 0;
        for(int i=0;i<N;i++){
            for(int j=i+1;j<N;j++){
                int h1 = arr[i];
                int h2 = arr[j];
                int height = Math.min(h1,h2);
                int width = j-i;
                ans = Math.max(ans,height*width);
            }
        }
        System.out.print(ans);

        int i=0;
        int j=N-1;
        ans = 0;
        while(i<j){
            int height = Math.min(arr[i],arr[j]);
            int width = j-i;
            ans = Math.max(ans,height*width);
            if(arr[i]<arr[j]){
                i++;
            }
            else{
                j--;
            }
        }
    }
}
