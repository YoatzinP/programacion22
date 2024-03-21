// Nombre: Piña Jimenez Yoatzin 
// Grupo: 1TM13
// Fecha: 20/03/24


#include <iostream>

float Nconejos = 0;
float Alimentototal = 0;

using namespace std;

int main()
{
    cout << "¿Cuantos conejos hay?" << endl;
    cin >> Nconejos;

    Alimentototal = Nconejos * 50;

    cout << Nconejos << "*" << 50 << "=" <<  Alimentototal;
    return 0;

}