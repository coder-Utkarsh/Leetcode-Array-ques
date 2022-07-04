#include<iostream>
#include<vector>
#include<set>
using namespace std;
// todo: Given an array of integers nums containing n + 1 integers where each integer 
// is in the range [1, n] inclusive.
// There is only one repeated number in nums, return this repeated number
int findDuplicate(vector<int>& nums)
{
    set<int> s;

    for(int n: nums)
    {
        if(s.count(n))
            return n;
        s.insert(n);
    }

    return -1;
}
int main()
{
    vector<int> v(9);

    for(int i=0; i<v.size(); i++)
        cin >> v[i];
    cout << findDuplicate(v);
}
// LC: Q.287