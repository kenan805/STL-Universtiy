#pragma once
#include<iostream>
using namespace std;

class Lesson {
	size_t _id;
	static size_t ID;
	string _name;
public:
	Lesson() :_id(0), _name("") {}
	Lesson(const string& name) :_name(name), _id(++ID) {}

	string getName()const {
		return _name;
	}

	void showLessonInfo() {
		cout << "Lesson id: " << _id << endl;
		cout << "Name: " << _name << endl;
	}
};

size_t Lesson::ID = 0;