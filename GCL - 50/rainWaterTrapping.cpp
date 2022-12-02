int Solution::trap(const vector<int> &arr)
{
    int N=arr.size();
    stack<int> S;
    int i=0;
    int ans=0;
    while(i<N)
    {
        if(S.empty()||arr[S.top()]>=arr[i])
        {
            S.push(i++);
        }
        else
        {
            int index=S.top();
            S.pop();
            if(!S.empty())
            {
                ans+=(min ( arr[S.top()],arr[i] ) -arr[index])*(i-S.top()-1);
            }
        }
    }
    return ans;
}
