#include "Student.h"
#include <iostream>
#include<cstring>
using namespace std;

// Assign studentId and name
void Student::setassignDetails(int pstudentid,char pname[] )
{
   studentId = pstudentid;
  strcpy(name,pname);
}

// Display StudentId and Name
void Student::display() 
{
   cout<<"student name="<<name<<endl;
  cout<<"student ID="<<studentId<<endl;
}
