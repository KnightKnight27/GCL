package com.company;
import java.util.*;

public class Main {
    public static List<Integer> sieve(int N){
        boolean isPrime[] = new boolean[N+1];
        isPrime[1]=false;
        for(int i=2;i<=N;i++){
            isPrime[i] = true;
        }
        for(int i=2;i<=N;i++){
            if(isPrime[i]){
                for(int j=i+i;j<=N;j+=i){
                    isPrime[j] = false;
                }
            }
        }
        List<Integer> primes = new ArrayList<>();
        for(int i=1;i<=N;i++){
            if(isPrime[i]){
                primes.add(i);
            }
        }
        return primes;
    }
    public  static void main(String[] arg) {
        int N = 100;
        List<Integer> primes = sieve(N);
        for(Integer it:primes){
            System.out.print(it+" ");
        }
    }
}
