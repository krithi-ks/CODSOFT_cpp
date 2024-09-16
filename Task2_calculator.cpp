// C++ PROGRAM - CODSOFT
// TASK 2 - SIMPLE CALCULATOR

#include <iostream>
using namespace std;

int A, B;

// Funtion to get inputs from the user
void inputNum()
{
    cout << "\tEnter the value of A: ";
    cin >> A;
    cout << "\tEnter the value of B: ";
    cin >> B;
}

int main (void)
{
    char opr;

    // Printing the list of operations
    cout << "\nArithmetic operation:" << endl; 
    cout << "\t(+)Addition\n\t(-)Subtraction\n\t(*)Multiplication\n\t(/)Division" << endl;

    // Prompting user to choose one operator
    cout << "Choose any operator (+, -, *, /) to perform arithmetic operation: ";
    cin >> opr;

    // Arithmetic operation
    switch(opr)
    {
        // Addition
        case '+' : 
            cout << "\nOperation: ADDITION" << endl;
            inputNum();
            cout << "Addition of " << A << " and " << B << " = " << A + B;
            break;

        // Subtraction
        case '-' :
            cout << "\nOperation: SUBTRACTION" << endl;
            inputNum();
            cout << "Subtraction of " << A << " and " << B << " = " << A - B;
            break;

        // Multiplication
        case '*' :
            cout << "\nOperation: MULTIPLICATION\n";
            inputNum();
            cout << "Multiplication of " << A << " and " << B << " = " << A * B;
            break;

        // Division
        case '/' :
            cout << "\nOperation: DIVISION\n";
            inputNum();
            if (B != 0)
                cout << "Division of " << A << " and " << B << " = " << A / B;
            else
                cout << "Error!";
            break;

        // Invalid operator
        default : 
            cout << "Enter valid operator!";
    } 
}