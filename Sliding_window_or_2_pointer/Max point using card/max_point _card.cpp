#include <iostream>
using namespace std;

int maxScore(vector<int> &cardPoints, int k)
{
    int l = 0;
    int lsum = 0;
    while (l <= k - 1)
    {
        lsum += cardPoints[l];
        l++;
    }
    l = k - 1;
    int maxsum = lsum;
    int rsum = 0;
    int n = cardPoints.size();
    int r = n - 1;
    while (r >= n - k)
    {
        if (l == -1)
        {
            lsum = 0;
        }
        if (l != -1)
        {
            lsum -= cardPoints[l];
            l--;
        }

        rsum += cardPoints[r];
        maxsum = max(maxsum, lsum + rsum);
        r--;
    }
    return maxsum;
}