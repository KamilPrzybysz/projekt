#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char const *argv[])
{
	FILE *plik= fopen(argv[1], "r");
        if(plik==NULL)
        {
                perror("Nie ma takiego pliku");
                return 1;
        }

  	char duzemale;
	printf("Duze litery czy male? (d albo m)");
	scanf("%c", &duzemale);
	while(duzemale!='d'&&duzemale!='m')
	{
		printf("Duze litery czy male? (d albo m)");
	        scanf("%c", &duzemale);
	}
	printf("\n\n");

	char znak;
        do
        {
                fscanf(plik, "%c", &znak);
                if(duzemale=='d')
		{
			if(znak>=97&&znak<=122)
			{
				printf("%c", znak-32);
			}
			else if(znak>=65&&znak<=90)
			{
				printf("%c", znak);
			}
			else if(znak>=48&&znak<=57)
			{
				printf("%c", znak);
			}
			else
			{
				printf("%c", znak);
			}
		}
		else
                {
                        if(znak>=97&&znak<=122)
                        {
                                printf("%c", znak);
                        }
                        else if(znak>=65&&znak<=90)
                        {
                                printf("%c", znak+32);
                        }
                        else if(znak>=48&&znak<=57)
                        {
                                printf("%c", znak);
                        }
                        else
                        {
                                printf("%c", znak);
                        }
        	}
	}while(!feof(plik));
	printf("\n");


	fclose(plik);

  	return 0;
}
