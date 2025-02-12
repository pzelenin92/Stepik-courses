/*
Подвиг 7 (с повторением). Объявите в программе пространство имен array_alg. В этом пространстве объявите функцию
add_int, которая должна добавлять в конец массива только определенные значения из другого массива. Эта функция должна
иметь следующую сигнатуру:

size_t add_int(int* src, size_t start, size_t max_len_src, const int* dest, size_t len_dest, PTR_FILTER_FUNC func);

    src - массив, в который добавляются новые значения;
    start - начальный индекс, с которого происходит добавление в массив src;
    max_len_src - длина массива src;
    dest - массив, из которого добавляются значения;
    len_dest - количество добавляемых элементов из массива dest в массив src;
    func - указатель на функцию для отбора (фильтрации) значений массива dest.

Функция add_int должна возвращать новую результирующую длину массива src. Указатель PTR_FILTER_FUNC должен быть
определен в пространстве имен array_alg для функций с сигнатурой:

int <имя_функции> (int);

Если такая функция, вызванная для определенного элемента массива dest, возвращает истину (не нулевое значение), то это
значение добавляется в массив src, а иначе - пропускается. При добавлении значений нужно контролировать возможное
превышение длины max_len_src массива src. При достижении значения max_len_src процесс добавления следует останавливать.

В пространстве имен array_alg объявите еще одно пространство имен (вложенное) с именем filter_func и объявите в нем
функцию с именем mark_positive для отбора оценок от 4 и выше (значения >= 4 должны добавляться).

Продолжите функцию main прочитайте из входного потока целые числа в массив ar, записанные в одну строчку через пробел, в
количестве не более 20. С помощью функции add_int добавьте в массив marks прочитанные значения из массива ar с передачей
в качестве критерия добавления функцию mark_positive. Выведите в консоль сформированные значения массива marks в одну
строчку через пробел в порядке их следования, начиная с первого.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/9.4.7

Sample Input:
2 5 4 3 3 2
4 4 4 4 4 5 5 5 5 5 6 6 6 6 6 7 7 7 7 7 8 8 8 8 8 9 9 9 9 9 10 10 10 10 10 11 11 11 11 11 12 12 12 12 12

Sample Output:
3 2 5 4 3 5 4

*/

#include <iostream>
// #include <sstream>

void print_ar(int* ar, size_t len_ar) {
    for (size_t i = 0; i < len_ar; i++) {
        std::cout << ar[i] << " ";
    }
    std::cout << std::endl;
}

namespace array_alg {
namespace filter_func {
int mark_positive(int x) { return x >= 4; }

}  // namespace filter_func

typedef int (*PTR_FILTER_FUNC)(int);

size_t add_int(int* dest,  // массив, в который добавляются новые значения
               size_t start,  // начальный индекс, с которого происходит добавление в массив dest
               size_t max_len_dest,  // длина массива dest
               const int* src,       // массив, из которого добавляются значения
               size_t len_src,  // количество добавляемых элементов из массива src в массив dest
               PTR_FILTER_FUNC func  // указатель на функцию для отбора значений массива src
) {
    size_t i = start;
    // (void)max_len_dest;  // не используется
    for (size_t j = 0; j < len_src && i < max_len_dest; ++j) {
        if (func(src[j])) {
            dest[i++] = src[j];
        }
    }
    return i;
}

}  // namespace array_alg

int main() {
    int marks[100] = {3, 2, 5, 4, 3};
    int ar[20] = {};
    // size_t count = 0;
    size_t count_marks = 5;

    print_ar(marks, count_marks);

    size_t len_ar = 0;
    while (len_ar < 20 && std::cin >> ar[len_ar]) {
        // std::cout << "Read value: " << ar[len_ar] << " at index " << len_ar << std::endl;
        len_ar++;
    }

    print_ar(marks, count_marks);
    print_ar(ar, len_ar);

    count_marks = array_alg::add_int(marks, count_marks, 100, ar, len_ar, array_alg::filter_func::mark_positive);

    print_ar(marks, count_marks);

    return 0;
}