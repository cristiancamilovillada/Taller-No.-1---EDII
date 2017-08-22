/*
*Programa:Menu Multifuncional(operaciones con los diferentes ciclos)
*fecha:19-agosto-2017
*Elaborado Por: Cristian Camilo Villada - Steven Florez Hernandez
*/

/*
Librerias Utilizadas
*/
#include<stdio.h>
#include<windows.h>
#include<time.h>
#include<math.h>

/*
Funcion Principal
*/
int main (int argc, char *argv[]){
	int opcion = 1;
	char mensaje[] = "seleccione una opcion :";
	char smenu[] = "SubMenu:";
	while(opcion != 0)
	{
		system("cls");
		printf("MENU \n");
		printf("1. Ciclo While \n");
		printf("2. Ciclo For \n");
		printf("3. Array \n");
		printf("4. Switch \n");
		printf("5. Matrices \n");
		printf("6. Estructuras \n");
		printf("0. Salir \n");
		printf("%s",mensaje);
		scanf("%d",&opcion);
		
		switch(opcion)
		{
			case 1:
			{   
			int opcion2 = 1;
				while(opcion2 != 0)
				{
					system("cls");
					printf("%s Ciclo While \n",smenu);
					printf("1. Sumar los numeros del 1 a 100 \n");
					printf("2. Sumar los numeros pares del 1 al 50 \n");
					printf("3. Sumar los numeros impares del 1 al 20 \n");
					printf("0. Salir \n");
					printf("%s",mensaje);
					scanf("%d",&opcion2);
					switch(opcion2)
					{
						case 1:
						{
							system("cls");
							printf("1. Sumar los numeros del 1 a 100 \n \n");
							int i = 1,suma = 0;
								while(i<=100)
								{
									suma = suma + i;
									i++;
								}
							printf("el total de la suma es:%d \n \n ",suma);
							system("pause");
							break;
						}
						case 2:
						{
							system("cls");
							printf("2. Sumar los numeros pares del 1 al 50 \n \n");
							int i = 1,suma = 0;
							while (i <=50)
							{
								if (i % 2 == 0)
								{
									suma = suma + i;
									
								}
								i++;
								
							}
							printf("el total de la suma es: %d \n \n",suma);
							system("pause");
							break;
						}
						case 3:
						{
							system("cls");
							printf("3. Sumar los numeros impares del 1 al 20 \n \n");
							int i = 1,suma = 0;
							while (i <=50)
							{
								if (i % 2 != 0)
								{
									suma = suma + i;
								}
								i++;
							}
							printf("el total de la suma es: %d \n \n ",suma);
							system("pause");
							break;
						}
						case 0:
						{
							system("cls");
							break;
						}
						default:
						{
							system("cls");
							printf("opcion invalida \n");
							system("pause");
							break;
						}
						
					}
				}
				break;
			}
			case 2:
			{
			int opcion3 = 1;
				while(opcion3 != 0)
				{
					system("cls");
					printf("%s Ciclo For \n",smenu);
					printf("1. Tabla de multiplicar \n");
					printf("2. Solucionar el factorial de un numero \n");
					printf("3. Solucionar el numero de Fionacci \n");
					printf("0. Salir \n");
					printf("%s",mensaje);
					scanf("%d",&opcion3);
					
					switch(opcion3)
					{
					case 1:
						{
							system("cls");
							printf("1. Tabla de multiplicar del 1 al 20 de un numero \n \n");
							int i , x , producto;
							
							printf("ingrese el numero para saber la tabla de multiplicar: ");
							scanf("%d" , &x);
							for(i = 1 ; i <= 20 ;i++)
							{
								producto = i * x;
								printf("%d * %d = %d \n", i , x , producto);
							}
							system("pause");
							break;
						}
						
					case 2:
						{
							system("cls");
							printf("2. Solucionar el factorial de un numero \n \n");
							int i ,num,factorial=1;
							printf("ingrese el numero para sacar el factorial:");
							scanf("%d",&num);
							printf("%d ! = 1",num);
							for(i = 2;i <= num; i++)
							{
							factorial=i*factorial;
							printf(" * %d = %d ",i, factorial);
							}
							printf("\n");
							system("pause");
							break;
							
						}
					case 3:
						{
							system("cls");
							printf("3. Solucionar el numero de Fionacci \n \n");
							int numero1 = 0 , numero2 = 1 , suma , i , numerolimit;
							printf("Ingrese hasta que numero desea solucionar:");
							scanf("%d",&numerolimit);
							for(i=0 ; i < numerolimit ; i++)
							{
								suma = numero1 + numero2 ;
								numero2 = numero1;
								numero1 = suma;
								printf("%d \n" , suma); 
							}
							system("pause");
							break;
							
						}
					case 0:
						{	
							system("cls");
							break;
						}
					default:
						{
							system("cls");
							printf("opcion invalida \n \n");
							system("pause");
							break;
						}
					}
				}
				break;
			}
			case 3:
			{
				int opcion4 = 1;
				while(opcion4 != 0)
				{
					system("cls");
					printf("%s Array \n",smenu);
					printf("1. Arreglo decimales \n");
					printf("2. Arreglo de  ceros y unos \n");
					printf("3. Arreglo de 4x4 \n");
					printf("0. Salir \n");
					printf("%s",mensaje);
					scanf("%d",&opcion4);
					
					switch(opcion4)
					{
					case 1:
						{
						system("cls");
						printf("1.Arreglo decimales \n \n");
						float x [4] = {32.583 , 11.239 , 45.781 , 22.237} ;
						int z;
						for(z = 0 ; z <=3 ; z++)
						{
							printf("%.3f \n" , x[z]);
							
						}
						system("pause");
						break;
						}
					case 2:
						{
							system("cls");
							printf("2. Arreglo de  ceros y unos \n \n");
							int num1 , num2 , resultado ;
							printf("ingrese en primer valor: ");
							scanf("%d" , &num1);
							printf("ingrese en segundo valor: ");
							scanf("%d" , &num2);
							int numeros[num1][num2];
							short i,x;
							for (i = 0; i < num1;i++)
							{
								for(x=0;x<num2;x++)
								{
									numeros[i][x] = rand()%2;
								}
							}
							for (i=0; i<num1;i++)
							{
								for(x=0;x<num2;x++)
								{
									printf("%d \t", numeros[i][x]);
								}
								printf("\n");
							}
							printf("\n");
							system("pause");
							break;
						}
					case 3:
						{
							system("cls");
							printf("3. Arreglo de 4x4 \n \n");
							int i,x,y;
							int potencia[4][4];
							printf("ingrese 4 numeros \n \n");
							for(i=0;i<=3;i++)
							{
								printf("%d  numero: " , i+1);
								scanf("%d", &potencia[i][0]);
							}
							for(x=0;x<=3;x++)
							{
								for(y=0;y<=3;y++)
								{
									potencia[x][y] = pow(potencia[x][0],y+1);
									printf("%d \t",potencia[x][y]);
								}
								printf("\n \n");
							}
							
							system("pause");
							break;
						}
					case 0:
						{	system("cls");
							break;
						}
					default:
						{
							system("cls");
							printf("opcion invalida \n");
							system("pause");
							break;
						}
						
					}
				}
				break;
			}
			case 4:
			{
				int opcion5 = 1;
				while(opcion5 != 0)
				{
					system("cls");
					printf("%s switch \n",smenu);
					printf("1. Mes actual \n");
					printf("2. Codigo ascii vocal  \n");
					printf("3. Codigo ascii numero \n");
					printf("0. Salir \n");
					printf("%s",mensaje);
					scanf("%d",&opcion5);
					
					switch(opcion5)
					{
					case 1:{
						system("cls");
						printf("1. Mes actual \n \n");
						/* Se define una variable de tipo time_t que tiene el valor de la funcion time 
						y se le pasa 0 para que no tenga ningun valor */
						time_t tiempo = time(0);
						/* Se llama el struct tm que tiene los datos se crea un puntero y se le asigna el tiempo local
						con la direccion de memoria de la varable tiempo*/
						struct tm *tlocal = localtime(&tiempo);
						char mes[3];
						int mes_n;
						/* strftime = string-format-time = formato de tiempo a asignarse a la cadena*/
						strftime(mes, 3, "%m", tlocal);
						//paso del valor obtenido en la variable char a la variable entero
						sscanf(mes, "%d", &mes_n);
						//sscanf para leer datos desde una variable tipo char
						
						switch(mes_n)
						{
						 case 1:
							{
							printf("El mes Actual es Enero");
							break;
							}
						 case 2:
							{
							printf("El mes Actual es Febrero");
							break;
							}
						 case 3:
							{
							printf("El mes Actual es Marzo");
							break;
							}
						 case 4:
							{
							printf("El mes Actual es Abril");
							break;
							}
						 case 5:
							{
							printf("El mes Actual es Mayo");
							break;
							}
						 case 6:
							{
							printf("El mes Actual es Junio");
							break;
							}
						 case 7:
							{
							printf("El mes Actual es Julio");
							break;
							}
						 case 8:
							{
							printf("El mes Actual es Agosto");
							break;
							}
						 case 9:
							{
							printf("El mes Actual es Septiembre");
							break;
							}
						 case 10:
							{
							printf("El mes Actual es Octubre");
							break;
							}
						 case 11:
							{
							printf("El mes Actual es Noviembre");
							break;
							}
						 case 12:
							{
							printf("El mes Actual es Diciembre");
							break;
							}
						}
						printf ("\n\n");
						system("PAUSE");
						break;
					}
					case 2:
						{
							system ("cls");
							char vocal;
							printf("2. Codigo ascii vocal  \n\n");
							printf("ingrese una vocal:");
							scanf("%*c %c",&vocal);
							switch(vocal)
							{
								case 'a':
								{
									printf("El codigo acssi es : %d", vocal);
									break;
								}
								case 'e':
								{
									printf("El codigo acssi es : %d", vocal);
									break;
								}
								case 'i':
								{
									printf("El codigo acssi es : %d", vocal);
									break;
								}
								case 'o':
								{
									printf("El codigo acssi es : %d", vocal);
									break;
								}
								case 'u':
								{
									printf("El codigo acssi es : %d", vocal);
									break;
								}
								default:
								{
									printf("No es una vocal");
									break;
								}
							}
							printf("\n\n");
							system("pause");
							break;
						}
					case 3:
						{
							system ("cls");
							char numero;
							printf("3. Codigo ascii numero  \n\n");
							printf("ingrese un numero:");
							scanf("%*c %c",&numero);
							switch(numero)
							{
								case '0':
								{
									printf("El codigo ascii es : %d", numero);
									break;
								}
								case '1':
								{
									printf("El codigo ascii es : %d", numero);
									break;
								}
								case '2':
								{
									printf("El codigo ascii es : %d", numero);
									break;
								}
								case '3':
								{
									printf("El codigo ascii es : %d", numero);
									break;
								}
								case '4':
								{
									printf("El codigo ascii es : %d", numero);
									break;
								}
								case '5':
								{
									printf("El codigo ascii es : %d", numero);
									break;
								}
								case '6':
								{
									printf("El codigo ascii es : %d", numero);
									break;
								}
								case '7':
								{
									printf("El codigo ascii es : %d", numero);
									break;
								}
								case '8':
								{
									printf("El codigo ascii es : %d", numero);
									break;
								}
								case '9':
								{
									printf("El codigo ascii es : %d", numero);
									break;
								}
							}
							printf("\n\n");
							system("pause");
							break;	
						}
						case 0:
						{	system("cls");
							break;
						}
						default:
						{
							system("cls");
							printf("opcion invalida \n");
							system("pause");
							break;
						}
					}
				}
			break;
			}
			case 5:
			{
				int opcion6 = 1;
				while(opcion6 != 0)
				{
					system("cls");
					printf("%s \n",smenu);
					printf("1. Matriz 3x3 usuario ingresa valores \n");
					printf("2. Matriz 3x3 automatica \n");
					printf("3. Matriz 3x3 automatica numeros primos \n");
					printf("0. Salir \n");
					printf("%s",mensaje);
					scanf("%d",&opcion6);
					switch(opcion6)
					{
					case 1 :
					{
						system("cls");
						system("cls");
						printf("1. Matriz 3*3 y suma de cada posicion \n \n");	
						int a[3][3];
						short x, y, c, pos;
						c=1;
						pos=0;
						printf("Ingrese los numeros de la matriz \n \n");
						for(x=0; x<=2; x++)
						{
							for(y=0; y<=2; y++)
							{
								scanf("%d", &a[x][y]);
							}
						}
						printf("\n");
						for(x=0; x<=2; x++)
						{
							for(y=0; y<=2; y++)
							{
								printf("%d \t", a[x][y]);
								pos = pos+c;
								c++;
							}
							printf("\n");
						}
						printf("El resultado de la suma es %d \n \n", pos);
						system("pause");
						break;
					}
					case 2:
					{
						system("cls");
						printf("2. Matriz 3x3 automatica \n\n");
						int a[3][3];
						short x,y,ale;
						for(x=0; x<=2; x++)
							{
							 for(y=0; y<=2; y++)
							    {
								ale = rand()%101;
								a[x][y] = ale;
								printf("%d \t", ale);
							    }
							printf("\n");
						}
						system("pause");
						break;
					}	
					case 3:
					{
						system("cls");
						printf("3. Matriz 3x3 automatica numeros primos \n \n");
						int a[3][3];
						short x,y,l,c;
						bool primo;
						c=2;
						for(x=0; x<=2; x++)
						{
							for(y=0; y<=2; y++)
							{
								primo = true;
								do{
									if(c%2==0 and c!=2)
									{
										primo = false;
									}
									else{
										for(l=2; l<c; l++)
										{
											if(c%l == 0)
											{
												primo = false;
												break;
											}
											else
											{
												primo = true;
											}
										}
									}
									if(primo)
									{
										a[x][y] = c;
									}
									c++;
								}
								while(primo == false);
							}
						}
						for(x=0; x<=2; x++)
						{
							for(y=0; y<=2; y++)
							{
								printf("%d \t", a[x][y]);
							}
							printf("\n");
						}
						system("pause");
						break;
					}	
					case 0:
					{	
						system("cls");
						break;
					}
					default:
					{
						system("cls");
						printf("opcion invalida \n\n");
						system("pause");
						break;
					}
					}
				}
				break;
			}
			case 6:
			{
				system("cls");
				printf("opcion sin terminar \n");
				system("pause");
				break;
			}
			case 0:
			{
				system("cls");
				break;
			}
			default:
			{
				system("cls");
				printf("opcion invalida \n");
				system("pause");
				break;
				
			}
		}
	}
	return 0;
}

