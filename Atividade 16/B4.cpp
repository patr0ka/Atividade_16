#include <iostream>
using namespace std;

void bubbleSort(int v[], int n){
    if(n==1) return;

    for(int i=0; i<n-1; i++){
        if (v[i]>v[i + 1]){
            swap(v[i], v[i+1]);
        }
    }
    bubbleSort(v, n - 1);
}

int main(){
    int i;
    int n=10;
    int v[n];

    for(i=0; i<n; i++){
        cin >> v[i];
    }

    bubbleSort(v, n);

    cout << "Array ordenado: ";
    for (i=0; i<n; i++){
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
