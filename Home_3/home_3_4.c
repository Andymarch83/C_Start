#include <stdio.h>
int main(int argc, char **argv)
{
	int month;
	scanf("%d",&month);
	if ((month >= 1 && month < 3) || month == 12){
		printf("%s", "winter");
	}
	else if	(month >= 3 && month < 6){
		printf("%s", "spring");
	}	
	else if	(month >= 6 && month < 9){
		printf("%s", "summer");
	}	
	else if	(month >= 9 && month < 12){
		printf("%s", "autumn");
	}
	else
		printf("%s","wrong month nomber");
	return 0;
}
