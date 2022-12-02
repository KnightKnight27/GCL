vector<int> Solution::slidingMaximum(const vector<int> &A, int B) 
{
    deque<int> Q;
    int N=A.size();
    vector<int> result;
    for(int i=0;i<N;i++)
    {
        while(!Q.empty() and A [Q.back()] <= A[i])
        {
            Q.pop_back();
        }
        Q.push_back(i);
        if(i>=B-1)
        {
            result.push_back(A[Q.front()]);
        }
        if(Q.front()==i-B+1)
        {
            Q.pop_front();
        }
    }
    return result;
    
}
