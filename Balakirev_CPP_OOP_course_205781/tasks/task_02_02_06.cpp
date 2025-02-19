/*
Подвиг 4. Продолжите программу, в которой объявлен класс Vector3D:

class Vector3D {
    int x, y, z;
public:
    void get_coords(int& a, int& b, int& c)
        { a = x; b = y; c = z; }
};

Добавьте в этот класс конструкторы так, чтобы были возможны следующие команды:

Vector3D v1 = "1 2 -5"; // x=1, y=2, z=-5
Vector3D v2 = "1.5 2.2 -5.7"; // x=1, y=2, z=-5
Vector3D v3 = "1.5 2.2 -5.7 data"; // x=1, y=2, z=-5

int coords_1[] = {2, 4, 7}, coords_2[] = {5, 3, 1, 0, 20};
Vector3D v4 = coords_1; // x=2, y=4, z=7
Vector3D v5 = coords_2; // x=5, y=3, z=1

То есть, на вход может поступать или строка или целочисленный массив типа int. Из строки нужно выбирать первые три
значения, записанные через пробел(ы) и приводить их к типу int. Если данные оказываются не числовыми, то подставлять
значение 0. Из целочисленного массива выбирать первые три числа типа int.

Подсказка: для преобразования строк в числа можно использовать функции atoi, atof и другие.

P.S. В программе требуется только объявить класс Vector3D, функцию main не прописывать. На экран ничего выводить не
нужно.
*/

#include <string.h>

#include <iostream>

class Vector3D {
    int x, y, z;

   public:
    Vector3D(const char* str) {
        int a, b, c;
        float a1, b1, c1;

        if (sscanf(str, "%d %d %d", &a, &b, &c) == 3) {
            x = a;
            y = b;
            z = c;
        } else if (sscanf(str, "%f %f %f", &a1, &b1, &c1) == 3) {
            x = a1;
            y = b1;
            z = c1;
        }
    }
    Vector3D(const int* arr) : x(arr[0]), y(arr[1]), z(arr[2]) {}
    void get_coords(int& a, int& b, int& c) {
        a = x;
        b = y;
        c = z;
    }
};

int main(void) {
    Vector3D v1 = "1 2 -5";             // x=1, y=2, z=-5
    Vector3D v2 = "1.5 2.2 -5.7";       // x=1, y=2, z=-5
    Vector3D v3 = "1.5 2.2 -5.7 data";  // x=1, y=2, z=-5

    int coords_1[] = {2, 4, 7}, coords_2[] = {5, 3, 1, 0, 20};
    Vector3D v4 = coords_1;  // x=2, y=4, z=7
    Vector3D v5 = coords_2;  // x=5, y=3, z=1

    int a, b, c;
    v1.get_coords(a, b, c);
    printf("%d %d %d\n", a, b, c);

    int a1, b1, c1;
    v2.get_coords(a1, b1, c1);
    printf("%d %d %d\n", a, b, c);
    v3.get_coords(a, b, c);
    printf("%d %d %d\n", a, b, c);

    v4.get_coords(a, b, c);
    printf("%d %d %d\n", a, b, c);
    v5.get_coords(a, b, c);
    printf("%d %d %d\n", a, b, c);

    // for (int i = 0; i < poly.get_total(); i++) {
    //     std::cout << poly.get_coords()[i].x << " " << poly.get_coords()[i].y << std::endl;
    // }

    //__ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)

    return 0;
}