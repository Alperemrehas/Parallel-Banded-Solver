#ifndef PARALLEL_SOLVER_H
#define PARALLEL_SOLVER_H

#include "banded_matrix.h"
#include <mpi.h>
#include <vector>

class ParallelSolver {
public:
    ParallelSolver(int argc, char *argv[]);  // Constructor
    ~ParallelSolver();                       // Destructor

    // Initialize solver with matrix
    void initialize(const BandedMatrix &matrix);

    // Perform cyclic reduction
    void cyclicReduction();

    // Perform back substitution
    void backSubstitution();

    // Gather results from all processors
    void gatherResults();

private:
    int rank;         // Rank of the current processor
    int size;         // Total number of processors
    MPI_Comm comm;    // MPI communicator
    BandedMatrix matrix; // Local matrix for this processor

    // Helper functions
    void distributeMatrix(const BandedMatrix &matrix);
    void collectResults();
};

#endif // PARALLEL_SOLVER_H
