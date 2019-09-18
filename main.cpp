#include <iostream>
#include<windows.h>

using namespace std;

int main()
{

    char a='1',b='2',c='3',d='4',e='5',f='6',g='7',h='8',i='9';
    int ch;
    int j;
    string first,second;
    cout<<"\t\t\t\t\t\t    TIC TAC TOE\n\n\n";
    cout<<"Enter the first player's name:";
    cin>>first;
    cout<<"\nEnter the second player's name";
    cin>>second;

    cout<<"\t\t\t\t\t\t"<<a<<"\t"<<b<<"\t"<<c<<"\n";
    cout<<"\t\t\t\t\t\t"<<d<<"\t"<<e<<"\t"<<f<<"\n";
    cout<<"\t\t\t\t\t\t"<<g<<"\t"<<h<<"\t"<<i<<"\n";
    for(j=0;j<5;j++)
    {
        cout<<"Enter the "<<first<<"'s choice";
        cin>>ch;
        switch(ch)
    {
    case 1:
        a='x';
        break;
    case 2:
       b='x';
        break;
    case 3:
      c='x';
        break;
    case 4:
        d='x';
        break;
    case 5:
       e='x';
        break;
    case 6:
        f='x';
        break;
    case 7:
       g='x';
        break;
    case 8:
        h='x';
        break;
    case 9:
        i='x';
        break;
        }
    cout<<"\t\t\t\t\t\t"<<a<<"\t"<<b<<"\t"<<c<<"\n";
    cout<<"\t\t\t\t\t\t"<<d<<"\t"<<e<<"\t"<<f<<"\n";
    cout<<"\t\t\t\t\t\t"<<g<<"\t"<<h<<"\t"<<i<<"\n";
    if((a==b)&&(b==c))
    {
        if(a=='x')
        {
            cout<<"1st is winner";
            goto newgame;
        }

    }
    if((d==e)&&(e==f))
    {
        if(d=='x')
        {
            cout<<"1st is winner";
            goto newgame;
        }

    }
    if((g==h)&&(h==i))
    {
        if(g=='x')
        {
            cout<<"1st is winner";
            goto newgame;
        }

    }
    if((a==d)&&(d==g))
    {
        if(a=='x')
        {
            cout<<"1st is winner";
            goto newgame;
        }

    }
    if((b==e)&&(e==h))
    {
        if(b=='x')
        {
            cout<<"1st is winner";
            goto newgame;
        }

    }
    if((c==f)&&(f==i))
    {
        if(c=='x')
        {
            cout<<"1st is winner";
            goto newgame;
        }

    }
    if((a==e)&&(e==i))
    {
        if(a=='x')
        {
            cout<<"1st is winner";
            goto newgame;
        }

    }
    if((c==e)&&(e==g))
    {
        if(c=='x')
        {
            cout<<"1st is winner";
            goto newgame;
        }

    }
        cout<<"Enter the "<<second<<"'s choice";
        cin>>ch;
        switch(ch)
    {
    case 1:
       a='o';
        break;
    case 2:
      b='o';
        break;
    case 3:
       c='o';
        break;
    case 4:
      d='o';
        break;
    case 5:
      e='o';
        break;
    case 6:
       f='o';
        break;
    case 7:
       g='o';
        break;
    case 8:
       h='o';
        break;
    case 9:
        i='o';
        break;
        }
    cout<<"\t\t\t\t\t\t"<<a<<"\t"<<b<<"\t"<<c<<"\n";
    cout<<"\t\t\t\t\t\t"<<d<<"\t"<<e<<"\t"<<f<<"\n";
    cout<<"\t\t\t\t\t\t"<<g<<"\t"<<h<<"\t"<<i<<"\n";
   if((a==b)&&(b==c))
    {
        if(a=='0')
        {
            cout<<"2nd is winner";
            goto newgame;
        }

    }
    if((d==e)&&(e==f))
    {
        if(d=='0')
        {
            cout<<"2nd is winner";
            goto newgame;
        }
    }
    if((g==h)&&(h==i))
    {

        if(g=='0')
        {
            cout<<"2nd is winner";
            goto newgame;
        }
    }
    if((a==d)&&(d==g))
    {

        if(a=='0')
        {
            cout<<"2nd is winner";
            goto newgame;
        }
    }
    if((b==e)&&(e==h))
    {

        if(b=='0')
        {
            cout<<"2nd is winner";
            goto newgame;
        }
    }
    if((c==f)&&(f==i))
    {

        if(c=='0')
        {
            cout<<"2nd is winner";
            goto newgame;
        }
    }
    if((a==e)&&(e==i))
    {

        if(a=='0')
        {
            cout<<"2nd is winner";
            goto newgame;
        }
    }
    if((c==e)&&(e==g))
    {

        if(c=='0')
        {
            cout<<"2nd is winner";
            goto newgame;
        }
    }


    }
    newgame:
        cout<<"\n\n\t\t\t\t\t\t  GAME OVER!!!!!";

    return 0;
}

