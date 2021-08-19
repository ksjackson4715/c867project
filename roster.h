#pragma once
#include <string>
#include "student.h"
#include "software.h"
#include "sec.h"
#include "net.h"

class Roster {
    private:
        Student *classRosterArray[5] = {
            nullptr, nullptr, nullptr, nullptr, nullptr
        };
    public:
        Roster();
        ~Roster();

        int globalClassIndex = 0;
        void Add(string ID, string First, string Last, string EmailAddress, int setAge, int numDays0, int numDays1, int numDays2, Degree);
	    void Remove(string studentID);
	    void PrintAll();
	    void PrintAverageDaysInCourse(string studentID);
	    void PrintInvalidEmails();
	    void PrintByDegreeProgram(Degree degreeProgram);

        Student ** getClassRosterArray();
};
