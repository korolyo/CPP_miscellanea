#ifndef A_HPP
# define A_HPP

class A : Base {
public:
    A();
    ~A();
    A & operator=(const A &a);
    A(const A &a);
}

#endif

