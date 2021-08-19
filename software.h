#pragma once

#include "student.h"

class Software : public Student {
    private:
        Degree degProg = SOFTWARE;
    public:
        Degree getDegreeProgram() override;
        void Print();
        Software();
        Software(string, string, string, string, int, int*, Degree);

};