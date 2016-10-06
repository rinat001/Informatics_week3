#include <iostream>
using namespace std;
int main () {
int a,b,c;
cin>>a>>b>>c;
 
if ( a==b && b==c) {
cout<< 3<< endl;
return 0;
}
if ( a==b || b==c || a ==c ) {
cout<< 2<< endl;
return 0;
}
else
cout <<0<< endl;
return 0;
}