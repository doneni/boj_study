#include <stdio.h>
#include <time.h>
int main(void)
{
    time_t currentTime = time(NULL);
    struct tm *utc0Time = localtime(&currentTime);
    printf("%04d-%02d-%02d", utc0Time->tm_year + 1900, utc0Time->tm_mon + 1, utc0Time->tm_mday);
    return 0;
}