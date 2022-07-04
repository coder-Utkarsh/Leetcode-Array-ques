#include<iostream>
#include<vector>
using namespace std;
void MoveToEnd(vector<int> nums)
{
    int count=0;
    for(auto it=nums.begin(); it!=nums.end(); ++it)
    {
        if(*it==0)
        {
            count++;
            nums.erase(it);
            it--;
        }
    }

    for(int i=0; i<count; i++)
        nums.push_back(0);

    for(int j=0; j<nums.size(); j++)
        cout << nums[j] << " ";
}
int main()
{
    vector<int> v;
    v.push_back(0);
    v.push_back(12);
    v.push_back(1);
    v.push_back(0);
    v.push_back(3);
    v.push_back(0);
    v.push_back(12);
    v.push_back(14);
    v.push_back(0);
    v.push_back(0);
    v.push_back(15);
    v.push_back(0);
    MoveToEnd(v);
}