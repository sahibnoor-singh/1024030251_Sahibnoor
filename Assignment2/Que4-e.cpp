#include <iostream>
#include <string>
using namespace std;
void upperToLower(string &s) {
    for (int i = 0; i < s.size(); i++) {
        if ((int)s[i] >= 65 && (int)s[i] <= 90) {
            s[i] = (char)((int)s[i] + 32);
        }
    }
    return;
}
int main() {
    string s="abcdefABCDEF";
    upperToLower(s);
    cout<<s;
    return 0;
}
