// MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
// MMMMMMMMMMMMMMMMM  _______               _______  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
// MMMMMMMMMMMMMMMMM |       |   |\    |   |         MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
// MMMMMMMMMMMMMMMMM |       |   | \   |   |         MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
// MMMMMMMMMMMMMMMMM |       |   |  \  |   |_______  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
// MMMMMMMMMMMMMMMMM |       |   |   \ |   |         MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
// MMMMMMMMMMMMMMMMM |_______|   |    \|   |_______  MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
// MMMMMMMMMMMMMMMMM ............................... MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
// MMMMMMMMM  __________   ______              __________
// MMMMMMMMM       |       |     |  |       |       |      |      | MMMMMMMMMMMMMMMMMMMMMMMMMM
// MMMMMMMMM       |       |     |  |       |       |      |      | MMMMMMMMMMMMMMMMMMMMMMMMMM
// MMMMMMMMM       |       |_____|  |       |       |      |______| MMMMMMMMMMMMMMMMMMMMMMMMMM
// MMMMMMMMM       |       |\       |       |       |      |      | MMMMMMMMMMMMMMMMMMMMMMMMMM
// MMMMMMMMM       |       | \      |       |       |      |      | MMMMMMMMMMMMMMMMMMMMMMMMMM
// MMMMMMMMM       |       |  \     |_______|       |      |      | MMMMMMMMMMMMMMMMMMMMMMMMMM
// MMMMMMMMM ...................................................... MMMMMMMMMMMMMMMMMMMMMMMMMM
// MMMMMM                                                                                  MMM
// MMMMMM  ______    _____    _______                            ________         ________ MMM
// MMMMMM |      |  |     |  |         \          /      /\          |     |      |        MMM
// MMMMMM |      |  |     |  |          \        /      /  \         |     |      |        MMM
// MMMMMM |______|  |_____|  |_______    \      /      /____\        |     |      |_______ MMM
// MMMMMM |         |\       |            \    /      /      \       |     |              | MM
// MMMMMM |         | \      |             \  /      /        \      |     |              | MM
// MMMMMM |         |  \     |_______       \/      /          \  ___|___  |______ _______| MM
// MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM
// `````````````````````````````````````````````````````````````````````````````````.`````````

#pragma GCC optimize ("Ofast")
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
struct Edge{
    int x,y,weight;
    Edge(int x,int y,int weight){
        this->x=x;
        this->y=y;
        this->weight=weight;
    }
};
bool compare(Edge *A,Edge *B){
    return A->weight<B->weight;
}
void union_(int x,int y){
    x=get_leader(x);
    y=get_leader(y);
    if(x!=y){
        parent[y]=x
    }
}
int get_leader(int x){
    if(parent[x]==x){
        cnt++;
        return x;
    }
    return parent[x]=get_leader(parent[x]); 
}
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int N,M;
    cin >> N >> M; 
    vector<Edge *> arr;
    while(M--){
        int x,y,weight;
        arr.push_back(new Edge(x,y,weight));
    } 
    vector<int> parent(N+1);
    iota(parent.begin(),parent.end(),0);
    sort(arr.begin(),arr.end(),compare);
    int cost=0;
    for(auto it:arr){
        int x=it->x;
        int y=it->y;
        int weight=it->weight;
        if(get_leader(x)==get_leader(y)){
            // we can not take this edge !!!
            // it will form a cycle
        }
        else{
            cost+=weight;
            union_(x,y);
        }
    }
    cout<<cost<<endl;
    
 
    
}
