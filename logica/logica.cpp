#include <logica/logica.h>
#include <logica/datos.h>


void inicializar(trabajador datos[],int* cant)
{

    datos[0].numexpedien=1;
    datos[0].nombre= "Pedro";
    datos[0].salbasic=300;
    datos[0].sexo='m';
    datos[0].cantausen[3]=1;
    datos[0].cantausen[7]=1;
    datos[0].cantausen[21]=1;
    datos[0].cantausen[23]=1;




    datos[1].numexpedien=2;
    datos[1].nombre="Juana";
    datos[1].salbasic=350;
    datos[1].sexo='f';
    datos[1].cantausen[2]=1;
    datos[1].cantausen[4]=1;
    datos[1].cantausen[7]=1;
    datos[1].cantausen[9]=1;
    datos[1].cantausen[10]=1;


    datos[2].numexpedien=3;
    datos[2].nombre="Miguel";
    datos[2].salbasic=250;
    datos[2].sexo='m';
    datos[2].cantausen[14]=1;
    datos[2].cantausen[30]=1;

    datos[3].numexpedien=4;
    datos[3].nombre="Samuel";
    datos[3].salbasic=250;
    datos[3].sexo='m';


    datos[4].numexpedien=5;
    datos[4].nombre="Lorena";
    datos[4].salbasic=280;
    datos[4].sexo='f';
    datos[4].cantausen[9]=1;

    datos[5].numexpedien=6;
    datos[5].nombre="Karla";
    datos[5].salbasic=270;
    datos[5].sexo='f';
    datos[5].cantausen[6]=1;
    datos[5].cantausen[9]=1;
    datos[5].cantausen[14]=1;
    datos[5].cantausen[18]=1;
    datos[5].cantausen[21]=1;

    datos[6].numexpedien=7;
    datos[6].nombre="Claudia";
    datos[6].salbasic=200;
    datos[6].sexo='f';
    datos[6].cantausen[7]=1;
    datos[6].cantausen[9]=1;

    datos[7].numexpedien=8;
    datos[7].nombre="Raul";
    datos[7].salbasic=300;
    datos[7].sexo='m';
    datos[7].cantausen[2]=1;
    datos[7].cantausen[7]=1;

    datos[8].numexpedien=9;
    datos[8].nombre="Yenifer";
    datos[8].salbasic=220;
    datos[8].sexo='f';


    datos[9].numexpedien=10;
    datos[9].nombre="Ricardo";
    datos[9].salbasic=350;
    datos[9].sexo='m';

   *cant=10;






}

float salprom(trabajador datos [],int cant)
{
    float sum=0,prom;
    int cont=0;

            for (int i = 0; i < cant; i++)


    {
        if(datos[i].sexo=='f')

           { sum+=datos[i].salbasic;

            cont++;
           }



    }

     prom=sum/cont;


     return prom;





}

float mayorsalbas(trabajador datos[],int cant)
{
    int max=0;
    for (int i = 0; i < cant; i++)
    {

        if(datos[i].salbasic>max)

            max=datos[i].salbasic;





    }


    return max;


}



