#include<iostream>
#include<vector>
#include<map>
using namespace std;
// todo: We define a harmonious array as an array where the difference between its
// maximum value and its minimum value is exactly 1.
// Given an integer array nums, return the length of its longest harmonious
// subsequence among all its possible subsequences.
int findLHS(vector<int>& nums)
{
    map<int, int> m;
    int mx = 0;

    for(int i=0; i<nums.size(); i++)
    {
        m[nums[i]]++;
    }
    map<int, int>::iterator it;
    map<int, int>::iterator next_it;
    it = m.begin();
    next_it = m.begin();
    next_it++;

    for(; next_it!=m.end(); it++, next_it++)
    {
        // cout << (it)->first << "  " << (it)->first << endl;
        if(it->first == next_it->first - 1)
        {
            int sum = it->second + next_it->second;
            mx = max(sum, mx);
        }
    }
    return mx;
}
int main()
{
    vector<int> v = {1,4,3,1,2,3,2,3,3,2};
    cout << findLHS(v);
}
// LC: Q.594