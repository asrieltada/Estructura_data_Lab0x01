#include <stdio.h>
#include <stdlib.h>  
#define M 2 
#define N 2 
#define P 3

//matias alburquenque

// ejercicio 1

int ejer1()
{
	int i;
	//Inicializamos matriz y asignamos sus valores
	int matriz[10]={1,2,3,4,5,6,7,8,9,10}; 
	for (i = 0; i <= 9; i++)
	{
		if(matriz[i]%2==0)
			printf("%d,", matriz[i]);
	}
}

// ejercicio 2
int ejer2()
{
	int i;
	 //Inicializamos matriz y asignamos sus valores
	int matriz[10]={1,2,3,4,5,6,7,8,9,10};
	for (i = 0; i <= 9; i++)
	{
	if (matriz[i]%2!=0)
		printf("%d,", matriz[i]);
	}
}
//ejercicio 3
int ejer3()
{
    system("cls");
    system("color 32f");
    system("title Ejercicio 31");

    int f=2,c=2;
    int m1[f][c];
    int m2[f][c];
    int mR[f][c];
    int cont,contz,x,w,opcion;

    printf("Menu:\n\n");
    printf("1.-Generar.\n");
    printf("2.-Capturar.\n\n");
    printf("Elige:");
    scanf("%d",&opcion);
    system("cls");

    switch(opcion){
    case 1:
            cont=1;
            contz=9;
            for(x=0;x<=f-1;x++){     //Proporciona DATOS de m1 y m2
               for(w=0;w<=f-1;w++){
                  m1[x][w]=cont;
                  m2[x][w]=contz;
                  cont++;
                  contz--;
               }
            }
            break;
    case 2:
            for(x=0;x<=f-1;x++){      //CAPTURA DE DATOS de m1
            for(w=0;w<=f-1;w++){
                printf("m1[%d][%d]=",x,w);
                scanf("%d",&cont);
                m1[x][w]=cont;
                system("cls");
            }
        }


            cont=0;
            for(x=0;x<=f-1;x++){      //CAPTURA DE DATOS de m2
            for(w=0;w<=f-1;w++){
                printf("m2[%d][%d]=",x,w);
                scanf("%d",&cont);
                m2[x][w]=cont;
                system("cls");
            }
        }

            break;
    default:
        printf("OPCION NO VALIDA!\n\n");
        system("pause");
        main();
    }


    printf("Matriz M1:\n");
    for(x=0;x<=f-1;x++){              //Muestra M1
        for(w=0;w<=f-1;w++){
            printf("%d",m1[x][w]);
        }
        printf("\n");
    }

        printf("Matriz M2:\n");
    for(x=0; x<=f-1;x++){              //Muestra M2
        for(w=0;w<=f-1;w++){
            printf("%d",m2[x][w]);
        }
        printf("\n");
    }


    printf("\n\nResultado de multiplicacion matricial:\n\n");
    //MULTIPLICANDO MATRICES!

int i,j,k;
for(i=0;i<=f-1;i++){
    for(j=0;j<=c-1;j++){
        mR[i][j]=0;
        for(k=0;k<=c-1;k++){
            mR[i][j]=(mR[i][j]+(m1[i][k]*m2[k][j]));
        }
        printf("%d ",mR[i][j]);
          }
          printf("\n");
}

    return 0;
}
 //ejercicio 3.2
 
 void ejer3_2(){ 
int i,j,k; 
int Matriz1[M][N] = { {0}};
for ( i = 0; i < M; i++){ 
for ( j = 0; j < N; j++){
printf("\nIntroduzca la entrada (%d,%2d) para la primera matriz \n", i, j);
scanf("%d", &Matriz1[i][j]);}}
int Matriz2[N][P] = {{ 5}};
printf("\nParametros segunda matriz:\n");
for ( i = 0; i < N; i++){ 
for ( j = 0; j < P; j++){ 
printf("\nIntroduzca la entrada (%d,%2d) para la segunda matriz \n", i, j);
scanf("%d", &Matriz2[i][j]);}
} 
int Matriz_Producto[M][P] = {{0}};
for ( k = 0; k < M; k++){
for ( j = 0; j < P; j++){
for ( i = 0; i < N; i++ )
Matriz_Producto[ k ][j ] += Matriz1[k][i]*Matriz2[i][j];
} 
}
for ( i = 0; i < M; i++ ){
for ( k = 0; k < N; k++){
printf("%3d", Matriz1[i][k]);
}
printf("\t\t"); 
for ( j = 0; j < P; j++){ 
if ( i <= (N - 1)) 
printf("%3d", Matriz2[i][j]); 
else 
printf(" ");}
printf ("\t\t"); 
for ( j = 0; j < P; j++ ){ 
printf("%3d", Matriz_Producto[i][j]);} 
printf("\n");}
if ( N > M){
int l = M;
while ( l < N ){ 
for ( i = 0; i < N; i++)
printf(" ");
printf("\t\t\t");      
for ( j = 0; j < P; j++ )
	printf("%3d", Matriz2[l][j]);
	printf("\n");
	l++; 
} 
} 
} 

