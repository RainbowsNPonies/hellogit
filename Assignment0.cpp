#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
#include "Student.h"

int linearSearch(auto data, auto key) {
	for(int i =0;i< data.size();i++){
		if(data[i]==key){
			return i;
		}
	}
	return -1;
}

int main() {
	
    int i;
	char skey, result;
	
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


    cout<<"To exit please enter 'N' followed by enter key"<<endl;
    cout<< "Please enter a value to search for"<< endl;
    cin >> skey;

    while(skey != 'N') {
	    result = linearSearch(Grades,skey);
	    
	    if(result == -1) 
		    cout<<"Your value was not found"<<endl;
	    else 
		    cout<<"Your value was found at index"<<result<<endl;


	    cout<<"Please enter a value to search for( or 'N' to exit)" << endl;
	    cin >> skey;
   }

return 0;
}

