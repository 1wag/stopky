// Ukol cislo 3, pricitani a odecitani hodnot. Vypracoval Hlozek

	#include <stdio.h>
	#include <stdlib.h>
	#include <unistd.h>
	#include <time.h>
	
	void generovatCislo()
	{
		static int initialized = 0;
			if(initialized != 1)
			{
				srand(time(NULL));
			}
		initialized = 1;
	}
	
	int navratitCislo()
	{
		return rand() % 60 + 1;
	}

	int main(){
	
		int rozhodnuti;
		int pricitani;
		int odecitani;
		int i;
		int j;
		int genPricitani;
		int genOdecitani;
	
	do{

	printf("\n\tVitej v programu.\n");
	printf("\t1. Pricitani hodnot\n");
	printf("\t2. Odecitani hodnot\n");
	printf("\t3. Program vygeneruje nahodne cislo a podle nej se bude pricitat\n"); // BONUS
	printf("\t4. Program vygeneruje nahodne cislo a podle nej se bude odecitat\n"); // BONUS
	printf("\t5. Zavrit program\n");
	printf("\tZadej volbu: ");
	scanf("%d", &rozhodnuti);
	
	if(rozhodnuti != 1 && rozhodnuti != 2 && rozhodnuti != 3 && rozhodnuti != 4 && rozhodnuti != 5)
	{
		printf("\tTato volba je neplatna!\n");
		return 0;
	}
	
	switch(rozhodnuti)
	{
	
		case 1:
			
			printf("\n\tPricitani\n");
			printf("\tProgram bude nasledne odpocitavat od nuly do zadaneho cisla.\n");
			printf("\tZadej cislo od 1 do 60: ");
			scanf("%d", &pricitani);
			
			if(pricitani < 1 || pricitani > 60)
			{
				printf("\tToto cislo nemuzes zadat!\n\t");
				return 0;
			}
			
			printf("\t");
			sleep(1);
			system("cls");
			
			for(i=0; i<=pricitani; i++)
			{
				printf("\n\t%d", i);
				sleep(1);
				system("cls");
			}
			
		break;
		
		case 2:
			
			printf("\n\tOdecitani\n");
			printf("\tProgram bude nasledne odpocitavat od zadaneho cisla do nuly.\n");
			printf("\tZadej cislo od 1 do 60: ");
			scanf("%d", &odecitani);
			
			if(odecitani < 1 || odecitani > 60)
			{
				printf("\tToto cislo nemuzes zadat!\n\t");
				return 0;
			}
			
			printf("\t");
			sleep(1);
			system("cls");
			
			for(odecitani; odecitani>=0; odecitani--)
			{
				printf("\n\t%d", odecitani);
				sleep(1);
				system("cls");
			}
			
		break;
		
		case 3:
			
			generovatCislo();
			genPricitani = navratitCislo();
			
			printf("\tProgram vygeneroval cislo %d, do tohoto cisla nyni zacne pripocitavani.\n", genPricitani);
			sleep(3);
			printf("\t");
			
			system("cls");
			
			for(j=0; j<=genPricitani; j++)
			{
				printf("\n\t%d", j);
				sleep(1);
				system("cls");
			}
			
		break;
		
		case 4:
			
			generovatCislo();
			genOdecitani = navratitCislo();
			
			printf("\tProgram vygeneroval cislo %d, od tohoto cisla se nyni zacne odpocitavat.\n", genOdecitani);
			sleep(3);
			printf("\t");
			
			system("cls");
			
			for(genOdecitani; genOdecitani>=0; genOdecitani--)
			{
				printf("\n\t%d", genOdecitani);
				sleep(1);
				system("cls");
			}
			
		break;
		
	}
	
	}while(rozhodnuti != 5);
	
	return 0;
}
