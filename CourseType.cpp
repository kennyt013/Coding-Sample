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
CourseType::CourseType()
{
	cUnits = 0.0;
}

CourseType::CourseType(const string& courseName, int courseNumber, double courseUnits)
{
	cName = courseName;
	cNumber = courseNumber;
	cUnits = courseUnits;
}

string CourseType::getCourseName() const
{
	return cName;
}

int CourseType::getCourseNumber() const
{
	return cNumber;
}

double CourseType::getCourseUnits() const
{
	return cUnits;
}

string CourseType::getPrefix() const
{
	return PREFIX;
}

void CourseType::setCourseName(string newCourseName)
{
	cName = newCourseName;
}

void CourseType::setCourseNumber(int newCourseNum)
{
	cNumber = newCourseNum;
}

void CourseType::setCourseUnits(double newCourseUnits)
{
	cUnits = newCourseUnits;
}
void CourseType::printCourse() const
{
	cout << fixed << showpoint << setprecision(2);
	cout << PREFIX << cNumber << " - " << cName << "(" << cUnits << " units)" << endl;
}

CourseType::~CourseType()
{

}
