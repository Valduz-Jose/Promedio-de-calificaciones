#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float examenmatematica,tarea1matematica,tarea2matematica,tarea3matematica,promediodetareasmatematica,promediomatematica,examencomputacion,tarea1computacion,tarea2computacion,promediodetareascomputacion,promediocomputacion,examendibujo,tarea1dibujo,tarea2dibujo,tarea3dibujo,promediodetareasdibujo,promediodibujo,promediogeneral;
	int continuar;
	system("cls");
	fflush(stdin);
	system("color F0");
	do{
		printf("\t\t\t\t\tPromedio de Calificaciones\t\t\t\t\t");
		printf("\n\n\t\tCalificacion de Mat%cmatica",130);
		printf("\n\n\t\tNota del Examen: ");
		scanf("%f",&examenmatematica);
		printf("\t\tNota Tarea %c1: ",35);
		scanf("%f",&tarea1matematica);
		printf("\t\tNota Tarea %c2: ",35);
		scanf("%f",&tarea2matematica);
		printf("\t\tNota Tarea %c3: ",35);
		scanf("%f",&tarea3matematica);
		promediodetareasmatematica=(tarea1matematica+tarea2matematica+tarea3matematica)/3;
		promediomatematica=((promediodetareasmatematica*10)/100)+((examenmatematica*90)/100);
		
		printf("\n\n\t\tCalificacion de Computaci%cn",162);
		printf("\n\n\t\tNota del Examen: ");
		scanf("%f",&examencomputacion);
		printf("\t\tNota Tarea %c1: ",35);
		scanf("%f",&tarea1computacion);
		printf("\t\tNota Tarea %c2: ",35);
		scanf("%f",&tarea2computacion);
		promediodetareascomputacion=(tarea1computacion+tarea2computacion)/2;
		promediocomputacion=((promediodetareascomputacion*20)/100)+((examencomputacion*80)/100);
		
		printf("\n\n\t\tCalificacion de Dibujo",130);
		printf("\n\n\t\tNota del Examen: ");
		scanf("%f",&examendibujo);
		printf("\t\tNota Tarea %c1: ",35);
		scanf("%f",&tarea1dibujo);
		printf("\t\tNota Tarea %c2: ",35);
		scanf("%f",&tarea2dibujo);
		printf("\t\tNota Tarea %c3: ",35);
		scanf("%f",&tarea3dibujo);
		promediodetareasdibujo=(tarea1dibujo+tarea2dibujo+tarea3dibujo)/3;
		promediodibujo=((promediodetareasdibujo*15)/100)+((examendibujo*85)/100);
	
		printf("\n\t\t\tPromedio de Mat%cmatica: %.2f",130,promediomatematica);
		printf("\n\t\t\tPromedio de Computaci%cn: %.2f",162,promediocomputacion);
		printf("\n\t\t\tPromedio de Dibujo: %.2f",promediodibujo);
		promediogeneral=(promediomatematica+promediocomputacion+promediodibujo)/3;
		printf("\n\n\t\t\tPromedio General de las tres materias: %.2f",promediogeneral);
	
		printf("\n\n\n\t\tIntroduce (0) para continuar: ");
		scanf("%d",&continuar);
		system("cls");
	}while(continuar==0);
	printf("\t\t\t\t\tPromedio de Calificaciones\t\t\t\t\t");
	printf("\n\n\n\t\t\t\t\t--Hasta Luego--\t\t\t\t\t\t");
	return 0;
}
