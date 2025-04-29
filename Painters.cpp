bool isPossible(vector<int> &boards, int painters, int bSize, int mid) {
    int painter = 1; 
    int boardCount = 0;
    for(int i = 0; i < bSize; i++){
        if(boardCount + boards[i] <= mid){
            boardCount += boards[i];
        }
        else{
            painter++;
            if(painter>painters || boards[i]>mid){
                return false;
            }
            boardCount = boards[i];
        }
    } 
    return true;
}
int findLargestMinDistance(vector<int> &boards, int k) {
  //    Write your code here.
  if(boards.size() < k) return -1;
  int s = 0;
  int ans = -1;
  int sum = 0;
  for (int i = 0; i < boards.size(); i++) {
    sum += boards[i];
  }
  int e = sum;
  int mid = s + (e - s) / 2;
  while (s <= e) {
        if(isPossible(boards, k , boards.size(), mid)){
            ans = mid; 
            e = mid - 1; 
        }
        else{
            s = mid + 1; 
        }
        mid  = s+ (e-s)/2;
    }
    return ans;
}
