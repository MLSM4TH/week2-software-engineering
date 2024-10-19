#ifndef WEEK_1_OPERATION_H
#define WEEK_1_OPERATION_H

#include <complex>

using complex = std::complex<double>;

class operation{
public:
    virtual complex execute(complex a, complex b) const = 0;
    virtual ~operation() =default;
};

#endif //WEEK_1_OPERATION_H
