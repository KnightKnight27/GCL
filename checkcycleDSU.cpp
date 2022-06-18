class DSU{
    public:
        vector<int> boss;  // stores the boss for everynoe
        int N; // total number of nodes
        DSU(int N){
            this->N = N;
            // how to intialize boss vector ?
            this->boss = vector<int>(N+1);
            for(int i=1;i<=N;i++){
                boss[i] = i;
            }
            // iota(boss.begn(),boss.end(),0);
        }
        int get_boss(int a){
            if(a==boss[a]){
                return a;
            }
            return get_boss(boss[a]);
        }
        bool Union(int a,int b){
            a = get_boss(a);
            b = get_boss(b);
            if(a==b){
                // which case is this ??
                return false;
            }
            else{
                boss[a] = b; // or boss[b] = a 
                return true;
            }
        }
};
bool detectCycle(vector<pair<int,int> > edges,int N){
    DSU * obj = new DSU(N);
    for(auto it:edges){
        int a = it.first;
        int b = it.second;
        if(obj->union(a,b)==false){
            return true; // cycle exists
        }
        
    }

}
