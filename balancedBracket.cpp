
TC -> O(N)
SC -> O(1)

bool checkBalanced(string S){
    int cnt=0;
    for(char it:S){
        if(it=='('){
            cnt++;
        }
        else{
            cnt--;
            if(cnt<0){
                return false; 
            }
        }
    }
    return (cnt==0)? true : false; 
}
