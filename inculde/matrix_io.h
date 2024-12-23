#ifndef MATRIX_IO_H
#define MATRIX_IO_H

#include "banded_matrix.h"
#include <string>

namespace MatrixIO {
    // Read a matrix from a Matrix Market file
    BandedMatrix readMatrixMarket(const std::string &filename);

    // Write a matrix to a Matrix Market file
    void writeMatrixMarket(const std::string &filename, const BandedMatrix &matrix);
}

#endif // MATRIX_IO_H
