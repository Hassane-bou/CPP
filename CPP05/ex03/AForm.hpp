#pragma once

#include <iostream>
#include <exception>
#include <ctime>
#include <cstdlib>
#include "Bureaucrat.hpp"

class AForm{
    private:
        const std::string _Name;
        bool _isSigne ;
        const int  _gradeToSign;
        const int _gradeToExecute;
        AForm();
    public:
        AForm(const std::string name,bool isSigne,const int gradeToSign,const int gradeToExec);
        virtual ~AForm();
        AForm(const AForm &obj);
        AForm& operator=(const AForm &obj);
        std::string getName() const;
        bool getSigne() const;
        int getGradeToSign() const;
        int getGradeToExec() const;
        void beSigned(Bureaucrat& Bur);
        void checkExecute(Bureaucrat const &executor) const;
        virtual void execute(Bureaucrat const &executor) const = 0;

    class GradeTooHighException: public std::exception
    {
        public:
            const char *what() const throw();
    };

    class GradeTooLowException: public std::exception
    {
        public:
            const char *what() const throw();
    };

    class FormNotSignedException: public std::exception
    {
        public:
            const char *what() const throw();
    };
};

std::ostream& operator<<(std::ostream& os, const AForm &obj);