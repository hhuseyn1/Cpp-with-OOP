#include <iostream>
#include <vector>
using namespace std;
#include "Lesson.h"
#include "Exam.h"
#include "BankCard.h"
#include "Bank.h"
#include "Student.h"
#include "Group.h"
#include "Teachers.h"
#include "Univeristy.h"


int main(){
	Student s1{ "Jenette","Blankenship","Design",59,88,BankCard{"4716 7757 8328 8949",1321,148,7,24}};
	Student s2{ "Ina","Holden","Design",78,130,BankCard{"4024 0071 4787 4553",1001,294,7,24}};
	Student s3{ "Honorato","Marquez","Economics",89,150,BankCard{"4532 2516 6717 2585",7945,357,9,25}};
	Student s4{ "Shana","Vaughan","Economics",95,150,BankCard{"4539 3422 9636 5287",1478,541,9,25}};
	Student s5{ "Zephania","Bean","IT",68,88,BankCard{"4485 6539 9544 6853",7531,109,3,28}};
	Student s6{ "Phyllis","Durham","IT",74,130,BankCard{"4156 5731 2153 2889",9851,55,3,28}};
	Exam e1{ "12.1.2022",88,Lesson{"History of Design"} };
	Exam e2{ "18.3.2022",67,Lesson{"Design programmesign"} };
	Exam e3{ "27.4.2022",95,Lesson{"Economic Theory"} };
	Exam e4{ "04.5.2021",25,Lesson{"Macro Economic"} };
	Exam e5{ "01.2.2021",100,Lesson{"IT"} };
	Exam e6{ "22.11.2021",78,Lesson{"Programming language - Python"} };
	s1.getExams().push_back(e1);
	s2.getExams().push_back(e2);
	s3.getExams().push_back(e3);
	s4.getExams().push_back(e4);
	s5.getExams().push_back(e5);
	s6.getExams().push_back(e6);

	Group g1("Group 1");
	g1.getStudents().push_back(s1);
	g1.getStudents().push_back(s2);

	g1.getLessons().push_back(Lesson{"History of Design"});
	g1.getLessons().push_back(Lesson{"Design programmes"});

	Group g2("Group 2");
	g2.getStudents().push_back(s3);
	g2.getStudents().push_back(s4);

	g2.getLessons().push_back(Lesson{ "Economic Theory" });
	g2.getLessons().push_back(Lesson{ "Macro Economic" });
	
	Group g3("Group 3");
	g3.getStudents().push_back(s5);
	g3.getStudents().push_back(s6);
	 
	g3.getLessons().push_back(Lesson{"IT Essentials"});
	g3.getLessons().push_back(Lesson{"Programming language - Python"});


	Teacher t1("Ulric", "Booth", 27, "History", 980, BankCard{ "4522 4332 3488 1557",1463, 2198, 12, 2055 });
	t1.getGroups().push_back(g1);

	Teacher t2("MacKenzie", "Higgins", 45, "History", 900, BankCard{ "4485 7678 7347 1617", 7913, 1240, 8, 2042});
	t2.getGroups().push_back(g1);

	Teacher t3("Ferdinand", "Phelps", 54, "Economics", 1200, BankCard{ "4716 3549 7473 5157", 7319, 3746, 4 ,2028});
	t3.getGroups().push_back(g2);

	Teacher t4("Lillith", "Crosby", 37, "Economics", 1500, BankCard{ "4716 8677 5177 9577", 1346, 4000, 10, 2045 });
	t4.getGroups().push_back(g2);

	Teacher t5("Sylvester", "Guzman", 24, "IT", 1400, BankCard{ "4929 8456 1484 4633", 1752,2500, 7 ,2058 });
	t5.getGroups().push_back(g3);

	Teacher t6("Valentine", "Eaton", 30, "Programming", 2100, BankCard{ "4376 6576 3863 1955", 1973, 8400, 8, 2052});
	t6.getGroups().push_back(g3);



	Bank bank("Unibank", "Settar Behlulzade","****");
	bank.getBankcards().push_back(s1.getBankcard());
	bank.getBankcards().push_back(s2.getBankcard());
	bank.getBankcards().push_back(s3.getBankcard());
	bank.getBankcards().push_back(s4.getBankcard());
	bank.getBankcards().push_back(s5.getBankcard());
	bank.getBankcards().push_back(s6.getBankcard());
	bank.getBankcards().push_back(t1.getBankcard());
	bank.getBankcards().push_back(t2.getBankcard());
	bank.getBankcards().push_back(t3.getBankcard());
	bank.getBankcards().push_back(t4.getBankcard());
	bank.getBankcards().push_back(t5.getBankcard());
	bank.getBankcards().push_back(t6.getBankcard());

	Univeristy university("BDU","Yasamal");
	university.getStudents().push_back(s1);
	university.getStudents().push_back(s2);
	university.getStudents().push_back(s3);
	university.getStudents().push_back(s4);
	university.getStudents().push_back(s5);
	university.getStudents().push_back(s6);

	university.getTeachers().push_back(t1);
	university.getTeachers().push_back(t2);
	university.getTeachers().push_back(t3);
	university.getTeachers().push_back(t4);
	university.getTeachers().push_back(t5);
	university.getTeachers().push_back(t6);

	
	
	cout << "University: " << university.getName() << endl;
	cout << "Location: " << university.getLocation() << endl;
	cout << "University score: " << university.getUniversityscore() << endl;
	cout << "All payment: " << university.getPayment() << endl;
	university.showAllstudents();
	university.showAllteachers();
	cout << "Bank info " << endl;
	cout << "Name: " << bank.getName() << endl;
	cout << "Location: " << bank.getLocation() << endl;
	cout << "Popularity: " << bank.getPopularity() << endl;

}

