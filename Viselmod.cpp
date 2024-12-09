#include <iostream>
#include <string>
#include <Windows.h>
#include <cstdlib>
#include <ctime>

using namespace std;

void IgraKomp() {
    int att;
    string otgad;
    string word_list[10] = { " яблоко", "груша", "золото", "дерево", "анлак" , "пгниу", "черешня", "ворона", "дота", "данные" };
    srand(time(NULL));
    string slovo = word_list[rand() % 11];

    cout << "Компьютер загадал случайное слово! " << endl;
    cout << "Длина загаданного слова = " << slovo.size() << endl;

    cout << "Введите количество попыток (1 - 50): ";
    cin >> att;
    while (att < 1 or att > 50) {
        cout << "Введено слишком большое или слишком маленькое количество попыток!" << endl;
        cout << "Введите количество попыток (1 - 50): ";
        cin >> att;
    }

    size_t sizik = slovo.size();
    for (int i = 0; i < sizik - 1; i++)
        otgad += '_';

    while (att) {
        int chet = 0;
        cout << otgad << endl;
        cout << "Осталось попыток = " << att << endl;
        cout << "Введите букву! ";
        char c;
        cin >> c;
        for (int i = 0; i < slovo.size(); i++) {
            if (slovo[i] == c) {
                otgad[i] = c;
                chet += 1;
            }
        }
        if (chet == 0) att--;
        if (otgad.find('_', 0) == -1) break;

        if (att)
            cout << "Вы отгадали слово:  " << otgad << endl;
        else cout << "Вы проиграли! Кол-во попыток = 0";
    }
}
