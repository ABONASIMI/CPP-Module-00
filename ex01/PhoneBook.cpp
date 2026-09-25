#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
    nb_contact = 0;
}

void PhoneBook::add_contact(Contact con)
{
    this->contact[nb_contact % 8] = con;
    nb_contact++;
}

void PhoneBook::search_contact()
{
    int i = 0;
    std::cout << "_____________________________________________________________________" << std::endl;
    std::cout << "|" << std::setw(10) << "index" << "|" << std::setw(10) << "FirstName"  << "|" << std::setw(10) << "LastName"<< "|" << std::setw(10) << "NickName" << "|" << std::endl;
    while (i < this->nb_contact && i < 8)
    {
        std::string firstname = this->contact[i].getFirstName();
        std::string lastname = this->contact[i].getLastName();
        std::string nickname = this->contact[i].getNickName();
        if (firstname.length() > 10)
            firstname = firstname.substr(0, 9) + ".";
        if (lastname.length() > 10) 
            lastname = lastname.substr(0,9) + ".";
        if (nickname.length() > 10)
            nickname = nickname.substr(0, 9) + ".";
        std::cout << "_____________________________________________________________________" << std::endl;
        std::cout << "|"<< std::right <<std::setw(10) << i << "|" << std::right <<std::setw(10) << firstname << "|" << std::right << std::setw(10) << lastname << "|" << std::right <<std::setw(10)<< nickname << "|" << std::endl;

        i++;
    }
    std::cout << "_____________________________________________________________________" << std::endl;

    int index;
    std::string input;

    std::cout << "Please Enter the Index you want more informations about that Contact :";
    std::getline(std::cin, input);

    std::stringstream ss(input);

    if (!(ss >> index) || index >= i || index < 0){
        std::cout << "Please check the list and from list Chose one" << std::endl;
        
    }
    else {
        std::cout << "This is the Person you have chose" << std::endl;
        std::cout << "FirstName : " << this->contact[index].getFirstName() << std::endl;
        std::cout << "LastName : " << this->contact[index].getLastName() << std::endl;
        std::cout << "NickName : " << this->contact[index].getNickName() << std::endl;
        std::cout << "PhoneNumber : " << this->contact[index].getPhoneNumber() << std::endl;
        std::cout << "DarkestSecret : " << this->contact[index].getDarkestSecret() << std::endl;
    }
}