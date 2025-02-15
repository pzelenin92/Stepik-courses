/*
Подвиг 8. Продолжите программу, в которой уже объявлена структура Point. Объявите после нее класс с именем Line,
содержащий следующие элементы:

- приватные переменные:

    short x0, y0, x1, y1; // координаты начала (x0, y0) и конца (x1, y1) линии

- публичные методы:

    void set_coords(short a, short b, short c, short d); // заносит в поля x0, y0, x1, y1 переданные значения
    void set_coords(Point sp, Point ep); // заносит в поля x0, y0, x1, y1 переданные значения типа Point
    Point get_start(); // возвращает координаты (x0, y0) в виде структуры Point
    Point get_end(); // возвращает координаты (x1, y1) в виде структуры Point

В классе Line объявите конструкторы так, чтобы объекты можно было создавать командами:

Line ln; // все координаты должны быть равны нулю
Line ln_1(a, b, c, d); // a, b, c, d - целые числа типа short (заносятся в соответствующие поля)
Line ln_2(sp, ep); // sp, ep - координаты начала и конца (тип Point)

В функции main создайте два объекта класса Line с помощью оператора new с указателями ptr_ln1, ptr_ln2 на созданные
объекты. В первый объект (при создании) передать значения переменных a, b, c, d (уже объявлены в функции main). Во
второй объект (при создании) передать значения переменных sp, ep (уже объявлены в функции main).

Выведите в консоль координаты объектов ptr_ln1, ptr_ln2 в одну строчку через пробел (сначала для первого объекта, а
следом - для второго) в формате:

x0 y0 x1 y1 x0 y0 x1 y1

В конце функции main не забудьте освободить ранее выделенную память.

Sample Input:
1 2 10 20 -5 -10 -7 -100

Sample Output:
1 2 10 20 -5 -10 -7 -100
*/

#include <iostream>

struct Point {
    short x, y;
};

class Line {
   private:
    short x0, y0, x1, y1;  // координаты начала (x0, y0) и конца (x1, y1) линии
   public:
    // consturctor
    // Line(){};
    Line(short a = 0, short b = 0, short c = 0, short d = 0) : x0(a), y0(b), x1(c), y1(d) {}
    Line(struct Point sp, struct Point ep) : x0(sp.x), y0(sp.y), x1(ep.x), y1(ep.y) {}
    // methods
    void set_coords(short a, short b, short c, short d) {
        this->x0 = a;
        this->y0 = b;
        this->x1 = c;
        this->y1 = d;
    }  // заносит в поля x0, y0, x1, y1 переданные значения
    void set_coords(Point sp, Point ep) {
        this->x0 = sp.x;
        this->y0 = sp.y;
        this->x1 = ep.x;
        this->y1 = ep.y;
    }  // заносит в поля x0, y0, x1, y1 переданные значения типа Point
    Point get_start() {
        Point sp = {this->x0, this->y0};
        return sp;
    }  // возвращает координаты (x0, y0) в виде структуры Point
    Point get_end() {
        Point ep = {this->x1, this->y1};
        return ep;
    }  // возвращает координаты (x1, y1) в виде структуры Point
};

int main(void) {
    Point sp, ep;
    short a, b, c, d;

    std::cin >> a >> b >> c >> d;
    std::cin >> sp.x >> sp.y >> ep.x >> ep.y;

    Line* ptr_ln1 = new Line(a, b, c, d);
    Line* ptr_ln2 = new Line(sp, ep);

    std::cout << ptr_ln1->get_start().x << " " << ptr_ln1->get_start().y << " " << ptr_ln1->get_end().x << " "
              << ptr_ln1->get_end().y << " " << ptr_ln2->get_start().x << " " << ptr_ln2->get_start().y << " "
              << ptr_ln2->get_end().x << " " << ptr_ln2->get_end().y << std::endl;

    //__ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)

    delete ptr_ln1;
    delete ptr_ln2;

    return 0;
}