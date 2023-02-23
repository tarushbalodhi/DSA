    int peakElement(int arr[], int n)
    {
       int l = 0, r = n-1;
       int mid;
       
       while(l < r){
           mid = (l+r) / 2;
           
           if(arr[mid]  > arr[mid + 1]){
               r = mid;
           }
           else l = mid + 1;
       }
        return l;
    }
