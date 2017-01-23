#include <iostream>

#include <iomanip>



class Student {

    int passed = 0, failed = 0;

    char grade = ' ', choice = 'N';



    public:


    void setGrade(char g){

      	grade = g;

    }

    char getGrade() {
	return grade;
    }

};
