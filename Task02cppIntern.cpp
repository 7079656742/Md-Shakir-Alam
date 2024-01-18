#include <iostream>
using namespace std;

int main()
{
    float num1, num2, result;
    char operation;
    // Asking input from the user numbers and operation
    cout << "Enter 1st number: " << endl;
    cin >> num1;
    cout << "Enter 2nd number: " << endl;
    cin >> num2;
    cout << "Enter the performing operation(+,-,*,/): " << endl;
    cin >> operation;
    // Performing calculation based on the chosen operation
    switch (operation)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
        }
        else
        {
            cout << "Error! invalid result i.e not defined can't be defined by 0." << endl;
            return 1; // Exit with an Error code     
        }
        break;
    default:
        cout << "Error!invalid opation." << endl;
        return 1; // Exit with an Error code
    }
    // Result Declaration
    cout << "Result: " << result << endl;
    return 0;
}