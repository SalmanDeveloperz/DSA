/*
LeetCode: 268. Missing Number


Problem:
Given an array nums containing n distinct numbers in the
range [0, n], return the only number in the range that is
missing from the array.

Example:
nums = [3, 0, 1]
Output = 2
*/

/*
Solution 1: Mathematical Sum Formula



Intuition:
This problem can be solved using basic math.

For numbers from 0 to n, the total sum should be:
    total = n * (n + 1) / 2

If we calculate the actual sum of the given array and
subtract it from the expected total, the difference will
be the missing number.

Example:
nums = [3, 0, 1]
n = 3

Expected sum:
    total = 3 * (3 + 1) / 2 = 6

Actual sum:
    sum = 3 + 0 + 1 = 4

Missing number:
    total - sum = 6 - 4 = 2

Why it works:
- The array contains all numbers except one.
- Subtracting cancels out all existing numbers.
- The remaining value is the missing number.

Complexity:
Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution_Math {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        // Calculate expected sum from 0 to n
        int total = (n * (n + 1)) / 2;

        // Calculate actual sum of array elements
        int sum = accumulate(nums.begin(), nums.end(), 0);

        // The difference is the missing number
        return total - sum;
    }
};




/*
Solution 2: XOR Bitwise Approach


Intuition:
XOR has a very useful property:
- a ^ a = 0
- a ^ 0 = a
- XOR is commutative and associative
- Order does not matter

If we XOR all numbers from 0 to n and also XOR all numbers
present in the array, every number that appears twice
will cancel out, leaving only the missing number.

Example:
nums = [3, 0, 1]
n = 3

XOR numbers from 0 to n:
    0 ^ 1 ^ 2 ^ 3

XOR array elements:
    3 ^ 0 ^ 1

Final XOR:
    (0 ^ 1 ^ 2 ^ 3) ^ (3 ^ 0 ^ 1)
    All common numbers cancel out
    Result = 2

Why it works:
- Each number except the missing one appears twice.
- XOR removes duplicates automatically.
- The remaining value is the missing number.

Complexity:
Time Complexity: O(n)
Space Complexity: O(1)


*/

class Solution_XOR {
public:
    int missingNumber(vector<int>& nums) {
        int ans = 0;

        // XOR all numbers from 0 to n
        for (int i = 0; i <= nums.size(); i++) {
            ans ^= i;
        }

        // XOR all elements in the array
        for (int num : nums) {
            ans ^= num;
        }

        // Remaining value is the missing number
        return ans;
    }
};