#include<iostream>
#include<algorithm>
using namespace std;
int main()
{

    char X;
    cin>>X;

    if(X>= 'a' && X<= 'z'){
        cout<<char(X-32);
    }
    else{
        cout<<char(X+32);
    }





}