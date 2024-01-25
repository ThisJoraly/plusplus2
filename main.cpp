#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    system("chcp 65001"); // я в силайоне работаю

    float factorial = 1;
    float result = 0;
    float x;
    float y = 1;
    char symbol;

    while (true)
    {
        cout << "Введите операцию (+, -, *, /, ^, s (sqrt), %, !). Для выхода введите q: ";
        cin >> symbol;

        if (symbol == 'q')
        {
            cout << " >> " << result << "\n";
            return 0;
        }

        cout << "Введите 1-е число: ";
        cin >> y;

        if (symbol != '%' && symbol != 's' && symbol != '!')
        {
            cout << "Введите 2-е число: ";
            cin >> x;
        }

        switch (symbol)
        {
            case '+':
                result += y + x;
                break;
            case '-':
                result += y - x;
                break;
            case '*':
                result += y * x;
                break;
            case '/':
                if (x = 0) {
                    cout << "Делить на ноль нельзя!\n";
                    break;
                }
                result += y / x;
                break;
            case '^':
                result += std::pow(y, x);
                break;
            case 's':
                result += std::sqrt(y);
                break;
            case '%':
                result += y / 100;
                break;
            case '!':
                for (int i = 1; i <= y; i++)
                    factorial *= i;
                result += factorial;
                factorial = 1;
                break;
            default:
                cout << "Неверный знак! \n";
                break;
        }

        cout << " >> " << result << "\n";
        result = 0;
    }
}