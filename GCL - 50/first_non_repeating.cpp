string Solution::solve(string A) 
{
    string ans="";
    map<char,int> hash;
    queue<char> Q;
    for(char it:A)
    {
        
        hash[it]++;
        Q.push(it);
        while(!Q.empty() && hash[Q.front()]>1 )
        {
            Q.pop();
        }
        if(!Q.empty())
        {
            ans+=Q.front();
        }
        else
        {
            ans+='#';
        }
    }
    return ans;
}
