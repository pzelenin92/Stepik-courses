/*
Подвиг 8. Объявите класс с именем TravelBlog, содержащий следующие элементы:

- приватные переменные:

    std::string country;  // страна пребывания
    short days;   // число дней пребывания

- публичные методы:

    void set_info(const std::string &country, short days); // заносит в соответствующие поля переданные значения
    void set_info(const TravelBlog& blog); // заносит в соответствующие поля значения из переданного объекта blog
    const std::string& get_country(); // возвращает ссылку на поле country
    short get_days(); // возвращает значение поля days

В функции main создайте два объекта класса TravelBlog в виде обычных переменных с именами blog1, blog2.
 Занесите в первый объект (blog1) данные:

"ОАЭ", 10

Занесите во второй объект (blog2) данные из первого объекта, используя метод void set_info(const TravelBlog& blog).

P.S. На экран ничего выводить не нужно.
*/

#include <iostream>
#include <string>

// здесь объявляйте класс
class TravelBlog {
   private:
   std::string country;  // страна пребывания
   short days;   // число дней пребывания

   public:
   void set_info(const std::string &country, short days){
    this->country = country;
    this->days = days;
   } // заносит в соответствующие поля переданные значения
   void set_info(const TravelBlog& blog){
    this->country = blog.country;
    this->days = blog.days;
   } // заносит в соответствующие поля значения из переданного объекта blog
   const std::string& get_country(){
    return this->country;
   } // возвращает ссылку на поле country
   short get_days(){
    return this->days;
   } // возвращает значение поля days
};

int main(void) {
    // здесь продолжайте функцию main
    TravelBlog blog1, blog2;

    blog1.set_info("ОАЭ", 10);

    // std::cout << ptr_note1->get_author() << ptr_note1->get_pages() << ptr_note1->get_title() << std::endl;
    blog2.set_info(blog1);

    // std::cout << ptr_note2->get_author() << ptr_note2->get_pages() << ptr_note2->get_title() << std::endl;
    // printf("%02u:%02u:%02u\n", hh, mm, ss);

    //__ASSERT_TESTS__ // макроопределение для тестирования (не убирать и должно идти непосредственно перед return 0)

    return 0;
}