#include<iostream>
#include<ctime>
#include<cstring>

using namespace std;

char* time_comp(int ti_o, int ti_c)
{
	time_t ti;
    time(&ti); 
	char* he = ctime(&ti);
	int hrs;
	hrs = (he[11]-'0')*10;
	hrs += (he[12]-'0');
	if(ti_o<=hrs && ti_c>=hrs)
		return "Available";
	else 
		return "Not Available";
}

