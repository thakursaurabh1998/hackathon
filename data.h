#include<iostream>
#include<cstdio>
#include"time_c.h"
#include"grid.h"
using namespace std;

void hospital(int sector,float rating)
{
	int i;
	char hos_name[][25]={"Alchemist","GM Nursing","INSCOL","Jindal NF","Dogra Nursing","Mukat","Virdi Eye","Omni Hospital","Abhilasha","Guru Nanak Hospital","Grover Eye Hospital"};
	int hos_sector[11]={21,21,21,20,20,34,34,34,35,35,35};
	char hos_price[11]="Not Known";
	float hos_rating[11]={4,3.5,4,4,4,3.4,3.8,2.9,5,4,4.4};
	int x[] = {0,4,8,24,32,0,4,16,28,32,28};
	int y[] = {0,4,8,0,0,24,28,20,20,24,32};
	char hos_avail[5]="Open";
	for(i=0;i<11;i++)
	{
		if(sector==hos_sector[i]&&rating<=hos_rating[i])
		{
			printf("%-25s %d",hos_name[i],hos_sector[i]);
			printf(" %.1f %s %s\n",hos_rating[i],hos_price,hos_avail);
		}
	}
	
}
void hotel(int price,float rating,int sector)
{
	int i;
	char hotel_name[][30]={"The TOY Hotel","Hotel Aman Regency","Maya Hotel","Piccadily","Hotel Chandigarh","Hotel Orbit","Hotel City Edge","Hotel Le Crown","Hotel Orange-35","Piccadily-35","JW Marriott"};
	int hotel_sector[11]={21,21,21,20,20,34,34,34,35,35,35};
	int hotel_price[11]={2500,2000,3000,1500,2555,2999,1290,3000,2000,3000,5000};
	float hotel_rating[11]={3.8,3.4,4.2,4,3,2.9,3,4,4,4.2,4.7};
	int hotel_open[]={4,5,5,6,3,3,4,7,6,4,22};
	int  hotel_close[]={23,22,23,24,24,22,23,24,24,24,24};
	int x[] = {8,0,12,28,24,12,0,16,36,36,24};
	int y[] = {0,8,4,4,8,20,32,28,32,28,20};
	for(i=0;i<11;i++)
	{
		if(sector==hotel_sector[i]&&rating<=hotel_rating[i]&&price>=hotel_price[i]&&strcmp("Not Available",time_comp(hotel_open[i],hotel_close[i])))
		{
			printf("%-25s %d",hotel_name[i],hotel_sector[i]);
			printf(" %.1f %d %s\n",hotel_rating[i],hotel_price[i],time_comp(hotel_open[i],hotel_close[i]));
		}
	}
	
}
void restaurant(int price,float rating,int sector)
{
	int i,a,b,j;
	int g[41][41] = {0};
	int rest_price[]={1000,300,200,400,350,550,800,700,380,250,150};
	int rest_sector[]={21,21,21,20,20,20,34,34,35,35,35};
	char rest_name[][30]={"Kailash Restaurant","Flames Restaurant","Eating Joint","Ghazal Restauranr","Prince Restaurant","Gusto Cafe","Nukkar Dhaba","Muskan Restaurant","Swagath Restaurant","Novelty Restaurant","7ven 11ven Restaurant"};
	float rest_rating[]={3,4,5,4.4,3.9,2.8,1.5,4.4,5,3,4};
	int rest_open[]={7,8,9,8,10,11,8,9,10,10,8};
	int rest_close[]={22,21,22,23,24,23,23,22,22,23,26};
	int x[]={16,16,12,36,32,24,8,0,36,24,32};
	int y[]={0,8,12,0,8,12,24,20,20,28,28};
	/*for(i=0;i<41;i++)
		for(j=0;j<41;j++)
			printf("%d",g[i][j]);
			//g[i][j]=0;*/

	for(i=0;i<11;i++)
	{
		if(sector==rest_sector[i]&&rating<=rest_rating[i]&&price>=rest_price[i]&&strcmp("Not Available",time_comp(rest_open[i],rest_close[i])))
		{
			a = x[i];
			b = y[i];
			g[a][b] = 1;
			printf("%-25s %d",rest_name[i],rest_sector[i]);
			printf(" %.1f %d %s\n",rest_rating[i],rest_price[i],time_comp(rest_open[i],rest_close[i]));
		}
	}
	
	grid(sector,g);
}

