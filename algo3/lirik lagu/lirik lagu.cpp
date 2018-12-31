#include<iostream>
using namespace std;
class LaguAyam
{
private:
    int n;
public:
    void tampil()

    {
        cout<<"Anak ayam turun 5"<<endl;
        for (int n=5;n>0;n--)
            if(n>1)
        {
            cout<<"anak ayam turun"<<n<<"mati satu tinggal"<<n-1<<endl;

        }
        else if (n=1)
        {
            cout<<"anak ayam turun 1,mati satu tinggal induk nya"<<endl;
        }
    }
};

int main()
{

    LaguAyam a;
    a.tampil();
    return 0;




}
