#include <iostream>
#include <windows.h>
using namespace std;


void gotoxy (int columny, int lin)
{

    COORD coord;
    coord.X = columny;
    coord.Y = lin;
    SetConsoleCursorPosition( GetStdHandle (STD_OUTPUT_HANDLE),
                             coord
                             );



}

void choinka (int wiersz)
{
    for (int i=0; i<(wiersz/2)+1; i++)
    {
        for(int j=0; j<wiersz ;j++)
        {
            gotoxy(j+30,i);
            if(j+i<wiersz/2||j-i>wiersz/2)
                cout<<" ";
            else
                cout<<"x";
        }
        if (i==(wiersz/2)-1)
            break;
        cout<<endl;
    }
}
int main()
{
    int wiersz;
    cout<<" Podaj liczbe wierszy:"<<endl;
    cin>>wiersz;
    wiersz=wiersz*2;
    choinka(wiersz);




    return 0;
}
