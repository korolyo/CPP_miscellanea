#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor" << std::endl;
	std::string _ideas[] = {
			"🍏", "🍎", "🍐", "🍊", "🍋", "🍌", "🍉", "🍇",
			"🍓", "🫐", "🍈", "🍒", "🍑", "🥭", "🍍", "🥥",
			"🥝", "🍅", "🍆", "🥑", "🥦", "🥬", "🥒", "🌶",
			"🫑", "🌽", "🥕", "🫒", "🧄", "🧅", "🥔", "🥐",
			"🥯", "🍞", "🥖", "🥨", "🧀", "🥚", "🍳", "🧈",
			"🥞", "🧇", "🥓", "🥩", "🍗", "🍖", "🦴", "🌭",
			"🍔", "🍟", "🍕", "🫓", "🥪", "🥙", "🧆", "🌮",
			"🌯", "🫔", "🥗", "🥘", "🫕", "🥫", "🍝", "🍜",
			"🍲", "🍛", "🍣", "🍱", "🥟", "🦪", "🍤", "🍙",
			"🍚", "🍘", "🍥", "🥠", "🥮", "🍢", "🍡", "🍧",
			"🍦", "🥧", "🧁", "🍰", "🎂", "🍮", "🍭", "🍬",
			"🍫", "🍿", "🍩", "🍪", "🌰", "🥜", "🍯", "🥛",
			"🍼", "🫖", "☕", "🍵", "🧃", "🥤", "🧋", "🧂",
			"🍶", "🍺", "🍻", "🥂", "🍷", "🥃", "🍸", "🍹",
			"🧉", "🍾", "🧊", "🥄", "🍴", "🍽", "🥣", "🥡",
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
