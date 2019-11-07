/*
Team_Circle
Khong, Brian
Pham, Hiep
Tran, Kenny

CS A250
April 29, 2019

Project 1 - Part A
*/

#ifndef COURSE_H
#define COURSE_H

#include <vector>
#include "CourseType.h"

class Course : public CourseType
{
public:
	Course();
	Course(const string& courseName, int courseNumber, double courseUnits,
		vector<int> newPrereqs, char newTransferable);

	bool isTransferable() const;
	void setTransfer(char newTransfer);
	void setPrerequisites(const int prereq [], int numOfElem);

	void printCourse() const;
	void printPrereqs() const;

	~Course();

private:
	vector<int> prereqs;
	char transferable;
};

#endif