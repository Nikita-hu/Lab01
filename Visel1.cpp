#include <iostream>
#include <string>
#include <Windows.h>
#include <cstdlib>
#include <ctime>
#include "Visel.h"
using namespace std;


int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "");

    cout << "Игра в 'Виселицу' " << endl;
    int mode;

    cout << " Веберите режим игры! ";
    cout << " Введите: " << endl;
    cout << " 1 - компьютер загадывает слово " << endl;
    cout << " 2 - другой человек отгадывает слово " << endl;
    cin >> mode;
    while (mode < 1 or mode > 3) {
        cout << "Введено неверное число!" << endl;
        cout << "Введите 1 или 2, в замвисимости от желаемого режима игры: ";
        cin >> mode;
    }

    if (mode == 2) IgraIgrok();
    if (mode == 1) IgraKomp();
        return 0;
    }
