#include<iostream>
#include<climits>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
// todo: Given an array of positive integers nums and a positive integer target, return 
// the minimal length of a contiguous subarray [numsl, numsl+1, ..., numsr-1, numsr] of
// which the sum is greater than or equal to target. If there is no such subarray,
// return 0 instead.
int minSubArrayLen(int target, vector<int>& nums)
{
    int sum;
    int p = nums.size()-1;
    int q;

    while (nums[p]>target)
    {
        // if(nums[p]==target)
        //     return 1;
        p--;
        if(p<0)
            return 0;
    }

    if(p==0)
        return 1;
    
    q=p-1;
    sum = nums[p];
    for(int i=p; i>=0; i--)
    {
        if(sum==target)
            return p-q;
        else if(sum > target)
            break;

        sum += nums[q];
        q--;
    }

    for(int i=q+1; p!=q; i++)
    {
        if(sum==target)
            return p-q;

        sum -= nums[p];
        p--;
    }
    return 0;
}
int minSubArrayLen2(int target, vector<int> nums)
{
    int p = 0, q = 1, sum;
    int size = nums.size();
    priority_queue <int, vector<int>, greater<int>> h;

    if(nums[p] == target || nums[q] == target)
        return 1;

    h.push(INT_MAX);
    cout << "dbug in\n";
    sum = nums[p]+nums[q];
    while (p < size && q < size)
    {
        if(sum > target)
        {
            sum -= nums[p];
            p++;
        }
    // cout << "dbug\n";
        else if(sum < target)
        {
            q++;
            if(q<size)
                sum += nums[q];
            // else
                // p++;
        }
    // cout << "dbug\n";
        else
        {
            if (q==p)
                return 1;
            else if (q-p < h.top())
                h.push(q-p+1);

            sum -= nums[p];
            p++;
            q++;
            if(q<size)
                sum += nums[q];
            // else
                // p++;
        }
        cout << "\np = " << p << " q = " << q;
    // cout << "dbug\n";
    }
    while (p < size)
    {
        cout << "\n@2nd loop";
        if(sum==target)
            h.push(q-p);
        sum -= nums[p];
        p++;
    }
    
    cout << "dbug out\n";

    if(h.top()==INT_MAX)
        return 0;
    return h.top();
}
int main()
{
    int target, x;
    vector<int> v;

    cin >> target;

    for(int i=0; i<9; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    target = minSubArrayLen2(target, v);

    cout << endl << "ans = " << target;
}