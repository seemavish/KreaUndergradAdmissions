#ifndef STUDENT_H_
#define STUDENT_H_

#include <iomanip>
#include <iostream>
using namespace std;

class Student
{
public:
    string fullName;
    int age, courseCount;
    float scoreCGPA;

    void initiateAdmission();
};

#endif