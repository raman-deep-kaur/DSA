#include <bits/stdc++.h> 
vector <int> reverse(vector<int>& arr){
	int s = 0; 
	int e = arr.size()-1;
	while(s<=e){
		swap(arr[s++], arr[e--]);
	}
	return arr;
}

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
	int i = n-1;
	int j = m-1;
	int carry = 0; 
	vector<int> ans;
	while(i>=0 && j >=0){
		int val1 = a[i];
		int val2 = b[j];
		ans.push_back((val1+val2+carry)%10);
		carry = (val1+val2+carry)/10;
		i--;
		j--;
	}
	while(i>=0){
		ans.push_back((a[i]+carry)%10);
		carry = (a[i]+carry)/10;
		i--;
	}
	while(j>=0){
		ans.push_back((b[j]+carry)%10);
		carry = (b[j]+carry)/10;
		j--;
	}
	while(carry!=0){
		ans.push_back(carry%10);
		carry = carry/10;

	}
	return reverse(ans);
}
