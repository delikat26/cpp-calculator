#include <iostream>
#include <clocale>

using namespace std;

int main() 
{
    cout << "shablon (2 + 2)" << endl;
    cout << "operation | + | - | * | / | % | ^ |" << endl << endl << endl;
    while (true) 
    {
        float num1, num2, res = 0;
        char math;

        cout << "Vedite primer: ";
        cin >> num1 >> math >> num2;

        switch (math) 
        {
        case '+': res = num1 + num2; break;
        case '-': res = num1 - num2; break;
        case '*': res = num1 * num2; break;
        case '/':
            if (num2 != 0) 
            {
                res = num1 / num2;
            }
            else 
            {
                cout << "Error: na 0 nelzy !" << endl;
                continue;
            }
            break;
        case '%':
            if ((int)num2 != 0) 
            {
                res = (int)num1 % (int)num2;
            }
            else 
            {
                cout << "Error: na 0 nelzy !" << endl;
                continue;
            }
            break;
        case '^':
            res = 1;
            for (int i = 0; i < num2; i++) 
            {
                res *= num1;
            }
            break;
        default:
            cout << "Unknown operation !" << endl;
            continue;
        }
        cout << "Result: " << res << endl;
    }

    return 0;
}