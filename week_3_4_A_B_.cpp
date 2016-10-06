#include <iostream>
#include <cmath>
using namespace std;
int main () {  
 int a,d,N;
 cin>>N;
a=N%10;
d=N%100;
 
if (N>=0 && N<=1000) {
 
 if (a==1 && d!=11 )
{
cout<<N<<" "<<"bochka"<<endl;
return 0;
}
 if ((a<5 && a>1 && d!=12 && N!=1000) || (a<5 && a>1 && d!=13 && N!=1000) || (a<5 && a>1 && d!=14 && N!=1000)) {
  cout<<N<<" "<<"bochki"<<endl;
return 0;
}
 
cout<<N<<" "<<"bochek"<<endl;
return 0;
}
}