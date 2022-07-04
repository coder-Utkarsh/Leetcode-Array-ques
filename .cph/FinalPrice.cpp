#include<iostream>
#include<vector>
using namespace std;
// todo: Given the array prices where prices[i] is the price of the ith item in a shop.
// There is a special discount for items in the shop, if you buy the ith item, then you
// will receive a discount equivalent to prices[j] where j is the minimum index such that
// j > i and prices[j] <= prices[i], otherwise, you will not receive any discount at all.
// Return an array where the ith element is the final price you will pay for the ith item
// of the shop considering the special discount.
void finalPrices(vector<int>& prices)
{
    vector<int> ans(prices);
    int n = prices.size();
    bool discount=false;

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<=arr[i])
            {
                discount = true;
                break;
            }
        }
        if(discount)
        {
            ans[i]-=arr[j];
            discount = false;
        }
    }
}
int main()
{
    vector<int> v(7);

    for(int i=0; i<v.size(); i++)
        cin >> v[i];

    cout << ;
}