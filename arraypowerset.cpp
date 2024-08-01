#include <vector>
#include <iostream>
using namespace std;
class Solution {
private:
// Recursive helper function to generate subsets
    void solve(vector<int>& nums, vector<int>& output, int index, vector<vector<int>>& ans) {
// Base case: if the current index is beyond the last element
        if (index >= nums.size()) {
            ans.push_back(output);
            return;
        }     
// Exclude the current element and move to the next
        solve(nums, output, index + 1, ans);      
// Include the current element and move to the next
        int element = nums[index];
        output.push_back(element);
        solve(nums, output, index + 1, ans);     
// Backtrack: remove the last element to explore other subsets
        output.pop_back();
    } 
public:
// Main function to return all subsets of the input vector
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int index = 0;
        solve(nums, output, index, ans);
        return ans;
    }
};
// Example usage
int main() {
    Solution sol;
    vector<int> nums = {1,2,3};
    vector<vector<int>> result = sol.subsets(nums);
    // Print the result
    for (const auto& subset : result) {
        for (int num : subset) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
