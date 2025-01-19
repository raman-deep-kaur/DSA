//https://www.naukri.com/code360/problems/pair-sum_1171154?interviewProblemRedirection=true&attempt_status=COMPLETED
#include <bits/stdc++.h> 
int pairSum(vector<int> &arr, int n, int target){
	// Write your code here.
	int count = 0; 
	int left = 0; 
	int right = n-1;
	
	while(left<right){
		int sum = arr[left]+arr[right];
		if(sum==target){
			count++;
			left++;
			right--;
		}
		else if(sum<target){
			left++;	
		}
		else{
			right--; 
		}
	}
	return (count == 0) ? -1 : count;
}
