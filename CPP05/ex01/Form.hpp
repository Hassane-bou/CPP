#pragma once

#include <iostream>
#include <exception>


class Bureaucrat;


class Form{

    private:
        const std::string _Name;
        bool _Signe;
        const int _GradeSin; 
        const int _GradeEx;
    public:
        Form(const std::string name,bool signe,const int GradeSigne,const int GradeExecute);
        ~Form();
        Form(const Form &obj);
        Form& operator=(const Form& obj);
        std::string getName() const;
        int getGradeSin() const;
        int getGradeEx() const;
        bool isSigne();
        void beSigned(Bureaucrat &obj);

    class GradeTooHighException : public std::exception
    {
        public :
            const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        public :
            const char *what() const throw();
    };
    
};
std::ostream& operator<<(std::ostream& o, const Form& ob);