void reverse(int s, int e, int a[]){
    while(s < e){
        swap(a[s], a[e]);
        s++, e--;
    }
}
    void leftRotate(int arr[], int n, int d) {
        // vector<int> temp;
        d = d % n;
    //     for(int i = d; i < n; i++){
    //       temp.push_back(a[i]);
    //     }
    //     for(int i = 0; i < d; i++){
    //         temp.push_back(a[i]);
    //     }
    //   for(int i = 0; i < temp.size(); i++){
    //       a[i] = temp[i];
    //   }
    
        reverse(0, d-1, arr);
        reverse(d, n-1, arr);
        reverse(0, n-1, arr);
    }
