#ifndef PARALLEL_SOLVER_H
#define PARALLEL_SOLVER_H

#include "banded_matrix.h"
#include <mpi.h>

class ParallelSolver {
public:
    ParallelSolver(int argc, char *argv[]);
    ~ParallelSolver();

    void initialize(const BandedMatrix &matrix);
    void cyclicReduction();
    void backSubstitution();
    void gatherResults();

private:
    int rank, size;
    MPI_Comm comm;
    BandedMatrix matrix;
};

#endif // PARALLEL_SOLVER_H
