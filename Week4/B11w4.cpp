#include <iostream>
using namespace std;

string pigLatin(string word){
    string s ="ueoai";
    if (s.find (word[0]) != -1) return word+"way";
    else {
        char first = word[0];
        word.erase(0,1);
        return word+first+"ay";
    }
}
int main(){
    string word;
    cin >> word;
    cout << pigLatin(word);

}
