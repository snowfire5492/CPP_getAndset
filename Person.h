/*
 * Person.h
 *
 *  Created on: Apr 18, 2019
 *      Author: snowf
 */

#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>
using namespace std;

class Person{

private:
	string name;
protected:

public:

	//constructor
	Person(string giveName);
	//destructor
	~Person();
	string toString();


	void setName(string givenName);
	string getName();


};



#endif /* PERSON_H_ */

