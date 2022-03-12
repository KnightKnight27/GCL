bool rotatedSortedArray(vector<int> sorted,int target){
    int start=0;
    int end=sorted.size()-1;
    int ans=-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==target){
            return true;
        }
        else if(arr[mid]<=arr[end]){
            // mid till end 

            if(target>=arr[mid]&&target<=arr[end]){

                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        else{
            // start till mid is sorted
            if(target<=arr[mid]&&target>=arr[start]){
                end=mid-1;
            }
            else{
                star=mid+1;
            }
        }
    }
}
