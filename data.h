#include<iostream>
#include<cstdio>
#include"time_c.h"
using namespace std;

void hospital(int sector,float rating)
{
	int i;
	char hos_name[][25]={"Alchemist","GM Nursing","INSCOL","Jindal NF","Dogra Nursing","Mukat","Virdi Eye","Omni Hospital","Abhilasha","Guru Nanak Hospital","Grover Eye Hospital"};
	int hos_sector[11]={21,21,21,20,20,34,34,34,35,35,35};
	char hos_price[11]="Not Known";
	float hos_rating[11]={4,3.5,4,4,4,3.4,3.8,2.9,5,4,4.4};
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
	int i,price[11]={1000,300,200,400,350,550,800,700,380,250,150}
	int sector[11]={21,21,21,20,20,20,34,34,34,35,35,35};
	char rest_name[11][30]={"Kailash Restaurant","Flames Restaurant","Eating Joint","Ghazal Restauranr","Prince Restaurant","Gusto Cafe","Nukkar Dhaba","Muskan Restaurant","Swagath Restaurant","Novelty Restaurant","7ven 11ven Restaurant"};
	float rest_rating[11]={3,4,5,4.4,3.9,2.8,1.5,4.4,5,3};
	int rest_open[11]={7,8,9,8,10,11,8,9,10,10,8};
	int rest_close[11]={22,21,22,23,24,23,23,22,22,23,24+2};
	for(i=0;i<11;i++)
	{
		if(sector==rest_sector[i]&&rating<=rest_rating[i]&&price>=rest_price[i]&&strcmp("Not Available",time_comp(rest_open[i],rest_close[i]))
		{
		
			printf("%-25s %d",rest_name[i],rest_sector[i]);
			printf(" %.1f %d %s\n",rest_rating[i],rest_price[i],time_comp(rest_open[i],rest_close[i]));
		}
	}
}

