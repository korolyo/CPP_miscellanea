#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main( void ) {

    A a;
    B b;
    C c;
    Base *p;

    identify(p);
    identify(&(*p));
    return 0;
}

