
```
#include <iostream>
using namespace std;
string nombre;
int n;
float suma;
int m = 0;
int main()
{
    string nombres[100];
    float notas[100];
    float promedios[100];
    cout << "Escriba el número de estudiantes: ";
    cin >> n;
    cout << "Escriba el nombre de los "<< n <<" estudiantes, por favor, al final de todos escriba 'No' en case de no haber más estudiantes" << endl;
    for(int i = 0; i <= n; i++){
        nombres[i] = nombre;
        cin >> nombre;
    }
    float nota;
    for(int i = 1; i < n + 1; i++){
        cout << "escriba las tres notas de " << nombres[i] << endl;
        for (int j = 0; j < 3; j++){
            notas[j] = nota;
            cin >> nota;
        }
    }
    for (int j = 0; j < 3; j++){
        suma=+notas[j];
        for(int l = 0; l < n; l++){
            promedios[l] = suma/3;
        }
    }
    for(int i = 1; i < n + 1; i++){
        cout << "El promedio de "<< nombres[i] << " es:" << endl;
        for(int l = 0; l < n; l++){
            cout << promedios[l] << endl;
        }
        
    }
    
    
    
    
  

    return 0;
}

no pude
```
