/*
Подвиг 6. Объявите класс с именем Wallet, содержащий следующие элементы:

- приватные переменные:

    long volume;   // количество денег в кошельке (начальное значение 0)

- публичные методы:

    void set_volume(long volume); // заносит в поле volume переданное значение volume
    long get_volume(); // возвращает значение volume

В классе Wallet объявить один конструктор, чтобы объекты можно было создавать командами:

Wallet w1, w2(1000);
Wallet* ptr_w1 = new Wallet();
Wallet* ptr_w2 = new Wallet(5000);

При создании объекта без аргументов, значение его переменной volume должно быть равно 0.

В функции main создайте два объекта класса Wallet в виде обычных переменных с именами wt1, wt2 так, чтобы в первом
объекте значение volume было равно 1000, а во втором 0.

*/

#include <iostream>

class Wallet {
   private:
    long volume;  // количество денег в кошельке (начальное значение 0)
   public:
    Wallet(long volume = 0) : volume(volume) {}

    void set_volume(long volume);  // заносит в поле volume переданное значение volume
    long get_volume();             // возвращает значение volume
};

void Wallet::set_volume(long volume) { this->volume = volume; }

long Wallet::get_volume() { return this->volume; }

int main(void) {
    // здесь продолжайте функцию main
    Wallet wt1(1000), wt2;

    std::cout << wt1.get_volume() << "\n" << wt2.get_volume() << std::endl;

    //__ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)

    return 0;
}