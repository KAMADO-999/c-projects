#include <stdio.h>
#include <time.h>
#include <unistd.h>
void fill_time(char*, int);
void fill_date(char*);
void clrscreen();
int main()
{
    char time[50],date[100];
    int format; 
    printf("choose the format-->\n");
    printf("1-->24 hour format\n");
    printf("2-->12 hour format\n");
    printf("Your choice-->");
    scanf("%d", &format);
    fill_time(time,format);
    fill_date(date);
    clrscreen();
    printf("Current Time: %s\n", time);
    printf("Current date: %s\n", date);
    while (1)
    {
        clrscreen();
        fill_time(time,format);
        fill_date(date);
        printf("\n\n Current time-->%s",time);
        printf("\n\n Current date-->%s",date);
        sleep(1);
    }
    return 0;

}
void fill_time(char* buffer,int format)
{
    time_t rawtime;
    struct tm *currtime;
    time(&rawtime);
    currtime = localtime(&rawtime);
    if (format==1)
    {
       strftime(buffer, 50, "%H:%M:%S", currtime);
    }
    else{
    strftime(buffer, 50, "%I:%M:%S %p", currtime);
    }
}

void fill_date(char* buffer)
{
        time_t rawtime;
    struct tm *currtime;
    time(&rawtime);
    currtime = localtime(&rawtime);
    strftime(buffer, 100, "%A %B %d %Y", currtime);

}
void clrscreen()
{
   printf("\033[H\033[J");
}