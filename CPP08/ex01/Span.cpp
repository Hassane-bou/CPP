#include "Span.hpp"

Span::Span(){}

Span::~Span(){}

Span::Span(unsigned int number): _N(number) {}

Span::Span(const Span &obj)
{
    this->_N = obj._N;
    this->_V = obj._V;
}

Span& Span::operator=(const Span &obj)
{
    if(this == &obj)
        return *this;

    this->_N = obj._N;
    this->_V = obj._V;
    return *this;
}

void Span::AddNumber(unsigned int number)
{
    if(_V.size() < _N)
        _V.push_back(number);
    else
        throw ErreurExceptionRange();

}

int Span::shortestSpan()
{
    int res = 0;
    if(_V.size() < 2)
        throw ErreurExceptionRange();
    std::vector<int> copy;

    copy = _V;
    std::sort(copy.begin(),copy.end());

    std::vector<int> tmp;
    for(int i = 0; i < (int)copy.size()  - 1 ; i++)
    {
        tmp.push_back(copy[i+1] - copy[i]);
    }
    std::vector<int>::iterator itmin = std::min_element(tmp.begin(),tmp.end());
    res = *itmin;
    return res;

}

int Span::longtestSpan()
{
    int res = 0;
    if(_V.size() < 2)
        throw ErreurExceptionRange();

    std::vector<int>::iterator itmin = std::min_element(_V.begin(),_V.end());
    std::vector<int>::iterator itmax = std::max_element(_V.begin(),_V.end());

    res = *itmax - *itmin;

    return res;
}
