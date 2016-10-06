#include <iostream>
using namespace std;
int main() {
 int k,n,m;
 double f;
cin>>k>>m>>n;
f=n/k;
if (k>n && m< 32000 && n< 32000 && k< 32000) {
cout<<2*m<<endl;
return 0;
}
if( n%k!=0 && m< 32000 && n< 32000 && k< 32000)
{
f=n/k;
 
cout<<(f+1)*2*m<<endl;
return 0;
}
else
 
cout<<f*2*m<<endl;
 
 
return 0;
}