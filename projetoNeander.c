/* Ler arquivo.txt com instrucoes do Neander e mostrar o Hexadecimal em outro arquivo.txt.
Digite o nome de um arquivo.txt já existente com as instrucões do Neander. Logo após, digite um nome de sua
preferencia para gerar um segundo arquivo.txt com o Hexadecimal.
Desenvolvido por: Isabela Souza Duarte */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void main(){
setlocale (LC_ALL,"Portuguese");
    FILE *fp;
    int i,q;
    char txt[256];
    char *result;
    char Arquivo[256];
    char Hexa[256][3];
    char Endereco_memoria[256][4];

    printf("Digite o nome do arquivo de entrada: ");
    gets(Arquivo);
    fp = fopen(Arquivo, "rt");

    if (fp == NULL)
    {
    printf("Erro na abertura do arquivo\n");
    return;
    }

    i = 1;
    while (!feof(fp))
    {

    result = fgets(txt, 256, fp);
    if (result)
    for (q=0; q<256; q++){
    if(txt[q]=='L' && txt[q+1]=='D' && txt[q+2]=='A'){
    Hexa[i][0]='2';
    Hexa[i][1]='0';
    Hexa[i][2] = '\0';
    Endereco_memoria[i][0] = txt[q+4];
    Endereco_memoria[i][1] = txt[q+5];
    Endereco_memoria[i][2] = txt[q+6];
    Endereco_memoria[i][3] = '\0';
    }
    if(txt[q]=='A' && txt[q+1]=='D' && txt[q+2]=='D'){
    Hexa[i][0]='3';
    Hexa[i][1]='0';
    Hexa[i][2] = '\0';
    Endereco_memoria[i][0] = txt[q+4];
    Endereco_memoria[i][1] = txt[q+5];
    Endereco_memoria[i][2] = txt[q+6];
    Endereco_memoria[i][3] = '\0';
    }
    if(txt[q]=='N' && txt[q+1]=='O' && txt[q+2]=='P'){
    Hexa[i][0]='0';
    Hexa[i][1]='\0';
    Hexa[i][2] = '\0';
    Endereco_memoria[i][0] = txt[q+4];
    Endereco_memoria[i][1] = txt[q+5];
    Endereco_memoria[i][2] = txt[q+6];
    Endereco_memoria[i][3] = '\0';
    }
    if(txt[q]=='S' && txt[q+1]=='T' && txt[q+2]=='A'){
    Hexa[i][0]='1';
    Hexa[i][1]='0';
    Hexa[i][2] = '\0';
    Endereco_memoria[i][0] = txt[q+4];
    Endereco_memoria[i][1] = txt[q+5];
    Endereco_memoria[i][2] = txt[q+6];
    Endereco_memoria[i][3] = '\0';
    }
    if(txt[q]=='A' && txt[q+1]=='N' && txt[q+2]=='D'){
    Hexa[i][0]='5';
    Hexa[i][1]='0';
    Hexa[i][2] = '\0';
    Endereco_memoria[i][0] = txt[q+4];
    Endereco_memoria[i][1] = txt[q+5];
    Endereco_memoria[i][2] = txt[q+6];
    Endereco_memoria[i][3] = '\0';
    }
    if(txt[q]=='N' && txt[q+1]=='O' && txt[q+2]=='T'){
    Hexa[i][0]='6';
    Hexa[i][1]='0';
    Hexa[i][2] = '\0';
    }
    if(txt[q]=='J' && txt[q+1]=='M' && txt[q+2]=='P'){
    Hexa[i][0]='8';
    Hexa[i][1]='0';
    Hexa[i][2] = '\0';
    Endereco_memoria[i][0] = txt[q+4];
    Endereco_memoria[i][1] = txt[q+5];
    Endereco_memoria[i][2] = txt[q+6];
    Endereco_memoria[i][3] = '\0';
    }
    if(txt[q]=='H' && txt[q+1]=='L' && txt[q+2]=='T'){
    Hexa[i][0]='F';
    Hexa[i][1]='0';
    Hexa[i][2] = '\0';
    }
    if(txt[q]=='O' && txt[q+1]=='R'){
    Hexa[i][0]='4';
    Hexa[i][1]='0';
    Hexa[i][2] = '\0';
    Endereco_memoria[i][0] = txt[q+3];
    Endereco_memoria[i][1] = txt[q+4];
    Endereco_memoria[i][2] = txt[q+5];
    Endereco_memoria[i][3] = '\0';
    }
    if(txt[q]=='J' && txt[q+1]=='N'){
    Hexa[i][0]='9';
    Hexa[i][1]='0';
    Hexa[i][2] = '\0';
    Endereco_memoria[i][0] = txt[q+3];
    Endereco_memoria[i][1] = txt[q+4];
    Endereco_memoria[i][2] = txt[q+5];
    Endereco_memoria[i][3] = '\0';
    }
    if(txt[q]=='J' && txt[q+1]=='Z'){
    Hexa[i][0]='A';
    Hexa[i][1]='0';
    Hexa[i][2] = '\0';
    Endereco_memoria[i][0] = txt[q+3];
    Endereco_memoria[i][1] = txt[q+4];
    Endereco_memoria[i][2] = txt[q+5];
    Endereco_memoria[i][3] = '\0';
    }
    }
    printf("%s" ,txt);
    i++;
    }
    fclose(fp);

    printf("\n\n\nDigite o nome do arquivo para ser gerado ");
    gets(Arquivo);

    fp = fopen(Arquivo, "a");

    printf("\n\n\n");
    for (q=1; q<=256; q++){
    fprintf(fp,"%s ",Hexa[q]);
    printf("%s ",Hexa[q]);
    if (Hexa[q][0] == 'F' && Hexa[q][1] == '0'){
    printf("\n\n\n");
    break;
    }
    if (Hexa[q][0] != '6'){
    fprintf(fp,"%s",Endereco_memoria[q]);
    printf("%s",Endereco_memoria[q]);

    fprintf(fp,"\n");
    printf("\n");
    }
    else{
    fprintf(fp,"\n");
    printf("\n");
    }
    }

    fclose(fp);

    }
