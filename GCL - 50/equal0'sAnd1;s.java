package com.company;
import java.util.*;

public class Main {
    public  static void main(String[] arg) {
        Scanner sc = new Scanner(System.in);
        int arr[] = {0,0,1,1,1,0,0,1,1};
        int N = arr.length;
        for(int i=0;i<N;i++) {
            if (arr[i] == 0) {
                arr[i] = -1;
            }
        }
        int prefix[] = new int[N];
        for(int i=0;i<N;i++){
            if(i==0){
                prefix[i] = arr[i];
            }
            else{
                prefix[i] = prefix[i-1] + arr[i];
            }
        }
        HashMap<Integer,Integer> firstOccurence = new HashMap<>();
        int ans = 0;
        for(int i=0;i<N;i++){
            if(firstOccurence.containsKey(prefix[i])){
                ans = Math.max(ans,i - firstOccurence.get(prefix[i]));
            }
            else{
                firstOccurence.put(prefix[i],i);
            }
        }
        System.out.print(ans);
    }
}
