#include "../include/matrix_io.h"
#include "../include/banded_matrix.h"
#include <iostream>
#include <string>

int main() {
    std::cout << "Testing Matrix I/O..." << std::endl;

    // Generate a random banded matrix
    BandedMatrix matrix(5, 5, 2);
    matrix.populateRandom();

    // Write to a file
    std::string filename = "test_matrix.mtx";
    MatrixIO::writeMatrixMarket(filename, matrix);
    std::cout << "Matrix written to " << filename << std::endl;

    // Read from the file
    BandedMatrix readMatrix = MatrixIO::readMatrixMarket(filename);
    std::cout << "Matrix read from " << filename << ":" << std::endl;
    readMatrix.print();

    return 0;
}
