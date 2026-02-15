#include<iostream>
#include<algorithm>
using namespace std;
int main()
{

    long long A,B;
    char S;

    cin>>A>>S>>B;

    if(S=='+')
    {
        cout<<A+B;
    }
    else if(S=='-'){
        cout<<A-B;
    }
    else if(S=='*'){
        cout<<A*B;
    }
    else if (S=='/'){
        cout<<A/B;
    }





}