// leetcode 217

// Given an integer array nums,
// return true if any value appears at least twice in the array,
// and return false if every element is distinct.

// Input: nums = [1,2,3,1]
// Output: true

// Input: nums = [1,2,3,4]
// Output: false

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

bool containsDuplicate(vector<int> &nums) {
  unordered_map<int, bool> map;
  for (int i = 0; i < nums.size(); i++) {
    if (map.count(nums[i]))
      return true;
    else
      map[nums[i]] = true;
  }
  return false;
}

int main() {
  vector<int> vect{1, 2, 1, 4};
  bool ans = containsDuplicate(vect);
  cout << ans << endl;
}