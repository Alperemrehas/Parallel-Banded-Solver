#ifndef BANDED_MATRIX_H
#define BANDED_MATRIX_H

#include <vector>

class BandedMatrix {
public:
    int rows, cols, bandwidth;
    std::vector<std::vector<double>> data;

    BandedMatrix(int rows, int cols, int bandwidth);
    void populateRandom();
    void print() const;
};

#endif // BANDED_MATRIX_H
