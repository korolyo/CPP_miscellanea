#include <account.hpp>

Account::Account( int initial_deposit ) {
	_amount = initial_depostit;
	std::cout << "index:" << _accountIndex << ";amount:" << getTotalAmount();
	std:: ";created" << std::endl;
}

Account::~Account() {
	std::cout << "index:" << _accountIndex << ";amount:" << getTotalAmount();
	std:: ";closed" << std::endl;
}

static int	Account::getNbAccounts( void )
{
	return _nbAccounts;
}

static int	Account::getTotalAmount( void ) {
	return _totalAmount;
}

static int	Account::getNbDeposits( void ) {
	return _nbDeposits;
}

static int	Account::getNbWithdrawals( void ) {
	return _nbWithdrawals;
}

static void	Account::displayAccountsInfos( void ) {
}

//Methods:

void	Account::makeDeposit( int deposit ) {
	_amount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal ) {

}

int		Account::checkAmount( void ) const {

}

void	Account::displayStatus( void ) const {

}
