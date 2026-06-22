/*
Problem: Subarray With Given Sum
Platform: GeeksforGeeks
Topic: Arrays
Language: C++
*/

class Solution {
public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        int start = 0;
        int current_sum = 0;
        int n = arr.size();

        for (int end = 0; end < n; end++) {
            current_sum += arr[end];

            while (current_sum > target && start <= end) {
                current_sum -= arr[start];
                start++;
            }

            if (current_sum == target) {
                return {start + 1, end + 1};
            }
        }

        return {-1};
    }
};
