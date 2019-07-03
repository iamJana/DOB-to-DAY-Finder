#include<stdio.h>
#include<stdlib.h>

int date;
int month;
int year;
int sub;
int yc;
int leap;
int add;
int r;
int result;
void all()
{
Header();
 Date();
 Month();
 Year();
 mcode();
ycode();
addition();
day();
}
int main()
{
 all();
}



void Header()
{
printf("-----------------------------------------------------------------------\n");
printf("	\tWELCOME TO JAES DOB TO DAY FINDER\n");
printf("				\t\t\tWritten by JANA\n");
printf("-----------------------------------------------------------------------\n");
}
void Date()
{
printf("Enter Your Date\n");
printf("Example:3\n");
printf("Date:");
scanf("%d",&date);
printf("-----------------------------------------------------------------------\n");

}
void Month()
{
printf("Enter Your Month\n");
printf("Example:8\n");
//printf("Example:1\n");
printf("Example:10\n");
printf("Month:");
scanf("%d",&month);
printf("-----------------------------------------------------------------------\n");
}
void Year()
{
printf("Enter Your Year\n");
printf("Example:2001\n");
printf("Year:");
scanf("%d",&year);
}

void mcode()
{
if(month==1)
r=1;
else if(month==2)
r=4;
else if(month==3)
r=4;
else if(month==4)
r=0;
else if(month==5)
r=2;
else if(month==6)
r=5;
else if(month==7)
r=0;
else if(month==8)
r=3;
else if(month==9)
r=6;
else if(month==10)
r=1;
else if(month==11)
r=4;
else if(month==12)
r=6;
else 
printf("Wrong\n");
}
void ycode()
{
if(year>=1900&&year<=1999)
{
yc=0;
sub=year-1900;
leap=sub/4;

}
else if(year>=2000&&year<=2099)
{
yc=6;
sub=year-2000;
leap=sub/4;
}

}
void addition()
{
add=date+r+yc+sub+leap;
//printf("%d\n",add);
result=add%7;
//printf("%d\n",result);
}
void day()
{
if(result==0)
{
printf("-----------------------------------------------------------------------\n");
printf("You are born on Saturday\n");
printf("-----------------------------------------------------------------------\n");
}
else if(result==2)
{
printf("-----------------------------------------------------------------------\n");
printf("You are born on Monday\n");
printf("-----------------------------------------------------------------------\n");
}
else if(result==3)
{
printf("-----------------------------------------------------------------------\n");
printf("You are born on Tuesday\n");
printf("-----------------------------------------------------------------------\n");
}
else if(result==4)
{
printf("-----------------------------------------------------------------------\n");
printf("You are born on Wednesday\n");
printf("-----------------------------------------------------------------------\n");
}
else if(result==5)
{
printf("-----------------------------------------------------------------------\n");
printf("You are born on Thursday\n");
printf("-----------------------------------------------------------------------\n");
}
else if(result==6)
{
printf("-----------------------------------------------------------------------\n");
printf("You are born on Friday\n");
printf("-----------------------------------------------------------------------\n");
}
else if(result==1)
{
printf("-----------------------------------------------------------------------\n");
printf("You are born on Sunday\n");
printf("-----------------------------------------------------------------------\n");
}
else 
printf("Wrong\n");
}




