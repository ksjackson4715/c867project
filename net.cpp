#include <iostream>
#include <string>
#include "net.h"

Network::Network() {

}
Network::Network(string ID, string First, string Last, string emailAddress, int setAge, int *numDays, Degree studentDegree) : Student(ID, First, Last, emailAddress, setAge, numDays) {
    degProg = studentDegree;
}

Degree Network::getDegreeProgram() {
    return degProg;
}

void Network::Print() {
    cout << getStudentID();
    cout << "\tFirst Name: " << getFirstName();
    cout << "\tLast Name: " << getLastName();
    cout << "\t Age: " << getAge();
    cout << "\t" << "daysInCourse: {"; cout << getDaysToComplete()[0] << ", " << getDaysToComplete()[1] << ", " << getDaysToComplete()[2] << "}";
    cout << "\t Degree Program: Network";
    cout << endl;
}