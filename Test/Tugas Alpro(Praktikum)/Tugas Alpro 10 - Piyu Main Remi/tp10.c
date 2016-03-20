#include <stdio.h>
#include <string.h>

int i, j, k, l;

int main(){
	//jumlah kartu masing-masing player
	int gameCards;
	int cards=0;
	scanf("%d", &gameCards);

	//kartu piyu
	int cardPiyu[gameCards];
	for(i=0; i<gameCards; i++){
		scanf("%d", &cardPiyu[i]);
		cards++;
	}

	//kartu moni
	int cardMoni[gameCards];
	for(i=0; i<gameCards; i++){
		scanf("%d", &cardMoni[i]);
		cards++;
	}

	//kartu tobi
	int cardTobi[gameCards];
	for(i=0; i<gameCards; i++){
		scanf("%d", &cardTobi[i]);
		cards++;
	}

	//kartu maman
	int cardMaman[gameCards];
	for(i=0; i<gameCards; i++){
		scanf("%d", &cardMaman[i]);
		cards++;
	}

	//kartu keseluruhan
	char allCards[cards];



	return 0;
}