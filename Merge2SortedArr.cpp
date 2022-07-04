#include<iostream>
#include<vector>
using namespace std;
// todo: You are given two integer arrays nums1 and nums2, sorted in non-decreasing
// order, and two integers m and n, representing the number of elements in nums1
// and nums2 respectively.
// Merge nums1 and nums2 into a single array sorted in non-decreasing order.
// The final sorted array should not be returned by the function, but instead be
// stored inside the array nums1. To accommodate this, nums1 has a length of
// m + n, where the first m elements denote the elements that should be merged, and
// the last n elements are set to 0 and should be ignored. nums2 has a length of n.
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
{
    int i=0, j=0;
    vector<int> v;
    while(i<m && j<n)
    {
        if(nums1[i] < nums2[j])
            v.push_back(nums1[i++]);
        else
            v.push_back(nums2[j++]);
    }

    for(;i<m; i++)
        v.push_back(nums1[i]);
    for(;j<n; j++)
        v.push_back(nums2[j]);

    for(i=0; i<m+n; i++)
        cout << v[i] << " ";
}
int main()
{
    vector<int> v1 = {1,2,3,0,0,0};
    vector<int> v2 = {4,5,6};

    merge(v1, 3, v2, 3);
}
// LC: Q.88