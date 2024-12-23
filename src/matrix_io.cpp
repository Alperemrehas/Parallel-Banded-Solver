#ifndef MATRIX_IO_H
#define MATRIX_IO_H

#include "banded_matrix.h"
#include <string>

namespace MatrixIO {
    BandedMatrix readMatrixMarket(const std::string &filename);
    void writeMatrixMarket(const std::string &filename, const BandedMatrix &matrix);
}

#endif // MATRIX_IO_H
