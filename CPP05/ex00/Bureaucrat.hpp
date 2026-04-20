#pragma once

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat{
    private:
        Bureaucrat();
        const std::string _name;
        int _grade;
    public:
        Bureaucrat(std::string name, int Grade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat &other);
        Bureaucrat& operator=(const Bureaucrat& other);
        std::string getName() const;
        int getGrade() const;
        void incrementGrade();
        void decrementGrade();

        class GradeTooHighException : public std::exception
        {
            public:
               const char *what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                const char *what() const throw();
        };

};
std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);