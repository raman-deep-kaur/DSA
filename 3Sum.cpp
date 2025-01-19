//https://www.naukri.com/code360/problems/triplets-with-given-sum_893028?interviewProblemRedirection=true&attempt_status=COMPLETED
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> findTriplets(vector<int> arr, int n, int K) {
    sort(arr.begin(), arr.end()); // Sort the array
    vector<vector<int>> ans;

    for (int i = 0; i < n - 2; i++) {
        // Avoid duplicates for the first element
        if (i > 0 && arr[i] == arr[i - 1]) continue;

        int target = K - arr[i];
        int left = i + 1, right = n - 1;

        while (left < right) {
            int sum = arr[left] + arr[right];

            if (sum == target) {
                ans.push_back({arr[i], arr[left], arr[right]});

                // Avoid duplicates for the second and third elements
                while (left < right && arr[left] == arr[left + 1]) left++;
                while (left < right && arr[right] == arr[right - 1]) right--;

                left++;
                right--;
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
    }

    return ans;
}
