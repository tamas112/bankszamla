#include <stdio.h>
#include <ctype.h>

#define MAX 128


int getline(char s[],int lim);

void main(void){
	int i,hossz,joe;
	char s[MAX];

	joe =1;

	//Valós bankszámlaszám formátum megadása
	printf("Add meg a bankszamlaszamod: ");
	hossz = getline(s,MAX);
	

	//Karakterláncot megvizsgáljuk, hogy a megfelelõ helyeken "-" karakter van-e illetve, hogy számok vannak megadva
	if (hossz == 17 || hossz == 26){
		if (s[8] != '-'){
			joe=0;
		 }
		for (i=0;i<8;i++){
			 if (!isdigit(s[i])){
				 joe=0;
			 }
		 }
		for (i=9;i<17;i++){
			 if (!isdigit(s[i])){
				 joe=0;
			 }
		 }
		if (hossz == 26){
			if (s[17] != '-'){
				joe=0;
			}
			for (i=18;i<26;i++){
				if (!isdigit(s[i])){
					joe=0;
				}
			}
		}
	} else{	
		joe=0;
	}

	/*if (hossz == 17 ){
		 if (s[8] != '-'){
			joe=0;
		 }
		 for (i=0;i<hossz;i++){
			 if (!isdigit(s[i]) || s[i] != '-'){
				 joe=0;
			 }
		 }
		 */


	//inputkiíratása
	if (joe == 0){
		printf("Rossz az input");
	} else {
		printf("jo az input");
	}


	/* if (hossz == 17 || hossz == 26){
	for(i=0;i<hossz;i++){
		if(i == 8 || i == 17){
			if(s[i] != '-'){
				rossz
			}
		} else{
			if(!isdigit(s[i])){
				rossz
			}
		}

	}*/






	getchar();
}










int getline(char s[],int lim)
{
	int i,c;
	for(i=0; i<lim && (c=getchar())!=EOF && c!='\n'; ++i) s[i]=c;
	s[i]='\0';
	while(c!=EOF && c!='\n') c=getchar();
	return i;
}