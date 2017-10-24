#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Fabricante
{
	char nome[50];
	char nacionalidade[50];
	int ano;
}Fabricante;

//======================================ASSINATURAS DAS FUNCOES===================================================
int Comparacao (Fabricante *vet, int i, int j);
int fun (int k, int l);
void comb_Sort(Fabricante *vetor, int n);
void escrVetor(Fabricante *Fabricante, int n);

//======================================FUNCAO PRINCIPAL=========================================================
int main()
{
	Fabricante  vetor[6];

	strcpy(vetor[0].nome, "Fiat");
	strcpy(vetor[0].nacionalidade, "Brasil");
	vetor[0].ano = 2000;

	strcpy(vetor[1].nome, "Fiat");
	strcpy(vetor[1].nacionalidade, "Brasil");
	vetor[1].ano = 1999;

	strcpy(vetor[2].nome, "Fox");
	strcpy(vetor[2].nacionalidade, "Colombia");
	vetor[2].ano = 1998;

	strcpy(vetor[3].nome, "Toyota");
	strcpy(vetor[3].nacionalidade, "Japao");
	vetor[3].ano = 1997;

	strcpy(vetor[4].nome, "Wolskwagen");
	strcpy(vetor[4].nacionalidade, "Coreia");
	vetor[4].ano = 1996;

	strcpy(vetor[5].nome, "Mazda");
	strcpy(vetor[5].nacionalidade, "Paraguai");
	vetor[5].ano = 1995;
	
	comb_Sort (vetor, 6);
	escrVetor (vetor, 6);
	return 0;
}

//======================================FUNCOES===================================================
int Comparacao (Fabricante *vet, int i, int j)
{
	if(strcmp(vet[i].nome, vet[i + j].nome) == -1)
	{
		return(0);
	}
	if (strcmp(vet[i].nome, vet[i + j].nome) == 0)
	{
		if(strcmp(vet[i].nacionalidade, vet[i + j].nacionalidade) == -1)
		{
			return(0);
		}
		if (strcmp(vet[i].nacionalidade, vet[i + j].nacionalidade) == 0)
		{
			if (vet[i].ano <= vet[i + j].ano)
			{
				return(0);
			}
			else
			{
				return(1);
			}
		}
		else
		{
			return(1);
		}
	}
	else
	{
		return(1);
	}
}

int fun (int k, int l)
{
	if(k > l)
	{
		return(k);
		return(l);
	}
}
void comb_Sort(Fabricante *vetor, int n)
{
	int j = n, trocando, i;
	Fabricante auxiliar;
	
	do
	{
		j = fun ((int) (j / 1.3), 1);
		if(j == 9 || j == 10)
		{
			j = 11;
		}	
		trocando = 0;
		for(i = 0; i < n - j; i++)
		{
			if(Comparacao(vetor, i, j))
			{
				auxiliar = vetor[i];
				vetor[i] = vetor[i + j];
				vetor[i + j] = auxiliar;
				trocando = 1;
			}
		}
	}
	while(trocando != 1|| (j != 1));
}

void escrVetor(Fabricante *Fabricante, int n)
{
	int i;
	
	for (i = 0; i < n; i++)
	{
		printf("\n %s\n %s\n %d \n\n", Fabricante[i].nome, Fabricante[i].nacionalidade, Fabricante[i].ano);
	}
}
