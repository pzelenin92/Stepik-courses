/*
Подвиг 9. Объявите структуру (struct) с именем Person, содержащую следующие элементы:

- приватные переменные:

    std::string fio;  // ФИО
    std::string job;  // работа
    unsigned char old;  // возраст

- публичные методы:

    void set_person_data(const std::string &fio, const std::string &job, unsigned char old); // заносит в соответствующие поля переданные значения
    void set_person_data(const Person& p); заносит в соответствующие поля значения из переданного объекта p
    void get_data(std::string &fio, std::string &job, unsigned char& old); // возвращает через ссылки значения полей объекта

В функции main создайте два объекта структуры Person в виде обычных переменных с именами p1, p2. Занесите в первый объект (p1) данные:

"С.М. Балакирев", "Просветитель", 84

Занесите во второй объект (p2) данные из первого объекта, используя метод void set_person_data(const Person& p).

P.S. На экран ничего выводить не нужно.

*/

#include <iostream>
#include <string>

struct Person
{
    private:
    std::string fio;  // ФИО
    std::string job;  // работа
    unsigned char old;  // возраст
    
    public:
    void set_person_data(const std::string &fio, const std::string &job, unsigned char old) {
        this->fio = fio;
        this->job = job;
        this->old = old;
    } // заносит в соответствующие поля переданные значения
    void set_person_data(const Person& p){
        this->fio = p.fio;
        this->job = p.job;
        this->old = p.old;
    } //заносит в соответствующие поля значения из переданного объекта p
    void get_data(std::string &fio, std::string &job, unsigned char& old){
        fio = this->fio;
        job = this->job;
        old = this->old;
    } // возвращает через ссылки значения полей объекта
};


int main(void) {
    // здесь продолжайте функцию main
    Person p1, p2;

    p1.set_person_data("С.М. Балакирев", "Просветитель", 84);

    // std::cout << ptr_note1->get_author() << ptr_note1->get_pages() << ptr_note1->get_title() << std::endl;
    p2.set_person_data(p1);

    // std::cout << ptr_note2->get_author() << ptr_note2->get_pages() << ptr_note2->get_title() << std::endl;
    // printf("%02u:%02u:%02u\n", hh, mm, ss);

    //__ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)

    return 0;
}