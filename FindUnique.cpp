//https://www.naukri.com/code360/problems/find-unique_625159?interviewProblemRedirection=true&attempt_status=COMPLETED
int findUnique(int *arr, int size)
{
    int ans = 0;
    //Write your code here
    for(int i = 0; i< size; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}
