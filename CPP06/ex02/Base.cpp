#include "includes/Base.hpp"

Base::~Base() { }

Base    *generate( void ) {
    Base *p;
    A   a;
    B   b;
    C   c;
    if ()
        p = a;
    else if ()
        p = b;
    else if ()
        p = c;
    return 0;
}

void    Base::identify( Base *p ) {

    if ( )
        std::cout << "A" << std::endl;
    else if ( )
        std::cout << "B" << std::endl;
    else if ( )
        std::cout << "C" << std::endl;
}

void    Base::identify( Base &p ) {

    if ( )
        std::cout << "A" << std::endl;
    else if ( )
        std::cout << "B" << std::endl;
    else if ( )
        std::cout << "C" << std::endl;
}

