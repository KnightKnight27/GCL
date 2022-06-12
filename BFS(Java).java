import java.util.*;
import java.io.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner sc = new Scanner(System.in);
	    int N = sc.nextInt();
	    int M = sc.nextInt();
	    ArrayList< ArrayList<Integer> > adj=  new ArrayList<ArrayList<Integer> >(N+1);
	    for(int i=0;i<=N;i++){
	        adj.add(new ArrayList<Integer>());
	    }
	    while(M-->0){
	        int x,y;
	        x = sc.nextInt();
	        y = sc.nextInt();
	        adj.get(x).add(y);
	        adj.get(y).add(x);
	    }
	    Queue <Integer> Q =   new LinkedList<>();
	    List  <Boolean> vis = new ArrayList<>();
	    for(int i=0;i<=N;i++){
	        vis.add(false);
	    }
	    Q.add(1);
	    vis.set(1,true);
	    while(Q.isEmpty()==false){
	        int size = Q.size();
	        while(size-->0){
    	        int current = Q.peek();
    	        Q.poll();
    	        System.out.print(current+" ");
    	        for(int x:adj.get(current)){
    	            if(vis.get(x)==false){
    	                vis.set(x,true);
    	                Q.add(x);
    	            }
    	        }
	        }
	        System.out.print("\n");
	    }
	}
}
