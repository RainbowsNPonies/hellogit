#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
#include "Student.h"

int main() {
	
    int i;
	
    Student grade1;
    Student grade2;
    Student grade3;
    Student grade4;

    grade1.setGrade('A');
    grade2.setGrade('D');
    grade3.setGrade('F');
    grade4.setGrade('B');

    vector<Student>Grades;
	
	Grades.push_back(grade1);
	Grades.push_back(grade2);
	Grades.push_back(grade3);
	Grades.push_back(grade4);

    cout << "Student Grades: "<<endl;

    for (i=0;i<Grades.size();i++){
        cout << Grades[i].getGrade() <<endl;
    }


return 0;
}

