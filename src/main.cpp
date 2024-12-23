#include "parallel_solver.h"
#include "matrix_io.h"

int main(int argc, char *argv[]) {
    MPI_Init(&argc, &argv);

    try {
        if (argc < 2) {
            throw std::invalid_argument("Usage: program <MatrixMarketFile>");
        }

        // Read and prepare the matrix
        auto matrix = MatrixIO::readMatrixMarket(argv[1]);

        // Initialize and solve
        ParallelSolver solver(argc, argv);
        solver.initialize(matrix);
        solver.cyclicReduction();
        solver.backSubstitution();
        solver.gatherResults();

    } catch (const std::exception &e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    MPI_Finalize();
    return 0;
}
