// Password Strength checker

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
	int i, upper = 0, lower = 0, number = 0, symbol = 0;
	char password[40];
	
	while(1){
		printf("Enter your password: ");
	
		scanf(" %s", password);
		if(strlen(password) < 8){
			printf("Password must be minimum 8 characters long.\n");
			continue;
		}
		for(i = 0; i < strlen(password); i++){
			if( isupper(password[i]) ){
				upper++;
			}
			else if( islower(password[i]) ){
				lower++;
			}
			else if( isdigit(password[i]) ){
				number++;
			}
			else{
				symbol++;
			}
		}
		if((upper > 3 &&  number > 3) && (lower >3 && symbol > 3) ){
			printf("Password strength: STRONG\n\n");
		}
		else if( (upper == 3 &&  number == 3) && (lower == 3 && symbol == 3) ){
			printf("Password strength: MEDIUM\n\n");
		}
		else{
			printf("Password strength: LOW\n\n");
		}
		
	}
	return 0;
}
