#include<iostream>
#include<vector>
using namespace std;
// todo: Given an array nums of integers, return how many of them contain an even
// number of digits.
int findNumbers(vector<int>& nums)
{
    int ans = 0;

    for(int i=0; i<nums.size(); i++)
    {
        int len=0;

        while (nums[i])
        {
            nums[i] /= 10;
            len++;
        }
        
        if(len%2 == 0)
            ans++;
    }
    return ans;
}
int main()
{
    vector<int> v = {1,12,524,4153};
    cout << findNumbers(v);
}
// LC: Q.1295