#include <iostream>

using namespace std;


void cambio(int &v,int &b){
    int temp;
    temp=b;
    b=v;
    v=temp;
}


void bubble(int a[], int tam){


    for(int i=0; i<tam; i++){
        for(int j=0; j<tam; j++){
            if(a[j]>a[j+1]){
                cambio(a[j],a[j+1]);
            }
        }
    }

    cout<<"Los valores ordenados son: "<<"\n";
    for(int j=0; j<tam; j++){
        cout<< a[j]<<"\t";
    }
}


int main()
{
    int t=10;
    int a[t];

    cout<<"Ingrese 10 valores a ordenar: "<<endl;

    for(int i=0; i<t; i++)
    {
        cin>>a[i];
    }

    bubble(a,t);

    return 0;
}
