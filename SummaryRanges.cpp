#include<iostream>
#include<vector>
using namespace std;
//todo: You are given a sorted unique integer array nums.
// Return the smallest sorted list of ranges that cover all the numbers in the array exactly.
// That is, each element of nums is covered by exactly one of the ranges, and there is no integer x such that x is in one of the ranges but not in nums.
// Each range [a,b] in the list should be output as:
// "a->b" if a != b
// "a" if a == b
vector<string> summaryRanges(vector<int>& nums)
{
    int a=0,b=1;
    bool flag=0;
    int n = nums.size();
    vector<string> v;

    if(n == 0)
        return v;
    if(n == 1)
    {
        v.push_back(to_string(nums[0]));
        return v;
    }
    
    while (b<n)
    {
        if(nums[b-1] == nums[b]-1)
        {
            b++;
            flag=1;
        }
        else if(flag)
        {
            string str = to_string(nums[a]) + "->" + to_string(nums[b-1]);
            v.push_back(str);
            flag=0;
            a = b;
            b++;
        }
        else
        {
            v.push_back(to_string(nums[a]));
            a++;
            b++;
        }
    }
    
    if(flag)
    {
        string str = to_string(nums[a]) + "->" + to_string(nums[b-1]);
        v.push_back(str);
    }
    else
        v.push_back(to_string(nums[a]));
            
    return v;
}
int main()
{
    vector<int> v(7);

    for(int i=0; i<v.size(); i++)
        cin >> v[i];

    summaryRanges(v);
}
// LC: Q. 228