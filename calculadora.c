
#include <stdio.h>
#include <stdlib.h>

double soma(double x, double y){
	double ans = x+y;

	return ans;
}

//menu
//soma

int sum(int a, int b)
{
	return a + b;
}
//subtração
int sub(int a, int b)
{
	return a - b;
}
//raiz quadrada
int sqqrt(int a)
{
	return sqrt(a);
}
//eleva ao quadrado
int ppow(int a)
{
	return pow(a, 2);
}
//eleva a x
int eleva(int a, int x)
{
	return pow(a, x);
}
//divisão
int div(int a, int b)
{
	return a / b;
}
//multiplicação
int mult(int a, int b)
{
	return a * b;
}
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
