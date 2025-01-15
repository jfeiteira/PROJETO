#include <stdio.h>
#include "rotulagem.h"
#include "embalagem.h"

int main() {
    printf("Iniciando Sistema de Rotulagem e Embalagem...\n");

    iniciarRotulagem();
    iniciarEmbalagem();

    printf("Sistema concluído.\n");
    return 0;
}