#include "includes/Base.hpp"
#include "includes/A.hpp"
#include "includes/B.hpp"
#include "includes/C.hpp"

int main( void ) {

    A a;
    B b;
    C c;
    Base *p;

    identify(p);
    identify(&(*p));
    return 0;
}

