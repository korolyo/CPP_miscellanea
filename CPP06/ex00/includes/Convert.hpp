#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>
# include <cstdlib>

class Convert {

public:
	Convert();
	Convert( Convert const &copy );
	virtual ~Convert();

	Convert &operator=( Convert const &convert );

	std::string	checkType(std::string input) const;
	void		conv( char c ) const;
	void		conv( int i ) const;
	void		conv( float f ) const;
	void		conv( double d ) const;
};

#endif
