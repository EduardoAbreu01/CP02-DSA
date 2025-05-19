#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main()
{
    int menu;
    int qtdFato;
    qtdFato = 0;
    int qtdFibo,i,n;
    qtdFibo = 0;
    i = 2;
    int funFibo(){
        while (qtdFibo == 0 || qtdFibo > 50){
            printf("Digite um numero de 1 a 50: ");
            scanf("%d",&qtdFibo);
        }
        unsigned long long fibonacci[qtdFibo];
        unsigned long long fibo,fibo1,fibo2;
        fibo1 = 0;
        fibo2 = 1;
        fibo = 0;
        fibonacci[0] = 0;
            for(int n = 0; n < qtdFibo; n++){
                fibo = fibo1 + fibo2;
                fibo1 = fibo2;
                fibo2 = fibo;
            //printf("\n%d",fibo);
                fibonacci[0] = 0;
                fibonacci[1] = 1;
                fibonacci[i] = fibo;
                i = i+1;

            }
            printf("Sequencia de Fibonacci: ");

        for (int i = 0; i < qtdFibo; i++) {
            printf("%llu ",fibonacci[i]);
        }
    }

    int funFatorial(){
        int qtdFato;
        qtdFato = 0;
        while(qtdFato == 0 || qtdFato > 20){
            printf("Digite um numero (1 a 20): ");
            scanf("%d",&qtdFato);
        }
        unsigned long long fatoriais[qtdFato];
        for (int i = 0; i < qtdFato; i++){
            unsigned long long fato = 1;
            for (int n = 1; n <= i + 1; n++){
                fato *= n;
            }
        fatoriais[i] = fato;
        }
        for (int i = 0; i < qtdFato; i++){
            printf("%d! = %llu\n", i+1, fatoriais[i]);
        }
    }
    int funPalin(){
        char palavra[100];
        int i, tamanho,tamDiv, palin = 1;
        printf("Digite uma palavra(sem espacos): ");
        scanf("%s", palavra);
        tamanho = strlen(palavra);
        //printf("%d",tamanho);
        tamDiv = tamanho / 2;
        for (i = 0; i < tamDiv; i++) {
            if (palavra[i] != palavra[tamanho - 1 - i]) {
                palin = 0;
        }
        else{
            palin = 1;
        }
    }

        if (palin == 1) {
            printf("A palavra %s e um palindromo \n", palavra);
        } else {
            printf("A palavra %s NAO e um palindromo \n", palavra);
        }
    }
    int funSub(){
        char palavra1[200];
        char palavra2[200];
        int subString;
        subString = 0;

        printf("Digite a primeira palavra: ");
        scanf("%s",palavra1);
        printf("Digite a segunda palavra: ");
        scanf("%s",palavra2);
        int tamanho1 = strlen(palavra1);
        int tamanho2 = strlen(palavra2);
        //printf("1{%d} 2{%d} ",tamanho1,tamanho2);
        for(i = 0; i <= tamanho1 - tamanho2; i++){
            for(n = 0; n < tamanho2; n++){
                //printf(" {%d e %d} ",i,n);
                if(palavra1[i + n] != palavra2[n]){
                        //printf(" {%d e %d} ",i,n);
                        break;
                }
            }
            if(n == tamanho2){
                subString = 1;

            }
        }
        if(subString == 1){
            printf("A segunda string esta contida na primeira.");
        }else{
            printf("A segunda string NAO esta contida na primeira.");
        }
    }


     printf("===== MENU DE EXERCICIOS =====\n"
           "1 - Sequencia de Fibonacci;\n"
           "2 - Fatoriais;\n"
           "3 - Verificar Palindromo;\n"
           "4 - Verificar Substring.\n");
    printf("Digite um numero de 1 a 4: ");
    scanf("%d",&menu);
    switch(menu){
    case 1:
        funFibo();
        break;
    case 2:
        funFatorial();
        break;
    case 3:
        funPalin();
        break;
    case 4:
        funSub();
        break;
    default:
        printf("Digite 1 2 3 OU 4");
    }
}
