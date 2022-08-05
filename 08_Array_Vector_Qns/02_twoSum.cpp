// leetcode 1

// Given an array of integers nums and an integer target, 
// return indices of the two numbers such that they add up to target.

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

#include<iostream>
#include<vector>

using namespace std;

// answer function
vector<int> twoSum(vector<int>& nums, int target) {
  for(int i=0; i<nums.size(); i++)
    for(int j=0+1; j<nums.size(); j++)
      if(nums.at(i) + nums.at(j) == target)
        return vector<int> {i,j};
  return vector<int> {};
}


// runner code
int main() {

  vector<int> vect {2,7,3,15};
  vector<int> ans = twoSum(vect, 22);
  
  // print answer
  for(int i=0; i<ans.size(); i++) {
    cout<<ans[i]<<" ";
  }
}