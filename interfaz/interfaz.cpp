#include<interfaz/interfaz.h>
#include <iostream>
#include <string.h>
using namespace std;

int primermenu()
{


int opcion;

do
{
cout<<"[Introduzca la opcion deseada]"<<endl;
cout<<endl;
cout<<"1. Introducir datos por teclado."<<endl;
cout<<"2. Generar datos de prueba."<<endl;
cout<<"3. Salir de la aplicacion."<<endl;
cin>>opcion;

if (opcion != 1 && opcion != 2 && opcion != 3)
{
    cout<<"(dato incorrecto)introduzca solo los numeros indicados en la aplicacion."<<endl;
}



}
while(opcion != 1&&opcion != 2&&opcion != 3 );

return opcion;






}

int segundomenu()
{
    int opcion;

do{

cout<<"[Introduzca la opcion deseada]"<<endl;
cout<<endl;
cout<<"1. Imprimir datos de los trabajadores."<<endl;
cout<<"2. Calcular salario promedio de las mujeres."<<endl;
cout<<"3. Obtener un reporte de los trabajadores con todos sus datos que reciben menos de $250.00, con el salario basico."<<endl;
cout<<"4. Dado el codigo(numero de expediente) de un trabajador mostrar los dias que ha faltado al trabajo."<<endl;
cout<<"5. Obtener los trabajadores que no tuvieron ausencias."<<endl;
cout<<"6. Determinar los trabajadores con mayor salario basico en la empresa."<<endl;
cout<<"7. Salir de la aplicacion."<<endl;
cin>>opcion;

if(opcion!= 1&&opcion!=2&&opcion!=3&&opcion!=4&&opcion!=5&&opcion!=6&&opcion!=7)
   cout<<"(dato incorrecto)introduzca solo los numeros indicados en la aplicacion."<<endl;

    }
while(opcion!= 1&&opcion!=2&&opcion!=3&&opcion!=4&&opcion!=5&&opcion!=6&&opcion!=7);


return opcion;

}

void imprimir(trabajador datos [],int cant)
{


cout<<endl;
cout<<"..............[Datos de los trabajadores]....................... "<<endl;
cout<<endl;

for (int i = 0; i < cant; i++)
 {


    int cont=0;
   cout<<endl;
cout<<"..............................................................."<<endl;
    cout<<"numero de expediente: "<<datos[i].numexpedien<<endl;
    cout<<"nombre del trabajador: "<<datos[i].nombre<<endl;
    cout<<"salario basico: "<<datos[i].salbasic<<endl;
    cout<<"sexo: "<<datos[i].sexo<<endl;
    for (int j = 1; j < 31; j++)
    {
     if(datos[i].cantausen[j]==1)
        cout<<"Ausente el dia: "<<j<<endl;
     else if(datos[i].cantausen[j]==0)
         cont++;

    }



    if(cont==30)
    cout<<"El trabajador no obtuvo ausencias en el mes"<<endl;

   cout<<"..............................................................."<<endl;
    cout<<endl;
     cout<<endl;


 }

}

int entrada(trabajador datos[],int cant)
{
    int cant1=0;
    char opcion;
    int i=0;
  do
    {



     cout<<endl;
     cout<<"................................................................................."<<endl;
     cout<<endl;
     cout<<"(Introduzca los datos del trabajador)"<<endl;
     cout<<endl;
     cout<<"Introdusca numero de expediente:"<<endl;
     int num;
     cin>>num;
     datos[i].numexpedien = num;
     cout<<"Introdusca nombre del trabajador:"<<endl;
     char nomb[20];
     cin>>nomb;
     datos[i].nombre = nomb;
     cout<<"Introdusca su salartio basico:"<<endl;
     float salbas;
     cin>>salbas;
     datos[i].salbasic = salbas;
     cout<<"Introdusca el sexo [m]masculino o [f]femenino:"<<endl;
     char sex;
     cin>>sex;
     datos[i].sexo = sex;
     //cout<<"Introdusca la cantidad de ausencias de ausencias"<<endl;
     //cin>>datos[i].cantausen<<endl;
     cout<<endl;
     cout<<"..................................................................................."<<endl;



     i++;
     cant1++;
cout<<"Desea incorporar a la empresa otro trabajador [s]si o [n] no"<<endl;
cin>>opcion;


    }
    while(opcion=='s'&&i<10);

return cant1;





}

void imprimirmej(trabajador datos[],int cant)
 {

    for (int i = 0; i < cant; i ++)
    {
        int cont=0;

        for (int j = 1; j < 31; j++)
        {

            if(datos[i].cantausen[j]==0)
               cont++;





        }

        if(cont==30)
           { cout<<"..............................................................."<<endl;
                cout<<"numero de expediente: "<<datos[i].numexpedien<<endl;
                cout<<"nombre del trabajador: "<<datos[i].nombre<<endl;
                cout<<"salario basico: "<<datos[i].salbasic<<endl;
                cout<<"sexo: "<<datos[i].sexo<<endl;

                cout<<endl;
              cout<<"..............................................................."<<endl;
           }

    }



 }
