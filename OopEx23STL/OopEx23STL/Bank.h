#pragma once
#include "Bankcard.h"
#include<list>

class Bank {
	size_t _id;
	static size_t ID;
	string _name;
	list<BankCard> _bankCards;
public:
	Bank() :_id(0), _bankCards(NULL) {}
	Bank(const string& name)
	{
		_name = name;
		_id = ++ID;
	}

	BankCard& getBankCard(const size_t long_code) {
		for (auto& i : _bankCards)
		{
			if (long_code == i.getCardNumber()) return i;
		}
		throw "Bankcard not found";
	}

	void addBankCard(BankCard& bankCard) {
		_bankCards.push_back(bankCard);
	}

	void showBankInfo() {
		cout << "Bank id: " << _id << endl;
		cout << "Bank name: " << _name << endl<<endl;
		for (auto& i : _bankCards)
		{
			i.showBankCardInfo();
		}
	}
};

size_t Bank::ID = 0;