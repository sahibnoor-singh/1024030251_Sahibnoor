#include <iostream>
#include <string>
#include <stack>

using namespace std;

string reverseString(string s) {
    stack<char> st;

    for (int i = 0; i < s.length(); i++) {
        st.push(s[i]);
    }

    for (int i = 0; i < s.length(); i++) {
        s[i] = st.top();
        st.pop();
    }
    
    return s;
}

int main() {
    string s = "DataStructure";
    
    cout << "Original: " << s << endl;
    
    s = reverseString(s);
    
    cout << "Reversed: " << s << endl;
    
    return 0;
}
