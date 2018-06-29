#include <iostream>
#include <string>

using namespace std;

// struct here
struct studentType {
	string firstName;
	string lastName;
	char courseGrade;
	int testScore;
	int programScore;
	double gpa;
};


// prototype for readIn function
void readIn(studentType &);


void main()
{
	studentType student1;
	readIn(student1);

	system("pause");
}

void readIn(studentType &s)
{
	cout << "Enter first name: ";
	cin >> s.firstName;

	cout << "Enter last name: ";
	cin >> s.lastName;

	cout << "Enter test score: ";
	cin >> s.testScore;

	cout << "Enter program score: ";
	cin >> s.programScore;

	cout << "Enter GPA: ";
	cin >> s.gpa;

	double score = ((double)(s.testScore + s.programScore)) / 2;

	if (score >= 90)
		s.courseGrade = 'A';
	else if (score >= 80)
		s.courseGrade = 'B';
	else if (score >= 70)
		s.courseGrade = 'C';
	else if (score >= 60)
		s.courseGrade = 'D';
	else
		s.courseGrade = 'F';

	cout << endl;



	cout << s.firstName << " " << s.lastName << " " << "earned a grade of " << s.courseGrade << endl;

	cout << "Test score: " << s.testScore << " Program score: " << s.programScore << " GPA: " << s.gpa;
}