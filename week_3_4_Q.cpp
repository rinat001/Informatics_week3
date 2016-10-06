#include <iostream>
using namespace std;
int main () {
int k,q,r,f,g;
cin>>k;
 
if (k%3==0 ||k%5==0) {
cout<<"YES"<<endl;
return 0;
}
 q= k%5;
 r=k/5;
if (r>0 &&  (q==1||q==4))
{
cout<<"YES"<<endl;
return 0;
}
f=k%3;
g=k/3;
if ( g>0 && f==2) {
cout<<"YES"<<endl;
return 0;
}
else
cout<<"NO"<<endl;
return 0;
}
 