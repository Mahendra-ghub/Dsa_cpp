#include <iostream>
using namespace std;

int main() {
    char expression[50]; // declaration of char type array to store expression
    int x = 0, i = 0; // declaration of two integer type variables, 'x' for counting '(' and ')' pairs, 'i' for array traversal
    cout << "Enter an expression: ";
    cin >> expression; // input expression from the user

    // Scanning the expression until we reach the end of the expression.
    while (expression[i] != '\0') {
        // Condition to check if the character is '('
        if (expression[i] == '(') {
            x++; // incrementing 'x' variable
        }
        // Condition to check if the character is ')'
        else if (expression[i] == ')') {
            x--; // decrementing 'x' variable
            // If 'x' becomes negative, it means ')' occurs before '(',
            // which makes the expression unbalanced.
            if (x < 0)
                break;
        }
        i++; // Move to the next character in the expression
    }

    // After traversing the entire expression, if 'x' is 0, it means all '(' have been matched with ')'
    if (x == 0) {
        cout << "Expression is balanced" << endl;
    } else {
        cout << "Expression is unbalanced" << endl;
    }

    return 0;
}
