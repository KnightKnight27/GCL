struct Point{
    int x,y;
};

int X[]={1,2,-2,-2,1,-1,-1,2};
int Y[]={2,1,-1,1,-2,-2,2,-1};
int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N){
	Point src;
	src.x= KnightPos[0];
	src.y= KnightPos[1];
	Point dest;
	dest.x=TargetPos[0];
	dest.y=TargetPos[1];
	queue <Point> Q;
	bool vis[N+2][N+2];
	memset(vis,false,sizeof(vis));
	Q.push(src);
	vis[src.x][src.y]=true;
	int level=0;
	while(!Q.empty()){
	int size=Q.size();
	while(size--){
	    Point curr=Q.front();
	    Q.pop();
	    int x=curr.x;
	    int y=curr.y;
	    for(int i=0;i<8;i++){
		int new_x= x+ X[i];
		int new_y= y+ Y[i];
		if(new_x<1 or new_y<1 or new_x > N or new_y >N){
		    continue;
		}
		if(vis[new_x][new_y]==false){
		    Point tmp;
		    tmp.x= new_x;
		    tmp.y= new_y;
		    Q.push(tmp);
		    vis[new_x][new_y]=true;
		    if(new_x==dest.x and new_y==dest.y){
			return level+1;
		    }
		}
	    }
	}
	level++;
	}
	return 0;
}
