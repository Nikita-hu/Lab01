#include <iostream>
#include <string>
#include <Windows.h>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
  SetConsoleCP(1251);
  SetConsoleOutputCP(1251);
  setlocale(LC_ALL, "");

  cout << "Игра в 'Виселицу' " << endl;
  string slovo, otgad = "_";
  int att, mode;
  
  cout << " Веберите режим игры! ";
  cout << " Введите: " << endl;
  //cout << " 3 - компьютер отгадывает слово " << endl;
  cout << " 1 - компьютер загадывает слово " << endl;
  cout << " 2 - другой человек отгадывает слово " << endl;
  cin >> mode;
  while (mode < 1 or mode > 3) {
      cout << "Введено неверное число!" << endl;
      cout << "Введите 1 или 2, в замвисимости от желаемого режима игры: ";
      cin >> mode;
  }

  if (mode == 2) {
      cout << "Загадайте слово! Буквы в одном регистре!" << endl;
      cin.ignore();
      getline(cin, slovo);

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
      }

      if (att)
          cout << "Вы отгадали слово:  " << otgad << endl;
      else cout << "Вы проиграли! Кол-во попыток = 0";
      return 0;
  }
  if (mode == 1) {
      string word_list[10] = { " яблоко", "груша", "золото", "дерево", "анлак" , "пгниу", "черешня", "ворона", "дота", "данные" };
      srand(time(NULL));
      slovo = word_list[rand() % 11];

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
      }

      if (att)
          cout << "Вы отгадали слово:  " << otgad << endl;
      else cout << "Вы проиграли! Кол-во попыток = 0";
      return 0;
  }
  
}