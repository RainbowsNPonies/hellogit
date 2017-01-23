#include <iostream>
#include <iomanip>
#include "Student.h" 
using namespace std;

int main() {

	char grade = ' ' ;

	Student student;
	
	cout << "Please enter a student grade: ";
	cin >> grade;
	student.setGrade(grade);
	cout << student.getGrade(); 

return 0;
}
