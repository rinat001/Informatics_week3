
#include <iostream>
using namespace std;
int main ()
 {
  int a, b, c, d;
  cin>>a>>b>>c>>d;
if ((a+d==c+b) ||  abs( a-c)==abs(b-d) || a==c || b==d)
{
cout << "YES"<<endl;
}
 
else
 
cout<< "NO"<<endl;
 
 
 return 0;
 }
 