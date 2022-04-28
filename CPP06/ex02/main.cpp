#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main( void ) {

    A a;
    B b;
    C c;
    Base *p;

	p = generate();
    identify(p);
    identify(*p);

	delete p;
    return 0;
}
