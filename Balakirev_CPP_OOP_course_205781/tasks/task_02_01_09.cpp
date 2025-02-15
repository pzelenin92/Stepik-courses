/*
Подвиг 7. Объявите класс TriangleChecker, объекты которого можно было бы создавать командами:

    TriangleChecker tr(a, b, c);
    TriangleChecker* ptr_tr = new TriangleChecker(a, b, c);

Здесь a, b, c - целые числа (длины сторон треугольника). Переданные аргументы (длины сторон) необходимо хранить в
приватных переменных создаваемых объектов.

В классе TriangleChecker объявите публичный метод is_triangle(), который бы возвращал следующие коды:

1 - если хотя бы одно число меньше или равно нулю;
2 - если указанные числа (длины) a, b, c не могут являться длинами сторон треугольника;
3 - если длины a, b, c могут являться длинами сторон треугольника.

В функции main уже реализовано считывание трех целых чисел из входного потока. Создайте объект класса TriangleChecker с
помощью оператора new, на который ведет указатель ptr_tr, с передачей аргументов a, b, c (объявлены в начале функции
main). Выведите в консоль значение, которое вернет метод is_triangle созданного объекта.

В конце функции main не забудьте освободить ранее выделенную память.

Sample Input:
11 7 10

Sample Output:
3

*/

#include <iostream>

class TriangleChecker {
   private:
    int a, b, c;

   public:
    TriangleChecker(int a = 0, int b = 0, int c = 0) : a(a), b(b), c(c) {}
    int is_triangle();
};

int TriangleChecker::is_triangle() {
    int result = 2;
    if (this->a <= 0 || this->b <= 0 || this->c <= 0) {
        result = 1;
    } else if (this->a + this->b <= this->c && this->a + this->c <= this->b && this->b + this->c <= this->a) {
        result = 2;
    } else if (this->a + this->b > this->c && this->a + this->c > this->b && this->b + this->c > this->a) {
        result = 3;
    }
    return result;
}

int main(void) {
    int a, b, c;

    std::cin >> a >> b >> c;
    TriangleChecker* ptr_tr = new TriangleChecker(a, b, c);

    // std::cout << wt1.get_volume() << "\n" << wt2.get_volume() << std::endl;

    std::cout << ptr_tr->is_triangle() << std::endl;

    //__ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)

    delete ptr_tr;

    return 0;
}