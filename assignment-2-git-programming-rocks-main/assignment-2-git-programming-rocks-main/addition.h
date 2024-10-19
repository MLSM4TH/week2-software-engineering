#ifndef WEEK_1_ADDITION_H
#define WEEK_1_ADDITION_H


#include "operation.h"

class addition : public operation {
public:
    virtual complex execute(complex a, complex b) const override;
};


#endif //WEEK_1_ADDITION_H
