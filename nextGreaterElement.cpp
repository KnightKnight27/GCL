vector<int> nextGreaterElement(vector<int> arr){
    int N= arr.size();
    vector<int> ans(N,-1LL);
    stack<int> S;
    for(int i=0;i<N;i++){
        if(S.empty()){
            S.push(i);
        }
        else{
            while( !S.empty() && arr[S.top()]<arr[i]){
                ans[S.top()] = arr[i];
                S.pop();
            }
            S.push(i);
        }
    }
    return ans;
}
