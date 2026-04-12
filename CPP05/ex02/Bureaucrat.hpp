#pragma once

#include <iostream>
#include <exception>

class AForm;

class Bureaucrat{
    private:
        const std::string _Name;
        int _Grade;
    public:
        Bureaucrat(std::string name, int grade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat& obj);
        Bureaucrat& operator=(const Bureaucrat &obj);
        std::string getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();
        void signAForm(AForm &other);
        void executeForm(AForm const & form) const ;

        class GradTooHighException : public std::exception
        {
               public:
                const char *what() const throw()
                {
                    return "Grade Too High !";
                } 
        };

        class GradeTooLowException : public std::exception
        {
            public:
                const char *what() const throw()
                {
                    return "Grade Too Low !";
                }
        };
};