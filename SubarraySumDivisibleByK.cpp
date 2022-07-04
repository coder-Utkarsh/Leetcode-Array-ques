#include<iostream>
#include<vector>
using namespace std;
// todo: Given an array nums of integers, return the number of
// (contiguous, non-empty) subarrays that have a sum divisible by k.
int subarraysDivByK(vector<int>& nums, int k)
{
    int sz = nums.size();
    int diff = 2;
    int count=0;

    for(int i=0; i<sz; i++)
    {
        if(nums[i]%k == 0)
            count++;
    }

    cout << count << "\n";

    while (1)//(diff != sz+1)
    {
        int p = 0;
        int sum = 0;

        for(int i=0; i<diff; i++)
        {
            sum += nums[i];
        }

        if(sum%k == 0)
            count++;
        if(diff == sz)
            break;

        for(int i=0; i < sz-diff; i++)
        {
            sum += nums[p+diff] - nums[p];
            p++;

            if(sum%k == 0)
                count++;
        }
        diff++;
    }
    return count;
}
int main()
{
    vector<int> v(6);

    for(int i=0; i<v.size(); i++)
        cin >> v[i];

    cout << subarraysDivByK(v, 5);
}
// LC: Q.974