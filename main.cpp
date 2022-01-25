#include <iostream>
#include <logica/datos.h>
#include <interfaz/interfaz.h>
#include <logica/logica.h>

using namespace std;

int main()
{

  trabajador trabajadores[10];
  int opcion1,opcion2;
  int cant=0;
  float maxi;

  cout<<"                 ----------------------------------------------------"<<endl;
  cout<<"                   (BIENVENIDOS AL SOFTWARE DE RECURSOS HUMANOS)"<<endl;
  cout<<"                 ----------------------------------------------------"<<endl;


opcion1=primermenu();
switch (opcion1)
{
case 1:
{
      cant=entrada(trabajadores,10);
}
    break;

case 2:
{
      inicializar(trabajadores,&cant);
}
   break;


default:
    return 0;

    break;
}

char hacer;
do
{
system("cls");
cout<<"--------------------------------------------------------------------------"<<endl;
cout<<"                          (MENU PRINCIPAL)"<<endl;
cout<<"--------------------------------------------------------------------------"<<endl;
cout<<endl;


opcion2=segundomenu();


switch (opcion2)
{
case 1:

{
    imprimir(trabajadores,cant);
}
    break;

case 2:

{


    cout<<"El salario promedio de las mujeres es: "<<salprom(trabajadores,cant)<<endl;
}
    break;

case 3:


{
    cout<<"[Reporte de los trabajadores con menos de 250 pesos de salario basico]"<<endl;
    for (int i = 0; i < cant; i++)
    {
      int cont=0;
        if(trabajadores[i].salbasic<250)
        {cout<<"..............................................................."<<endl;
                cout<<"numero de expediente: "<<trabajadores[i].numexpedien<<endl;
                cout<<"nombre del trabajador: "<<trabajadores[i].nombre<<endl;
                cout<<"salario basico: "<<trabajadores[i].salbasic<<endl;
                cout<<"sexo: "<<trabajadores[i].sexo<<endl;
                for (int j = 1; j < 31; j++)
                {
                 if(trabajadores[i].cantausen[j]==1)
                   cout<<"Ausente el dia: "<<j<<endl;
                 else if(trabajadores[i].cantausen[j]==0)
                     cont++;

                }



                if(cont==30)
                cout<<"El trabajador no obtuvo ausencias en el mes"<<endl;
         cout<<"..............................................................."<<endl;
         }

  }
}
break;

case 4:

{
    int aus;


    cout<<"Introduzca el numero de expediente del trabajador que desee buscar sus ausencias"<<endl;
    cin>>aus;

    for (int i = 0; i < cant; i++)
    {
        int cont1=0;
        if(trabajadores[i].numexpedien==aus)
        {cout<<"..............................................................."<<endl;
                cout<<"numero de expediente: "<<trabajadores[i].numexpedien<<endl;
                cout<<"nombre del trabajador: "<<trabajadores[i].nombre<<endl;
                cout<<"salario basico: "<<trabajadores[i].salbasic<<endl;
                cout<<"sexo: "<<trabajadores[i].sexo<<endl;
                for (int j = 1; j < 31; j++)
                {
                 if(trabajadores[i].cantausen[j]==1)
                   cout<<"Ausente el dia: "<<j<<endl;
                 else if(trabajadores[i].cantausen[j]==0)
                     cont1++;

                }



                if(cont1==30)
                cout<<"El trabajador no obtuvo ausencias en el mes"<<endl;

         }

    }
}
    break;

case 5:

  {
cout<<"....................................................................."<<endl;
cout<<"[Trabajadores sin ausencias en el mes]"<<endl;

cout<<endl;


        imprimirmej(trabajadores,cant);

}

    break;
case 6:

{
if(cant>0)
{

    cout<<"[Trabajadores con mayor salario basico]"<<endl;
    maxi=mayorsalbas(trabajadores,cant);
    for (int i = 0; i < cant; i++)
    {
         int cont=0;

        if(trabajadores[i].salbasic==maxi)
        {cout<<"..............................................................."<<endl;
                cout<<"numero de expediente: "<<trabajadores[i].numexpedien<<endl;
                cout<<"nombre del trabajador: "<<trabajadores[i].nombre<<endl;
                cout<<"salario basico: "<<trabajadores[i].salbasic<<endl;
                cout<<"sexo: "<<trabajadores[i].sexo<<endl;
                for (int j = 1; j < 31; j++)
                {
                 if(trabajadores[i].cantausen[j]==1)
                   cout<<"Ausente el dia: "<<j<<endl;
                 else if(trabajadores[i].cantausen[j]==0)
                     cont++;

                }



                if(cont==30)
                cout<<"El trabajador no obtuvo ausencias en el mes"<<endl;
         cout<<"..............................................................."<<endl;
         }


    }
}

else
cout<<"No hay trabajadores en la empresa"<<endl;
}
     break;

default:
         return 0;
    return 0;
    break;
}
cout<<endl;

cout<<"Desea volver al menu principal [s] si o [n] no"<<endl;
cin>>hacer;

}
while(hacer != 'n');



return 0;
}
