#include<iostream>
#include<vector>
using namespace std;
void rotate(vector<int>& nums, int k)
{
    int size = nums.size();
    vector<int>:: iterator it1, it2;
    it1 = nums.begin();
    it2 = nums.begin();
    it1+=(size-k);

    for(int i=size-k; i<size; i++)
    {
        int x = nums[i];
        nums.erase(it1);
        it1++;
        nums.insert(it2, x);
        it2++;
    }

    cout << "\n";
    for(int i=0; i<size; i++)
        cout << nums[i] << " ";
}
int main()
{
    int x, k;
    vector<int> v;

    cin>>k;
    for(int i=0; i<6; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    rotate(v, k);
}
// LC: Q.189