#pragma GCC optimization("unroll-loops")
#pragma GCC target("avx,avx2,fma")
#include"iostream"
#include"cassert"
#include"cmath"
#include"cstdio"
#include"cstring"
#include"cstdlib"
#include"map"
#include"set"
#include"queue"
#include"vector"
#include"algorithm"
#include"numeric"
#include"stack"
#define mod 1000000007
#define LL long long int
using namespace std;
void heapify(int *arr,int index,int N){
    int L=2*index+1;
    int R=2*index+2;
    int smallest=index;
    if(L<N and arr[smallest]<arr[L]){
        smallest=L;
    }
    if(R<N and arr[smallest]<arr[R]){
        smallest=R;  
    }
    if(smallest!=index){
        swap(arr[smallest],arr[index]);
        heapify(arr,smallest,N);
    }

}
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout); 

    int arr[]={100,56,101,69,76,20,78};
    int N=sizeof(arr)/sizeof(int);
    for(int i=N/2-1;i>=0;i--){
        heapify(arr,i,N);
    }
    for(int i=N-1;i>=0;i--){
        swap(arr[0],arr[i]);
        heapify(arr,0,i);
    }
    for(int it:arr)
        cout<<it<<" ";

 
    
}
