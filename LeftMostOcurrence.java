package com.company;

import java.util.HashMap;

public class Main {
    public static int binary_search(int []arr,int key){
        int start = 0;
        int end = arr.length-1;
        int first_occurence = -1;
        while(start<=end){
            int mid = (start+end)>>1;
            if(arr[mid]==key){
                first_occurence = mid;
                end = mid-1;
            }
            else if(arr[mid]>key){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        return first_occurence;
    }
    public  static void main(String[] arg) {
        int arr[] = {10,30,30,30,30,35,35,40,40,40,50,50,60,70};
        System.out.print(binary_search(arr,30));
    /// FIND THE FIRST OCCURENCE OF VALUE 30 USING BINARY SEARCH ??????

    }
}



