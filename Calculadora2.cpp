/*
	Name: Calculadora.cpp
	Author: Everton Santos
	Date: 12/03/18 13:42
	Last Updade: 14/03/18 15:49
	Description: Progrma para realizar calculas metematicos basicos
*/

# include <conio.h>
# include <stdio.h>
# include <locale.h>
# include <windows.h>
# include <math.h>

main()
{
	setlocale(LC_ALL, "Portuguese");

	
	float a, b, result;
	int opc, fat;
	
  while(1)
  {
  	system("cls");
	puts("Calculadora Digital"); puts("====================");
		
	a = b = result = 0.0;
	opc = 0; fat = 1;
	
	puts("Escolha a opera��o: \n1 - Adi��o\n2 - Subtra��o\n3 - Multiplica��o\n4 - Divis�o\n5 - Potencia��o \n6 - Fatorial\n7 - Sair....");
	puts("====================");
	printf("Op��o: "); scanf("%d", &opc);
	
	switch(opc)
	{
		// Soma
		case 1: printf("Primeiro numero: "); scanf("%f", &a);
				printf("Segundo n�mero: "); scanf("%f", &b);
					result = a + b;
						printf("O resultado �: %.2f", result);
							break;
				
		// Subtra��o
		case 2: printf("Primeiro numero: "); scanf("%f", &a);
				printf("Segundo n�mero: "); scanf("%f", &b);
					result = a - b;
						printf("O resultado �: %.2f", result);
							break;
						
		// Multiplica��o
		case 3: printf("Primeiro numero: "); scanf("%f", &a);
				printf("Segundo n�mero: "); scanf("%f", &b);
					result = a * b;
						printf("O resultado �: %.2f", result);
							break;
							
		// Divis�o
		case 4: printf("Primeiro numero: "); scanf("%f", &a);
				printf("Segundo n�mero: "); scanf("%f", &b);
					result = a / b;
						printf("O resultado �: %.2f", result);
							break;
							
		//Potencia��o
		case 5: printf("Digite a base: "); scanf("%f", &a);
				printf("Digite o expoente: "); scanf("%f", &b);
					result = a;
						for( int i =1; i < b ; i++)
						{
							result = result * a;
						}
							printf("O resultado �: %.2f", result);
								break;
							
		// Fatorial
		case 6: printf("Digie um n�mero para calcular Fatorial "); scanf("%f", &a);
				printf("%.f! = ", a);
				int i;
						for( i = 1; a >= 1; a--)
						{
							i = a * i;
							printf(a==1?"%.f":"%.fx", a); // modo profissional de fazer
						/* Esse e o modo amador de fazer
							if(a == 1)
								printf("%.f", a);
							else 
								printf("%.fx", a); */
						}
							printf(" = %d", i);
								break;
							
		case 7: break;
		
		default: puts("Escolha inv�lida - Redigite!!");
	}// FIm do switch
		
		if(opc == 7)
			break;
			
			getch();
	//	Sleep(3000); // auto dormencia de codigo
  }// Fim do while
  
}// Fim do main
