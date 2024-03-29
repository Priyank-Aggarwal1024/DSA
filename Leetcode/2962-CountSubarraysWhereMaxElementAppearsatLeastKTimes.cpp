#include <bits/stdc++.h>
using namespace std;
// -------------------------------- Approach 1 -------------------------------------------------//
long long countSubarrays(vector<int> &nums, int k)
{
    int mx = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        mx = max(mx, nums[i]);
    }
    long long int ans = 0LL;
    int i = 0, sum = 0;
    unordered_map<int, int> m;
    while (i < nums.size())
    {
        if (nums[i] == mx)
        {
            sum++;
            m[sum] = i;
        }
        if (sum >= k)
        {
            int x = sum - k + 1;
            ans += m[x] + 1LL;
        }
        i++;
    }
    return ans;
}
// --------------------------------------------- Approach 2 --------------------------------------------//

int main()
{
    /*
You are given an integer array nums and a positive integer k.

Return the number of subarrays where the maximum element of nums appears at least k times in that subarray.

A subarray is a contiguous sequence of elements within an array.



Example 1:

Input: nums = [1,3,2,3,3], k = 2
Output: 6
Explanation: The subarrays that contain the element 3 at least 2 times are: [1,3,2,3], [1,3,2,3,3], [3,2,3], [3,2,3,3], [2,3,3] and [3,3].
Example 2:

Input: nums = [1,4,2,1], k = 3
Output: 0
Explanation: No subarray contains the element 4 at least 3 times.
    */
    vector<int> nums = {1, 3, 2, 3, 3};
    int k = 2;
    long long int ans = countSubarrays2(nums, k);
    cout << "Ans = " << ans << endl;
    return 0;
}