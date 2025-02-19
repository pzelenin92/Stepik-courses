/*
Подвиг 8. Объявите класс с именем VectorN, содержащий следующие элементы:

- приватные переменные:

    int dims {0}; // размерность вектора (число координат)
    short* coords {nullptr}; // массив с координатами

- публичные методы:

    const short* get_coords(); // возвращает координаты (массив coords)
    int get_dims(); // возвращает значение поля dims

В классе VectorN объявить конструктор(ы) так, чтобы его объекты можно было создавать командами:

short data[] = {4, 2, 10, 0, -5};
VectorN v1 = 5; // формирование вектора с пятью нулевыми координатами: 0 0 0 0 0
VectorN v2(1, 2); // формирование вектора с двумя координатами: 1 2
VectorN v3(data, std::size(data)); // формирование вектора с переданными координатами data

При удалении объекта нужно освободить память, занимаемую массивом coords, и вывести в консоль сообщение (без кавычек и
переносом на новую строку):

"delete coords: <координаты через пробел>"

В конце строки пробела быть не должно. Если coords равен nullptr, то ничего выводить не нужно. Например, при coords =
{4, 2, 10, 0, -5}, должно быть выведено:

"delete coords: 4 2 10 0 -5"

P.S. В программе требуется только объявить класс VectorN.
*/

// #include <string.h>

#include <iostream>

class VectorN {
   private:
    int dims{0};             // размерность вектора (число координат)
    short* coords{nullptr};  // массив с координатами
   public:
    VectorN(int dims) {
        this->dims = dims;
        coords = new short[dims];
        for (int i = 0; i < dims; i++) {
            coords[i] = 0;
        }
    }
    VectorN(short a, short b) {
        this->dims = 2;
        coords = new short[dims];
        coords[0] = a;
        coords[1] = b;
    }
    VectorN(short* arr, int len) {
        this->dims = len;
        coords = new short[dims];
        for (int i = 0; i < dims; i++) {
            coords[i] = arr[i];
        }
    }
    ~VectorN() {
        if (coords != nullptr) {
            std::cout << "delete coords: ";
            for (int i = 0; i < dims; i++) {
                if (i == dims - 1) {
                    std::cout << coords[i];
                } else {
                    std::cout << coords[i] << " ";
                }
            }
            std::cout << std::endl;
            delete[] coords;
        }
    }
    const short* get_coords();  // возвращает координаты (массив coords)
    int get_dims();             // возвращает значение поля dims
};

// опре паблик функций
const short* VectorN::get_coords() { return coords; }
int VectorN::get_dims() { return dims; }

int main(void) {
    VectorN v1 = 5;  // формирование вектора с пятью нулевыми координатами: 0 0 0 0 0
    for (int i = 0; i < v1.get_dims(); i++) {
        std::cout << v1.get_coords()[i] << " ";
    }
    std::cout << std::endl;

    VectorN v2(1, 2);  // формирование вектора с двумя координатами: 1 2
    for (int i = 0; i < v2.get_dims(); i++) {
        std::cout << v2.get_coords()[i] << " ";
    }
    std::cout << std::endl;

    short data[] = {4, 2, 10, 0, -5};
    VectorN v3(data, sizeof(data) / sizeof(data[0]));  // формирование вектора с переданными координатами data
    for (int i = 0; i < v3.get_dims(); i++) {
        std::cout << v3.get_coords()[i] << " ";
    }
    std::cout << std::endl;

    // int dt[] = {1, 2, 10, -7, -5};
    // IntOperator op2(dt, sizeof(dt) / sizeof(dt[0]));  // std::size() возвращает число элементов массива data (C++17)
    // std::cout << op2.sum() << " " << op2.average() << " " << op2.max() << " " << op2.min() << std::endl;
    // printf("%d %d %d\n", a, b, c);

    //__ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)

    return 0;
}