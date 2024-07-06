//
//  main.cpp
//  ClassADT
//
//  Created by Admin on 2024-07-05.
//

#include <iostream>
#include "Students.h"

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
    Students Student1, Student2("Amy", 20, "UCLA");
    cout << "Student1 is: \n" << Student1.GetAge() << "   "<<Student1.GetSchool();
    cout << "\n Student2 is: \n" << Student2.GetAge() << "   "<<Student2.GetSchool();
    cout << endl;

    

    
    return 0;
}
