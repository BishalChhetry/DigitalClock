//Check README.md

#include<stdio.h>
#include<time.h>
#include<graphics.h>
void display(int ,int ,int ,int );
void digits(int ,int ,int ,int ,int ,int ,int , int ,int ,int ,int ,int ,int );
int main()
{
      int gd = DETECT, gm;
      initgraph (&gd, &gm, ""); 
while(1)
	{   

	time_t now; 
	struct tm *now_tm;
	int min,hour;			//variables for  minutes and hour
	now = time(NULL);
	now_tm = localtime(&now);
	hour = now_tm->tm_hour;
	min = now_tm->tm_min;

	if(hour<=12)
		{
		//print A (using 7 segments only)
		line(500,290,500,280);
		line(500,280,520,280);
		line(520,280,520,290);
		line(500,290,520,290);
		line(500,290,500,300);
		line(520,290,520,300);
	
		//print M (not using 7 segments)
		line(530,280,530,300);
		line(530,280,540,300);
		line(540,300,550,280);
		line(550,280,550,300);
		}
	else
		{
		// Print P (using 7 segments)
		line(500,290,500,280);
		line(500,280,520,280);
		line(520,280,520,290);
		line(500,290,520,290);
		line(500,290,500,300);
	
		// print M (not using 7 segments)
		line(530,280,530,300);
		line(530,280,540,300);
		line(540,300,550,280);
		line(550,280,550,300);
		}
	hour=hour%12;
	
	int h1 = hour/10; 
	int h2 = hour%10;
	int m1 = min/10;
	int m2 = min%10;
	display(h1,h2,m1,m2);
	delay(750);
	cleardevice();
	} //while ends here 
}

void display(int h1, int h2, int m1, int m2)
{ 
      //Hours
      digits(h1,100,250,100,330,140,250,140,330,100,290,140,290);
      
      digits(h2,160,250,160,330,200,250,200,330,160,290,200,290);
      
      
      //colons:
      putpixel(222,270,WHITE);
      putpixel(222,320,WHITE);
      
      
      //Minutes
      digits(m1,240,250,240,330,280,250,280,330,240,290,280,290);
      
      
      
      digits(m2,320,250,320,330,360,250,360,330,320,290,360,290);
    
     
      
}

void digits(int value , int first_pt_x,int first_pt_y, int fifth_pt_x,int fifth_pt_y,int second_pt_x,int second_pt_y, int fourth_pt_x,int fourth_pt_y,int sixth_pt_x,int sixth_pt_y,int third_pt_x,int third_pt_y)
{
if(value==1)
	{
	 line(second_pt_x,second_pt_y,third_pt_x,third_pt_y);
	 line(fourth_pt_x,fourth_pt_y,third_pt_x,third_pt_y);
	}
if(value==2)
	{
	line(second_pt_x,second_pt_y,first_pt_x,first_pt_y);
	line(second_pt_x,second_pt_y,third_pt_x,third_pt_y);
	line(third_pt_x,third_pt_y,sixth_pt_x,third_pt_y);
	line(sixth_pt_x,sixth_pt_y,fifth_pt_x,fifth_pt_y);
	line(fifth_pt_x,fifth_pt_y,fourth_pt_x,fourth_pt_y);
	}
if(value==3)
	{
	line(second_pt_x,second_pt_y,first_pt_x,first_pt_y);
	line(second_pt_x,second_pt_y,third_pt_x,third_pt_y);
	line(third_pt_x,third_pt_y,sixth_pt_x,sixth_pt_y);
	line(third_pt_x,third_pt_y,fourth_pt_x,fourth_pt_y);
	line(fifth_pt_x,fifth_pt_y,fourth_pt_x,fourth_pt_y);
	
	}
if(value==4)
	{
	line(first_pt_x,first_pt_y,sixth_pt_x,sixth_pt_y);
	line(third_pt_x,third_pt_y,sixth_pt_x,sixth_pt_y);
	line(second_pt_x,second_pt_y,third_pt_x,third_pt_y);
	line(fourth_pt_x,fourth_pt_y,third_pt_x,third_pt_y);
	}
if(value==5)
	{
	line(second_pt_x,second_pt_y,first_pt_x,first_pt_y);
	line(first_pt_x,first_pt_y,sixth_pt_x,sixth_pt_y);
	line(third_pt_x,third_pt_y,sixth_pt_x,sixth_pt_y);
	line(fourth_pt_x,fourth_pt_y,third_pt_x,third_pt_y);
	line(fifth_pt_x,fifth_pt_y,fourth_pt_x,fourth_pt_y);
	}
if(value==6)
	{
	line(second_pt_x,second_pt_y,first_pt_x,first_pt_y);
	line(first_pt_x,first_pt_y,sixth_pt_x,sixth_pt_y);
	line(third_pt_x,third_pt_y,sixth_pt_x,sixth_pt_y);
	line(fourth_pt_x,fourth_pt_y,third_pt_x,third_pt_y);
	line(fifth_pt_x,fifth_pt_y,fourth_pt_x,fourth_pt_y);
	line(fifth_pt_x,fifth_pt_y,sixth_pt_x,sixth_pt_y);
	}
if(value==7)
	{
	line(second_pt_x,second_pt_y,first_pt_x,first_pt_y);
	line(second_pt_x,second_pt_y,third_pt_x,third_pt_y);
	line(fourth_pt_x,fourth_pt_y,third_pt_x,third_pt_y);
	}
if(value==8)
	{
	line(second_pt_x,second_pt_y,first_pt_x,first_pt_y);
	line(first_pt_x,first_pt_y,sixth_pt_x,sixth_pt_y);
	line(third_pt_x,third_pt_y,sixth_pt_x,sixth_pt_y);
	line(fourth_pt_x,fourth_pt_y,third_pt_x,third_pt_y);
	line(fifth_pt_x,fifth_pt_y,fourth_pt_x,fourth_pt_y);
	line(fifth_pt_x,fifth_pt_y,sixth_pt_x,sixth_pt_y);
	line(third_pt_x,third_pt_y,second_pt_x,second_pt_y);
	}
if(value==9)
	{
	line(second_pt_x,second_pt_y,first_pt_x,first_pt_y);
	line(first_pt_x,first_pt_y,sixth_pt_x,sixth_pt_y);
	line(third_pt_x,third_pt_y,sixth_pt_x,third_pt_y);
	line(fourth_pt_x,fourth_pt_y,third_pt_x,third_pt_y);
	line(fifth_pt_x,fifth_pt_y,fourth_pt_x,fourth_pt_y);
	line(third_pt_x,third_pt_y,second_pt_x,second_pt_y);
	}

if(value==0)
	{
	line(second_pt_x,second_pt_y,first_pt_x,first_pt_y);
	line(first_pt_x,first_pt_y,sixth_pt_x,sixth_pt_y);
	line(fourth_pt_x,fourth_pt_y,third_pt_x,third_pt_y);
	line(fifth_pt_x,fifth_pt_y,fourth_pt_x,fourth_pt_y);
	line(fifth_pt_x,fifth_pt_y,sixth_pt_x,sixth_pt_y);
	line(third_pt_x,third_pt_y,second_pt_x,second_pt_y);
	}
	
}
