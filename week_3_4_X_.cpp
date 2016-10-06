#include <iostream>
 
using namespace std;
int main () {
 
int n;
cin>>n;
if (n==1 || n==21 || n==31 ||n==41 || n==51 || n==61 || n==71 || n==81 || n==91) {
cout<<n<<" "<< "korova"<<endl;
return 0;
}
if(( n>1 && n<5) || (n>21 && n<25) || (n>31 && n<35) || (n>41 && n<45) || (n>51 && n<55) || (n>61 && n<65) || (n>71 && n<75) || (n>81 && n<85) ||( n>91 && n<95) ) {
 
cout<<n<<" "<< " korovy"<<endl;
return 0;
}
else
cout<<n<<" "<< "korov"<<endl;
 
return 0;
}
 