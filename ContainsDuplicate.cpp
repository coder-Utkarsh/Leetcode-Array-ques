#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
// todo: Given an integer array nums and an integer k, return 
// true if there are two distinct indices i and j in the array such that nums[i] == nums[j]
// and abs(i - j) <= k.
bool containsNearbyDuplicate(vector<int>& nums, int k)
{        
    if(k==0)
        return false;
    
    unordered_map<int, int> m;
    int prevSize = 0;
    for(int i=0; i<nums.size(); i++)
    {
        m.insert(pair(nums[i], i));
        if(m.size()==prevSize)
        {
            if(i-m[nums[i]]<=k)
                return true;
            else
            {
                m.erase(nums[i]);
                m.insert(pair(nums[i], i));
            }
            prevSize--;
        }
        prevSize++;
    }
    return false;
}
int main()
{
    vector<int> v(5);
    for(int i=0; i<v.size(); i++)
        cin >> v[i];

    cin>>k;
    cout << containsNearbyDuplicate(v, k);
}
// LC: Q.219