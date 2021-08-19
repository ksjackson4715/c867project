#include <iostream>
#include <string>
#include "software.h"

Software::Software() {

}
Software::Software(string ID, string First, string Last, string EmailAddress, int setAge, int *numDays, Degree studentDegree) : Student(ID, First, Last, emailAddress, setAge, numDays) {
    degProg = studentDegree;
}
Degree Software::getDegreeProgram() {
    return degProg;
}

void Software::Print() {
    cout << getStudentID();
    cout << "\tFirst Name: " << getFirstName();
    cout << "\tLast Name: " << getLastName();
    cout << "\t Age: " << getAge();
    cout << "\t" << "daysInCourse: {"; cout << getDaysToComplete()[0] << ", " << getDaysToComplete()[1] << ", " << getDaysToComplete()[2] << "}";
    cout << "\t Degree Program: SOFTWARE";
    cout << endl;
}