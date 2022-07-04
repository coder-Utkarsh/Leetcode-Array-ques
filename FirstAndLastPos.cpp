#include<iostream>
#include<vector>
using namespace std;
// todo: Given an array of integers nums sorted in ascending order, find the
// starting and ending position of a given target value.
// If target is not found in the array, return [-1, -1].
// You must write an algorithm with O(log n) runtime complexity.
int binSearch(int st, int end, int target, vector<int> nums)
{
    if(st <= end)
    {
        int mid = st+(end-st)/2;
        if(nums[mid] == target)
            return mid;

        if(nums[mid] > target)
            return binSearch(st, mid-1, target, nums);
        else
            return binSearch(mid+1, end, target, nums);            
    }
    return -1;
}

vector<int> searchRange(vector<int>& nums, int target) {
    
    vector<int> v;
    
    if(nums.size() == 0)
    {
        v.push_back(-1);
        v.push_back(-1);
        return v;
    }
    
    int st = binSearch(0, nums.size()-1, target, nums);
    if(st == -1)
    {
        v.push_back(-1);
        v.push_back(-1);
        return v;
    }
    int end = st;

    while (st>0 && nums[st-1] == nums[st])
        st--;
    
    while ((end<nums.size()-1) && nums[end+1] == nums[end])
        end++;

    v.push_back(st);
    v.push_back(end);

    return v;
}
int main()
{
    vector<int> v = {8,8};
    v = searchRange(v, 8);

    for(int i=0; i<v.size(); i++)
        cout << v[i] << " ";
}
// LC: Q.34