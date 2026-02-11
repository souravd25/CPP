#include<iostream>
using namespace std;
int main()
{
    string S;
    cin>>S;
    cout<<"Hello, "<<S<<endl;

}

#include<iostream>
using namespace std;
int main()
{
    int a;
    long long b;
    char c;
    float d;
    double e;

    cin>>a>>b>>c>>d>>e;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<e<<endl;



}

#include<iostream>
using namespace std;
int main()
{
  long long  X, Y;
  cin>>X>>Y;

  cout<<X<<" "<< "+ "<<Y<<" = "<<X + Y<<endl;
  cout<<X<<" "<< "* "<<Y<<" = "<<X * Y<<endl;
  cout<<X<<" "<< "- "<<Y<<" = "<<X - Y<<endl;



}

#include<iostream>
using namespace std;
int main()
{
 long long A,B,C,D;
 cin>>A>>B>>C>>D;
 cout<<"Difference = "<<(A*B) - (C*D)<<endl;


}

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout << fixed << setprecision(9);
    double R;
    cin>>R;

    const double PI = 3.141592653;

    cout<<PI * R * R<<endl;

}
#include<iostream>
using namespace std;
int main()
{
    long long N,M;
    cin>>N>>M;

    cout<<(N%10) +(M%10)<<endl;


}
#include<iostream>
using namespace std;
int main()
{
    long long N;
    cin>>N;

    cout<<N*(N+1)/2<<endl;

}
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double A,B;
    cin>>A>>B;

    double result = A / B;

    cout<<"floor "<< A<< " / " <<B<< " = "<<floor(result)<<endl;
    cout<<"ceil "<< A<< " / " << B<< " = "<<ceil(result)<<endl;
    cout<<"round "<< A<< " / " << B<< " = "<<round(result);

}
#include<iostream>
using namespace std;
int main()
{
    int A,B;
    cin>>A>>B;
    if(A>=B)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

}
#include<iostream>
using namespace std;
int main()
{
    long long A,B;
    cin>>A>>B;

    if (A%B==0 || B%A==0){
        cout<<"Multiples";
    }
    else
        cout<<"No Multiples";

}
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
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string F1,S1;
    string F2,S2;
    cin>>F1>>S1;
    cin>>F2>>S2;

    if(S1==S2){
        cout<<"ARE Brothers";
    }
    else
        cout<<"NOT";




}
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{

    char X;
    cin>>X;

    if(X>='0' && X <= '9'){
        cout<<"IS DIGIT";
    }
    else{
        cout<<"ALPHA\n";

        if(X >= 'A' && X<= 'Z'){
            cout<<"IS CAPITAL";
        }
        else
            cout<<"IS SMALL";
    }



}
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
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{

    long long X;
    cin>>X;
    int first_d = X/1000;
    if(first_d%2==0){
        cout<<"EVEN";
    }
    else{
        cout<<"ODD";
    }




}
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    float X,Y;
    cin>>X>>Y;

    if(X==0 && Y==0){
        cout<<"Origem";
    }
    else if(Y == 0){
        cout<<"Eixo X";
    }
     else if(X == 0){
        cout<<"Eixo Y";
    }

     else if(X>0 && Y>0){
        cout<<"Q1";
    }

     else if(X<0 && Y>0){
        cout<<"Q2";
    }
     else if(X<0 && Y <0){
        cout<<"Q3";
    }
    else{
        cout<<"Q4";
    }






}
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





