// Given an integer array nums,
//  return true if any value appears at least twice in the array,
//   and return false if every element is distinct.
#include <iostream>
#include <algorithm>
#include <vector>
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int temp = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            if (temp == nums[i])
            {
                return true;
            }
            else
            {
                temp = nums[i];
            }
        }
        return false;
    }
};
using namespace std;

int main()
{

    return 0;
}