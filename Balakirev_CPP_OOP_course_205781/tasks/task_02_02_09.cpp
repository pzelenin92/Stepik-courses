/*
Подвиг 7. Объявите класс с именем IntOperator, содержащий следующие элементы:

- приватные переменные:

    int* data {nullptr}; // массив целочисленных значений
    int size {0}; // длина массива (число элементов)

- публичные методы:

    double average(); // вычисление среднего арифметического по массиву data
    int sum(); // вычисление суммы значений массива data
    int max(); // нахождение максимального значения в массиве data
    int min(); // нахождение минимального значения в массиве data

В классе IntOperator объявить конструктор(ы), чтобы его объекты можно было создавать командами:

int dt[] = {0, -5, 2, 10, 7, 22};

IntOperator op_1;
IntOperator op2(dt, std::size(dt)); // std::size() возвращает число элементов массива data (C++17)

Объявите в классе IntOperator деструктор, чтобы при удалении объекта значения переданного массива (в примере dt) были
равны нулю.

P.S. В программе требуется только объявить класс IntOperator. На экран ничего выводить не нужно.
*/

// #include <string.h>

#include <iostream>

class IntOperator {
   private:
    int* data{nullptr};  // массив целочисленных значений
    int size{0};         // длина массива (число элементов)
   public:
    // IntOperator() : size(0), data(nullptr) {}
    IntOperator() {}
    IntOperator(int* ar, int len) {
        size = len;
        data = ar;
        // data = new int[size];
        // for (int i = 0; i < size; i++) {
        //     data[i] = ar[i];
        // }
    }
    ~IntOperator() {
        for (int i = 0; i < size; i++) {
            data[i] = 0;
        }
        // delete[] data;
    }
    double average() {
        double result = 0.0;
        if (size != 0) {
            result = sum() / (double)size;
        }
        return result;

    }  // вычисление среднего арифметического по массиву data
    int sum() {
        int result = 0;
        if (size != 0) {
            for (int i = 0; i < size; i++) {
                result += data[i];
            }
        }
        return result;
    }  // вычисление суммы значений массива data
    int max() {
        int result = data[0];
        if (size != 0) {
            for (int i = 0; i < size; i++) {
                if (data[i] > result) {
                    result = data[i];
                }
            }
        }
        return result;
    }  // нахождение максимального значения в массиве data
    int min() {
        int result = data[0];
        if (size != 0) {
            for (int i = 0; i < size; i++) {
                if (data[i] < result) {
                    result = data[i];
                }
            }
        }
        return result;
    }  // нахождение минимального значения в массиве data
};

int main(void) {
    IntOperator op_1;
    // int dt[] = {0, -5, 2, 10, 7, 22};
    int dt[] = {1, 2, 10, -7, -5};
    IntOperator op2(dt, sizeof(dt) / sizeof(dt[0]));  // std::size() возвращает число элементов массива data (C++17)
    std::cout << op2.sum() << " " << op2.average() << " " << op2.max() << " " << op2.min() << std::endl;
    // printf("%d %d %d\n", a, b, c);

    // for (int i = 0; i < op_1.get_total(); i++) {
    //     std::cout << poly.get_coords()[i].x << " " << poly.get_coords()[i].y << std::endl;
    // }

    //__ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)

    return 0;
}