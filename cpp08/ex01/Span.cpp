#include "Span.hpp"

Span::Span( ) : N(0)
{}

Span::Span( unsigned int size ) : N(size)
{}

Span::Span( const Span &copy ) : vec(copy.vec), N(copy.N)
{}

Span    &Span::operator=( const Span &op )
{
    if (this == &op)
        return (*this);
    vec = op.vec;
    N = op.N;
    return (*this);
}

Span::~Span()
{}

void    Span::addNumber( unsigned int val )
{
    if (vec.size() >= N)
        throw std::runtime_error("The vector can't add any new elements");
    vec.push_back(val);
}

void    Span::moreNumbers( std::vector<unsigned int>::iterator it_b, std::vector<unsigned int>::iterator it_e)
{
    while (it_b != it_e){
        if (vec.size() >= N)
            throw std::runtime_error("The vector can't add any new elements");
        vec.push_back(*it_b);
        it_b++;
    }
}

int     Span::shortestSpan( void )
{
    if (vec.empty() || vec.size() == 1)
        throw std::runtime_error("This vecotr is not valid");

    std::sort(vec.begin(), vec.end());
    int     min = vec[1] - vec[0];

    for (int i = 1; i < vec.size() - 1; i++){
        if ((-1 * (vec[i] - vec[i + 1])) < min)
            min = vec[i + 1] - vec[i];
    }
    return (min);
}

int     Span::longestSpan( void )
{
    if (vec.empty() || vec.size() == 1)
        throw std::runtime_error("This vector is not valid");

    std::sort(vec.begin(), vec.end());
    return (vec[vec.size() - 1] - vec[0]);
}

void    Span::printvec( void ) const
{
    for (int i = 0; i < vec.size(); i++){
        std::cout << "vec[" << i << "]: " << vec[i] << std::endl;
    }
}
