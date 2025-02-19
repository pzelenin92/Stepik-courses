/*
Подвиг 3. Продолжите программу, в которой объявлен класс Point:

class Point {
    int x, y;
public:
    int get_x() { return x; }
    int get_y() { return y; }
};

Добавьте в этот класс конструктор(ы) так, чтобы были возможны следующие команды:

Point p1 = "10 5"; // x=10, y=5
Point p2 = "-8.7 2.3"; // x=-8, y=2
Point p3 = "14.2 -5.8 point data"; // x=14, y=-5

То есть, из строки выбираются первые два значения, записанные через пробел(ы) и приводятся к типу int. Если данные оказываются не числовыми, то подставлять значение 0. Например:

Point p_1 = "ab8 2.3"; // x=0, y=2
Point p_2 = "ab8 2cd"; // x=0, y=2 (cd отбрасывается)

Подсказка: для преобразования строк в числа можно использовать функции atoi, atof и другие.
*/

#include <string.h>
#include <iostream>

class Point {
    int x, y;

   public:
    Point(const char* str) {
        char buffer[100];
        strncpy(buffer, str, sizeof(buffer) - 1);
        buffer[sizeof(buffer) - 1] = '\0';

        char* token = strtok(buffer, " ");

        x = atoi(token);
        token = strtok(NULL, " ");
        y = atoi(token);
    }
    int get_x() { return x; }
    int get_y() { return y; }
};

int main(void) {
    // char str[100] = "-10 20";
    // char* token = strtok(str, " ");

    // while (token != NULL) {
    //     std::cout << atoi(token) << std::endl;
    //     token = strtok(NULL, " - ");
    // }

    Point p1 = "10 5";
    Point p2 = "-8.7 2.3";
    Point p3 = "14.2 -5.8 point data";
    Point p4 = "ab8 2.3";
    Point p5 = "ab8 2cd";

    printf("p1: (%d, %d)\n", p1.get_x(), p1.get_y());
    printf("p2: (%d, %d)\n", p2.get_x(), p2.get_y());
    printf("p3: (%d, %d)\n", p3.get_x(), p3.get_y());
    printf("p4: (%d, %d)\n", p4.get_x(), p4.get_y());
    printf("p5: (%d, %d)\n", p5.get_x(), p5.get_y());

    // for (int i = 0; i < poly.get_total(); i++) {
    //     std::cout << poly.get_coords()[i].x << " " << poly.get_coords()[i].y << std::endl;
    // }

    //__ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)

    return 0;
}