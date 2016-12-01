#include <stdio.h>
#include <string.h>
#define p printf
#define s scanf
#define FLUSH setbuf(stdin,NULL);
int FuncionCompararFechas();

int main()
{
    int anio1=-1, mes1=-1, dia1=-1, anio2=-1, mes2=-1, dia2=-1, hora1 =-1, min1 =-1, hora2 =-1, min2 =-1;
    int fecha=0, salir=0;
    int comparacion;
//se ingresa la pimera fecha en formato AAAA/MM/DD/HHMM
    p("\n\tIngresa la fecha 1: \n");

    while(anio1<2016)
    {
        p("\n\tAnio: ");
        s("%i", &anio1); FLUSH
    }

    while(mes1<0 || mes1>12)
    {
        p("\n\tMes: ");
        s("%i", &mes1); FLUSH
    }

    while(dia1<0 || dia1>31)
    {
        p("\n\tDia: ");
        s("%i", &dia1); FLUSH
    }

    while(hora1<0 || hora1>24)
    {
        p("\n\tHora: ");
        s("%i", &hora1); FLUSH
	setbuf(stdin,NULL);
    }

    while(min1<0 || min1>60)
    {
        p("\n\tMinuto: "); FLUSH
        s("%i", &min1);
	setbuf(stdin,NULL);
    }

//se ingresa la segunda fecha con el mismo formato
p("\n\tIngresa la fecha 2: \n");

    while(anio2<2016)
    {
        p("\n\tAnio: ");
        s("%i", &anio2); FLUSH
    }

    while(mes2<0 || mes2>12)
    {
        p("\n\tMes: "); 
        s("%i", &mes2); FLUSH
    }

    while(dia2<0 || dia2>31)
    {
        p("\n\tDia: "); 
        s("%i", &dia2); FLUSH
    }

    while(hora2<0 || hora2>24)
    {
        p("\n\tHora: ");
        s("%i", &hora2);
	setbuf(stdin,NULL);
    }

    while(min2<0 || min2>60)
    {
        p("\n\tMinuto: ");
        s("%i", &min2);
	setbuf(stdin,NULL);
    }


// Se comparan todas las variables (año, mes, dia, hora, minuto) de cada fecha ingresada para determinar cual es la fecha mayor
// esto se hace por medio de 2 contadores

   
    while(salir==0){
		if(anio1<anio2){
			fecha=2;	
			break;
		}else{
			if(anio1==anio2){
				fecha=0;
			}else{
				fecha=1;	
				break;
			}
		}
		if(mes1<mes2){
			fecha=2;
			break;
		}else{
			if(mes1==mes2){
				fecha=0;
			}else{
				fecha=1;
				break;
			}
		}
		if(dia1<dia2){
			fecha=2; 
			break;
		}else{
			if(dia1==dia2){
				fecha=0;
			}else{
				fecha=1;
				break;
			}	
		}
		if(hora1<hora2){
			fecha=2;
			break;
		}else{
			if(hora1==hora2){
				fecha=0;
			}else{
				fecha=1;
				break;
			}
		}
		if(min1<min2){
			fecha=2;
			break;
		}else{
			if(min1==min2){
				fecha=0;
				salir=1;
			}else{
				fecha=1;
				break;
			}
		}
		
	}


 
//Aqui ya se evalua cual de las dos fechas va primero y se imprimen

	switch(fecha){
	case 1:
        	p("\nFecha 1 es mas reciente a Fecha 2\n");
	break;
	case 2:
        	p("\nFecha 2 es mas reciente a Fecha 1\n" );
	break;
	case 0:
		p("\nFecha 1 es igual a fecha 2\n");
	break;

	}
    return 43;
}


