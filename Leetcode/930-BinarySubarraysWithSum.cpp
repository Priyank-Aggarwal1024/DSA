#include <bits/stdc++.h>
using namespace std;
int atMost(vector<int> nums, int goal)
{
    int i = 0, j = 0, ans = 0, sum = 0;
    while (j < nums.size())
    {
        sum += nums[j];
        while (sum > goal && i <= j)
        {
            sum -= nums[i];
            i++;
        }
        ans += (j - i + 1);
        j++;
    }
    return ans;
}
int numSubarraysWithSum(vector<int> nums, int goal)
{
    return atMost(nums, goal) - atMost(nums, goal - 1);
}
int main()
{
    /*
    Given a binary array nums and an integer goal, return the number of non-empty subarrays with a sum goal.

    A subarray is a contiguous part of the array.



    Example 1:

    Input: nums = [1,0,1,0,1], goal = 2
    Output: 4
    Explanation: The 4 subarrays are bolded and underlined below:
    [1,0,1,0,1]
    [1,0,1,0,1]
    [1,0,1,0,1]
    [1,0,1,0,1]
    Example 2:

    Input: nums = [0,0,0,0,0], goal = 0
    Output: 15
    */
    vector<int> nums = {0, 0, 0, 0, 0};
    int goal = 0;
    int ans = numSubarraysWithSum(nums, goal);
    cout << "Ans = " << ans << endl;
    return 0;
}