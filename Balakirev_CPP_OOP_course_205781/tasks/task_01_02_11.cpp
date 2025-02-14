/*
Подвиг 9. Объявите класс с именем Clock, содержащий следующие элементы:

- приватные переменные:

    unsigned time_current; // текущее время в секундах

- публичные методы:

    void set_time(unsigned tm); // заносит в поле time_current значение tm
    unsigned get_hours(); // возвращает количество часов в time_current
    unsigned get_minutes(); // возвращает количество минут в time_current (за вычетом часов)
    unsigned get_seconds(); // возвращает количество секунд в time_current (за вычетом часов и минут)

Например, для time_current = 12301, имеем:

hours = 3, minutes = 25, seconds = 1

В функции main создайте объект класса Clock с помощью оператора new с указателем ptr_cl на созданный объект.
 Прочитайте из входного потока текущее значение в секундах с помощью команды:

unsigned tm;
cin >> tm;

Занесите это время в объект ptr_cl, прочитайте количество часов, минут и секунд и выведите в консоль время в формате:

hh:mm:ss

где hh - часы; mm - минуты; ss - секунды. Например, при tm = 54367, вывод должен быть таким:

15:06:07

В конце функции main не забудьте освободить ранее выделенную память.

Sample Input:
12453

Sample Output:
03:27:33
*/

#include <iostream>

// здесь объявляйте класс
class Clock {
   private:
    unsigned time_current;  // текущее время в секундах
   public:
    void set_time(unsigned tm) { this->time_current = tm; }  // заносит в поле time_current значение tm
    unsigned get_hours() { return this->time_current / 3600; }  // возвращает количество часов в time_current
    unsigned get_minutes() {
        return this->time_current % 3600 / 60;
    }  // возвращает количество минут в time_current (за вычетом часов)
    unsigned get_seconds() {
        return this->time_current % 3600 % 60;
    }  // возвращает количество секунд в time_current (за вычетом часов и минут)
};

int main(void) {
    // здесь продолжайте функцию main
    Clock* ptr_cl = new Clock;

    unsigned tm;
    std::cin >> tm;

    ptr_cl->set_time(tm);
    unsigned hh, mm, ss;
    hh = ptr_cl->get_hours();
    mm = ptr_cl->get_minutes();
    ss = ptr_cl->get_seconds();

    // std::cout << "hh: " << hh << ", mm: " << mm << ", ss: " << ss << std::endl;
    printf("%02u:%02u:%02u\n", hh, mm, ss);

    delete ptr_cl;

    //__ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)
    return 0;
}