/*
Team_Circle
Khong, Brian
Pham, Hiep
Tran, Kenny

CS A250
April 29, 2019

Project 1 - Part A
*/

#include "Course.h"

Course::Course()
{
	transferable = 'N';
}

Course::Course(const string& courseName, int courseNumber, double courseUnits,
	vector<int> newPrereqs, char newTransferable)
	: CourseType(courseName, courseNumber, courseUnits)
{
	prereqs = newPrereqs;
	transferable = newTransferable;
}

bool Course::isTransferable() const
{
	return (transferable == 'Y');
}

void Course::setTransfer(char newTransferable)
{
	transferable = newTransferable;
}

void Course::setPrerequisites(const int newPrereq[], int numOfElem)
{
	prereqs.clear();

	for (int idx = 0; idx < numOfElem; ++idx)
	{
		prereqs.push_back(newPrereq[idx]);
	}
}

void Course::printCourse() const
{
	cout << fixed << showpoint << setprecision(2);
	cout << getPrefix() << getCourseNumber() << " - " << getCourseName() 
		 << "(" << getCourseUnits() << " units, "<< 
		(transferable == 'Y' ? "transferable)" : "not transferable)") << endl;
}
void Course::printPrereqs() const
{
	cout << getPrefix() << getCourseNumber() << " - Prerequisites: ";
	
	int size = static_cast<int>(prereqs.size());
	if (size > 0)
	{
		cout << getPrefix() << prereqs[0];

		for (int i = 1; i < size; i++)
		{
			cout << " and " << getPrefix() << prereqs[i];
		}
	}
}

Course::~Course() {};