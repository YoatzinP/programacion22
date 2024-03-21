// Nombre: Piña Jimenez Yoatzin 
// Grupo: 1TM13
// Fecha: 20/03/24


#include <iostream>
#include"Eigen/Dense"



using namespace std;
using namespace Eigen;


int main()
{
    MatrixXd A(3, 3);
    A << 1, 2, 3,
        4, 5, 6,
        1, 1, 1;
    MatrixXd B(3, 3);
    B << -1, 0, -1,
        2, 1, 5,
        1, 1, 1;

    MatrixXd C(3, 3);
    C << -1, 0, -1,
        2, 1, 5,
        2, 2, 2;


    cout << "C = A + B" << endl;
    C = A + B;
    cout << C;
    cout << endl;
    cout << endl;
    
    cout << "C = A - B" << endl;
    C = A - B;
    cout << C;
    cout << endl;
    cout << endl;


    cout << "C = A* B" << endl;
    C = A* B;
    cout << C;
    cout << endl;
    cout << endl;

    cout << "det(A)" << endl;
    cout << A.determinant();
    cout << C;
    cout << endl;
    cout << endl;

}