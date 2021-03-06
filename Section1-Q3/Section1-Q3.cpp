// Section1-Q3.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <string>
#include <iostream>
#include <vector>
#include <numeric>
#include <Windows.h>
using namespace std;

struct Course {
	string courseNumber;
	string courseTitle;
	string courseSession;
	int courseDuration;
};

void printCourseData(Course course) {
	cout << "Displaying course data." << endl << endl;
	Sleep(500);
	cout << "Course number: " << course.courseNumber << endl;
	cout << "Course title: " << course.courseTitle << endl;
	cout << "Course session: " << course.courseSession << endl;
	cout << "Course duration: " << course.courseDuration << endl;
	Sleep(1000);
}

Course getData(Course course) {
	cout << "Enter a course number." << endl;
	getline(cin, course.courseNumber);
	cout << "Enter a course title." << endl;
	getline(cin, course.courseTitle);
	cout << "Enter a course duration" << endl;
	cin >> course.courseDuration;
	cin.ignore();
	cout << "Enter a course session." << endl;
	getline(cin, course.courseSession);

	return course;
}

void printAllCourses(vector<Course> courses) {
	cout << "You defined: " << courses.size() << " courses." << endl << endl;
	Sleep(300);
	for (int i = 0; i < courses.size(); i++) {
		cout << "Course Number: " << courses[i].courseNumber << endl;
		cout << "Course Title: " << courses[i].courseTitle << endl;
		cout << "Course Duration: " << courses[i].courseDuration << " hour(s)." << endl;
		cout << "Course Session: " << courses[i].courseSession << endl;
		cout << endl << endl;
		Sleep(800);
	}

	cout << "Thanks you for using this service!" << endl;
}

int main()
{
	int amountOfCourses = 0;
	Course course = Course();
	vector<Course> courses;

	cout << "How many courses would you like to add?" << endl;
	cin >> amountOfCourses;
	cin.ignore();
	do {
		Sleep(500);
		cout << "\nPlease define the course." << endl << endl;
		Sleep(500);
		course = getData(course);
		printCourseData(course);
		courses.push_back(course);
		amountOfCourses -= 1;
	} while (amountOfCourses != 0);

	system("CLS");
	printAllCourses(courses);


	system("pause");
	return 0;
}



