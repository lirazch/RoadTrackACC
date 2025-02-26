//load matrix from csv
#include <Eigen/Dense>
#include <vector>
#include <fstream>
#include <iostream>

using namespace Eigen;
using namespace std;

template<typename M>
M load_csv (const std::string & path) {
    std::ifstream indata;
    indata.open(path);
    std::string line;
    std::vector<double> values;
    uint rows = 0;
    std::getline(indata, line);
    while (std::getline(indata, line)) {

        std::stringstream lineStream(line);
        std::string cell;
        while (std::getline(lineStream, cell, ',')) {

            values.push_back(std::stod(cell));
        }
        ++rows;
    }
    return Map<const Matrix<typename M::Scalar, M::RowsAtCompileTime, M::ColsAtCompileTime, RowMajor>>(values.data(), rows, values.size()/rows);
}

int main()
{
    
    MatrixXd A = load_csv<MatrixXd>("/home/gidi/nbs/RoadTrackACC/simulated_data.csv");
    cout<<A;
    return 0;
}