#include <iostream>
using namespace std;

int main(){
    int sekarang, tahun_lahir, umur;
    cout<<"tahun sekarang :";
    cin>>sekarang;
    cout<<"tahun lahir :";
    cin>>tahun_lahir;
    umur = sekarang - tahun_lahir;


    cout<<"===============================\n";
    cout<<"sekarang tahun "<< sekarang << endl;
    cout<<"saya lahir pada tahun" <<tahun_lahir<<endl;
    cout<<"umur saya sekarang " <<umur<<endl;

    return 0;
}