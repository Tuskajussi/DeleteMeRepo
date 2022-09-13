#ifndef SCIENTIFIC_H
#define SCIENTIFIC_H
#include "calculator.h"

class Scientific:public Calculator
{
public:
    Scientific();
    virtual void inputOperands() override;
    virtual void showResults() override;
    void calculateScientific();
private:
    char scientificOperation;
    double scientificResult;
};

#endif // SCIENTIFIC_H
