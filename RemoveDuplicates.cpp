#include<iostream>
#include<vector>
using namespace std;
// todo: Given a sorted array nums, remove the duplicates in-place such that duplicates
// appeared at most twice and return the new length.
// Do not allocate extra space for another array; you must do this by modifying the input
// array in-place with O(1) extra memory.
void removeDuplicates(vector<int>& nums)
{
    vector<int> :: iterator it1, it2;
    it1 = nums.begin();
    it2 = it1+1;
    int count = 1;
    for(; it2!=nums.end();)
    {
        if(count>2)
        {
            nums.erase(it2);
            count--;
            continue;
        }
        if(*it1 == *it2)
        {
            count++;
            if(count<3)
                it2++;
        }
        else
        {
            it1 = it2;
            it2++;
            count=1;
        }
    }

    for(int i=0; i<nums.size(); i++)
        cout << nums[i] << " ";
}
int main()
{
    vector<int> v(10);

    for(int i=0; i<v.size(); i++)
        cin >> v[i];
    removeDuplicates(v);
}
// LC: Q.80