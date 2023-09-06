// Develop a C++ program to describe  the admission process for students at Krea University

#include "admissions.h"

#include <iomanip>
#include <iostream>
using namespace std;

void Student::initiateAdmission()
{
    float sum = 0, score;

    if (courseCount <= 0 || courseCount > 5)
    {
        cout << endl
             << "Invalid input. Please enter a valid number of courses." << endl;
        return;
    }
    else
    {
        // convert percentage to cgpa
        for (int i = 1; i <= courseCount; i++)
        {
            cout << "Enter your score (in percentage) for course " << i << ": ";
            cin >> score;

            if (score < 0 || score > 100)
            {
                cout << endl
                     << "Invalid score entered for course " << i << ". Please enter a valid percentage." << endl;
                return;
            }

            sum = sum + score;
        }

        scoreCGPA = sum / (10 * courseCount);

        cout << endl
             << "Your CGPA score is: " << setprecision(2) << scoreCGPA << endl;

        // criteria for Selection process: mnimu 4.5 cgpa

        if (scoreCGPA < 4.5)
        {
            // if the CGPA requirement is not met than the applicant cannot proceed.
            cout << endl
                 << "We are sorry, " << fullName << ". You do not meet the eligibility criteria for admission." << endl
                 << "We wish you best of luck for your future endeavours." << endl;
            return;
        }
        else
        {
            cout << endl
                 << "Congratulations, " << fullName << "."
                 << "You are a step closer to securing a seat at Krea University." << endl
                 << "Please proceed with the application process to join our community." << endl;
        }
    }
}
