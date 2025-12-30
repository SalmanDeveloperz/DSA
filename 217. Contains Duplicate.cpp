// 217. Contains Duplicate
// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.


////////// Approach

/*Intuition
So firstly i was thinking that it will just solved by simple nested for loops by adding check if i will equal to j:
nums[i]== nums[j]
I was confident until i get time limit exceeded error while submitting. It passed 70/78 test cases. So I found solutions and this is the best solution I applied and learnt well.

Approach
In this solution we don't just go blindly with the unsorted array but we'll sort the array first to beware from nested loop and then we'll simply compare i with i+1 and then comparing previous element with the next index element we can return true if the duplicate number exist

Complexity
Time complexity:
O(n*log(n))

Space complexity:
O(1)
*/



class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size()-1; i++){
            if(nums[i]==nums[i+1]){
                return true;
            } 
        }
        return false;
    }
};