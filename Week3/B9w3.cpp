#include <iostream>
#include <string>
using namespace std;
int main () {
    string s;
    getline (cin,s);
    int count = 0, i;
    for (i = 0 ; i < s.length() ; i++) {
        if (s[i] ==' ') {
            cout << s[i];
            count++;}
        else break;
    }
    i = count;
    while (i < s.length()) {
        if (s[i] != ' ') {
		cout << s[i]; i++;}
        else {
            while (s[i] == ' ') {i++ ;}
            cout <<" ";
        }
    }
    return 0;
}
