#pragma once
#include "Group.h"
#include "Bankcard.h"
#include "Person.h"


class Teacher :public Person {
	size_t _id;
	static size_t ID;
	double _age;
	list<Group> _groups;
	string _department;
	double _salary;
	BankCard* _bankCard;
public:
	Teacher() :_id(0), _age(0), _groups(NULL), _department(""), _salary(0), _bankCard(NULL) {}
	Teacher(const string& name, const string& surname, const double age, const string& department, const double salary, BankCard* bankCard) :Person(name, surname)
	{
		_id = ++ID;
		_age = age;
		_department = department;
		_salary = salary;
		_bankCard = bankCard;
	}

	double getSalary()const {
		return _salary;
	}

	void addGroup(const string& name) {
		_groups.push_back(Group(name));
	}

	void teacherInfo() {
		cout << "- - - - - - - Teacher " << _id << " info - - - - - - -" << endl;
		cout << "Teacher name: " << _name << endl;
		cout << "Teacher surname: " << _surname << endl;
		cout << "Teacher age: " << _age << endl;
		cout << "Teacher department: " << _department << endl;
		cout << "Teacher salary: " << _salary << endl << endl;
	}

	void showBalance() {
		size_t password;
		cout << "\t\t" << _name << " " << _surname << endl;
		cout << "Enter password: ";
		cin >> password;
		if (password == _bankCard->getPassword())
		{
			cout << "Balance: " << _bankCard->getBalance() << endl;
		}
		else cout << "Incorrect password !!!" << endl;
	}
};

size_t Teacher::ID = 0;
