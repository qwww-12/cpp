#include "MutantStack.hpp"

int main( void )
{
    MutantStack<int>    mystack;

    mystack.push(90);
    mystack.push(89);
    mystack.push(12);
    mystack.push(35);

    int size = static_cast<int>(mystack.size());
    for (int i = 0; i < size; i++){
        std::cout << "Last-in value: " << mystack.top() << std::endl;
        mystack.pop();
    }
    for (int i = 0; i < 7; i++){
        mystack.push(i+1);
        std::cout << "First value pushing: " << mystack.top() << std::endl;
    }

    MutantStack<int>::iterator  it_b = mystack.begin();
    MutantStack<int>::iterator  it_e = mystack.end();

    --it_e;
    std::cout << "First-in value: " << *it_b << std::endl;
    std::cout << "Next value without pop(): " << *(it_b + 1) << std::endl;
    std::cout << "Last-in value: " << *it_e << std::endl;
    --it_e;
    std::cout << "Befor last-in value: " << *it_e << std::endl;
}