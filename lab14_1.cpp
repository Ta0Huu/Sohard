#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double A[],int N,double B[]){
    double K = A[0], J = A[0], M, L = 1, S;
    for(int i = 0;i < N;i++){
    B[0] += A[i]/N;
    L *= pow(A[i],1.0/N);
    S += 1/A[i];
    M += pow(A[i],2);
    if(K < A[i]) K = A[i];
    if(J > A[i]) J = A[i];
    }
    B[1] = sqrt((M/N)-pow(B[0],2));
    B[2] = L;
    B[3] = N/S;
    B[4] = K;
    B[5] = J;
}

