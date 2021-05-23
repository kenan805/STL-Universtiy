#include "University.h"
#include "Bank.h"

class Main {
public:
	static void start() {
		BankCard* bcstd1 = new BankCard(4169112245446343, 0000, 140.78, 8, 2023);
		BankCard* bcstd2 = new BankCard(4169112245445667, 1156, 50.23, 10, 2022);
		BankCard* bcstd3 = new BankCard(4169112245448571, 2004, 240.55, 5, 2024);
		BankCard* bcstd4 = new BankCard(4169112245446865, 3468, 135.70, 6, 2022);
		BankCard* bcstd5 = new BankCard(4169112245444453, 5433, 245.50, 7, 2022);

		BankCard* bctch1 = new BankCard(4169112245444567, 4723, 250, 7, 2025);
		BankCard* bctch2 = new BankCard(4169112245442345, 2323, 350.40, 8, 2024);
		BankCard* bctch3 = new BankCard(4169112245449863, 5465, 123.30, 9, 2027);

		Bank* bank = new Bank("Kapital bank");
		bank->addBankCard(*bcstd1);
		bank->addBankCard(*bcstd2);
		bank->addBankCard(*bcstd3);
		bank->addBankCard(*bcstd4);
		bank->addBankCard(*bcstd5);
		bank->addBankCard(*bctch1);
		bank->addBankCard(*bctch2);
		bank->addBankCard(*bctch3);

		University* university = new University("BMU");
		Student* s1 = new Student("Kenan", "Idayatov", "Information technologies", 85, 127.30, bcstd1);
		Student* s2 = new Student("Nebi", "Nebili", "Information technologies", 90, 110.70, bcstd3);
		Student* s3 = new Student("Emiraslan", "Eliyev", "Information technologies", 95, 127.30, bcstd3);
		Student* s4 = new Student("Sahil", "Abdullayev", "Energy engineering", 75, 73.50, bcstd4);
		Student* s5 = new Student("Hormet", "Hemidov", "Energy engineering", 75, 110.50, bcstd5);
		university->addStudent(*s1);
		university->addStudent(*s2);
		university->addStudent(*s3);
		university->addStudent(*s4);
		university->addStudent(*s5);

		Teacher* t1 = new Teacher("Mulayim", "Rizvanova", 27, "IT", 1100, bctch1);
		Teacher* t2 = new Teacher("Etibar", "Seyidzade", 44, "IT", 1200, bctch2);
		Teacher* t3 = new Teacher("Ferid", "Memmedov", 25, "Energy", 800, bctch3);
		university->addTeacher(*t1);
		university->addTeacher(*t2);
		university->addTeacher(*t3);

		Group* g1 = new Group("A1559");
		Group* g2 = new Group("A1575");

		Lesson* l1 = new Lesson("Diskret Riyaziyyat");
		Lesson* l2 = new Lesson("Ingilis dili");
		Lesson* l3 = new Lesson("Fizika");
		Lesson* l4 = new Lesson("Obyekyonlu proqramlasdirma");
		Lesson* l5 = new Lesson("Muasir proqramlasdirma dilleri");

		g1->addStudent(*s1);
		g1->addStudent(*s2);
		g1->addStudent(*s3);
		g1->addLesson(*l2);
		g1->addLesson(*l4);
		g1->addLesson(*l5);

		g2->addStudent(*s4);
		g2->addStudent(*s5);
		g2->addLesson(*l1);
		g2->addLesson(*l3);


		s1->addExam(l2, 91);
		s1->addExam(l4, 95);
		s1->addExam(l5, 94);

		s2->addExam(l3, 94);
		s2->addExam(l4, 85);
		s2->addExam(l5, 75);

		s3->addExam(l2, 92);
		s3->addExam(l4, 95);
		s3->addExam(l5, 98);

		s4->addExam(l1, 70);
		s4->addExam(l3, 65);

		s5->addExam(l1, 85);
		s5->addExam(l3, 95);



		//university->showUniversityInfo();
		//university->showAllStudents();
		//university->showAllTeachers();

		//cout << "Common payment: " << university->getPayment();


		//Group info
		/*g1->showGroupInfo();
		g2->showGroupInfo();*/

		/*s1->showBalance();
		t1->showBalance()*/
		
		//bank->showBankInfo();
	}
};

int main() {
	Main::start();
}