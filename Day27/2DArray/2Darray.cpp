#include <iostream>
using namespace std;

int main(){
    int matrix[2][3] = {{1,2,3},{3,4,5}};
    matrix[1][2] = 7;
    cout << matrix[1][2] <<endl;

    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cout << matrix[i][j];
        }
        cout<<endl;
    }
}