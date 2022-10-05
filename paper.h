#ifndef PAPER_H
#define PAPER_H

#include <string>

class Paper
{
private:
    float value;
    std::string name;

public:
    Paper();

    void buy();
    void sell();
};

#endif
