# Exercício 1

O que são tipos primitivos? Por que eles são importantes na programação?

# Exercício 2

O que são vetores? O que são matrizes? O que diferencia os dois?

# Exercício 3

O que são procedimentos? O que são funções? O que diferencia os dois?

# Exercício 4

Considere o trecho de código abaixo:

``` 
#include <stdio.h>

int main(){
    int a;
    int *b;

    a = 5;

    b = &a;

    *b *= a + 2;

    printf("%d\n", a);
}
```

O que será impresso no final?

# Exercício 5

Considere o trecho de código do `Exercício 4`. Desenhe como a memória do computador poderia estar logo no momento da execução do `printf` do código.

# Exercício Bônus

Quais as diferenças entre a linguagem C e a linguagem Go? Existe alguma vantagem em desenvolver utilizando linguagem Go ao invés de linguagem C? Se existe, enumere algumas delas.