#include <iostream>
#include <cstring>
using namespace std;

int main()
{
char names[5][100];
int x,y,z;

char exchange[100];

cout << "Enter five names...\n";

for(x=1;x<=5;x++)
{
    cout << x << ". ";
    cin >> names[x-1];
}
void getch();

for(x=0;x<=5-2;x++)
{
    for(y=0;y<=5-2;y++)
    {
        for(z=0;z<=99;z++)
        {
            if(int(names[y][z])>int(names[y+1][z]))
            {   
                strcpy(exchange,names[y]);
                strcpy(names[y],names[y+1]);
                strcpy(names[y+1],exchange);
                break;
            }
        }   
    }
}   

for(x=0;x<=5-1;x++)
    cout << names[x]<<",";

return 0;
}
