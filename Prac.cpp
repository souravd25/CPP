#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int N;
    cin>>N;

    int years = N/365;
    int rem = N%365;
    int months = rem/30;
    int days = rem%30;

    cout<<years<<" years"<<endl;
    cout<<months<< " months"<<endl;
    cout<<days<<" days"<<endl;






}
