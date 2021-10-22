//RUA que lea 3 números y lo ordene de menor a mayor
#include <iostream>
using namespace std;

int main(){

    int num1, num2, num3, maxvalue, minvalue, meanvalue;

    cout << "Por favor introduzca el primer numero: "; cin >> num1;
    cout << "Por favor introduzca el segundo numero: "; cin >> num2;
    cout << "Por favor introduzca el tercer numero: "; cin >> num3;

    //Check max value
    if (num1 > num2 && num1 > num3){ maxvalue = num1; }
    else if (num2 > num1 && num2 > num3){ maxvalue = num2; }
    else if (num3 > num1 && num3 > num2){ maxvalue = num3; }
    else { maxvalue = -1; }

    //Check min value
    if (num1 < num2 && num1 < num3){ minvalue = num1; }
    else if (num2 < num1 && num2 < num3){ minvalue = num2; }
    else if (num3 < num1 && num3 < num2){ minvalue = num3; }
    else { minvalue = -1; }

    //Cheack mean value
    if (maxvalue - num1 == 0){
        
        if (minvalue - num2 == 0){ meanvalue = num3; }
        else if (minvalue - num3 == 0 ) { meanvalue = num2; }
        else { meanvalue = -1; }

    } else if (maxvalue - num2 == 0){

        if (minvalue - num1 == 0){ meanvalue = num3; }
        else if (minvalue - num3 == 0 ) { meanvalue = num1; }
        else { meanvalue = -1; }

    } else if (maxvalue - num3 == 0){

        if (minvalue - num1 == 0){ meanvalue = num2; }
        else if (minvalue - num2 == 0 ) { meanvalue = num1; }
        else { meanvalue = -1; }

    } else { meanvalue = -1; }

    if (minvalue != -1 && maxvalue != -1){

        //Show all results
        cout << "\nEl menor es " << minvalue << ", el intermedio es " << meanvalue <<
            " y el mayor es " << maxvalue <<endl;
 
    } else if (maxvalue == -1 && minvalue != -1) {
        cout << "No hay numero mayor ni intermedio, el menor es " << minvalue << endl;
    } else if (minvalue == -1 && maxvalue != -1) {
        cout << "No hay numero menor ni intermedio, el mayor es " << maxvalue << endl;
    } else {
        cout << "Los tres numeros son iguales " << endl;
    }


    system("pause");
    return 0;
}