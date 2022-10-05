#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Your favourite calculator app" << endl;
    while (true)
    {
        string expression;
        cout << "enter your expression (exit to terminate program): ";
        getline(cin, expression);
        if (expression == "exit")
        {
            break;
        }

        string firstNumber = "";
        string secondNumber = "";
        bool firstPartComplete = false;
        char op;
        for (size_t i = 0; i < expression.length(); i++)
        {
            char c = expression[i];
            if (c == '+' ||
                c == '-' ||
                c == '*' ||
                c == '/')
            {
                op = c;
                firstPartComplete = true;
            }
            else
            {
                if (!firstPartComplete)
                {
                    firstNumber += c;
                }
                else
                {
                    secondNumber += c;
                }
            }
        }

        if (op == '+')
        {
            int result = stoi(firstNumber) + stoi(secondNumber);
            cout << "Sum of " << firstNumber << " and " << secondNumber << ": " << result;
        }
        else if (op == '-')
        {
            int result = stoi(firstNumber) - stoi(secondNumber);
            cout << "Sub between " << firstNumber << " and " << secondNumber << ": " << result;
        }
        else if (op == '*')
        {
            int result = stoi(firstNumber) * stoi(secondNumber);
            cout << "Multiplication of " << firstNumber << " and " << secondNumber << ": " << result;
        }
        else if (op == '/')
        {
            int result = stoi(firstNumber) / stoi(secondNumber);
            cout << "Div of " << firstNumber << " and " << secondNumber << ": " << result << "; ";
            int reminder = stoi(firstNumber) % stoi(secondNumber);
            cout << "Reminder: " << reminder;
        }

        cout << endl;
    }

    return 0;
}