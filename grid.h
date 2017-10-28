#include<iostream>
#include<cstdio>

using namespace std;

void grid(int sector,int g[41][41])
{
    int i,j,r,s,p,q;
    if(sector==21)
    {
        r=0;
        s=0;
        p=21;
        q=21;
    }
    else if(sector==20)
    {
        r=22;
        s=0;
        p=41;
        q=21;
    }
    else if(sector==35)
    {
        r=0;
        s=22;
        p=21;
        q=41;
    }
    else if(sector==34)
    {
        r=22;
        s=22;
        p=41;
        q=41;
    }
    cout << r << s << p << q << endl;
    for(i=r;i<p;i++)
    {
        for(j=s;j<q;j++)
        {
            if(g[i][j]==1)
                printf("#  ");
            else if(i==21 || j==21)
                printf("/  ");
            else if(g[i][j]==0)
                printf(".  ");
        }
        printf("\n");
    }
    for(i=0;i<41;i++)
    {
        for(j=0;j<41;j++)
            cout << g[i][j];
        cout << endl;
    }
}
