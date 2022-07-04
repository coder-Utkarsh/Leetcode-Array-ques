#include<iostream>
#include<vector>
#include<set>
using namespace std;
// todo: Given an integer array nums, return true if any value appears at least twice in 
// the array, and return false if every element is distinct.
bool containsDuplicate(vector<int>& nums)
{        
        if(nums.size()==1)
            return true;
        
        set<int> s;

        for(int i=0; i<nums.size(); i++)
            s.insert(nums[i]);

        return (s.size()-nums.size() == 0) ? false : true;
}
int main()
{
    vector<int> v;
    int x;

    for(int i=0; i<7; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    cout << containsDuplicate(v);
}