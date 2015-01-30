/*
 * Person.cpp
 *
 *  Created on: Apr 18, 2019
 *      Author: snowf
 */


#include <iostream>
#include "Person.h"

using namespace std;

// constructor
Person::Person(string givenName){
	name = givenName;
}


// destructor
Person::~Person(){
	cout << "Person Destroyed..." << endl;
}

string Person::toString(){
	return name;
}

string Person::getName(){
	return name;
}

void Person::setName(string givenName){
	name = givenName;
}

