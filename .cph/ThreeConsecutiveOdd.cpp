#include <iostream>
using namespace std;
// todo: Given an integer array arr, return true if there are three consecutive odd
// numbers in the array. Otherwise, return false.
bool threeConsecutiveOdds(vector<int>& arr)
{
    int count=0;

    for(int i=0; i<arr.size()-2; i++)
    {
        if(arr[i]%2!=0 && arr[i+1]%2!=0 && arr[i+2]%2!=0)
            return true;
    }
    return false;
}
int main()
{
    vector<int> v(7);

    for (int i = 0; i < v.size(); i++)
        cin >> v[i];

    cout << threeConsecutiveOdds(v);
}