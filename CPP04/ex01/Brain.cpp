#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor" << std::endl;
	std::string _ideas[] = {
			"ð", "ð", "ð", "ð", "ð", "ð", "ð", "ð",
			"ð", "ðŦ", "ð", "ð", "ð", "ðĨ­", "ð", "ðĨĨ",
			"ðĨ", "ð", "ð", "ðĨ", "ðĨĶ", "ðĨŽ", "ðĨ", "ðķ",
			"ðŦ", "ð―", "ðĨ", "ðŦ", "ð§", "ð§", "ðĨ", "ðĨ",
			"ðĨŊ", "ð", "ðĨ", "ðĨĻ", "ð§", "ðĨ", "ðģ", "ð§",
			"ðĨ", "ð§", "ðĨ", "ðĨĐ", "ð", "ð", "ðĶī", "ð­",
			"ð", "ð", "ð", "ðŦ", "ðĨŠ", "ðĨ", "ð§", "ðŪ",
			"ðŊ", "ðŦ", "ðĨ", "ðĨ", "ðŦ", "ðĨŦ", "ð", "ð",
			"ðē", "ð", "ðĢ", "ðą", "ðĨ", "ðĶŠ", "ðĪ", "ð",
			"ð", "ð", "ðĨ", "ðĨ ", "ðĨŪ", "ðĒ", "ðĄ", "ð§",
			"ðĶ", "ðĨ§", "ð§", "ð°", "ð", "ðŪ", "ð­", "ðŽ",
			"ðŦ", "ðŋ", "ðĐ", "ðŠ", "ð°", "ðĨ", "ðŊ", "ðĨ",
			"ðž", "ðŦ", "â", "ðĩ", "ð§", "ðĨĪ", "ð§", "ð§",
			"ðķ", "ðš", "ðŧ", "ðĨ", "ð·", "ðĨ", "ðļ", "ðđ",
			"ð§", "ðū", "ð§", "ðĨ", "ðī", "ð―", "ðĨĢ", "ðĨĄ",
	};
}

Brain::~Brain()
{
	std::cout << "Brain default destructor" << std::endl;
}

Brain::Brain(Brain const &brain)
{
	std::cout << "Brain copy constructor" << std::endl;
	for (int i = 0; i < 100; i++) {
		_ideas[i] = brain.getIdea(i);
	}
}

Brain & Brain::operator=( Brain const &brain)
{
	std::cout << "Brain copy assignment operator called" << std::endl;
	if (this != &brain) {
		for (int i = 0; i < 100; i++) {
			_ideas[i] = brain.getIdea(i);
		}
	}
	return *this;
}

const std::string& Brain::getIdea( int index ) const {
	return _ideas[index];
}

std::ostream & operator<<( std::ostream & o, Brain const &brain) {
	for (int i = 0; i < 100; i++) {
		o << brain.getIdea(i);
	}
	return o;
}
