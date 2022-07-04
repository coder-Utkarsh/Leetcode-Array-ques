#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int maxSubarray(vector<int>& nums)
{
    int sum=0, max=INT_MIN;
    int start = 0, end = nums.size()-1;

    if(nums.size()==1)
        return nums[0];

    for(int i=0; i<nums.size(); i++)
    {
        if(nums[i]>0)
            break;
        else
            start++;
    }

    if(start == nums.size())
    {
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]>max)
                max = nums[i];
        }

        return max;
    }

    for(int i=nums.size()-1; i>=0; i--)
    {
        if(nums[i]>0)
            break;
        else
            end--;
    }

    for (int i = start; i <= end; i++)
    {
        sum+=nums[i];
        
        if(sum<0)
            sum=0;

        if(sum>max)
            max=sum;
    }
    return max;
}
int main()
{
    vector<int> v;
    int x;

    for(int i=0; i<3; i++)
    {
        cin>>x;
        v.push_back(x);
    }

    x = maxSubarray(v);
    cout << x;
}