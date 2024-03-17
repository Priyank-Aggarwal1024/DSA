#include <bits/stdc++.h>
using namespace std;
int findMaxLength(vector<int> nums)
{
    map<int, int> m;
    int sum = 0;
    int mx = 0;
    m[0] = -1;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i] == 1 ? 1 : -1;
        if (m.find(sum) != m.end())
        {
            mx = max(mx, i - m[sum]);
        }
        else
        {
            m[sum] = i;
        }
    }
    return mx;
}
int main()
{
    /*
        Given a binary array nums, return the maximum length of a contiguous subarray with an equal number of 0 and 1.

        Example 1:
        Input: nums = [0,1]
        Output: 2
        Explanation: [0, 1] is the longest contiguous subarray with an equal number of 0 and 1.


        Example 2:
        Input: nums = [0,1,0]
        Output: 2
        Explanation: [0, 1] (or [1, 0]) is a longest contiguous subarray with equal number of 0 and 1.

        Constraints:
        1 <= nums.length <= 105
        nums[i] is either 0 or 1.
    */
    // Test Case 1.) [1,1,0,1,0,1,0,0,1,0,1]
    // Test Case 2.) [1,0,1,1,0,1,0,1,1,1,0,1,0,1]
    // Test Case 3.) [0,1,1,0,1,0,1,1,0,1]
    // Test Case 4.) [0,1,0]
    // Test Case 5.) [0,1]

    // Answer 1.) 10
    // Answer 1.) 6
    // Answer 1.) 6
    // Answer 1.) 2
    // Answer 1.) 2
    vector<int> nums = {1, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1};
    int res = findMaxLength(nums);
    cout << "Max length having same number of 0's and 1's is : " << res;
    return 0;
}