#include <iostream>
#include <string>
#include <stack>


using namespace std;
bool balancedParenthesis;

void reverseString(string &str) {
    int n = str.length();
    for (int i = 0; i < n / 2; ++i) {
        swap(str[i], str[n - i - 1]);
    }
}

int main() {
    string s="Sahibnoor Singh";
    reverseString(s);
    cout<<s;
    return 0;
}