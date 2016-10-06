#include <stdio.h>

#define KNRM  "\x1B[0m" 	// Normal	printf(KNRM "Normal\n");
#define KRED  "\x1B[31m"	// Rot		printf(KRED "Rot\n");
#define KGRN  "\x1B[32m"	// Grün 	printf(KGRN "Grün\n");
#define KYEL  "\x1B[33m"	// Gelb 	printf(KYEL "Gelb\n");
#define KBLU  "\x1B[34m"	// Blau  	printf(KBLU "Blau\n");
#define KMAG  "\x1B[35m"	// Magenta 	printf(KMAG "Magenta\n");
#define KCYN  "\x1B[36m"	// Cyan 	printf(KCYN "Cyan\n");
#define KWHT  "\x1B[37m"	// Weiß 	printf(KWHT "Weiß\n");

int main(){

	double zahlen[100];
	float eingabe;
	int len = 0;
	char lang;


	printf("Choose a language[d = deutsch | e = english]: ");
	scanf(" %c", &lang);

	if (lang == 'd') {
		printf("\ndeutsch->\n");

		printf(KRED "");

		printf("\n----------Hiermit berechnest du den Mittelwert----------\n"
		"---------------für n-beliebige Werte--------------------\n\n");

		printf(KGRN "");

		printf("\tWieviele Werte möchten Sie eingeben???: ");
		scanf("%d", &len);
		printf(KNRM "\n");


		for(int i = 0; i < len; i++){
			printf("\tGeben Sie die %d. Zahl ein:", i+1);
			scanf("%f", &eingabe);
			zahlen[i] = eingabe;
		}

		printf("\n");

		for(int j = 0; j <len; j++){
			printf(KCYN "");
			printf("\t%d. Zahl:\t %.2f \n", j+1, zahlen[j]);
		}

		double gesamt = 0;

		for(int k = 0; k <len; k++){
			gesamt = gesamt + zahlen[k];
		}
		printf(KYEL "");

		printf("\n\tSumme der Werte: %.2f\n", gesamt);

		double mittelwert;
		mittelwert = (gesamt/len);

		printf(KRED "");

		printf("\n\tDer Mittelwert ist: %.3f\n\n", mittelwert);

		printf(KNRM "");

	}else if (lang == 'e') {
		printf("\nenglish->\n");

		printf(KRED "");

		printf("\n----------This calculates the average value----------\n"
		"---------------for n-any values--------------------\n\n");

		printf(KGRN "");

		printf("\tHow much values do you want to enter???: ");
		scanf("%d", &len);
		printf(KNRM "\n");


		for(int i = 0; i < len; i++){
			printf("\tPlease enter the %d. number:", i+1);
			scanf("%f", &eingabe);
			zahlen[i] = eingabe;
		}

		printf("\n");

		for(int j = 0; j <len; j++){
			printf(KCYN "");
			printf("\t%d. Number:\t %.2f \n", j+1, zahlen[j]);
		}

		double gesamt = 0;

		for(int k = 0; k <len; k++){
			gesamt = gesamt + zahlen[k];
		}
		printf(KYEL "");

		printf("\n\tSum of all values: %.2f\n", gesamt);

		double mittelwert;
		mittelwert = (gesamt/len);

		printf(KRED "");

		printf("\n\tThe average is: %.3f\n\n", mittelwert);

		printf(KNRM "");
	}

	return 0;

}
