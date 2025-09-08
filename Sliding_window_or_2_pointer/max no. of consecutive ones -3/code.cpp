#include <iostream>
using namespace std;

int longestOnes(vector<int> &nums, int k)
{
    int l = 0;
    int r = 0;
    int z = 0;
    int max_len = 0;
    int n = nums.size();
    while (r < n)
    {
        if (nums[r] == 1)
        {
            int len = r - l + 1;
            max_len = max(max_len, len);
            r++;
        }
        else{
            if (z < k)
            {
                z++;
                int len = r - l + 1;
                max_len = max(max_len, len);
                r++;
            }
            else
            {
                while (nums[l] != 0)
                {
                    l++;
                }
                l++;
                z--;
            }
        }
    }
    return max_len;
}