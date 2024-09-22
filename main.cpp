#include <iostream>
#include <vector>

using namespace std;

//& direccion de memoria, regresa areglo mod

void filtro(vector <int> &numeros, vector <int> &primary){
    int n = numeros.size();
    for(int i=0;i<n;i++) {
        if(numeros[i]%2) {
            primary.push_back(numeros[i]);
        }
    }
}

void primarySort(vector <int>& arr){
    int n = arr.size();

    for(int i = 1; i < n; i++){
        int key = arr[i];
        int j = i -1;

        while (j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j -1;
        }
        arr[j + 1] = key;
    }
}


int main()
{
    vector<int> numeros = {12, 5, 3, 7, 11, 4, 8, 13};
    vector<int> primary;

    filtro(numeros,primary);
    primarySort(primary);

    for(int num:primary) {
        cout << num << " ";
    }

    cout << endl;
    return 0;
}
