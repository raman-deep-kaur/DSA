//https://www.naukri.com/code360/problems/find-duplicate-in-array_1112602?interviewProblemRedirection=true&attempt_status=COMPLETED

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	
	for (int i = 1; i < n ; i++){
		int count = 0; 
		for(int j = 0; j < n ; j++){
			if( i == arr[j]){
				count++;
			}
		}
		if(count > 1){
			return i ; 
		}
	}

}
