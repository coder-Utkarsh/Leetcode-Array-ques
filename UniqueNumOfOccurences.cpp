#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
// todo: Given an array of integers arr, write a function that returns true if and
//  only if the number of occurrences of each value in the array is unique.
bool uniqueOccurrences(vector<int>& arr) {
    
    if(arr.size() == 2 && arr[1] != arr[0])
        return false;
        
    set<int> s;
    sort(arr.begin(), arr.end());
    int i=1;
    
    while(i < arr.size())
    {
        int sz = s.size();
        int count = 1;
        while(i < arr.size() && arr[i-1] == arr[i])
        {
            count++;
            i++;
        }
        i++;
        
        s.insert(count);
        
        if(sz == s.size())
            return false;
    }
    return true;
}
int main()
{
    vector<int> v = {1,2,2,1,1,3};
    cout << uniqueOccurrences(v);
}
// LC: Q.1207