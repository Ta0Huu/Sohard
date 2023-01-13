#include <iostream>
#include <cmath>
using namespace std;

const int N = 30;
const int M = 70;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "Input your brush size and location: ";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);
    }while(s != 0 || x != 0 || y != 0);
    return 0;
}

void updateImage(bool [][M],int,int,int);{
    
}

void showImage(const bool [][M]){
    int c, z;
    for (int i = 0; i < M;i++){
    cout << "-";
    }
    cout << "\n";
    for (int i = 0; i < N;i++){
        cout << "|";
        for (int v = 2 ; v < M;v++){
            cout << " ";
            if (x == z and y == c){
                cout << "*";
                i++;
            }
            c++;
        }
        c = 0;
        cout << "|\n";
        z++;
    }
    for (int i = 0; i < M;i++){
    cout << "-";
    }
    cout << "\n";
}