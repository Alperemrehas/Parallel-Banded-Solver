#include "../include/banded_matrix.h"
#include <iostream>

int main() {
    std::cout << "Testing BandedMatrix..." << std::endl;

    // Create a banded matrix
    BandedMatrix matrix(5, 5, 2); // 5x5 matrix with bandwidth 2
    matrix.populateRandom();
    std::cout << "Generated Banded Matrix:" << std::endl;
    matrix.print();

    // Test element access
    matrix.set(2, 2, 5.5);
    if (matrix.get(2, 2) == 5.5) {
        std::cout << "Element access test passed." << std::endl;
    } else {
        std::cout << "Element access test failed." << std::endl;
    }

    return 0;
}
