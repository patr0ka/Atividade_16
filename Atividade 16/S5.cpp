#include <iostream> 
using namespace std;

void selectiondecres(int *v,  int n){
    int i, j;
    for(i=0; i<n-1; i++){
        for(j=i+1; j<=n; j++){
            if(v[j] < v[i]){
                swap(v[j], v[i]);
            }
        }
    }
}

int main(){
    int i=0;
    int n=10;
    int v[n];
    for(i=0; i<n; i++){
        cin >> v[i];
    }
    selectiondecres(v, n);
    cout << "Array ordenado: "  << endl;
    for(i=0; i<n; i++){
        cout << v[i] << " ";
    }
}