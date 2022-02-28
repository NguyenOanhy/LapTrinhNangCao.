#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float a, b, c;

int main(){

    cin>> a >> b >> c;
    if (((abs(b-c)<a) && (a<b+c)) &&
       ((abs(b-a)<c) && (c<b+a)) &&
       ((abs(a-c)<b) && (b<a+c)))  {
           float p = (a+b+c)/2;
           float DtTamgiac = (p*(p-a)*(p-b)*(p-c));
           cout<< fixed << setprecision(2)<< sqrt (DtTamgiac);
    }
    else cout << "invalid";
    return 0;
}
