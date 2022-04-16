#ifndef C_HPP
# define C_HPP

class C : Base {
public:
    C();
    ~C();
    C & operator=(const C &c);
    C(const C &c);
}

#endif

