#include "Student.h"

void Student::setName(string n)
{
	// you can add validation here 
	name = n;

}


string Student::getName()
{
	return name;


}

void Student::setID(string ID)
{

	id = ID; 
}

string Student::getID()
{
	return id;
}

void Student::setMajor(string m)
{

	major = m;
}

string Student::getMajor()
{
	return major;
}

void Student::printStudentInfo()
{
	cout << "Student Name: " << getName() << "\n";
	cout << "Student ID: " << getID() << endl;
	cout << "Student Major: " << getMajor() << endl;

}

Student::Student()
{
	/*name = "not set yet";
	major = "not set";
	id = "***********";*/

	// better way: 

	setName("not set yet");
	setMajor("not set");
	setID("***********"); 

}

Student::Student(string i, string n, string m)
{

	setName(n);
	setMajor(m);
	setID(i);
}

