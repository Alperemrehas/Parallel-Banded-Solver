#ifndef CYCLIC_REDUCTION_H
#define CYCLIC_REDUCTION_H

#include "banded_matrix.h"

class CyclicReduction {
public:
    // Perform Cyclic Odd-Even Reduction on the matrix
    static void reduce(BandedMatrix &matrix);
};

#endif // CYCLIC_REDUCTION_H
