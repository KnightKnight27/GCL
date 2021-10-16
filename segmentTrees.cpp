
#include<bits/stdc++.h>
using namespace std;

int arr[]={40,1,2,3,78,3};
// N IS THE SIZE OF ARRAY
int tree[4*6];  // the index of tree array is treeIndex
void build(int start,int end,int treeIndex){
	if(start==end){
		tree[treeIndex]=arr[start];
		return;
	}
	int  mid=(start+end)/2;
	build(start,mid,2*treeIndex+1);
	build(mid+1,end,2*treeIndex+2);
	tree[treeIndex]= tree[2*treeIndex+1] +  tree[2*treeIndex+2];
}


int query(int start,int end,int treeIndex,
			int L,int R){
	// BASE CASES    
	// [start end]  [L R]
	// [L R] [start end]
	if(L>end or R<start){
		return 0; // NO INTERSECTION at All
	}
	// L    [start end]   R
	if(start>=L and end<=R){
		// OUR CURRENT RANGE LIES 
		// COMPLETELY INSIDE 
		// THE RANGE WE DESIRE
		return tree[treeIndex];
	}
	int mid=(start+end)/2;
	return query(start,mid,treeIndex*2+1,L,R)
	       + query(mid+1,end,treeIndex*2+2,L,R);


}
void update(int start,int end,int treeIndex,int arrIndex,int val){

	if(start==end){
		// start will have reached arrIndex onlyyy
		tree[treeIndex]+=val;
		return;
	}
	int mid=(start+end)/2;
	if(arrIndex>=start and arrIndex<=mid){
		/// THAT MEANS YOU HAVE TO GO FOR LEFT TREE
		// YOU CAN SKIP RIGHT TREE
		update(start,mid,2*treeIndex+1,arrIndex,val);
	}
	else{
		// GO FOR RIGHT TREE
		// SKIP LEFT TREE
		update(mid+1,end,2*treeIndex+2,arrIndex,val);
	}
	tree[treeIndex]= tree[2*treeIndex+1] +  tree[2*treeIndex+2];

}
int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int N=6;
	build(0,N-1,0);
	cout<<query(0,N-1,0,2,5)<<endl;
	update(0,N-1,0,3,10);
	cout<<query(0,N-1,0,2,5)<<endl;
}
