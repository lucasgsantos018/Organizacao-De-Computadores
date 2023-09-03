#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tamanhoram 1000
#define tamcache1 16
#define tamcache2 32
#define tamcache3 64
#define tamdasinstrucoes 10

typedef struct {
    int opcode;
    int end1; //operando 1
    int end2; //operando 2
    int end3; //resultado
} instrucao;

typedef struct {
    int endereco; // tag
    int conteudo;
    int refresh;

 // //int cachehit;
 //int cachemiss;

    //para escolher quem fica caso a cache encha vamos ter que escolher quem fica conforme:
 //int prioridadeimportancia; // + importante
 // int prioridadeidade; // - importante
 //int soma; //apanhado do score da posicao da cache
} blocodememoria;


void iniciarRam(blocodememoria *ram);
void iniciarC1(blocodememoria *cache1);
void iniciarC2(blocodememoria *cache2);
void iniciarC3(blocodememoria *cache3);

void iniciarInstrucoes(instrucao *instrucaoT);

void maquinaInterpretada(blocodememoria *cache1, blocodememoria *cache2 , blocodememoria *cache3 , blocodememoria *ram , instrucao *instrucaoT);




int main()
{

    blocodememoria ram[tamanhoram];
    blocodememoria cache1[tamcache1];
    blocodememoria cache2[tamcache2];
    blocodememoria cache3[tamcache3];

    instrucao instrucaoT[tamdasinstrucoes];

    iniciarRam(ram);
    iniciarC1(cache1);
    iniciarC2(cache2);
    iniciarC3(cache3);

    iniciarInstrucoes(instrucaoT);


}



void iniciarRam(blocodememoria *ram){

    for(int i = 0 ; i < tamanhoram ; i++)
    {
        ram[i].endereco = i ;
        ram[i].conteudo = rand() % 1000 ;
        ram[i].refresh = 1 ; 
    }

}


void iniciarC1(blocodememoria *cache1){

    for(int i = 0 ; i < cache1 ; i++)
    {
        cache1[i].endereco = (i + 1) * -1 ;
        cache1[i].conteudo = rand() % 1000 ;
        cache1[i].refresh = 1 ; 
    }

}


void iniciarC2(blocodememoria *cache2){

    for(int i = 0 ; i < cache2 ; i++)
    {
        cache2[i].endereco = (i + 1) * -1 ;
        cache2[i].conteudo = rand() % 1000 ;
        cache2[i].refresh = 1 ; 
    }
}


void iniciarC3(blocodememoria *cache3){

    for(int i = 0 ; i < cache3 ; i++)
    {
        cache3[i].endereco = (i + 1) * -1 ;
        cache3[i].conteudo = rand() % 1000 ;
        cache3[i].refresh = 1 ; 
    }

}


void iniciarInstrucoes(instrucao *instrucaoT){

    for(int i = 0 ; i < tamdasinstrucoes ; i++)
    {
        instrucaoT[i].opcode = rand % 2 ;
        instrucaoT[i].end1 = rand % tamanhoram ;
        instrucaoT[i].end2 = rand % tamanhoram ;
        instrucaoT[i].end3 = rand % tamanhoram ;
    }
}

void maquinaInterpretada(blocodememoria *cache1, blocodememoria *cache2 , blocodememoria *cache3 , blocodememoria *ram , instrucao *instrucaoT){

    for(int i = 0 ; i < tamdasinstrucoes ; i++)
    {
        if(instrucaoT[i].opcode == 1)
        {
            int n , k ;
            



        }
        else if(instrucaoT[i].opcode == 0)
        {




        }
    }


}

int retornaValor(blocodememoria *cache1, blocodememoria *cache2 , blocodememoria *cache3 , blocodememoria *ram , instrucao *instrucaoT , int endereco){

    for(int i = 0 ; i < tamcache1 ; i++)
    {
        if(cache1[i].endereco == endereco)
            return cache1[i].conteudo;
    }

}
