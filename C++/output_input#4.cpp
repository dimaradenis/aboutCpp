#include <iostream>
using namespace std;

int main(){
    string aktivitas;
    string tempat;

    cout<<"apa aktivitas kamu ?";
    getline(cin,aktivitas);

    cout<<"dimana anda melakukannya ?";
    getline(cin , tempat);

    cout<<"aktivitas anda adalah "<< aktivitas << " dilakukan di" << tempat ;

}