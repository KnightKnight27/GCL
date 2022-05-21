int solvePostFix(string S){
    stack <int> St;
    for(char it:S){
        if(it=='-'){
            int top1 = St.top();
            St.pop();
            int top2 = St.top();
            St.pop();
            St.push(top2-top1);
        }
        else if(it=='+'){
            int top1 = St.top();
            St.pop();
            int top2 = St.top();
            St.pop();
            St.push(top1+top2);
        }
        else if(it=='/'){
            int top1 = St.top();
            St.pop();
            int top2 = St.top();
            St.pop();
            St.push(top2/top1);

        }
        else if(it=='*'){
            int top1 = St.top();
            St.pop();
            int top2 = St.top();
            St.pop();
            St.push(top1*top2);

        }
        else{
            // operand
            St.push(it-'0');
        }
    }
    return St.top();
}
