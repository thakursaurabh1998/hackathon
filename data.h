#include<iostream>
#include<stdio>

using namespace std;

void hospital(int sector,float rating)
{
	int i;
	char hos_name[11][25];
	int hos_sector[11]={21,21,21,20,20,34,34,34,35,35,35};
	char hos_price[11]="Not Known";
	float hos_rating[11]={4,3.5,4,4,4,3.4,3.8,2.9,5,4,4.4};
	char hos_avail[5]="Open";
	hos_name[0]="Alchemist";
	hos_name[1]="GM Nursing";
	hos_name[2]="INSCOL";
	hos_name[3]="Jindal NF";
	hos_name[4]="Dogra Nursing";
	hos_name[5]="Mukat";
	hos_name[6]="Virdi Eye";
	hos_name[7]="Omni Hospital";
	hos_name[8]="Abhilasha";
	hos_name[9]="Guru Nanak Hospital";
	hos_name[10]="Grover Eye Hospital";
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
	char hotel_name[11][20];
	int hotel_sector[11]={21,21,21,20,20,34,34,34,35,35,35};
	int hotel_price[11]={2500,2000,3000,1500,2555,2999,1290,3000,2000,3000,5000};
	float hotel_rating[11]={3.8,3.4,4.2,4,3,2.9,3,4,4,4.2,4.7};
	int hotel_open[11];
	int  hotel_close[11];
	hotel_name[0]="The TOY Hotel";
	hotel_name[1]="Hotel Aman Regency";
	hotel_name[2]="Maya Hotel";
	hotel_name[3]="Piccadily";
	hotel_name[4]="Hotel Chandigarh";
	hotel_name[5]="Hotel Orbit";
	hotel_name[6]="Hotel City Edge";
	hotel_name[7]="Hotel Le Crown";
	hotel_name[8]="Hotel Orange-35";
	hotel_name[9]="Piccadily-35";
	hotel_name[10]="JW Marriott";
	hotel_open[0]=04;
	hotel_open[1]=05;
	hotel_open[2]=05;
	hotel_open[3]=06;
	hotel_open[4]=03;
	hotel_open[5]=03;
	hotel_open[6]=04;
	hotel_open[7]=07;
	hotel_open[9]=04;
	hotel_open[10]=22;
	hotel_close[0]=23;
	hotel_close[1]=22;
	hotel_close[2]=23;
	hotel_close[3]=00;
	hotel_close[4]=00;
	hotel_close[5]=22;
	hotel_close[6]=23;
	hotel_close[7]=00;
	hotel_close[9]=23;
	hotel_close[10]=24;
	
	for(i=0;i<11;i++)
	{
		if(sector==hotel_sector[i]&&rating<=hotel_rating[i]&&price>=hotel_price[i])
		{
			
			printf("%-25s %d",hotel_name[i],hotel_sector[i]);
			printf(" %.1f %d %s\n",hos_rating[i],hos_price[i],avail);
		}
	}
}

