#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int maxProduct(vector<int>& nums)
{
    int max = INT_MIN;

    if(nums.size()==1)
        return nums[0];

    for(int i=0; i<nums.size(); i++)
    {
        int prod = nums[i];

        for(int j=i+1; j<nums.size(); j++)
        {
            prod *= nums[j];

            if(prod > max)
                max = prod;
        }
    }
    return max;
}
int main()
{
    vector<int> v;
    int x;
    for(int i=0; i<3; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    x = maxProduct(v);
    cout << x;
}
// LC: Q.152