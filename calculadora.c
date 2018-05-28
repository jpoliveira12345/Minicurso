
#include <stdio.h>
#include <stdlib.h>

//menu
int menu() {
	int opcao;
	for(;;) {
		printf("1 - Soma\n");
		printf("2 - Subtracao\n");
		printf("3 - Raiz quadrada\n");
		printf("4 - Eleva ao quadrado\n");
		printf("5 - Eleva a x\n");
		printf("6 - Divisao\n");
		printf("7 - Multiplicacao\n");
		printf("8 - Porcentagem\n");
		printf("9 - Retorna pi\n");
		printf("10 - Inverso (1/x)\n");
		printf("11 - Fatorial\n");
		printf("12 - Retorna exp\n");
		printf("13 - Seno\n");
		printf("14 - Cosseno\n");
		printf("15 - Tangente\n");
		printf("16 - Fibonacci\n");
		printf("17 - Media de n elementos\n");
		scanf("%d", &opcao);
		switch(opcao) {
		case 1:
			//soma
			break;
		case 2:
			//subtracao
			break;
		case 3:
			//raiz quadrada
			break;
		case 4:
			//eleva ao quadrado
			break;
		case 5:
			//eleva a x
			break;
		case 6:
			//divisao
			break;
		case 7:
			//multiplicacao
			break;
		case 8:
			//porcentagem
			break;
		case 9:
			//retorna pi
			break;
		case 10:
			//inverso (1/x)
			break;
		case 11:
			//fatorial
			break;
		case 12:
			//retorna exp
			break;
		case 13:
			//seno
			break;
		case 14:
			//cosseno
			break;
		case 15:
			//tangente
			break;
		case 16:
			//fibonacci
			break;
		case 17:
			//media de n elementos
			break;
		case 18:
			//media de n elementos
			break;
		default:
			printf("Comando invalido.\n");
		}
	}
}

//soma
//subtração
//raiz quadrada
int eleva_ao_quadrado (int n) {
	int i = n*n;
	return i;
}

//eleva a x

//fiz aí a função de elevar a X
int eleva(int numb,int pow)
{
	int i;
	for(i=1; i<=pow;i++)
	{
		numb *= pow;
	}
	
	return numb;
}



//divisão
//multiplicação
//porcentagem
//retorna pi
double retornaPi(){
    return 3.14159265359;
}
//inverso (1/x)
//fatorial
//retorna exp
//seno
//cosseno
//tangent
//fibonacci
int fibonacci(int n){
    if(n==0){
        return 0;
    }else{
        if(n==1){
            return 1;
        }
        else{
            return (fibonacci(n-1)+fibonacci(n-2));
        }
    }
}
//média de n elementos
int main(){
    double

}

