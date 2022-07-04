#include<iostream>
#include<vector>
using namespace std;
// todo: Given an array of integers arr, return true if we can partition the array into
// three non-empty parts with equal sums.
bool canThreePartsEqualSum(vector<int>& arr)
{        
    int n = arr.size();
    int sum=0;
    int i=0, j=0;

    for(int x: arr)
        sum+=x;

    if(sum%3!=0)
        return false;

    sum/=3;
// !  We have to use do-while loop, so that when sum=0, this loop still runs atleast once.
    do{
        j += arr[i];
        i++;
        if(i==n)
            return false;
    }while (j!=sum);

    j=0;

    do{
        n--;
        j+=arr[n];
        
        if(n==0)
            return false;
    }while (j!=sum);

    if(n>i)
        return true;
    else
        return false;
}
int main()
{
    vector<int> v(11);

    for(int i=0; i<v.size(); i++)
        cin >> v[i];

    cout << canThreePartsEqualSum(v);
}