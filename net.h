#pragma once
#include "student.h"

class Network : public Student {
    private:
        Degree degProg = NETWORK;
    public:
        Degree getDegreeProgram() override;
        Network();
        Network(string, string, string, string, int, int*, Degree);
        void Print();
};