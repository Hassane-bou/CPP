#pragma once

#include <iostream>
#include <exception>

#include "Bureaucrat.hpp"
#include "AForm.hpp"

class Intern{
    public:
        AForm *makeForm(std::string nameForm,std::string targetForm);

};