#include <iostream>

using namespace std;

int main()
{
    string z="------------------------";
    string x="\n------------------------";
    string y="\n=============";
    string u="\n=============";
    string m="\nNAMA: Mizwar Zamma\nNIM: A11.2022.14137";
    cout<<z<<m<<x;

    float r, luas;
    float phi=3.14;

    cout<<"\nLUAS LINGKARAN";
    cout<<y;
    cout<<"\njari jari: ";
    cin>>r;

    luas=phi*r*r;
    cout<<"luas: " <<luas<< "\n";





    float p,l, ls_lingkaran;

    cout<<"\nLUAS PERSEGI PANJANG";
    cout<<u;
    cout<<"\nPanjang: ";cin>>p;
    cout<<"lebar: ";cin>>l;

    ls_lingkaran=p*l;
    cout<<"luas: " <<ls_lingkaran<< "\n";

    return 0;
}

