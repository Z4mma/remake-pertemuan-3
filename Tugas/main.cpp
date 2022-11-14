#include <iostream>

using namespace std;

int main()
{
     int y = 5000;
    int x,z;


    cout << "Masukkan Harga Satuan Permen: "; cin >> z;

    if(z==500){
        cout << "Dito Membeli: 5" << endl;
    }else if(z==1000){
        x=y/z;
        cout << "Dito Membeli: " <<x<< endl;
    }else if(z==300){
        for(z=300 ; z<=y; z+=300){
            x+=1;
        }
        cout<<"Dito Membeli: "<<y<< endl;
    }



    return 0;
}
