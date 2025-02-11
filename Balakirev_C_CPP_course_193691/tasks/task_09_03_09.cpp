/*Подвиг 7 (с повторением). Напишите программу. Объявите структуру с именем типа THING и следующими полями:

    id; идентификатор; тип unsigned int;
    name; название (строка); максимальная длина max_size_name = 50 (константа max_size_name задается в перечислении);
    weight; вес; тип double;
    price; цена; тип unsigned int.

В функции main объявите переменную с именем box типа THING. С помощью объекта cin выполните чтение из входного потока
данных, записанных в следующем формате:

<идентификатор> <название> <вес> <цена>

Выведите с помощью объекта cout в консоль структуру box в формате:

<название> <идентификатор>: <вес>, <цена>


Sample Input:

4 iphone 0.23 123450

Sample Output:

iphone 4: 0.23, 123450



*/

#include <iostream>

enum { max_size_name = 50 };
struct THING {
    unsigned int id;
    char name[max_size_name];
    double weight;
    unsigned int price;
};

int main() {
    struct THING box = {0, {0}, 0, 0};

    // здесь продолжайте программу

    std::cin >> box.id >> box.name >> box.weight >> box.price;
    std::cout << box.name << " " << box.id << ": " << box.weight << ", " << box.price << std::endl;

    // __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}