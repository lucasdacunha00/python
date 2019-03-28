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
	
	puts("Escolha a operação: \n1 - Adição\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n5 - Potenciação \n6 - Fatorial\n7 - Sair....");
	puts("====================");
	printf("Opção: "); scanf("%d", &opc);
	
	switch(opc)
	{
		// Soma
		case 1: printf("Primeiro numero: "); scanf("%f", &a);
				printf("Segundo número: "); scanf("%f", &b);
					result = a + b;
						printf("O resultado é: %.2f", result);
							break;
				
		// Subtração
		case 2: printf("Primeiro numero: "); scanf("%f", &a);
				printf("Segundo número: "); scanf("%f", &b);
					result = a - b;
						printf("O resultado é: %.2f", result);
							break;
						
		// Multiplicação
		case 3: printf("Primeiro numero: "); scanf("%f", &a);
				printf("Segundo número: "); scanf("%f", &b);
					result = a * b;
						printf("O resultado é: %.2f", result);
							break;
							
		// Divisão
		case 4: printf("Primeiro numero: "); scanf("%f", &a);
				printf("Segundo número: "); scanf("%f", &b);
					result = a / b;
						printf("O resultado é: %.2f", result);
							break;
							
		//Potenciação
		case 5: printf("Digite a base: "); scanf("%f", &a);
				printf("Digite o expoente: "); scanf("%f", &b);
					result = a;
						for( int i =1; i < b ; i++)
						{
							result = result * a;
						}
							printf("O resultado é: %.2f", result);
								break;
							
		// Fatorial
		case 6: printf("Digie um número para calcular Fatorial "); scanf("%f", &a);
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
		
		default: puts("Escolha inválida - Redigite!!");
	}// FIm do switch
		
		if(opc == 7)
			break;
			
			getch();
	//	Sleep(3000); // auto dormencia de codigo
  }// Fim do while
  
}// Fim do main
