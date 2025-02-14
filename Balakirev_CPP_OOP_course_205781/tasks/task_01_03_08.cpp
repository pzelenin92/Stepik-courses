/*
Подвиг 6. Объявите класс с именем Goods, содержащий следующие элементы:

- публичные переменные:

    std::string name;  // название
    double weight;  // вес
    int price;   // цена

- публичные методы:

    const std::string& get_name(); // возвращает ссылку на поле name
    double get_weight(); // возвращает значение поля weight
    int get_price(); // возвращает значение поля price

В функции main создайте два объекта класса Goods в виде обычных переменных с именами book и toy.
В поля этих объектов занесите следующие данные:

book: name="Основы ООП"; weight=234.5; price=2000
toy: name="Oculus Quest 3"; weight=204.6; price=80000

P.S. На экран ничего выводить не нужно.

*/

#include <iostream>

// здесь объявляйте класс
class Goods {
   public:
    std::string name;  // название
    double weight;     // вес
    int price;         // цена
   public:
    const std::string& get_name() { return this->name; }  // возвращает ссылку на поле name
    double get_weight() { return this->weight; }          // возвращает значение поля weight
    int get_price() { return this->price; }               // возвращает значение поля price
};

int main(void) {
    // здесь продолжайте функцию main
    Goods book, toy;

    book.name = "Основы ООП";
    book.weight = 234.5;
    book.price = 2000;
    toy.name = "Oculus Quest 3";
    toy.weight = 204.6;
    toy.price = 80000;

    // std::cout << "hh: " << hh << ", mm: " << mm << ", ss: " << ss << std::endl;
    // printf("%02u:%02u:%02u\n", hh, mm, ss);

    //__ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}