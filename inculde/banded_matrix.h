#ifndef BANDED_MATRIX_H
#define BANDED_MATRIX_H

#include <vector>
#include <iostream>
#include <random>

class BandedMatrix {
public:
    int rows;       // Number of rows
    int cols;       // Number of columns
    int bandwidth;  // Bandwidth of the matrix
    std::vector<std::vector<double>> data;  // Matrix stored in banded format

    // Constructor
    BandedMatrix(int rows, int cols, int bandwidth);

    // Populate matrix with random values
    void populateRandom();

    // Print the matrix in readable format
    void print() const;

    // Access matrix elements (i, j)
    double get(int i, int j) const;

    // Set matrix elements (i, j)
    void set(int i, int j, double value);
};

#endif // BANDED_MATRIX_H
