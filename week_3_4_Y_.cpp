#include <iostream>
using namespace std;
int main() {
int N,a,b;
double c,d;
cin>>N;
a=N/60;
b=N%60;
c=b/10;
d=b%10;
if (N>60  && d>5) {                                                            
cout<<0<<" "<<c+1<<" "<<a<<endl;
return 0;
}
if ( N>60 && d<5) {
cout<<d<<" " <<0<<" " <<a<< endl;
return 0;
 
}
if (N<=60 && c>=3){
cout<< 0 <<" "<<0<<" "<<a+1<<endl;
return 0;
}
if ( N<=60 && c<3) {
cout<<d <<" " <<c<<" "<<0<<endl;
return 0;
}
else
cout<<d<<" "<<c<<" "<<a<<endl;
return 0;
}
 
