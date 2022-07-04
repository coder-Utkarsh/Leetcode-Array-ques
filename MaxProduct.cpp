#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// todo:Given an integer array nums, find three numbers whose product is maximum and
// return the maximum product.
int maximumProduct(vector<int>& nums)
{
    int size = nums.size();
    if(size==3)
        return nums[0]*nums[1]*nums[2];

    sort(nums.begin(), nums.end());

    int p = nums[0]*nums[1]*nums[size-1];
    int q = nums[size-3]*nums[size-2]*nums[size-1];

    if(p>q)
        return p;
    else
        return q;
}
int main()
{
    vector<int> v(7);

    for(int i=0; i<7; i++)
        cin>>v[i];

    cout << maximumProduct(v);
}
// LC: Q.628