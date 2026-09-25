#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP


#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <sstream>
#include <cstdlib>

class PhoneBook {
private:
    Contact contact[8];
    int nb_contact;
public :
    PhoneBook();
    void add_contact(Contact c);
    void search_contact();
};

#endif