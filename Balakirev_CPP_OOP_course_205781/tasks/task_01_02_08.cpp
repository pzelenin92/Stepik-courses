/*
Подвиг 6. Объявите класс с именем CartData, содержащий следующие элементы:

- приватные переменные:

    unsigned long id;
    char name[100];
    unsigned price;
    double weight;

- публичные методы:

    void get_data(unsigned long &id, unsigned &price, double &weight); // возвращает через ссылки перечисленные поля
    char* get_name(); // возвращает наименование товара (поле name)
    void set_data(unsigned long id, const char* name, unsigned price, double weight); // заносит в перечисленные поля
переданные значения

Методы в этом и последующих подвигах должны быть с соответствующими реализациями.

В функции main создайте объект класса CartData в виде переменной с именем item (не указатель). Занесите в его поля
(переменные) следующие данные:

    id: 10
    name: "Toy"
    price: 2000
    weight: 5.45


*/

#include <string.h>

#include <iostream>

// здесь объявляйте класс
class CartData {
   private:
    unsigned long id;
    char name[100];
    unsigned price;
    double weight;

   public:
    void get_data(unsigned long &id, unsigned &price, double &weight) {
        id = this->id;
        price = this->price;
        weight = this->weight;
    }  // возвращает через ссылки перечисленные поля
    char *get_name() { return this->name; }  // возвращает наименование товара (поле name)
    void set_data(unsigned long id, const char *name, unsigned price, double weight) {
        this->id = id;
        strcpy(this->name, name);
        this->price = price;
        this->weight = weight;
    }  // заносит в перечисленные поля переданные значения
};

int main(void) {
    // здесь продолжайте функцию main
    CartData item;

    item.set_data(10, "Toy", 2000, 5.45);

    //__ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}