#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{


  	FILE *plik= fopen(argv[1], "w+");

	char slowa[50];
	char* myk= slowa;
	printf("Podaj słowa do wisania do pliku %s: \n", argv[1]);
	do
	{
		*myk=getchar();
		if(*myk=='\n')
		break;
	}while(*myk++!='\n');
	*(myk)='\0';

	int i;
	for(i=0; i<50; i++)
	{
		if(slowa[i]=='\0')
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
