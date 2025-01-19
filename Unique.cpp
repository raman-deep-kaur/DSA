class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector <int> counter;
        int count = 1; 
        for(size_t i = 1; i < arr.size() ; i++){ 
            if (arr[i] == arr[i - 1]) {
                count++;
            } else {
                counter.push_back(count);
                count = 1; 
            }
        } 
        counter.push_back(count);
        sort(counter.begin(), counter.end());
        for(size_t i = 1 ; i < counter.size() ; i++){
            if (counter[i] == counter[i-1]){
                return false;
            }
        }  
        return true; 
    }

};
