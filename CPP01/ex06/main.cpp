#include "Harl.hpp"

enum level {
	DEBUG = 0,
	INFO = 1,
	WARNING = 2,
	ERROR = 3,
	NOT_LEVEL = 4
};

static level getLevel(std::string input) {
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++) {
		if (input == levels[i]) {
			return (level)i;
		}
	}
	return NOT_LEVEL;
}

static void printFilter(const std::string& level, Harl& harl) {
	std::cout << "[" << level << "]\n";
	harl.complain(level);
	std::cout << "\n";
}

int main(int argc, char* argv[]) {
	if (argc != 2) {
		std::cerr << "Usage: " << argv[0] << " <level>" << std::endl;
		return (1);
	}
	Harl harl;
	const level lv = getLevel(argv[1]);
	switch (lv) {
		case DEBUG:
			printFilter("DEBUG", harl);
			// fall through
		case INFO:
			printFilter("INFO", harl);
			// fall through
		case WARNING:
			printFilter("WARNING", harl);
			// fall through
		case ERROR:
			printFilter("ERROR", harl);
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems "
						 "]\n";
	};
	return (0);
}
