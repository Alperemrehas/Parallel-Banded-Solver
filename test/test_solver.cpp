#include "../include/parallel_solver.h"
#include "../include/banded_matrix.h"
#include <mpi.h>
#include <iostream>

int main(int argc, char *argv[]) {
    MPI_Init(&argc, &argv);

    std::cout << "Testing ParallelSolver..." << std::endl;

    BandedMatrix matrix(5, 5, 2); // Create a small test matrix
    matrix.populateRandom();

    ParallelSolver solver(argc, argv);
    solver.initialize(matrix);
    solver.cyclicReduction();
    solver.backSubstitution();
    solver.gatherResults();

    MPI_Finalize();
    return 0;
}
