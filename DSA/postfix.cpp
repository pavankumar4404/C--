#include <iostream>
#include <stack>
#include <string>
using namespace std;

// function to evaluate a postfix expression
int evaluatePostfix(string expression) {
    stack<int> s; // create a stack to hold operands

    // scan the expression from left to right
    for (int i = 0; i < expression.length(); i++) {
        // if the current character is a digit, push it onto the stack
        if (isdigit(expression[i])) {
            s.push(expression[i] - '0'); // convert the character to an integer
        }
        // if the current character is an operator, pop two operands from the stack and apply the operator
        else {
            int operand2 = s.top(); s.pop();
            int operand1 = s.top(); s.pop();
            switch (expression[i]) {
                case '+': s.push(operand1 + operand2); break;
                case '-': s.push(operand1 - operand2); break;
                case '*': s.push(operand1 * operand2); break;
                case '/': s.push(operand1 / operand2); break;
                case '%': s.push(operand1 % operand2); break;
            }
        }
    }

    // the final result is the only element left on the stack
    return s.top();
}

int main() {
    // evaluate some postfix expressions
    cout << evaluatePostfix("23+4*") << endl; // should output 20
    cout << evaluatePostfix("562+*66+4/-") << endl; // should output 37

    return 0;
}
