#include <iostream>
#include <iomanip>
#include "Student" 
using namespace std;

int main() {

	char grade = ' ' ;

	Student student;
	
	cout << "Please enter a student grade: ";
	student.setGrade(grade);
	cout << student.getGrade(); 

return 0;
}
