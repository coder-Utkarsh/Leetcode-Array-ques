#include <iostream>
#include <vector>
using namespace std;
//todo: For a non-negative integer X, the array-form of X is an array of its digits in
// left to right order.  For example, if X = 1231, then the array form is [1,2,3,1].
// Given the array-form A of a non-negative integer X, return the array-form of the
// integer X+K.
void addToArrayForm(vector<int> A, int K)
{
    int s = A.size(), sum, carry = 0;

    for (int i = 1; (K > 0) || (carry==1); i++)
    {
        if(i==s+1)
            break;

        sum = A[s - i] + (K % 10) + carry;
        if (sum > 9)
        {
            sum %= 10;
            carry = 1;
        }
        else
            carry = 0;

        A[s - i] = sum;
        K /= 10;
    }

    if (carry == 1)
        K++;
        // A.insert(A.begin(), 1);

    if(K>0)
    {
        while (K>0)
        {
            A.insert(A.begin(), (K%10));
            K/=10;
        }
    }

    cout << "Result:  ";
    for (int i = 0; i < A.size(); i++)
        cout << A[i] << " ";
}
// todo: if K=1, same problem..
void addOne(vector<int>& digits)
{
    int sum, s = digits.size(), carry=0, K=1;
    for(int i=1; i<=s; i++)
    {
        sum = digits[s - i] + K + carry;
        if (sum > 9)
        {
            sum %= 10;
            carry = 1;
        }
        else
            carry = 0;

        digits[s - i] = sum;
        K=0;
    }
    if (carry == 1)
        digits.insert(digits.begin(), 1);

    cout << "Result of AddOne:  ";
    for (int i = 0; i < digits.size(); i++)
        cout << digits[i] << " ";
}
int main()
{
    vector<int> v;
    int val,k;
    cout<<"Enter array: ";
    for (int i = 0; i < 1; i++)
    {
        cin >> val;
        v.push_back(val);
    }
    cout<<"Enter k: ";
    cin>>k;
    // addOne(v);            // another function in which k+1
    addToArrayForm(v, k);
}
// Q. 989. Add to Array-Form of Integer