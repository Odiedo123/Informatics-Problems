#include <bits/stdc++.h>
//#include "bolsas.h"
using namespace std;

long long pesar(vector<int> X);

int helper(vector<int> &weight,pair<int,int> range,int n){
    int count = 0;
    for(int i = 0;i < n; i++){
        if(i >= range.first && i <= range.second){
            weight[i] = 1;
            count += 1;
        }
        else{
            weight[i] = 0;
        }
    }
    return count;
}

// long long pesar(vector<int> x){
//     return 0;
// }
int encontrar_bolsa(int n, vector<int> A) {

    vector<int> weight(n);
    pair<int,int> range;
    if(n != 2){
        range.first = 0;
        range.second = n/2;
        while(true){
            int count = helper(weight,range,n);
            int num = pesar(weight);
            if(num != 7*count){
                range.second = (range.first + range.second)/2;
            }
            else{
                int switching = range.first;
                range.first = range.second + 1;
                range.second += range.second - switching;
                if(range.second - range.first <=1){
                    break;
                }
            }
        }
        pair<int,int> range2;
        range2.first = range.first;
        range2.second = range.first;
        helper(weight,range2,n);
        int num = pesar(weight);
        if(num == 7){
            return range.first;
        }
        else{
            return range.second;
        }
    }
    else{
        weight[0] = 0;
        weight[1] = 1;
        if(pesar(weight) != 7){
            return 1;
        }
        else{
            return 0;
        }
    }
}



/*
    TU CODIGO TERMINA AQUI.

    Para enviar:
        - Copia todo lo que esta arriba de esta linea.
        - Descomenta la linea del #include "bolsas.h"
        - Comenta la funcion pesar()
        - Pegalo en un .cpp vacio
*/








const int COMI_max_consultas = 50;

int COMI_n, COMI_oculto;
vector<int> COMI_A;
int COMI_consultas;
bool COMI_excedio;

void COMI_error(string COMI_mensaje) {
    cerr << "ERROR: " << COMI_mensaje << "\n";
    exit(0);
}

long long pesar(vector<int> X) {
    if ((int)X.size() != COMI_n) COMI_error("Tamano de consulta incorrecto");
    COMI_consultas++;
    if (COMI_consultas > COMI_max_consultas) COMI_excedio = true;
    long long COMI_S = 0;
    for (int COMI_i = 0; COMI_i < COMI_n; COMI_i++) {
        if (X[COMI_i] < 0 || X[COMI_i] > COMI_A[COMI_i])
            COMI_error("Algun valor de consulta esta fuera de rango");
        COMI_S += X[COMI_i];
    }
    return 7LL * COMI_S - X[COMI_oculto];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> COMI_n >> COMI_oculto;
    if (COMI_n <= 0 || COMI_n > 100000) COMI_error("n fuera de rango");
    if (COMI_oculto < 0 || COMI_oculto >= COMI_n)
        COMI_error("ID oculto fuera de rango");

    COMI_A.resize(COMI_n);
    for (int COMI_i = 0; COMI_i < COMI_n; COMI_i++) {
        cin >> COMI_A[COMI_i];
        if (COMI_A[COMI_i] < 1 || COMI_A[COMI_i] > COMI_n)
            COMI_error("Elemento fuera de rango");
    }

    COMI_consultas = 0;
    COMI_excedio = false;

    int COMI_respuesta = encontrar_bolsa(COMI_n, COMI_A);

    if (COMI_excedio) {
        cout << "Incorrecto\n";
        cout << "Se excedio el limite de " << COMI_max_consultas
             << " consultas\n";
    } else if (COMI_respuesta < 0 || COMI_respuesta >= COMI_n) {
        cout << "Incorrecto\n";
        cout << "Respuesta fuera de rango\n";
    } else if (COMI_respuesta == COMI_oculto) {
        cout << "Correcto\n";
        cout << "Se utilizaron " << COMI_consultas << " consultas\n";
    } else {
        cout << "Incorrecto\n";
        cout << "Se adivino: " << COMI_respuesta << "\n";
        cout << "El ID oculto era: " << COMI_oculto << "\n";
    }
}
