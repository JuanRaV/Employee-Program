/* Nombre del programador: Juan Ramón Ramírez Virgen
Nombre del programa: Salario de un empleado
Fecha: 23/09/2021
Descripción del programa: Este programa evaluara la cantidad de empleados que ingresaste y DE CADA UNO DE ELLOS calculará el sueldo base, los impuestos y el total a
pagar de un empleado, basándose en las horas que trabajó y el precio que se le paga por hora,
si las horas trabajadas son mayores a 40 se le pagará el 1.5 mas */
#include<stdio.h>
#include<stdlib.h>
main()
{
char nt[30],ne[30];
int i=0,horas_t,empleados,opcion,repetir;
float costo_h,sueldo_b,impuesto,total;
do{
		printf("Escriba la cantidad de empleados que tiene: \n");
		scanf("%i",&empleados);

		printf("\nMENU-Seleccione el ciclo que desee usar:\n1.-For\n2.-While\n3.-Do While\n");
		scanf("%i",&opcion);
		
		switch(opcion){
			case 1:
				for(i=1;i<=empleados;i++){
					printf("TRABAJADOR #%i\n\n",i);
					puts("Escriba el nombre del trabajador: ");
					fflush(stdin);gets(nt);
					puts("\nEscriba el nombre de la empresa: ");
					fflush(stdin);gets(ne);
					printf("\nEscriba las horas que trabaja: " );
					scanf("%i", &horas_t);
					printf("\nEscriba el costo por hora: ");
					scanf("%f",&costo_h);
					
				
					if(horas_t>40){
							sueldo_b=(horas_t-40)*(costo_h*1.5)+(40*costo_h);
					}
					else{
					sueldo_b=horas_t*costo_h;
					}
					impuesto=sueldo_b*.16;
					total=sueldo_b-impuesto;
					
					//Limpiar todos
					printf("===================================\n");
					printf("\nEl nombre del empleado #%i es %s, el cual trabaja en la empresa %s.\nEl sueldo base de este empleado es de $%.2f, con un impuesto de $%.2f .\nEl total que se le pagar%C es de $%.2f\n\n",i,nt,ne,sueldo_b,impuesto,160,total);
					printf("===================================\n");
				}break;
			
			case 2: 
				i=1;
				while(i<=empleados){
					printf("TRABAJADOR #%i\n\n",i);
					puts("Escriba el nombre del trabajador: ");
					fflush(stdin);gets(nt);
					puts("\nEscriba el nombre de la empresa: ");
					fflush(stdin);gets(ne);
					printf("\nEscriba las horas que trabaja: " );
					scanf("%i", &horas_t);
					printf("\nEscriba el costo por hora: ");
					scanf("%f",&costo_h);
					
				
					if(horas_t>40){
							sueldo_b=(horas_t-40)*(costo_h*1.5)+(40*costo_h);
					}
					else{
					sueldo_b=horas_t*costo_h;
					}
					impuesto=sueldo_b*.16;
					total=sueldo_b-impuesto;
					 //Limpiar todos
					printf("===================================\n");
					printf("\nEl nombre del empleado #%i es %s, el cual trabaja en la empresa %s.\nEl sueldo base de este empleado es de $%.2f, con un impuesto de $%.2f .\nEl total que se le pagar%C es de $%.2f\n\n",i,nt,ne,sueldo_b,impuesto,160,total);
					printf("===================================\n");
					i++;
				}break;
			
			
			
			
			
			case 3:
				i=1;
				do{
					printf("TRABAJADOR #%i\n\n",i);
					puts("Escriba el nombre del trabajador: ");
					fflush(stdin);gets(nt);
					puts("\nEscriba el nombre de la empresa: ");
					fflush(stdin);gets(ne);
					printf("\nEscriba las horas que trabaja: " );
					scanf("%i", &horas_t);
					printf("\nEscriba el costo por hora: ");
					scanf("%f",&costo_h);
					
				
					if(horas_t>40){
							sueldo_b=(horas_t-40)*(costo_h*1.5)+(40*costo_h);
					}
					else{
					sueldo_b=horas_t*costo_h;
					}
					impuesto=sueldo_b*.16;
					total=sueldo_b-impuesto;
					
					//Limpiar todos
					printf("===================================\n");
					printf("\nEl nombre del empleado #%i es %s, el cual trabaja en la empresa %s.\nEl sueldo base de este empleado es de $%.2f, con un impuesto de $%.2f .\nEl total que se le pagar%C es de $%.2f\n\n",i,nt,ne,sueldo_b,impuesto,160,total);
					printf("===================================\n");
					i++;
				}while(i<=empleados);
				break;
		
		}				
		printf("\n¿Desea repetir el programa?\n1.-Si\n2.-No\n");
		scanf("%i",&repetir);
	} while(repetir == 1);

system("pause");

}