//ejercicio 4

int ejer4()
{
	int a[50][50];   
	int count,c,fil,col,i,j,sum=0,k,control=0;
    printf("Ingresar el numero filas:");
    scanf("%d",&fil);
    printf("Ingresar el numero columnas:");
    scanf("%d",&col);
    	if(fil <= 0 || col <= 0){
        	printf("Debe indicar numero de filas y columnas mayor a cero.\n");
        	return -1;
    }
    for(i=0;i<fil;i++){
	for(k=0;k<col;k++){
		printf("\nIntroduzca la entrada (%d,%2d) para la primera matriz \n", i, k);
        scanf("%d", &a[i][k]);
    }
	}
    count=0;
    printf("\n prime numbers are:\n");
    	for(i=0;i<fil;i++){
		for(k=0;k<col;k++)
		{
           	control=numPrimo(a[i][k]);
	    	if(control==0)
			{
			
		        printf("\nEl numero %d es primo\n",a[i][k]);
		    	sum=sum+a[i][k];
				count++;
			}
			else
			{
			
			printf("\nEl numero %d no es primo\n",a[i][k]);
	
			}
		   
            }
	}
 	   
    printf("\nLa cantidad de numeros primos es %d",count);
    printf("\nLa suma de los numeros primos es %d",sum);

}



int numPrimo(int a){
	int i,num,swc,b=0;
	num=a;
	swc=0;
	for (i=1;i<=a;i++){
		if (num%i==0)
			b++;
	}
	if (b==2){
	    swc=0;
		return swc; //El numero es primo;
	}
	else {
		swc=1;
		return swc; //El numero no es primo;
}	
}

//ejercicio 5
int ejer5 ()
 {
 	int numA,numB;
	printf("Programa para intercambiar valores de dos numeros\n");
	printf("Ingrese un numero para la variable A: ");
	scanf("%d",&numA);
	printf("Ingrese otro numero para la variable B: ");
	scanf("%d",&numB);
	printf("Los valores actuales son\n");
	printf("\tVariable A: %d\n", numA);
	printf("\tVariable B: %d\n", numB);
	printf("Se envian variables a intercambiar sus valores entre ellas");
	swap( &numA, &numB);
	printf("\n Ahora el valor de la variable A es: %d\n y el valor de la variable B es: %d\n",numA ,numB);
	return 0;
}

void swap( int *valor1, int *valor2)
{
	int aux;
	aux = *valor1;
	*valor1 = *valor2;
	*valor2 = aux;
}

//el main
int main()
{
	ejer1();
	ejer2();
	ejer3();
	ejer3_2();
	ejer4();
	ejer5();
	return 0;
}

