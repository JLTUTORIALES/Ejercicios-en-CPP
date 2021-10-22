/*Calcular el sueldo mensual de un empleado que trabaja por horas, el pago de cada hora
trabajada depende de su categoría:*/

#include <iostream>
using namespace std;

int main(){

    char cat; int horas; double result;
    do {
        system("cls");
        
        cout << "POR FAVOR INTRODUZCA LA CATEGORIA A LA QUE PERTENECE " << endl;
        cout << "A: \t26.90" << endl;
        cout << "B: \t24.30" << endl;
        cout << "C: \t21.50" << endl;
        cout << "\n --> "; cin >> cat;
    } while (cat != 'A' && cat != 'B' && cat != 'C');

    cout << "POR FAVOR, INTROUCE LAS HORAS TRABAJADAS: "; cin >> horas;

    switch(cat){
        case 'A': result = horas * 26.90; break;
        case 'B': result = horas * 24.30; break;
        case 'C': result = horas * 21.50; break;
    }

    cout << "USTED TRABAJO "<< horas << " HORAS Y RECIBIRA " << result << " PESOS" << endl;


    system("pause");
    return 0;
}