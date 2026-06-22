/*
Problem: Second Largest Element
Platform: GeeksforGeeks
Topic: Arrays
Language: JavaScript
*/

class Solution {
    getSecondLargest(arr) {
        let largest = -1;
        let second_largest = -1;

        for (let num of arr) {
            if (num > largest) {
                second_largest = largest;
                largest = num;
            } else if (num < largest && num > second_largest) {
                second_largest = num;
            }
        }

        return second_largest;
    }
}
