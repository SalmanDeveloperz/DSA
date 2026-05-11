/// Brute force solution with two nested loops

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n= numbers.size();
        for (int i=0; i<n-1; i++){
            for (int j=i; j<n; j++){
                if (numbers[i]+ numbers[j]== target){
                    return {i+1, j+1};
                }
            }
        }
    }
};

// T.C is O(n^2) and S.C is O(1)




///  Optimal soultion with two pointer approach
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        //two pointers approach
        int left= 0;
        int right= numbers. size()-1;

        while (left< right){
            int sum= numbers[left]+ numbers[right];
            if (sum== target){
                return {left+1, right+1};
            }
            else if (sum< target){
                left++;
            }
            else{
                right--;
            }
        }
        return {};

    }
};


// time complexity of this solution is O(n) and space complexity is O(1)
