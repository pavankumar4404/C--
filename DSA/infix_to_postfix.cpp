#include <iostream>
#include <stack>
#include <string>
using namespace std;

// function to return the precedence of the operator
int precedence(char op) {
    if (op == '+' || op == '-') {
        return 1;
    }
    if (op == '*' || op == '/') {
        return 2;
    }
    if (op == '^') {
        return 3;
    }
    return 0;
}

// function to convert infix expression to postfix expression
string infixToPostfix(string infix) {
    stack<char> s; // stack to hold operators
    string postfix; // string to hold postfix expression

    // iterate through each character in the infix expression
    for (int i = 0; i < infix.length(); i++) {
        char c = infix[i];
        // if the character is an operand, append it to the postfix expression
        if (isalnum(c)) {
            postfix += c;
        }
        // if the character is an opening parenthesis, push it onto the stack
        else if (c == '(') {
            s.push(c);
        }
        // if the character is a closing parenthesis, pop operators from the stack and append them to the postfix expression until an opening parenthesis is found
        else if (c == ')') {
            while (!s.empty() && s.top() != '(') {
                postfix += s.top();
                s.pop();
            }
            s.pop(); // remove the opening parenthesis from the stack
        }
        // if the character is an operator, pop operators from the stack and append them to the 
        // postfix expression if they have higher or equal precedence than the current operator, then push the current operator onto the stack
        else {
            while (!s.empty() && precedence(c) <= precedence(s.top())) {
                postfix += s.top();
                s.pop();
            }
            s.push(c); // push the current operator onto the stack
        }
    }
    // pop any remaining operators from the stack and append them to the postfix expression
    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }
    return postfix;
}

int main() {
    string infix, postfix;
    cout << "Enter an infix expression: ";
    cin >> infix;
    postfix = infixToPostfix(infix);
    cout << "Postfix expression: " << postfix << endl;
    return 0;
}
