#pragma once
#include "Teacher.h"
#include<Windows.h>

class University {
	size_t _id;
	static size_t ID;
	string _name;
	list<Teacher> _teachers;
	list<Student> _students;
public:
	University() :_id(0), _name("") {}
	University(const string& name)
	{
		_id = ++ID;
		_name = name;
	}

	void addStudent(Student& student) {
		_students.push_back(student);
	}

	void addTeacher(Teacher& teacher) {
		_teachers.push_back(teacher);
	}

	int getUniversityScore() {
		double scoreSum = 0;
		for (auto& i : _students)
		{
			scoreSum += i.getScore();
		}
		return scoreSum / (_students.size() * 100) * 100;
	}

	void showAllStudents() {
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, 10);
		for (auto& i : _students)
		{
			i.studentInfo();
		}
	}

	void showAllTeachers() {
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, 14);
		for (auto& i : _teachers)
		{
			i.teacherInfo();
		}
	}

	double getPayment() const {
		double sumPay = 0;
		for (auto& i : _students)
		{
			sumPay += i.getMoney();
		}

		for (auto& i : _teachers)
		{
			sumPay += i.getSalary();
		}
		return sumPay;
	}

	void showUniversityInfo() {
		HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(hConsole, 9);
		cout << "############# University Info #############" << endl;
		cout << "University id: " << _id << endl;
		cout << "University name: " << _name << endl;
		cout << "University average score: " << getUniversityScore() << endl;
		cout << "University students count: " << _students.size() << endl;
		cout << "University teachers count: " << _teachers.size() << endl << endl;
	}
};

size_t University::ID = 0;