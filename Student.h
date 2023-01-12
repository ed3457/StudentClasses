#pragma once

#include <string>
using namespace std; 

class Student
{ // members 
private: 
	string name; 
	string id;
	string major;

// functions 
public: 
	// set name 
	void setName(string n); 
	// get name
	string getName();

	// set id
	void setID(string ID); 

	// get id
	string getID();

	// set major 
	void setMajor(string m);

	//get major 
	string getMajor();



};

