#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int M1[10], M2[15], M3[20];
	int M, i, j;

	printf("Da se sustavi programa za obrabotka na masivite M1[10],M2[15],M3[20]\n");
	printf("sustaveni ot celi chisla sus stoinosti v intervala [0;999].\n");
	printf("Programata da izvurshi slednite deistviq:\n");
	printf("Otpechatvane na uslovieto na zadachata;\n");
	printf("Otpechatvane na imenata na avtora na programata;\n");
	printf("Vuvejdane na vhodnite danni;\n");
	printf("Otpechatvane na vhodnite danni;\n");
	printf("Namirane nomerata na elementite v ednomeren masiv,po-golemi ot chisloto M\n");
	printf("i po-malki ot sumata na predshestwashtite elementi;\n");
	printf("Da se otpechatat poluchenite rezultati po vreme na obrabotka\n");
	printf("Imena: Georgi Plamenov Karamfilov; Fak.Nomer:391222039.\n");

	printf("Enter numbers for array M1!\n");
	for (i = 0; i < 10; i++)
	{
		printf("Enter number %d: ", i);
		scanf("%d", &M1[i]);
		while (M1[i] <= 0 || M1[i] >= 999)
		{
			printf("Invald number! Please enter a number between 0 and 999!\n");
			printf("Enter a number between 0 and 999: ");
			printf("M1[%d]= ", i);
			scanf("%d", &M1[i]);
			printf("\n");
		}
		if (i == 9)
		{
			i = 0;
			for (j = 0; j < 10; j++)
			{
				printf("Number %d in array M1 is %d\n", j, M1[i]);
				i++;
			}
		}
	}

	printf("Enter numbers for array M2!\n");
	for (i = 0; i < 15; i++)
	{
		printf("Enter number %d: ", i);
		scanf("%d", &M2[i]);
		while (M2[i] <= 0 || M2[i] >= 999)
		{
			printf("Invald number! Please enter a number between 0 and 999!\n");
			printf("Enter a number between 0 and 999: ");
			printf("M2[%d]= ", i);
			scanf("%d", &M2[i]);
			printf("\n");
		}
		if (i == 14)
		{
			i = 0;
			for (j = 0; j < 15; j++)
			{
				printf("Number %d in array M2 is %d\n", j, M2[i]);
				i++;
			}
		}
	}

	printf("Enter numbers for array M3!\n");
	for (i = 0; i < 20; i++)
	{
		printf("Enter number %d: ", i);
		scanf("%d", &M3[i]);
		while (M3[i] <= 0 || M3[i] >= 999)
		{
			printf("Invald number! Please enter a number between 0 and 999!\n");
			printf("Enter a number between 0 and 999: ");
			printf("M3[%d]= ", i);
			scanf("%d", &M3[i]);
			printf("\n");
		}
		if (i == 19)
		{
			i = 0;
			for (j = 0; j < 20; j++)
			{
				printf("Number %d in array M3 is %d\n", j, M3[i]);
				i++;
			}
		}
	}
	printf("Enter number M: \n");
	scanf("%d", &M);
	for (i = 0; i < 10; i++)
	{
		if (M1[i] > M)
		{
			printf("In array M1 the number greater than %d is %d on index %d\n",M,M1[i],i);
		}
	}
	for (i = 0; i < 15; i++)
	{
		if (M2[i] > M)
		{
			printf("In array M2 the number greater than %d is %d on index %d\n", M, M2[i], i);
		}
	}
	for (i = 0; i < 20; i++)
	{
		if (M3[i] > M)
		{
			printf("In array M3 the number greater than %d is %d on index %d\n", M, M3[i], i);
		}
	}
}
