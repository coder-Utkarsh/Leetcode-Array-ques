#include<iostream>
#include<vector>
using namespace std;
// todo: Given an array of positive integers arr, calculate the sum of all possible
//  odd-length subarrays. A subarray is a contiguous subsequence of the array.
// Return the sum of all odd-length subarrays of arr.
int sumOddLengthSubarrays(vector<int>& arr)
{
    int i, n=3, sum=0, ans=0;
    int sz = arr.size();

    for(int j=0; j<sz; j++)
        ans += arr[j];

    while (n <= sz)
    {
        i=0;
        while (i+n <= sz)
        {
            int k = i+1;
            int limit = i+n;
            for( ; i<limit; i++)
                sum += arr[i];
            ans += sum;
            sum=0;
            i=k;
            cout << i << "  " << ans << endl;
        }
        n += 2;
    }
    return ans;
}
int main()
{
    vector<int> v(5);

    for(int i=0; i<v.size(); i++)
        cin>>v[i];

    cout << sumOddLengthSubarrays(v);
}
// LC: Q.1588