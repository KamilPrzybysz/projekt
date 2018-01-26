#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{


  	FILE *plik= fopen(argv[1], "w+");

	char slowa[100];
	char* myk= slowa;
	printf("Podaj słowa(max. 100 znaków, reszta będzie pominięta) do wisania do pliku %s: \n", argv[1]);
	do				//wpisywanie do tablicy;
	{
		*myk=getchar();
		if(*myk=='\n')
		break;
	}while(*myk++!='\n');
	*(myk)='\0';

	int i;
	for(i=0; i<i+1; i++)
	{
		if(slowa[i]=='\0')			//wpisywanie do pliku ze spacją jako przejściem do następnej linii;;
		{
			break;
		}
		else if(slowa[i]!=32)
		{
			fprintf(plik, "%c", slowa[i]);
		}
		else
			fprintf(plik, "\n");
	}
	fprintf(plik, "\n");
	fclose(plik);

  return 0;
}
