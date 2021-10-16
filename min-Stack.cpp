
class MinStack {
public:
    stack<pair<int,int> > S;
    MinStack()
    {
        S=stack<pair<int,int> >();
    }
    
    void push(int x)
    {
        if(S.empty()==false)
        {
            S.push({x,min(x,S.top().second)});
        }
        else
        {
            S.push({x,x});
        }
    }
    
    void pop() 
    {
        if(S.empty())
            return ;
        S.pop();
        
    }
    
    int top() 
    {
        if(S.empty())
            return -1;
        return S.top().first;
    }
    
    int getMin() {
        if(S.empty()==true)
            return -1;
        return S.top().second;
    }
};
