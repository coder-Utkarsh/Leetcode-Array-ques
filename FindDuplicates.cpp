#include<iostream>
#include<vector>
using namespace std;
void findDuplicates(vector<int>& nums)
{
    int n = nums.size();
    vector<int> vec(n, 0);
    vector<int> ans;

    for(int i=0; i<n; i++)
    {
        vec[nums[i]-1]++;
    }

    for(int i=0; i<n; i++)
    {
        if(vec[i]==2)
            ans.push_back(i+1);
    }

    for(int i=0; i<ans.size(); i++)
        cout << ans[i] << " ";
}
int main()
{
    vector<int> v;
    int x;

    for(int i=0; i<1; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    findDuplicates(v);
}
// LC: Q.442