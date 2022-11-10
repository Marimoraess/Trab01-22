#include<iostream>
#include<conio.h>
using namespace std;
void div(float sb, float inss,float irpf );
float x (float sb);
float n(float sb );
int main()
{
    float sb, inss, irpf, vt, vd;
    cout<<"\nDigite o salario"<<endl;
    cin>>sb;

    inss=n(sb);
    irpf=x(sb);
     div( sb,  inss,irpf );
}
 float n(float sb ){

    if(sb<=1500);
    {
         return (sb/100)*8;
    }
if (sb<=2000)
        {
           return  (sb/100)*9;
        }
    else if(sb>2000)
        {
         return  (sb/100)*11;
        }
}
float x (float sb ){


    if(sb<=2000)
    {
         return 0;
    }
 else if (sb<=3000)
        {
           return  (sb/100)*10;

        }
    else if(sb>=3000)
        {
         return   (sb/100)*15;
        }
}
void div(float sb, float inss,float irpf )
{
    float vd=inss+irpf;
    float vt=sb-vd;
cout<<"PROVENTOS"<<endl;
cout<<"SALARIO BASE..................."<<sb<<endl;
cout<<"-------------------------------"<<endl;
cout<<"DESCONTOS"<<endl;
cout<<"INSS..........................."<<inss<<endl;
cout<<"IRPF..........................."<<irpf<<endl;
cout<<"-------------------------------"<<endl;
cout<<"TOTAL DE DESCONTOS............."<<vd<<endl;
cout<<"SALARIO LIQUIDO................"<<vt<<endl;
}






