#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void findIntersection(vector<int> nums1, vector<int> nums2)
{
    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    vector<int> v;
    int i=0, j=0;

    while ( (i!=nums1.size()) && (j!=nums2.size()) )
    {
        if(nums1[i]==nums2[j])
        {
            v.push_back(nums1[i]);
            i++;
            j++;
        }

        else if(nums1[i]>nums2[j])
            j++;

        else
            i++;
    }
    // return v;
    for(int i=0; i<v.size(); i++)
        cout<<v[i]<<" ";
}
int main()
{
    vector<int> v1, v2;
    int x;
    for(int i=0; i<3; i++)
    {
        cin>>x;
        v1.push_back(x);
    }
    for(int i=0; i<5; i++)
    {
        cin>>x;
        v2.push_back(x);
    }

    findIntersection(v1, v2);
}