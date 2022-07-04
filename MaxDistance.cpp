#include<iostream>
#include<queue>
#include<climits>
#include<vector>
using namespace std;
// todo: You are given an array representing a row of seats where seats[i] = 1 represents
// a person sitting in the ith seat, and seats[i] = 0 represents that the ith seat is 
// empty (0-indexed).There is at least one empty seat, and at least one person sitting.
// Alex wants to sit in the seat such that the distance between him and the closest person
// to him is maximized. 
// Return that maximum distance to the closest person.
int maxDistToClosest(vector<int>& seats)
{
    int count = 0, max = INT_MIN;
    bool end = false;
    priority_queue<int> h;

    for(int i=0; i<seats.size(); i++)
    {
        if(seats[i]==0)
        {
            if(i==0 || i==seats.size()-1)
                end = true;
            count++;
            cout << "count = " << count << endl;
        }
        else
        {
            count=0;
            end = false;
        }
        if(count>max)
        {
            cout << "exec.\n";
            if(end)
                max = count;
            else
                max = (count+1)/2;
            h.push(max);
        }
        cout << "max = " << max << endl;
    }
    return h.top();
}
int main()
{
    vector<int> v(13);

    for(int i=0; i<v.size(); i++)
        cin >> v[i];
    cout << maxDistToClosest(v);
}
// LC: Q.849