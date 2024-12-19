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

int main() {
    setIO("input");

    int H = 140; // Altura de la cuadrícula
    vector<string> a(H); // Vector de cadenas para almacenar las filas de la cuadrícula
    for(string& row : a) {
        cin >> row; // Lee cada fila de la entrada
    }

    int W = (int) a[0].length(); // Ancho de la cuadrícula, asumimos que todas las filas tienen la misma longitud

    // Función lambda para verificar si una posición está dentro de los límites de la cuadrícula
    auto inside = [&](int row, int col) {
        return 0 <= row && row < H && 0 <= col && col < W;
    };

    const string TEMP = "XMAS"; // La palabra que estamos buscando
    int answer = 0; // Contador para el número de veces que encontramos la palabra

    // Recorre cada celda de la cuadrícula
    for(int row = 0; row < H; row++) {
        for(int col = 0; col < W; col++) {
            if(a[row][col] == 'X') { // Si la celda actual contiene 'X', podría ser el inicio de "XMAS"
                // Recorre todas las direcciones posibles (horizontal, vertical, diagonal)
                for(int drow = -1; drow <= 1; drow++) {
                    for(int dcol = -1; dcol <= 1; dcol++) {
                        if(drow == 0 && dcol == 0) {
                            continue; // Omite la dirección (0,0) que no es válida
                        }
                        bool all_ok = true; // Bandera para verificar si encontramos "XMAS" en esta dirección
                        for(int i = 0; i < 4; i++) { // Recorre cada letra de "XMAS"
                            int r2 = row + drow * i; // Calcula la nueva fila
                            int c2 = col + dcol * i; // Calcula la nueva columna
                            if(inside(r2, c2) && a[r2][c2] == TEMP[i]) {
                                // Si la nueva posición está dentro de los límites y contiene la letra correcta
                            }
                            else {
                                all_ok = false; // Si alguna condición falla, no encontramos "XMAS" en esta dirección
                                break;
                            }
                        }
                        answer += all_ok; // Si encontramos "XMAS", incrementamos el contador
                    }
                }
            }
        }
    }

    cout << answer << "\n";

    return 0;
}