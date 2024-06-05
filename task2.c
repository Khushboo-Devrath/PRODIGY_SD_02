#include<stdio.h>
#include<stdlib.h>
int main(){
	
	// preparing the number
	int number=rand();
	int guess;
	printf("Please guess the number generated ...  \n");
	scanf("%d",&guess);
	int attempts=1;
	
	//applying the binary search for user guess
	while(guess!=number){
		attempts++;
		if(guess<number) {
			printf("The guessed number is less, Please guess greater number again\n");
		    scanf("%d",&guess);
			continue;
		}
        else  if(guess>number) {
			printf("The guessed number is more, Please guess smaller number again \n");
			scanf("%d",&guess);
			continue;
		}
		attempts++;
	}
	
	printf("Congratulations.. You got it right in %d attempts !!",attempts);

	return 0;	
}
