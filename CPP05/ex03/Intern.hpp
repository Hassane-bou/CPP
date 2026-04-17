#pragma once

#include <iostream>
#include <exception>

#include "Bureaucrat.hpp"
#include "AForm.hpp"

class Intern{
    public:
        Intern();
        ~Intern();
        Intern(const Intern &obj);
        Intern& operator=(const Intern &obj);
        AForm *makeForm(std::string nameForm,std::string targetForm);

    class FormNotFound: public std::exception
    {
        public:
            const char* what() const throw();
    };
};