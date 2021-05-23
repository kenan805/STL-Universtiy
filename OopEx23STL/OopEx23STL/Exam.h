#pragma once
#include "Lesson.h"

class Exam {
	size_t _id;
	static size_t ID;
	Lesson* _lesson;
	double _point;
public:
	Exam() : _id(0), _lesson(nullptr), _point(0) {}
	Exam(Lesson* lesson, const double point)
	{
		_id = ++ID;
		_lesson = lesson;
		_point = point;
	}

	void showExamInfo() {
		cout << "Exam id: " << _id << endl;
		cout << "Lesson: " << _lesson->getName() << endl;
		cout << "Point: " << _point << endl;
		cout << endl;
	}
};

size_t Exam::ID = 0;