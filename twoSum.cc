#include <vector>
#include <unordered_map>
#include <iostream>


using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> diff;
        for (int i = 0; i < nums.size(); i++)
        {
            
            if (diff.contains(nums[i]))
            {
                vector<int> answer = {diff[nums[i]],i};
                return answer;
            } else {
                diff[target-nums[i]] = i;
            }
            
        }
        return nums;
    }
};

int main ()
{
  return 0;
}
