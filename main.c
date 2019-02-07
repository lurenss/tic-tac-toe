#include <stdio.h>
#include <stdlib.h>


void graphic(){

	char game_camp [3][7]; 
	int i,j;
	/*for(j=0;j<3;j++){
		for(i=0;i<7;i++){
			game_camp[j][i]='0';
		}
	}	*/	

	for(j=0;j<3;j++){
		for(i=0;i<7;i++)
			if(i%2==0)
				game_camp[j][i]='|';
			else
				game_camp[j][i]=' ';
	}
	for(j=0;j<3;j++){
		for(i=0;i<7;i++){
			printf("%c",game_camp[j][i]);
		}
		printf("\n");
	}		


}
int main(){
	graphic();
	return 0;
}