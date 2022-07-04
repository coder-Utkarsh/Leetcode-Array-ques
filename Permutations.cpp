#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void permute(vector<int>& nums)
{        
    vector<vector<int>> v;
    vector<int> a;
    int size = nums.size();
    
    if(size==1)
    {
        v.push_back(nums);
        cout << v[0][0];
        exit(1);
    }
    
    sort(nums.begin(), nums.end());
    
    do{
        for(int i=0; i<size; i++)
        {
            a.push_back(nums[i]);
        }
        v.push_back(a);
        a.clear();
    }while(next_permutation(nums.begin(), nums.end()));
        
    cout << "Output: \n";
    for(int i=0; i<v.size(); i++)
    {
        for(int j=0; j<v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout <<"\n";
    }
}
int main()
{
    vector<int> v(3);

    for(int i=0; i<v.size(); i++)
        cin >> v[i];
    permute(v);
}