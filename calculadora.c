
#include <stdio.h>
#include <stdlib.h>

//menu
//soma
//subtração
//raiz quadrada
//eleva ao quadrado
//eleva a x
//divisão
//multiplicação
//porcentagem
//retorna pi
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


}
