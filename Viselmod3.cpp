#include <iostream>
#include <string>
#include <Windows.h>
#include <cstdlib>
#include <ctime>

using namespace std;

void IgraKomp() {
    int att;
    string otgad;
    string word_list[10] = { " ������", "�����", "������", "������", "�����" , "�����", "�������", "������", "����", "������" };
    srand(time(NULL));
    string slovo = word_list[rand() % 11];

    cout << "��������� ������� ��������� �����! " << endl;
    cout << "����� ����������� ����� = " << slovo.size() << endl;

    cout << "������� ���������� ������� (1 - 50): ";
    cin >> att;
    while (att < 1 or att > 50) {
        cout << "������� ������� ������� ��� ������� ��������� ���������� �������!" << endl;
        cout << "������� ���������� ������� (1 - 50): ";
        cin >> att;
    }

    size_t sizik = slovo.size();
    for (int i = 0; i < sizik - 1; i++)
        otgad += '_';

    while (att) {
        int chet = 0;
        cout << otgad << endl;
        cout << "�������� ������� = " << att << endl;
        cout << "������� �����! ";
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
            cout << "�� �������� �����:  " << otgad << endl;
        else cout << "�� ���������! ���-�� ������� = 0";
    }
}

void IgraIgrok() {
    int att;
    string slovo, otgad;
    cout << "��������� �����! ����� � ����� ��������!" << endl;
    cin.ignore();
    getline(cin, slovo);
    system("cls");
    cout << "����� ����������� ����� = " << slovo.size() << endl;

    cout << "������� ���������� ������� (1 - 50): ";
    cin >> att;
    while (att < 1 or att > 50) {
        cout << "������� ������� ������� ��� ������� ��������� ���������� �������!" << endl;
        cout << "������� ���������� ������� (1 - 50): ";
        cin >> att;
    }

    size_t sizik = slovo.size();
    for (int i = 0; i < sizik - 1; i++)
        otgad += '_';

    while (att) {
        int chet = 0;
        cout << otgad << endl;
        cout << "�������� ������� = " << att << endl;
        cout << "������� �����! ";
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
    }

    if (att)
        cout << "�� �������� �����:  " << otgad << endl;
    else cout << "�� ���������! ���-�� ������� = 0";
}