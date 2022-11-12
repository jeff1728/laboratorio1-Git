#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;
int main()
{

    double l1,l2,l3,areaT,perT,baseT,alturaT;
    double areaC, perimetroC,radioC;
    const double PI={3.1416};
    cout<<":___"<<endl;
    cout<<"------------------------------"<<endl;
    cout << "EJERCICIO CALCULO DE AREAS" << endl;
    cout<<"----------------------------"<<endl;
    cout<<"EJERCICIO CALCULO DE AREA DEL TRIANGULO"<<endl;
    cout<<"ingresar base del traingulo"<<endl;
    cin>>baseT;
    cout<<"ingresar altura del trinagulo"<<endl;
    cin>>alturaT;
    areaT=(baseT*alturaT)/2;
    cout<<"el area del triangulo es: "<<areaT<<endl,
    cout<<"INGRESAR INFORMACION PARA EL PERIMETRO DEL TRIANGULO"<<endl;
    cout<<"valor del lado 1"<<endl;
    cin>>l1;
    cout<<"valor del lado 2"<<endl;
    cin>>l2;
    cout<<"valor del lado 3"<<endl;
    cin>>l3;
    perT=l1+l2+l3;
    cout<<"el perimetro del triangulo es: "<<perT<<endl;
    cout<<"INGRESAR INFORMACION PARA EL AREA DEL CIRCULO"<<endl;
    cout<<"ingresar radio del circulo"<<endl;
    cin>>radioC;
    areaC=PI*pow(radioC,2);
    cout<<"el area del circulo es: "<<areaC<<endl;
    cout<<"INGRESAR INFORMACION PARA EL PERIMETRO DEL CIRCULO"<<endl;
    cin>>radioC;
    perimetroC=PI*radioC*2;
    cout<<"el perimetro del circulo es: "<<perimetroC<<endl;


    return 0;
}
