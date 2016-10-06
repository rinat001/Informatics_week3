#include <iostream>
using namespace std;
int main () {
 
 
int A,B,C,a,b,c;
cin>>A>>B>>C;
a=A%2;
b=B%2;
c=C%2;
if ( abs(A) <100000 && abs(B)<100000 && abs(C)<100000 ) {
if( (a==0 && b!=0)||(a==0 && c!=0) || (b==0 && a!=0) ||(b==0 && c!=0) || (c==0 && b!=0) || (c==0 && a!=0))
{
cout<<"YES"<<endl;
}
else
cout<<"NO"<<endl;
 
return 0;
}
}