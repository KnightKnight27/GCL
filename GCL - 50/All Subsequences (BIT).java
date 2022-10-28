import java.util.*;
public class Main
{
	public static void main(String[] args) {
		int []arr={1,2,3,4};
		int N=arr.length;
	    for(int i=0;i<(1<<N);i++){
	        ArrayList<Integer> subs= new ArrayList<Integer>();
	        for(int j=0;j<N;j++){
	            if( ( (i) &(1<<j)) >0){
	                subs.add(arr[j]);
	            }
	        }
	        for(Integer it :subs){
	            System.out.print(it+" ");
	        }
	        System.out.println("");
	    }
	}
}
