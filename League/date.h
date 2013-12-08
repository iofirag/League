#ifndef date_h_
#define date_h_

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>
#include <fstream>

using namespace std;

class Date{
public:
	int year;
	int month;
	int day;
	Date();
	Date(int year, int month, int day);
	void operator+=(int a);
	Date & operator+=(const Date & Date);
	Date & operator=(const Date & Date);
	int operator==(const Date & Date);
	//dtor				//no needed
	friend ofstream& operator<<(ofstream & Fout, const Date & d);	
};
ofstream & operator<< (ofstream & Fout, Date & d);		

#endif