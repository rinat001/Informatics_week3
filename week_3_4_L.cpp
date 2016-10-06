#include <iostream>
#include <cmath>
using namespace std;
int main()
 {
int m, n , k;
 
 
cin>>m>>n>>k;
 
if ( (k<30000 && k<n*m  && k%m == 0) || ( k<30000 && k<m*n &&  k%n == 0.0) )
 
{
cout<<"YES"<<endl;
}
 
else if ( k>=n*m)
 {
cout<< "NO"<<endl;
 
 
}
 
                                   
 else
cout<<"NO"<<endl;
 
 
return 0;
}
