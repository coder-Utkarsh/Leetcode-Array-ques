#include<iostream>
#include<vector>
using namespace std;
// todo: You are given an integer array nums. You are initially positioned at the
// array's first index, and each element in the array represents your maximum
// jump length at that position.
// Return true if you can reach the last index, or false otherwise.
bool canJump(vector<int>& nums) {
    
    int count;
    int p = nums.size();
    bool flag = 1;
    
    while(p>0)
    {
        p--;
        count = 1;
        if(nums[p] == 0 && p < nums.size()-1)
        {
            p--;
            flag=0;
            while(p>=0 && nums[p]<=count)
            {
                count++;
                p--;
            }
        }
        
        if(p==-1)
            break;
        
        flag=1;
    }
    
    return flag;
}
int main()
{
    vector<int> v = {3,2,1,0,4};
    cout << canJump(v);
}
// LC: Q.55