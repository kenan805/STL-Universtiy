#pragma once
#include "Student.h"

class Group {
	size_t _id;
	static size_t ID;
	string _name;
	list<Student> _students;
	list<Lesson> _lessons;
public:
	Group() :_id(0), _name(""), _students(NULL), _lessons(NULL) {}
	Group(const string& name)
	{
		_id = ++ID;
		_name = name;
	}

	void addStudent(Student& student) {
		_students.push_back(student);
	}

	void addLesson(Lesson& lesson) {
		_lessons.push_back(lesson);
	}

	void showGroupInfo() {
		cout << "+ + + + + + Group " << _name << " info + + + + + +" << endl;
		cout << "Group id: " << _id << endl;
		cout << "Group students name: ";
		for (auto& i : _students)
		{
			cout << i.getName() << "; ";
		}
		cout << "\nGroup lessons name: ";
		for (auto& i : _lessons)
		{
			cout << i.getName() << "; ";
		}
		cout << endl << endl;
	}
};

size_t Group::ID = 0;