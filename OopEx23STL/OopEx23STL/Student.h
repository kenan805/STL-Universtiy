#pragma once
#include<list>
#include "Person.h"
#include "Bankcard.h"
#include "Exam.h"

class Student :public Person {
	size_t _id;
	static size_t ID;
	string _speciality;
	double _score;
	double _money;
	BankCard* _bankCard;
	std::list<Exam> _exams;

public:
	Student() :_id(0), _speciality(""), _score(0), _money(0), _bankCard(NULL), _exams(NULL) {}
	Student(const string& name, const string& surname, const string& speciality, const double score, const double money, BankCard* bankCard) :Person(name, surname)
	{
		_id = ++ID;
		_speciality = speciality;
		_score = score;
		_money = money;
		_bankCard = bankCard;
	}

	string getName()const {
		return _name;
	}

	double getScore()const {
		return _score;
	}

	double getMoney()const {
		return _money;
	}

	void addExam(Lesson* lesson, const double point) {
		_exams.push_back(Exam(lesson, point));
	}

	void studentInfo() {
		cout << "- - - - - - - Student " << _id << " info - - - - - - -" << endl;
		cout << "Name: " << _name << endl;
		cout << "Surname: " << _surname << endl;
		cout << "Speciality: " << _speciality << endl;
		cout << "Score: " << _score << endl;
		cout << "Money: " << _money << endl;
		cout << endl;
	}

	void showBalance() {
		size_t password;
		cout << "\t\t"<<_name << " " << _surname << endl;
		cout << "Enter password: ";
		cin >> password;
		if (password == _bankCard->getPassword())
		{
			cout << "Balance: " << _bankCard->getBalance() << endl;
		}
		else cout << "Incorrect password !!!";
	}
};

size_t Student::ID = 0;
