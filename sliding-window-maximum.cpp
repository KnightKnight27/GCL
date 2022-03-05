vector <int>  sliding_window_maximum(vector<int> arr,int K){
    int N=arr.size();
    vector<int> ans;
    deque <int> Q;
    for(int i=0;i<N;i++){
        if(i<K-1){
            if(Q.empty()==true){
                Q.push_back(i);
            } 
            else{
                while(Q.empty()==false and 
                                arr[Q.back()] < arr[i] ){
                    Q.pop_back();
                }
                Q.push_back(i);
            }
        }
        else{
            if(Q.empty()==true){
                Q.push_back(i);
            } 
            else{
                while(Q.empty()==false and 
                                arr[Q.back()] < arr[i] ){
                    Q.pop_back();
                }
                Q.push_back(i);
            }
            int end=i;
            int start=i-K+1;
            if(Q.front()<start){
                Q.pop_front();
            }
            ans.push_back(arr[Q.front()]);
        }
    }
    return ans;
}
