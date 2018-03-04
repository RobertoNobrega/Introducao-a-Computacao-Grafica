#include <stdio.h>

/*
    Neste exemplo simples, observei que após instalar o gcc neste Linux (Ubuntu 17.10), reconhece acentuações e caracteres de Língua Portuguesa. Então, não precisa importar a biblioteca locale.h, como ocorre no Windows.
*/

int main(void){
    printf("\n\tTeste de Programa em Linguagem C.\n\tA maçã é vermelha.\n");
    return 0;
}
