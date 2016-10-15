#include <stdio.h>
#include <time.h>

void GetDateTime(void);

main()
{
	printf("Before the GetDateTime() function is called.\n");
	GetDateTime();
	printf("After the GetDateTime() function is called.\n");
	return 0;
}

void GetDateTime()
{
	time_t now;
	
	printf("Within GetDateTime().\n");
	time(&now);
	printf("Current date and time is: %s", asctime(localtime(&now)));
	//printf("Current date and time is: %c", char *asctime(const struct tm *timeptr));
	char *asctime(const struct tm *timeptr);
}
