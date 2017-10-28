#include<iostream>
#include<ctime>

using namespace std;

int main(){
	
	time_t ti;
    time(&ti); 
	char* he = ctime(&ti);
	int hrs;
	hrs = (he[11]-'0')*10;
	hrs += (he[12]-'0');
	cout << hrs;
  	return 0;

}
