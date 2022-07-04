#include<iostream>
#include<vector>
using namespace std;
void productExceptSelf(vector<int>& nums)
{
    long int prod = 1;
    bool isZero = 0;
    bool allZero = 1;
    int count = 0;

    for(int i=0; i<nums.size(); i++)
    {
        if(nums[i])
        {
            prod*=nums[i];
            count++;
        }
        else
            isZero = 1;
    }

    if(count > nums.size()-2)
        allZero = 0;

    vector<int> ans;

    if(allZero)
    {
        int n = nums.size();
        while(n--)
            ans.push_back(0);
    }
    else if(isZero)
    {
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i])
            {
                ans.push_back(0);
            }
            else
            {
                ans.push_back(prod);
            }
        }
    }
    else
    {
        for(int i=0; i<nums.size(); i++)
        {
            int n = prod/nums[i];
            ans.push_back(n);
        }
    }

    for(int i=0; i<ans.size(); i++)
        cout << ans[i] << "  ";

}
int main()
{
    vector<int> v;
    int x;

    for(int i=0; i<6; i++)   
    {
        cin >> x;
        v.push_back(x);
    }
    productExceptSelf(v);
}
// LC: Q.238