/*
Problem: Missing Number
Platform: GeeksforGeeks
Topic: Arrays
Language: C++
*/

class Solution {
public:
    int missingNum(vector<int>& arr) {
        long long n = arr.size() + 1;
        long long expected_sum = (n * (n + 1)) / 2;
        long long actual_sum = 0;

        for (int num : arr) {
            actual_sum += num;
        }

        return expected_sum - actual_sum;
    }
};
