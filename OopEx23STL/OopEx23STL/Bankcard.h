#pragma once
#include <iostream>
using namespace std;

class BankCard {
	size_t _id;
	static size_t ID;
	size_t _long_code;
	size_t _password;
	double _balance;
	size_t _expired_month;
	size_t _expired_year;
public:
	BankCard() :_id(0), _long_code(0), _password(0), _balance(0), _expired_month(0), _expired_year(0) {}
	BankCard(const size_t& long_code, const size_t& password, const double& balance, const size_t& expired_month, const size_t& expired_year)
	{
		_id = ++ID;
		_long_code = long_code;
		_password = password;
		_balance = balance;
		_expired_month = expired_month;
		_expired_year = expired_year;
	}

	double getBalance()const
	{
		return _balance;
	}

	size_t getId()const {
		return _id;
	}

	size_t getPassword()const {
		return _password;
	}

	size_t getCardNumber()const {
		return _long_code;
	}

	void showBankCardInfo() {
		cout << ">>>>>>>>>>>> Bank card "<<_id<<" info <<<<<<<<<<<<" << endl;
		cout << "Card number: " << _long_code << endl;
		cout << "Card password: " << _password << endl;
		cout << "Balance: " << _balance << endl;
		cout << "Expiration date: " << _expired_month << "/" << _expired_year % 100 << endl << endl;
	}
};

size_t BankCard::ID = 0;
