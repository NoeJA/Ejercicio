#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main() {
    int n;
    cout << "Introduce la dimension de la matriz"<< endl;
    cin >> n;

    int A[n][n];
    srand((int)time(0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            A[i][j] =1+ rand()%9;
            cout << A[i][j] << " ";

        }
        cout << endl;
    }
    cout<< endl;
    int B[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            B[i][j] = 1+rand()%9;
            cout << B[i][j] << " ";

        }
        cout << endl;
    }
    int operacion;
    cout<<"Introduzca que operación desea relizar 1= suma,2= resta, 3=producto, 4= división"<< endl;
    cin>> operacion;

    if(operacion==1){
        int mc[n][n];
        for (int i=0;i<n; i++){
            for (int j=0; j<n; j++){
                mc[i][j]=(A[i][j])+(B[i][j]);
                cout << mc[i][j]<<" ";
            }
            cout <<endl;
        }

    }
    else if (operacion==2){
        int mc[n][n];
        for (int i=0;i<n; i++){
            for (int j=0; j<n; j++){
                mc[i][j]=(A[i][j])-(B[i][j]);
                cout<< mc[i][j];
            }
            cout <<endl;
        }

    }

    else if (operacion==4) {
        int mc[n][n];
        for (int i = 0; i < n; i++) {
            for (int j=0; j < n; j++) {
                mc[i][j]=(A[i][j])/(B[i][j]);
                cout << mc[i][j]<< " ";
            }
            cout <<endl;
        }

    }

    else if(operacion==3){
        int mc[n][n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j <n; j++) {
                for (int m = 0; m < n; m++) {
                    mc[i][j] += (A[i][m]) * (B[m][j]);
                }
                cout << mc[i][j] << "   ";
            }
            cout << "\n";
        }
    }



    return 0;

}