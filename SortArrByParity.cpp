#include<iostream>
#include<vector>
using namespace std;
// todo: Given an array nums of non-negative integers, return an array consisting of all
// the even elements of nums, followed by all the odd elements of nums.
// You may return any answer array that satisfies this condition.
vector<int> sortArrayByParity(vector<int>& nums)
{
    vector<int> v1, v2;

    for(int i=0; i<nums.size(); i++)
    {
        if(nums[i]%2==0)
            v1.push_back(nums[i]);
        else
            v2.push_back(nums[i]);
    }
    v1.insert(v1.end(), v2.begin(), v2.end());

    return v1;
}
int main()
{
    vector<int> v(7);

    for(int i=0; i<v.size(); i++)
        cin>>v[i];

    v = sortArrayByParity(v);

    for(int i=0; i<v.size(); i++)
        cout << v[i] << " ";
}
// LC: Q.905