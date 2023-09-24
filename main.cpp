#include "admissions.h"

#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    // create a student class called s

    Student* student = new Student;
    cout << "Enter your first name: ";
    getline(cin, *(student->fullName));

    // Guiding text 
    cout << endl << "Welcome " << *(student->fullName) << ". Please provide further information to proceed." << endl << endl;

    // Get information. Applicant's age should be between 18 and 50, assuming there is no age to study but anything above 50 can be risky!! 
    cout << "What is your age? : ";
    cin >> *(student->age);    
    if(*(student->age) >= 18 && *(student->age) <= 50){
        cout << "How many courses did you take? : ";
        cin >> *(student->courseCount);
        student->initiateAdmission();
    }
    else{
        //  if age requirement is not met than the applicant cannot proceed
        cout << endl << "We are sorry, " << *(student->fullName) << ". You do not meet the eligibility criteria for admission. We wish you best of luck for your future endeavours." << endl;
    }
    
    return 0;
}