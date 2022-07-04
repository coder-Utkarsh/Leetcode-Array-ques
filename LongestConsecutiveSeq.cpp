#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// todo: Given an unsorted array of integers nums, return the length of the longest consecutive
// elements sequence.
int longestConsecutive(vector<int>& nums)
{
    if(nums.size() == 0)
        return 0;

    sort(nums.begin(), nums.end());
    int longst = 1;
    int currst = 1;

    for(int i=1; i<nums.size(); i++)
    {
        if(nums[i] != nums[i-1])
        {
            if(nums[i] == nums[i-1]+1)
                currst++; 
            else
            {
                longst = max(longst, currst);
                currst = 1;
            }
        }
    }

    return max(longst, currst);
}
int main()
{
    vector<int> v{100,4,200,1,3,2};

    int ans = longestConsecutive(v);
    cout << "ans = "<< ans;
}
// LC: 128