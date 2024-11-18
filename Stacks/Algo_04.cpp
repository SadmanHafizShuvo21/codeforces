#include<bits/stdc++.h>
using namespace std;

// Function to check the precedence of operators
int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if(op=='^') return 3;
    return 0;
}

// Function to convert infix expression to postfix expression
string infixToPostfix(const string& infix) {
    stack<char> st;
    string postfix = "";

    for (char c : infix) {
        // If the scanned character is an operand, add it to the output string
        if (isalnum(c)) {
            postfix += c;
        }
        // If the scanned character is '(', push it to the stack
        else if (c == '(') {
            st.push(c);
        }
        // If the scanned character is ')', pop and output from the stack until '(' is encountered
        else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                postfix += st.top();
                st.pop();
            }
            st.pop(); // Remove '(' from the stack
        }
        // If an operator is scanned
        else {
            while (!st.empty() && precedence(c) <= precedence(st.top())) {
                postfix += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    // Pop all the remaining operators from the stack
    while (!st.empty()) {
        postfix += st.top();
        st.pop();
    }

    return postfix;
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    string infix = "A+(B*C-(D/E^F)*G)*H";
    cout << "Infix Expression: " << infix << endl;
    cout << "Postfix Expression: " << infixToPostfix(infix) << endl;
    return 0;
}
