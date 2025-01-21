//for the index of first occurred 
int firstOcc(vector<int> &arr,int n, int k) {
    int s = 0; 
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans =-1;
    while(s<=e){
        if(arr[mid]==k){
            ans = mid;
            e = mid-1;
        }
        else if(arr[mid]<k){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}


//for the index of last occurnace 
int secOcc(vector<int> &arr,int n, int k){
    int s = 0;
    int e = n-1; 
    int mid = s+ (e-s)/2 ;
    int ans = -1;
    while(s<=e){
        if(arr[mid]==k){
            ans = mid;
            s = mid + 1;
        }
        else if(arr[mid]<k){
            s = mid + 1; 
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans; 

}

pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k) {
  // Write your code here
  pair<int, int> p;
  p.first = firstOcc(arr, n, k);
  p.second = secOcc(arr, n, k);
  return p;
}
