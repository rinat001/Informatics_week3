#include <iostream>
#include <cmath>
using namespace std;
 
int main () {
int a,b,c,d;
 
int x;
 
cin>>a>>b>>c>>d;
 
 
x=(-b)/a;
 
if(a == 0 && b==0 )
 {
    cout << "INF"; return 0;
    }
 
if( a==0 || a==c && b==d )
{
    cout <<"NO";
    return 0;
}
else if (b%a==0 && (c*x+d)!=0) {
 
cout <<x;
}
else
cout<<"NO"<<endl;
return 0;
}
 
