int sqrtInteger(int n ){
  //as done in sqrt.cpp
}
double morePrecision(int n, int precision, int tempSol){
double factor = 1;
double ans = tempSol;
for(int i = 0; i <precision, i++){
  for(int j = ans; j*j < n; j = j + factor){
    ans = j; 
  }
}
  return ans;
}

int main(){
  int n;
  cout<<"Enter the no."<<endl;
  cin>>n;

  int tempSol = sqrtInteger(int n );
  cout<<"Answer is "<< morePrecision(n,3,tempSol);<<endl;
  return 0;
}
