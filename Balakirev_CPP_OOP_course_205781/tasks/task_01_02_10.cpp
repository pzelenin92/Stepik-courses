/*
Подвиг 8. Объявите класс с именем Table, содержащий следующие элементы:

- приватные переменные:

    unsigned width, height, depth;

- публичные методы:

    void set_dims(unsigned width, unsigned height, unsigned depth); // заносит в поля width, height, depth переданные
значения unsigned get_width(); // возвращает значение поля width unsigned get_height(); // возвращает значение поля
height unsigned get_depth(); // возвращает значение поля depth

В функции main создайте три объекта класса Table в виде обычных переменных с именами t1, t2, t3.
Занесите в поля width, height, depth этих объектов значения:

t1: 10, 10, 5
t2: 7, 20, 7
t3: 12, 40, 6

P.S. На экран ничего выводить не нужно.


*/

#include <iostream>

// здесь объявляйте класс
class Table {
   private:
    unsigned width, height, depth;

   public:
    void set_dims(unsigned width, unsigned height, unsigned depth) {
        this->width = width;
        this->height = height;
        this->depth = depth;
    }  // заносит в поля width, height, depth переданные значения
    unsigned get_width() { return this->width; }    // возвращает значение поля width
    unsigned get_height() { return this->height; }  // возвращает значение поля height
    unsigned get_depth() { return this->depth; }    // возвращает значение поля depth
};

int main(void) {
    // здесь продолжайте функцию main
    Table t1, t2, t3;

    t1.set_dims(10, 10, 5);
    t2.set_dims(7, 20, 7);
    t3.set_dims(12, 40, 6);

    std::cout << "x: " << t2.get_depth() << ", y: " << t2.get_height() << ", z: " << t2.get_width() << std::endl;

    //__ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}