//https://www.naukri.com/code360/problems/intersection-of-2-arrays_1082149?interviewProblemRedirection=true&attempt_status=COMPLETED
#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &a, int n, vector<int> &b, int m)
{
	int i=0,j=0;
	vector<int> v;
  while(i<n&&j<m)
  {
      if(a[i]==b[j])
      {
        v.push_back(a[i++]);
        j++;
      }
      else if(a[i]<b[j])
      {
        i++;
      }
      else
      {
        j++;
      }
  } 
    
	  return v;

}
