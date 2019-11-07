/*
Team_Circle
Khong, Brian
Pham, Hiep
Tran, Kenny

CS A250
April 29, 2019

Project 1 - Part A
*/

#include "CourseType.h"
#include "Course.h"

int main()
{
	// CourseType Test
	CourseType courseType1("C++ Programming I", 170, 4.0);
	courseType1.printCourse();

	cout << endl;

	CourseType courseType2("Data Structures", 220, 5.0);
	courseType2.printCourse();

	cout << "\nTesting accessors..." << endl;
	cout << courseType2.getCourseName() << endl;
	cout << courseType2.getCourseNumber() << endl;
	cout << courseType2.getCourseUnits() << endl;
	cout << courseType2.getPrefix() << endl;

	cout << "\nChanging course name..." << endl;

	courseType1.setCourseName("Java Programming I");
	courseType1.printCourse();

	cout << "\nChanging course number..." << endl;

	courseType2.setCourseNumber(220);
	courseType2.printCourse();

	cout << "\nChanging course units..." << endl;

	courseType1.setCourseUnits(5.0);
	courseType1.printCourse();

	//Course
	cout << "\nTesting Course..." << endl;
	Course course1;

	vector<int> prereqs = { 101, 102, 201 };
	Course course2("Intro to FORTRAN", 301, 5, prereqs, 'Y');

	cout << "Testing isTransferable(). "
		<< "Expected: course 1 - not transferable, course 2 - transferable";

	cout << "\nCourse 1: " << (course1.isTransferable() ? "transferable" : "not transferable");
	cout << "\nCourse 2: " << (course2.isTransferable() ? "transferable" : "not transferable");

	cout << "\n\nTesting setTransfer()."
		<< "Expected: course 1 to transferable, course 2 to not transferable";
	course1.setTransfer('Y');
	course2.setTransfer('N');
	cout << "\nCourse 1: " << (course1.isTransferable() ? "transferable" : "not transferable");
	cout << "\nCourse 2: " << (course2.isTransferable() ? "transferable" : "not transferable");

	cout << "\n\nTesting setPrerequisites() and printPrereqs. "
		<< "Expected: course1 has prereqs 601 602, course2 has prereqs 701 702";
	int course1prereq[] = { 601, 602 };
	int course2prereq[] = { 701,702 };
	course1.setPrerequisites(course1prereq, 2);
	course2.setPrerequisites(course2prereq, 2);
	cout << "\nCourse 1 prereqs: ";
	course1.printPrereqs();
	cout << "\nCourse 2 prereqs: ";
	course2.printPrereqs();

	cout << endl;
	system("Pause");
	return 0;
}