#include <iostream>
using namespace std;
int main () {
int a,b,c,d,e,f,g,l;
cin>>a>>b>>c>>d;
e=c-a;
f=d-b;
if ( d<b)
{
g=c-1;
l=d+100;
e=g-a;
f=l-b;
cout<<e<<" ";
cout<<f<<endl;
return 0;
}
if (c<a)
{
cout<<"0"<<endl;
return 0;
}
cout<<e<<" ";
cout<<f<<endl;
return 0;
}
 
