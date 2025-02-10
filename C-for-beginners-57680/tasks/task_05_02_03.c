/*
Пример: Шифр Цезаря
*/

#include <stdio.h>

#define LEN ('z' - 'a' + 1)

// возвращает букву letter, закодированную шифром Цезаря со сдвигом shift
int code(int letter, int shift) { return 'a' + (letter - 'a' + shift) % LEN; }

int my_code(int letter, int shift) {
    int res;
    if (shift > 0) {
        res = 'a' + (letter - 'a' + shift) % LEN;
    } else {
        res = 'z' - ('z' - letter - shift) % LEN;
    }
    return res;
}

int main() {
    // читаем по символу
    char c1;    // ASCII-коды символов
    int shift;  // сдвиг шифра Цезаря

    // читаем символы и сдвиг
    scanf("%c", &c1);
    scanf("%d", &shift);

#ifdef ORIGINAL
    // кодируем символы
    c1 = code(c1, shift);

    // печатаем символы
    printf("%c\n", c1);
#endif

#ifdef MY_TEST
    // кодируем символы
    c1 = my_code(c1, shift);

    // печатаем символы
    printf("%c\n", c1);
#endif

    return 0;
}