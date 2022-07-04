#include<iostream>
#include<vector>
using namespace std;
//todo: Given a non-empty array of integers, return the k most frequent elements.
// You may assume k is always valid, i.e, 1 ≤ k ≤ number of unique elements.
//* time complexity must be better than O(n log n)
void kmostFrequent(vector<int> &nums, int k)
{

}
int main()
{
    vector<int> v;
    int x, n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    kmostFrequent(v, 2);
}