#include<iostream>
#include<vector>
using namespace std;
// todo: You are given an integer n. An array nums of length n + 1 is generated in the
// following way:
// nums[0] = 0
// nums[1] = 1
// nums[2 * i] = nums[i] when 2 <= 2 * i <= n
// nums[2 * i + 1] = nums[i] + nums[i + 1] when 2 <= 2 * i + 1 <= n
// Return the maximum integer in the array nums​​​.
int getMaximumGenerated(int n)
{
    if(n==0)
        return 0;
    
    vector<int> ans(n+1);
    int max=1;
    
    ans[0]=0;
    ans[1]=1;

    for(int i=2; i<=n; i++)
    {
        if(i%2==0)
        {
            ans[i] = ans[i/2];
        }
        else
        {
            int j = i/2;
            ans[i] = ans[j] + ans[j+1];
        }
        
        if(ans[i]>max)
            max = ans[i];
    }
    
    return max;
}
int main()
{
    int n;
    cin >> n;
    cout << getMaximumGenerated(n);
}
// LC: Q.1646