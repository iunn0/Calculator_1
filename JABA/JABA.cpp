#include <iostream>
using namespace std;

class Calculator {
private:
    int num1, num2;
    char res;
public:
    Calculator(int& n1, int& n2, char& re) {
        num1 = n1;
        num2 = n2;
        res = re;
    }

    void doMath() {
        switch (res) {
        case '+':
            cout << num1 + num2;
            break;
        case '-':
            cout << num1 - num2;
            break;
        case '*':
            cout << (float)num1 * num2;
            break;
        case '/':
            cout << (float)num1 / num2;
            break;
        }
    }
};

int main() {
    int x, y = 0;
    char sym;
    cout << "Print first num :  " << endl;
    cin >> x;
    cout << "+ - * /";

    cin >> sym;

    cout << "Print second num :  " << endl;
    while (y == 0 && sym == '/') {
        cout << "Cannot be 0" << endl;
        cin >> y;
    }

    if (sym == '+' || sym == '-' || sym == '*') {
        cin >> y;
    }
    else if (sym != '/') {
        cout << "Wrong operation";
        return 0;
    }

    Calculator calc(x, y, sym);

    calc.doMath();

    return 0;
}
