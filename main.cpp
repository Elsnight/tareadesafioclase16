  
#include <iostream>
using namespace std;

void ingresar(int a[],int n);
void imprimir(int a[],int n);



int main()
{

    int a[50],n;
    cout<<"INGRESE EL TAMANIO:";
    cin>>n;
    ingresar(a,n);//*
    imprimir(a,n);
    cout<<endl;
    return 0;

}

//ingresa datos
void ingresar(int a[],int n)//listo
{
    int i;
    for(i=0;i<n;i++)
    {
      cout <<"\nIngreso ["<<i<<"]=";
      cin >>a[i];
    }
}

//imprimir datos
void imprimir(int a[],int n)
{
  int i,b[50],k;
    for(i=0;i<n;i++)
    {
      if(a[i]%2==0)
    {
      b[k]=a[i];
      k++;
    }
    }
    cout <<endl ;
    cout <<"los pares son:"<<endl;
    for(i=0;i<k;i++)
    {
      cout <<endl<<"b["<<i<<"]="<<b[i];
    }
    
}


