#ifndef B_HPP
# define B_HPP

class B : Base {
public:
    B();
    ~B();
    B & operator=(const B &b);
    B(const B &b);
}

#endif

