#pragma once

#include "AForm.hpp"
#include <iostream>
#include <fstream>
#include <exception>


class ShrubberyCreationForm: public AForm
{
    private:
        std::string _target;

    public:
        ShrubberyCreationForm(std::string target);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm &obj);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm &obj);
        void execute(Bureaucrat const &executor) const ;

    class ExceptionFileNoOpen : public std::exception{
        public:
            const char *what() const throw();
    };
};