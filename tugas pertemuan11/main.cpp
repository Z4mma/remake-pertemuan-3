#include <iostream>

using namespace std;

int main()
{
    string a = "========================\n";
    string b = " MIZWAR ZAMMA\n A11.2022.14137\n 4104\n";

    int z1 = 0, z2 = 1, nextinput= 1, n;
    cout << b;
    cout << a;
    cout << "input angka : "<< endl;
    cin >> n;

    cout << "fibonacci :";

    nextinput = z1 + z2;

    while (nextinput <= n){
        cout << nextinput<<", ";
        z1 = z2;
        z2 = nextinput;
        nextinput = z1 + z2;
    }

    return 0;
}
