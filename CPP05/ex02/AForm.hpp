#pragma once

#include <iostream>
#include <exception>
#include <ctime>

#include "Bureaucrat.hpp"

class AForm{
    private:
        const std::string _Name;
        bool _isSigne ;
        const int  _gradeToSign;
        const int _gradeToExecute;

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
            const char *what() const throw()
            {
                return "Grade Too High! ";
            }
    };

    class GradeTooLowException: public std::exception
    {
        public:
            const char *what() const throw()
            {
                return "Grade Too Low! ";
            }
    };

    class FormNotSignedException: public std::exception
    {
        public:
            const char *what() const throw()
            {
                return "Form Not Signed! ";
            }
    };
};