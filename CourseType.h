/*
Team_Circle
Khong, Brian
Pham, Hiep
Tran, Kenny

CS A250
April 29, 2019

Project 1 - Part A
*/

#ifndef COURSETYPE_H
#define COURSETYPE_H

#include <iomanip>
#include <string>
#include <iostream>

using namespace std;

static const string PREFIX = "CS A";

class CourseType
{
public:
	CourseType();
	CourseType(const string& courseName, int courseNumber, double courseUnits);

	string getCourseName() const;
	int getCourseNumber() const;
	double getCourseUnits() const;
	string getPrefix() const;

	void setCourseName(string newName);
	void setCourseNumber(int newCourseNum);
	void setCourseUnits(double newCourseUnits);
	void printCourse() const;

	~CourseType();

private:
	string cName;
	int cNumber;
	double cUnits;
};

#endif