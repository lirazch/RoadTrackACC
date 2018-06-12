#include <iostream>
#include <Eigen/Dense>
using namespace Eigen;
using namespace std;

double sigmoid(int a)
{
    for( int a = 10; a < 20; a = a + 1 ) {
      cout << "value of a: " << a << endl;
    }
}

int main()
{
    Matrix3f mat;
    MatrixXf m(3, 6);
    VectorXf data_point(3);
    m(0,0)=0.2030422;
    m(0,1)=0.42991926;
    m(0,2)=-0.08137797;
    m(0,3)=1;
    m(0,4)=1;
    m(0,5)=1;
    m(1,0)=0.11759804;
    m(1,1)=-0.10445514;
    m(1,2)=-0.003818286;
    m(1,3)=1;
    m(1,4)=1;
    m(1,5)=1;
    m(2,0)=0.03010658;
    m(2,1)=-0.61413439;
    m(2,2)=0.23996983;
    m(2,3)=1;
    m(2,4)=1;
    m(2,5)=1;

    data_point(0)=1;
    data_point(1)=2;
    data_point(2)=3;
  //mat = m.transpose()*m;
    std::cout << "Now mat is mat:\n" << m.transpose()*data_point << std::endl;
}