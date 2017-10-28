#include<iostream>
#include<ctime>
#include<cstring>

using namespace std;

void time_comp(int ti_o, int ti_c)
{
	time_t ti;
    time(&ti); 
	char* he = ctime(&ti);
	int hrs;
	hrs = (he[11]-'0')*10;
	hrs += (he[12]-'0');
	if(ti_o<=hrs && ti_c>=hrs)
	{
		cout << "Available" << endl;
	}	
}

int main()
{
	time_comp(14,23);
	return 0;
}
