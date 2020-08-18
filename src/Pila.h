#include <stdio.h>
#include <iostream>

#ifndef PILA
#define PILA

template<typename T>
class Pila
{
        private:
                struct nodo
               {
                        T clave;
                        struct nodo *siguiente;
                };
                struct  nodo *cabeza, *z;

	public:
                Pila (int max)
                {
                        cabeza = new nodo;
                        z=new nodo;
                        cabeza->siguiente=z;
                        z->siguiente =z;
                }

                ~Pila ()
                {
                        struct nodo *t=cabeza;
                        while (t != z)
                        {
                                cabeza=t;
                                t=t->siguiente;
                                delete cabeza;
                        }
                        delete z;
                }

                void meter (T v)
                {
                        struct nodo *t=new nodo;
                        t->clave = v;
                        t->siguiente=cabeza->siguiente;
                        cabeza->siguiente=t;
                }

                T sacar ()
                {
                        T x;
                        struct nodo *t = cabeza->siguiente;
                        cabeza->siguiente = t->siguiente;
                        x=t->clave;
                        delete t;
                        return x;
                }

               bool vacia ()
               {
                       return cabeza->siguiente == z;
                }
};
#endif
