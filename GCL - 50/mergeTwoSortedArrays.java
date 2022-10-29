public static int [] mergeSortedArrays(int a[],int b[]){
        // WE HAVE USED EXTRA SPACE FOR IT
        // YOU HAVE TO OPTIMIZE THIS SPACE COMPLEXITY
        int arr[] = new int[a.length+b.length];
        int i = 0;
        int j = 0;
        int k = 0;
        while (i<a.length && j<b.length){
            if(a[i] < b[j]){
                arr[k] = a[i];
                k++;
                i++;
            }
            else {
                arr[k] = b[j];
                k++;
                j++;
            }
        }
        while(i<a.length){
            arr[k] = a[i];
            k++;
            i++;
        }
        while(j<b.length){
            arr[k] = b[j];
            k++;
            j++;
        }
        return arr;
    }
