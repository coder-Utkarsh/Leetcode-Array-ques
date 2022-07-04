#include<iostream>
#include<vector>
using namespace std;
// todo: There is a room with n bulbs, numbered from 1 to n, arranged in a row
// from left to right. Initially, all the bulbs are turned off.
// At moment k (for k from 0 to n - 1), we turn on the light[k] bulb. A bulb
// changes color to blue only if it is on and all the previous bulbs (to the left)
// are turned on too.
// Return the number of moments in which all turned-on bulbs are blue.
// int numTimesAllBlue(vector<int>& light)
// {
//     int n = light.size();
//     vector<bool> v(n, 0);
//     int ans=0;

//     for(int i=0; i<n; i++)
//     {
//         vector<bool>::iterator it = v.begin();
//         v[light[i]-1] = 1;
//         bool val = 1;
//         bool flag = 1;

//         for(int j=0; j<n; j++)
//         {
//             if(v[j] == 0)
//             {
//                 flag = 0;
//                 break;
//             }
//             it++;
//         }

//         if(find(it, v.end(), val) == v.end())
//         {
//             cout << light[i] << endl;
//             ans++;
//         }
//     }
//     return ans;
// }
int main()
{
    vector<int> v = {2,1,3,5,4};
    // cout << numTimesAllBlue(v);

    cout << "lol" << endl;
    for(int i=0; i<1000; i++)
    {
        cout << rand()%1000 << ",";
    }
}
// LC: Q.1375
