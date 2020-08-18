#include <iostream>
#include <stdio.h>
#include <string>

#include "Pila.h"

using namespace std;

int main()
{
        char c;
        Pila<char> *guardar;
        guardar=new Pila<char>(16);
        while((cin.get(c)) && (c != '\n'))
        {
                while(c>='0' && c<='9')
                {
                        cout.put(c);
                        cin.get(c);
                }
                if (c==')')
                {
                        if (guardar->vacia())
                        {
                                cout<<"-";
                        }
                        cout.put(guardar->sacar());
                }
                if (c=='+') guardar->meter(c);
                if (c=='*') guardar->meter(c);
                if (c!='(') cout << '-';
        }

        cout<<"\n";

        delete guardar;

        char d;
        Pila<string> *acc;
        acc=new Pila<string>(50);
        int x;

        while((cin.get(d)) && (d != '\n'))
        {
                 x=0;
                 while (d=='-') cin.get(d);
                 while(d>= '0' && d<='9')
                 {
                        x=10*x + (d-'0');
                        cin.get(d);
                 }
                 if (d == '+')
                 {
                        x=atoi(acc->sacar().c_str());
                        x=x+atoi(acc->sacar().c_str());
                }
                 if (d == '*')
                 {
                        x= atoi(acc->sacar().c_str());
                        x= x* atoi(acc->sacar().c_str());
                }
                acc->meter(to_string(x));
        }

        cout<<endl;
        cout << acc->sacar()<< "\n";
        return 0;
}
