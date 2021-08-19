#pragma once
#include "student.h"

class Security : public Student {
    private:
        Degree degProg = SECURITY;
    public:
        Degree getDegreeProgram() override;
        void Print();
        Security();
        Security(string, string, string, string, int, int*, Degree);
};