// StudentClasses.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Student.h"

int main()
{
    std::cout << "Hello World!\n";

    Student stud1; 

   /* stud1.setID("1234556");

    stud1.setMajor("Math");

    stud1.setName("David");*/

   // cout << stud1.getMajor();

    stud1.printStudentInfo();

    Student stud2("1234", "Jenna", "Computer Science");

    stud2.printStudentInfo();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
