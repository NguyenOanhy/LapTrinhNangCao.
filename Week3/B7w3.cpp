#include <iostream>
#include <string>
using namespace std;

int main () {
    int num = 0, alpha = 0, other = 0;
    string s;
    getline (cin,s);
    for (int i = 0; i < s.length(); i++ ) {
        if ('a' <= s[i] && s[i] <= 'z' || 'A' <= s[i] && s[i] <= 'Z')  alpha++;
        else if ('0' <= s[i] && s[i] <= '9') num++;
        else other ++;
    }
    cout << alpha <<" "<< num <<" "<<other;
}
