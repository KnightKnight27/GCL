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
    return parent[x]=get_leader(parent[x]); /// compression optimization
}
int main()
{
    int n,m;
    cin >>  n >> m;
    vector<int> parent(n+1);
    iota(parent.begin(),parent.end(),0);
    while(m--){
        int x,y;
        cin >> x >> y;
        union_(x,y);
    }
    int cnt=0;
    for(int i=1;i<=N;i++){
        if(parent[i]==i){
            cnt++;
        }
    }
    cout<<cnt<<endl;

   
}
