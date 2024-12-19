/*
 * @author Kamil Debowski - Errichto
 * @reference Este código fue utilizado siguiendo un tutorial para estudio y aprendizaje.
 *            Todo el crédito corresponde al autor original. Link: https://www.youtube.com/watch?v=liZ3PfkgWow&t=5s
 */

#include <bits/stdc++.h>
using namespace std;

void setIO(string s) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen((s + ".in").c_str(), "r", stdin);
    freopen((s + ".out").c_str(), "w", stdout);
}

const vector<pair<int, int>> dirs = {{-1, -1}, {-1, 1}, {1, 1}, {1, -1}}; // Direcciones para formar una X alrededor de 'A'

// M S
//  A
// S M

int main() {
    setIO("input");

    int H = 140; // Altura de la cuadrícula
    vector<string> a(H); // Vector de cadenas para almacenar las filas de la cuadrícula
    for(string& row : a) {
        cin >> row; // Lee cada fila de la entrada
    }

    int W = (int) a[0].length(); // Ancho de la cuadrícula, asumimos que todas las filas tienen la misma longitud

    int answer = 0; // Contador para el número de veces que encontramos la forma X-MAS
    for(int row = 1; row < H - 1; row++) { // Recorre cada celda de la cuadrícula, omitiendo los bordes
        for(int col = 1; col < W - 1; col++) {
            if(a[row][col] == 'A') { // Si la celda actual contiene 'A', podría ser el centro de la forma X-MAS
                string s; // Cadena para almacenar los caracteres alrededor de 'A'
                for(pair<int, int> dir : dirs) { // Recorre las direcciones para formar una X alrededor de 'A'
                    s += a[row + dir.first][col + dir.second]; // Agrega los caracteres en las posiciones calculadas
                }
                // Verifica si los caracteres alrededor de 'A' forman una de las combinaciones válidas de X-MAS
                if (s == "MMSS" || s == "MSSM" || s == "SSMM" || s == "SMMS") {
                    answer++; // Si encontramos una combinación válida, incrementamos el contador
                }
            }
        }
    }

    cout << answer << "\n";

    return 0;
}