void TOH(int source, int aux, int dest, vector<vector<int>>& ans, int n){
    if(n==1){
      vector<int> p = {source, dest};
      ans.push_back(p);
      return;
    }  
    TOH(source, dest, aux, ans, (n-1));
    vector<int> p = {source, dest};
    ans.push_back(p);
    TOH(aux, source, dest, ans, (n-1));  
}

vector<vector<int>> towerOfHanoi(int n)
{
  vector<vector<int>> ans;
  TOH(1,2,3,ans,n);
  return ans;  
}
