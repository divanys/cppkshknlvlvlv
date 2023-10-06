//
// Created by divan on 10/6/23.
//
#include <iostream>

using namespace std;

string encrypt(string text, int x) {
    string result;
    for (char c: text) {
        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            c = (c - base + x) % 26 + base;
        }
        result += c;
    }
    return result;
}

string decrypt(string text, int x) {
    return encrypt(text, 26 - x);
}

int main() {
    string text;
    char operation;
    int x;

    do {
        cout << "\nВыберите операцию:\ne - шифрование\nd - дешифрование\nq - выход" << endl;

        cin >> operation;
        cin.get();

        if (operation == 'd') {
            cout << "Введите количество букав, на которое сдвигаем: ";
            cin >> x;
            cin.get();

            cout << "Введите текст для расшифровки: ";
            cin >> text;

            cout << "Вывод: " << decrypt(text, x);
        } else if (operation == 'e') {
            cout << "Введите количество букав, на которое сдвигаем: ";
            cin >> x;
            cin.get();

            cout << "Введите текст для зашифровки: ";
            cin >> text;

            cout << "Вывод: " << encrypt(text, x);
        } else if (operation != 'e' && operation != 'd' && operation != 'q') {
            cout << "Неверная операция. Попробуйте еще раз." << endl;
            continue;
        }
    } while (operation != 'q');


}