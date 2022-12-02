int Solution::evalRPN(vector<string> &A) {
    int arr[10001];
    int top=-1;
    for(auto it=A.begin();it!=A.end();it++)
    {
        string  S=(*it);
        if(S=="/" || S=="*" || S=="+" || S=="-")
        {
            int y=arr[top--];
            int x=arr[top--];
            if(S=="/")
            arr[++top]=x/y;
            else if(S=="*")
            arr[++top]=x*y;
            else if(S=="+")
            arr[++top]=x+y;
            else if(S=="-")
            arr[++top]=x-y;
            
        }
        else
        {
            int x=stoi(*it);
            arr[++top]=x;
        }
    }
    return arr[top];
    
}
