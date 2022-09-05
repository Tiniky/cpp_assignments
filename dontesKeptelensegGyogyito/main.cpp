#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <chrono>
#include <thread>

using namespace std;

int main()
{
    system("Color 0B");

    using namespace std::this_thread;
    using namespace std::chrono;

    const int max_dontes = 100;
    string dontenikell[max_dontes];

    cout << "let me donteni helyetted uwu " << endl;
    sleep_for(2s);
    cout << "(DECIDE pls <- does the magic)" << endl;
    sleep_for(1s);

    int dontesek = 0;

    for(int i=1; i<=max_dontes; i++)
    {
        cout << i << ". ";
        getline(cin,dontenikell[i]);
        if(dontenikell[i] == "DECIDE pls")
        {
            dontesek = i-1;
            break;
        }
    }

    int dontes;

    srand (time(NULL));

    dontes = rand() % dontesek + 1;

    cout << " " << endl;
    cout << "Hmmm";
    sleep_for(1s);
    cout << ".",
    sleep_for(1s);
    cout << ".",
    sleep_for(1s);
    cout << "." << endl;
    cout << " " << endl;
    sleep_for(2s);
    cout <<"// " << dontenikell[dontes]<< " //"<<endl;
    cout << " " << endl;
    cout << " " << endl;
    sleep_for(1s);
    cout << "(volt donteskeptelenseg.. van donteskeptelenseg)"<<endl;
    sleep_for(1s);
    cout << "u're welcome :D" << endl;

    int x;
    cin >> x;

}
