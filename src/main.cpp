#include <iostream>

using namespace std;

bool sprawdzCzyWygralWPoziomie(char znak,char plansza[4][4])
{
    bool czyWygral=false;

    for(int i=1;i<4;i++)
    {
        int liczenieWygranych=0;
        for(int j=1;j<4;j++)
        {
            if(plansza[i][j]==znak)
            {
                liczenieWygranych++;
            }
        }

        if(liczenieWygranych==3)
        {
            czyWygral =true;
            break;
        }

    }
    return czyWygral;
}

bool sprawdzCzyWygralWPionie(char znak,char plansza[4][4])
{
    bool czyWygral=false;

    for(int i=1;i<4;i++)
    {
        int liczenieWygranych=0;
        for(int j=1;j<4;j++)
        {
            if(plansza[j][i]==znak)
            {
                liczenieWygranych++;
            }
        }

        if(liczenieWygranych==3)
        {
            czyWygral =true;
            break;
        }

    }
    return czyWygral;
}

bool sprawdzCzyWygralNaUkos1(char znak,char plansza[4][4])
{
    bool czyWygral=false;
    int j=1;
    int liczenieWygranych=0;

    for(int i=1;i<4;i++)
    {

        if(plansza[i][j]==znak)
        {
            liczenieWygranych++;
        }


        if(liczenieWygranych==3)
        {
            czyWygral =true;
            break;
        }
        j++;
    }
    return czyWygral;
}

bool sprawdzCzyWygralNaUkos2(char znak,char plansza[4][4])
{
    bool czyWygral=false;
    int j=3;
    int liczenieWygranych=0;

    for(int i=1;i<4;i++)
    {

        if(plansza[i][j]==znak)
        {
            liczenieWygranych++;
        }


        if(liczenieWygranych==3)
        {
            czyWygral =true;
            break;
        }
        j--;
    }
    return czyWygral;
}

bool sprawdzCzyGraczWygral(char znak, char plansza[4][4])
{
    bool czyWygral = sprawdzCzyWygralWPoziomie(znak ,plansza) || sprawdzCzyWygralWPionie(znak ,plansza) || sprawdzCzyWygralNaUkos1(znak ,plansza) || sprawdzCzyWygralNaUkos2(znak ,plansza);
    return czyWygral;
}

void wyswietlPlansze(char plansza[4][4])
{
    for(int i=1;i<4;i++)
    {
        for(int j=1;j<4;j++)
        {
            cout<<plansza[i][j];
        }
        cout<<endl;
    }
}

char ruchAktualnegoGracza(int tura,char znakGraczaO,char znakGraczaX)
{
    return tura%2!=0 ? znakGraczaO : znakGraczaX;
}

string menuGry()
{
    string menu;
    cout<<"Kolko i Krzyzyk \nGracz na gracza wpisz - gram \nInstrukcja wpisz - instrukcja"<<endl;
    cin>>menu;
    return menu;
}

void PrzebiegGry()
{
    int tura=1;

    int wiersz=1;
    int koluma=1;
    char plansza[4][4];

    char znakGraczaO= 'O';
    char znakGraczaX= 'X';

        for(int i=1;i<4;i++)
    {
        for(int j=1;j<4;j++)
        {
            plansza[i][j]='-';
        }
    }

    while(tura<10)
    {
        system( "cls" );
        wyswietlPlansze(plansza);
        char aktualnyGracz = ruchAktualnegoGracza(tura, znakGraczaO, znakGraczaX);

        string ruchGracza=aktualnyGracz == znakGraczaO ? "Ruch pierwszego gracza" : "Ruch drugiego gracza";

        cout<<ruchGracza<<endl;
        cin>>wiersz;
        cin>>koluma;

        plansza[wiersz][koluma]=aktualnyGracz;

        if(sprawdzCzyGraczWygral(aktualnyGracz, plansza))
        {
            cout<<"Gracz "<< aktualnyGracz <<" wygral"<<endl;
            wyswietlPlansze(plansza);
            cout<<"Graj jeszcze raz wpisz - gram \nKoncze rozgrywke wpisz - koniec";
            break;
        }

        tura++;
    }
}

int main()
{
    while(true)
    {
        string menu=menuGry();
        if(menu=="gram")
        {
            PrzebiegGry();
        }
        else if(menu=="instrukcja")
        {

        }
        else if(menu=="koniec")
        {
            break;
        }
        else
        {
            cout<<"Wpisz porawna komende"<<endl;
        }
    }
}
