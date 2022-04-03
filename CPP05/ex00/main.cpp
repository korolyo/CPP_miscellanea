#include "Bureaucrat.hpp"

using std::cerr;
using std::cout;
using std::string;

enum gradeActionType { INCREASE, DECREASE, NONE };

struct gradeAction {
	gradeActionType type;
	int amount;
};

void testGradeAction(Bureaucrat& testPerson, gradeAction action) {
	try {
		cout << (action.type == INCREASE ? "Increasing" : "Decreasing")
		<< " grade of " << testPerson.getName() << " by " << action.amount
						<< ".\n";
		if (action.type == INCREASE)
			testPerson.incrementGrade();
		else if (action.type == DECREASE)
			testPerson.decrementGrade();
		cout << testPerson << std::endl;
	} catch (std::exception& e) {
		cerr << "[Exception On grading] " << e.what() << "\n";
	}
}

void testHeader(const string& header, int initialGrade) {
	cout << "[[Testing " << header << "(" << initialGrade << ")" << "]]\n";
}

void testCreation(const string& header, const string& name, int initialGrade) {
	testHeader(header, initialGrade);
	try {
		Bureaucrat testPerson(name + " person");
		cout << testPerson << std::endl;
	} catch (std::exception& e) {
		cerr << "[Exception On Creation] " << e.what() << "\n";
	}
	cout << "\n";
}

void testGrade(const string& header,
			   const string& name,
			   int initialGrade,
			   gradeAction action) {
	testHeader(header, initialGrade);
	try {
		Bureaucrat testPerson(name + " person", initialGrade);
		cout << testPerson << std::endl;
		if (action.type != NONE)
			testGradeAction(testPerson, action);
	} catch (std::exception& e) {
		cerr << "[Exception On Creation] " << e.what() << "\n";
	}
	cout << "\n";
}

int main() {
	testCreation("Grade low", "worst grade", 150);
	testGrade("Grade Decrease", "some", 120, (gradeAction){DECREASE, 30});
	testCreation("Grade too low", "wor?st grade", 200);
	testGrade("Grade Decrease too low", "bad grade", 120,
			  (gradeAction){DECREASE, 30});

	testCreation("Grade high", "best grade", 1);
	testGrade("Grade Increase", "some", 30, (gradeAction){INCREASE, 29});
	testCreation("Grade too high", "b?est grade", 0);
	testCreation("Grade too high", "b???est grade", -123);
	testGrade("Grade Increase too high", "good grade", 30,
			  (gradeAction){INCREASE, 30});
}
