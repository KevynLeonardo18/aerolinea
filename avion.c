#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	
	
	int vuelos[5];
	int avion_1[50][6];
	int avion_2[50][6];
	int avion_3[50][6];
	int avion_4[50][6];
	int avion_5[50][6];
	
	int reserva;
	int opcion;
	int cantidad;
	int fila;
	int columna;
	int fila2;
	int columna2;
	int fila3;
	int columna3;
	int fila4;
	int columna4;
	int fila5;
	int columna5;

	
	int x;
	int y;
	int z;
	
	for(x=0; x<5; x++){
		for(y=0; y<50; y++){
			for(z=0; z<6; z++){
				if(x==0){
					avion_1[y][z]=0;
				}else if(x==1){
					avion_2[y][z]=0;
				}else if(x==2){
					avion_3[y][z]=0;
				}else if(x==3){
					avion_4[y][z]=0;
				}else if(x==4){
					avion_5[y][z]=0;
				}
			}
		}
	}

	printf("BIENVENIDO A NUESTRAS AEROLINEAS");
	printf("\n\n");
	
	do{
	
	
	printf("Desea realizar una reserva?: 1/0: ");
	scanf("%d", &reserva);
	if(reserva>1 && reserva <0){
		printf("Ingrese un valor valido:\n");
	}else if(reserva ==1){
		break;
	}else if(reserva ==0){
		break;
	}

	}while(reserva ==0);
	
	printf("\n\n");
	
	
	
	
	do{
	
	
	do{
		printf("Desee el vuelo preferido:\n");
			printf("1-. Vuelo uno");
				printf("\n");
			printf("2-. Vuelo dos");
				printf("\n");
			printf("3-. Vuelo tres");
				printf("\n");
			printf("4-. Vuelo cuatro");
				printf("\n");
			printf("5-. Vuelo cinco");
				printf("\n");
			printf("0-. salir");
				printf("\n");
			scanf("%d", &opcion);
				
					
		if(opcion>=1 && opcion <6){
			break;
		}else if(opcion <0 && opcion >=6){
			printf("Ingrese un valor valido\n");
			
		}else if(opcion==0){
			break;
			return(0);
		}
			
		
				
				
	}while(1);
	
	
	switch(opcion){
		case 1:
		
		
		
			
			printf("Se le mostraran los asientos disponibles:\n\n ");
			
			for(y=0; y<50; y++){
				for(z=0; z<6; z++){
					printf("%d  ", avion_1[y][z]);
				}
				printf("\n");
				
			}
			printf("\n\n");
			do{
			
				printf("seleccione la fila de su asiento: 1/50: ");
				scanf("%d", &fila);
				if(fila >=1 && fila <51){
					break;
				}else{
					printf("No existe esa fila, vuelva a intentarlo:\n");
				}
			}while(1);
			
			do{
				printf("seleccione la columna de su asiento: 1/6: ");
				scanf("%d", &columna);
					if(columna >=1 && columna <7){
						break;
					}else{
					printf("La columna elegida no existe, intente de nuevo: \n");
						
					}
	
			}while(1);
			
			printf("Su asiento esta listo, sera mostrado a continuacion:\n\n ", fila, columna);
			
			avion_1[fila][columna]=1;
			
			
				for(y=0; y<50; y++){
					for(z=0; z<6; z++){
					printf("%d  ", avion_1[y][z], fila, columna);
				}
				printf("\n");
				
			}
			break;
			
		case 2:
			
			printf("Se le mostraran los asientos disponibles \n\n");
			
						for(y=0; y<50; y++){
				for(z=0; z<6; z++){
					printf("%d  ", avion_2[y][z]);
				}
				printf("\n");
				}
				
				printf("\n\n");
			do{
			
				printf("seleccione la fila de su asiento: 1/50: ");
				scanf("%d", &fila2);
				if(fila2 >=1 && fila2 <51){
					break;
				}else{
					printf("No existe esa fila, vuelva a intentarlo:\n");
				}
			}while(1);
			
			do{
				printf("seleccione la columna de su asiento: 1/6: ");
				scanf("%d", &columna2);
					if(columna2 >=1 && columna2 <7){
						break;
					}else{
					printf("La columna elegida no existe, intente de nuevo: \n");
						
					}
	
			}while(1);
			
			printf("Su asiento esta listo, sera mostrado a continuacion:\n\n ", fila2, columna2);
			
			avion_2[fila2][columna2]=1;
			
			
				for(y=0; y<50; y++){
					for(z=0; z<6; z++){
					printf("%d  ", avion_2[y][z], fila2, columna2);
				}
				printf("\n");
				
			}
			break;
			
		case 3:
			
		printf("Se le mostraran los asientos disponibles \n\n");
			
						for(y=0; y<50; y++){
				for(z=0; z<6; z++){
					printf("%d  ", avion_3[y][z]);
				}
				printf("\n");
				}
				
				printf("\n\n");
			do{
			
				printf("seleccione la fila de su asiento: 1/50: ");
				scanf("%d", &fila3);
				if(fila3 >=1 && fila3 <51){
					break;
				}else{
					printf("No existe esa fila, vuelva a intentarlo:\n");
				}
			}while(1);
			
			do{
				printf("seleccione la columna de su asiento: 1/6: ");
				scanf("%d", &columna3);
					if(columna3 >=1 && columna3 <7){
						break;
					}else{
					printf("La columna elegida no existe, intente de nuevo: \n");
						
					}
	
			}while(1);
			
			printf("Su asiento esta listo, sera mostrado a continuacion:\n\n ", fila3, columna3);
			
			avion_3[fila3][columna3]=1;
			
			
				for(y=0; y<50; y++){
					for(z=0; z<6; z++){
					printf("%d  ", avion_4[y][z], fila3, columna3);
				}
				printf("\n");
				
			}
			break;	
		
		case 4:
			
				printf("Se le mostraran los asientos disponibles \n\n");
			
						for(y=0; y<50; y++){
				for(z=0; z<6; z++){
					printf("%d  ", avion_4[y][z]);
				}
				printf("\n");
				}
				
				printf("\n\n");
			do{
			
				printf("seleccione la fila de su asiento: 1/50: ");
				scanf("%d", &fila4);
				if(fila4 >=1 && fila4 <51){
					break;
				}else{
					printf("No existe esa fila, vuelva a intentarlo:\n");
				}
			}while(1);
			
			do{
				printf("seleccione la columna de su asiento: 1/6: ");
				scanf("%d", &columna4);
					if(columna4 >=1 && columna4 <7){
						break;
					}else{
					printf("La columna elegida no existe, intente de nuevo: \n");
						
					}
	
			}while(1);
			
			printf("Su asiento esta listo, sera mostrado a continuacion:\n\n ", fila4, columna4);
			
			avion_4[fila4][columna4]=1;
			
			
				for(y=0; y<50; y++){
					for(z=0; z<6; z++){
					printf("%d  ", avion_4[y][z], fila4, columna4);
				}
				printf("\n");
				
			}
			break;	
			
		case 5:
		
		printf("Se le mostraran los asientos disponibles \n\n");
			
						for(y=0; y<50; y++){
				for(z=0; z<6; z++){
					printf("%d  ", avion_5[y][z]);
				}
				printf("\n");
				}
				
				printf("\n\n");
			do{
			
				printf("seleccione la fila de su asiento: 1/50: ");
				scanf("%d", &fila5);
				if(fila5 >=1 && fila5 <51){
					break;
				}else{
					printf("No existe esa fila, vuelva a intentarlo:\n");
				}
			}while(1);
			
			do{
				printf("seleccione la columna de su asiento: 1/6: ");
				scanf("%d", &columna5);
					if(columna5 >=1 && columna5 <7){
						break;
					}else{
					printf("La columna elegida no existe, intente de nuevo: \n");
						
					}
	
			}while(1);
			
			printf("Su asiento esta listo, sera mostrado a continuacion:\n\n ", fila5, columna5);
			
			avion_5[fila5][columna5]=1;
			
			
				for(y=0; y<50; y++){
					for(z=0; z<6; z++){
					printf("%d  ", avion_5[y][z], fila5, columna5);
				}
				printf("\n");
				
			}
			break;	
			
		
	}
	
	}while(opcion !=0);
	
	
	printf("Los asientos totales usados y vacios son: \n\n");
	
		for(x=0; x<5; x++){
		for(y=0; y<50; y++){
			for(z=0; z<6; z++){
				if(x==0){
					avion_1[y][z]=fila, columna;
				}else if(x==1){
					avion_2[y][z]=fila2, columna2;
				}else if(x==2){
					avion_3[y][z]=fila3, columna3;
				}else if(x==3){
					avion_4[y][z]=fila4, columna4;
				}else if(x==4){
					avion_5[y][z]=fila5, columna5;
				}
			
			printf("%d  ", avion_1[fila][columna], fila+1, columna+1);
			
			}
			printf("\n");
		
		}
		printf("\n");
	}
	

	return 0;
}
