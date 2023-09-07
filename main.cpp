#include "admissions.h"
// #include "admissions.cpp"

#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    // create a student class called s

    Student s;
    cout << "Enter your first name: ";
    getline(cin, s.fullName);

    // Guiding text 
    cout << endl << "Welcome " << s.fullName << ". Please provide further information to proceed." << endl << endl;

    // Get information. Applicant's age should be between 18 and 50, assuming there is no age to study but anything above 50 can be risky!! 
    cout << "What is your age? : ";
    cin >> s.age;    
    if(s.age>=18 && s.age <= 50){
        cout << "How many courses did you take? : ";
        cin >> s.courseCount;
        s.initiateAdmission();
    }
    else{
        //  if age requirement is not met than the applicant cannot proceed
        cout << endl << "We are sorry, " << s.fullName << ". You do not meet the eligibility criteria for admission. We wish you best of luck for your future endeavours." << endl;
    }
    
    return 0;
}