#include <iostream>
#include <cmath>
using namespace std;
int main () {
double  a,b,c,x1,x2,x4,D, f,g ;
cin>>a>>b>>c;
if (c==0 && a!=0 && b!=0) {
cout<<0<<endl;
cout<<-b/a<<endl;
return 0;
}
if ( b==0 && c==0) {
cout<<0<<endl;
return 0;
}
x4=sqrt(-c/a);
if (b==0 && c<0 ) {
cout<<x4<<endl;
cout<<-x4<<endl;
return 0;
}
 
D=(b*b)-(4*a*c);
f= - b+ ( sqrt (D));
g= - b- ( sqrt (D));
 
x1=f/(2*a);
x2=g/(2*a);
if  (D>0) {
cout<<x1<<endl;
cout<<x2<<endl;
return 0;
}
if ( D==0) {
cout<<x1<<endl;
return 0;
}
else
cout<<"  "<<endl;
return  0;
}
