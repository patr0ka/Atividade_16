// A troca da condições não muda nada no funcionamento e ordenação em si, a unica diferença é que com "i < n-1", o código não executa a ultima vez, já que
// o valor desejado já estará no final, ao contratio do "i < n", que faz a ultima execução de qualquer forma.
#include <iostream>
using namespace std;

void selection(int *v, int n){
    int i, j, menor;
    for (i = 0; i < n - 1; i++){
        menor = i;
        for (j = i + 1; j < n; j++){
            if (v[j] < v[menor])
                menor = j;
        }
        if (v[menor] != v[i]){
            swap(v[menor], v[i]);
        }
    }
}

int main(){
    int i=0;
    int n=10;
    int v[n];
    for(i; i<n; i++){
        cin >> v[i];
    }
    selection(v, n);

    cout << "Array ordenado: ";
    for (i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
    
}