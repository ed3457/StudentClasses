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
