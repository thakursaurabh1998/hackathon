#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include "data.h"
using namespace std;

int main()
{
    char* city= (char*) malloc(sizeof(char)*20);
    cout<< "Enter City: ";
    cin >> city;
    strlwr(city);
    int flag=0;
    if(strcmp("chandigarh",city)==0)
    	cout <<"Enter Sector(34/20/35/21): ";
	else
	{
        cout << "Sorry, city not available. Only Chandigarh is available.";
        return 1;
    }
    int sec,budget;
    char* interest = (char*)malloc(sizeof(char)*30);
    float rating;
    cin >> sec;
    cout << "Your service of interest(hotel/restaurant/hospital): " ;
    cin >> interest;
    strlwr(interest);
    if(strcmp(interest,"hospital")!=0)
    {
        cout << "Enter max amount you can spend: ";
        cin >> budget;
    }
    cout << "Minimum expected ratings: ";
    cin >> rating;
    
    if(strcmp(interest,"hotel")==0)
        hotel(budget,rating,sec);
    else if(strcmp(interest,"hospital")==0)
        hospital(sec,rating);
    else if(strcmp(interest,"restaurant")==0)
        restaurant(budget,rating,sec);
        
    return 0;

}
