#include <iostream>
#include <clocale>

using namespace std;

int main(){
    setlocale(LC_ALL, "ru"); // для русских букв в консоли

    cout << "Загадайте число от 0 до 1024, я попытаюсь его угадать.\n"
         << "Отвечайте 1, если загаданное число больше,\n"
         << "-1, если меньше, и 0, если я угадаю.\n";

    int l = 0, r = 1024, c, answer;

    c = (l+r) / 2;
    cout << c << "? ";
    cin >> answer;

    if (answer == 1) {
        l = c;
    }
    if (answer == -1) {
        r = c;
    }

    c = (l+r) / 2;
    cout << c << "? ";
    cin >> answer;

    return 0;
}