#include <iostream>
#include <cmath>
using namespace std;

int main () {
int a,b;

int x;

cin>>a>>b;

x=(-b)/a;
if(a == 0 && b==0 ){
    cout << "INF"; return 0;
    }
if(b % a != 0 || a==0)
{
    cout <<"NO";
    return 0;
}
cout <<x;
return 0;
}
