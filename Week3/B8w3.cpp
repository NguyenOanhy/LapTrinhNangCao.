#include <iostream>
#include <string>
using namespace std;

int main () {
       string s;
       getline (cin,s);
       int i = 0;
       while (i < s.length()) {
           if (s.substr(i,4) != "Zues" || i > s.length() ) {
           cout << s[i] ;
           i++;
           }
            else {
               cout << "Zeus";
               i=i+4;
              };
       };
       return 0;
}
