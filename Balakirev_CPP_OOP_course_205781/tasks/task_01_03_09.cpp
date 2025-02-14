/*
Подвиг 7. Объявите класс с именем Notes, содержащий следующие элементы:

- приватные переменные:

    std::string title;  // название
    std::string author;  // автор
    int pages;   // число страниц

- публичные методы:

    void set_data(const std::string& title, const std::string& author, int pages); // заносит в соответствующие поля
переданные значения void set_data(const Notes& note); // заносит в соответствующие поля значения из переданного объекта
note const std::string& get_title(); // возвращает ссылку на поле title const std::string& get_author(); // возвращает
ссылку на поле author int get_pages(); // возвращает значение поля pages

В функции main создайте два объекта класса Notes с помощью оператора new с указателями ptr_note1, ptr_note2
на созданные объекты. Занесите в первый объект (через указатель ptr_note1) данные:

"Фантазия экспромт", "Ф. Шопен", 5

Занесите во второй объект (ptr_note2) данные из первого объекта,
используя метод void set_data(const Notes& note).

В конце функции main не забудьте освободить ранее выделенную память.

P.S. На экран ничего выводить не нужно.


*/

#include <iostream>
#include <string>

// здесь объявляйте класс
class Notes {
   private:
    std::string title;   // название
    std::string author;  // автор
    int pages;           // число страниц

   public:
    void set_data(const std::string& title, const std::string& author, int pages) {
        this->title = title;
        this->author = author;
        this->pages = pages;
    }  // заносит в соответствующие поля переданные значения

    void set_data(const Notes& note) {
        this->title = note.title;
        this->author = note.author;
        this->pages = note.pages;
    }  // заносит в соответствующие поля значения из переданного объекта note

    const std::string& get_title() { return this->title; }    // возвращает ссылку на поле title
    const std::string& get_author() { return this->author; }  // возвращает ссылку на поле author
    int get_pages() { return this->pages; }                   // возвращает значение поля pages
};

int main(void) {
    // здесь продолжайте функцию main
    Notes* ptr_note1 = new Notes;
    Notes* ptr_note2 = new Notes;

    ptr_note1->set_data("Фантазия экспромт", "Ф. Шопен", 5);

    std::cout << ptr_note1->get_author() << ptr_note1->get_pages() << ptr_note1->get_title() << std::endl;
    ptr_note2->set_data(*ptr_note1);

    std::cout << ptr_note2->get_author() << ptr_note2->get_pages() << ptr_note2->get_title() << std::endl;
    // printf("%02u:%02u:%02u\n", hh, mm, ss);

    //__ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return
    // 0)

    delete ptr_note1;
    delete ptr_note2;

    return 0;
}