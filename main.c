#include <stdio.h>
#include <stdlib.h>

int main()
{
    char gab[2], alt[2];
    int i, contProvas=0;
    float taxa, mediaNotas, acmNotas=0, contAprovados=0;
    char resp;

    printf("Digite o gabarito da prova\n");
    for(i=0; i<3; i++){
        printf("Questao %i: ", i+1);
        scanf(" %c", &gab[i]);}

    do{
    int nota=0;

printf("\n---------------------------------------------------------------\n");

    for(i=0; i<3; i++){
        printf("Resposta %i: ", i+1);
        scanf(" %c", &alt[i]);
      if (gab[i]==alt[i])
        nota++;
      }


    if (nota<2)
        printf("Reprovado com a nota %i\n", nota);
    else{
    printf("Aprovado com nota %i\n", nota);
    contAprovados++;}

    printf("\nDeseja continuar?\n");
    scanf(" %c", &resp);
    acmNotas+=nota;
    contProvas++;
    
    if(resp == 'n' || resp == 'N')
    mediaNotas = acmNotas/contProvas;
    taxa = 100*contAprovados/contProvas;

    printf("\n\nQuantidade de provas corrigidas: %d\n", contProvas);
    printf("Media das notas: %.2f\n", mediaNotas);
    printf("Aprovados: %.0f\n", contAprovados);
    printf("Taxa de aprovacao: %.2f%%\n", taxa); 
    exit(0);
    

    }while(resp != 'n' && resp != 'N');{

    return 0;
}

  }
