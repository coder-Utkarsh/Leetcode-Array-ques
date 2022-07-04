#include<iostream>
#include<vector>
using namespace std;
// todo: Given a non-empty array of integers nums, every element appears twice except
// for one. Find that single one.
void func(vector<int> v)
{
    int num=0;
    for(int i=0; i<v.size(); i++)
    {
        num = (num ^ v[i]);
    }
    cout << num;
}
int main()
{
    vector<int> v;
    v.push_back(10);
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(1);
    // v.push_back(2);
    func(v);
}