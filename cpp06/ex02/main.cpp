#include "Base.hpp"

int main()
{
	srand(time(NULL));
    Base    *b = generate( );
    Base    *b1 = generate( );
    Base    *b2 = generate( );
    Base    &ref = *b2;

    identify(b);
    identify(b1);
    identify(b2);
    identify(ref);
    delete b;
    delete b1;
    delete b2;
}
