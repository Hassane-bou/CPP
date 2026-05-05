#pragma once

#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>
#include <cstdlib>
#include <ctime>

class Span
{
    private:
        unsigned int _N;
        std::vector<int> _V;

    public:
        Span();
        Span(unsigned int N);
        ~Span();
        Span(const Span& obj);
        Span& operator=(const Span& obj);
        void AddNumber(unsigned int number);
        int shortestSpan();
        int longtestSpan();

    class ErreurExceptionRange : public std::exception
    {
        public:
            const char* what() const throw()
            {
                return "Exception : Attention !!";
            }
    };
};
