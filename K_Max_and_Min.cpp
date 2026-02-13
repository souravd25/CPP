#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long A,B,C;
    cin>>A>>B>>C;

    long long mn = min(A, min(B,C));
    long long mx = max(A, max(B,C));

    cout<<mn<<" "<<mx;




}