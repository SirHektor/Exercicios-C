#include <iostream>
#include <vector>
#include <algorithm>

//ATIVIDADE 1//

//using namespace std;
//
//int main() {
//    int vetor[10];
//    cout << "Insira os elementos do vetor:" << endl;
//    for (int i = 0; i < 10; ++i) {
//        cout << "Elemento " << i + 1 << ": ";
//        cin >> vetor[i];
//    }
//
//    cout << "Elementos do vetor:" << endl;
//    for (int i = 0; i < 10; ++i) {
//        cout << vetor[i] << endl;
//    }
//
//    return 0;
//}
//

//ATIVIDADE 2//

//int main() {
//    int vetor[7];
//    using namespace std;
//    cout << "Insira os elementos do vetor:" << endl;
//    for (int i = 0; i < 7; ++i) {
//        cout << "Elemento " << i + 1 << ": ";
//        cin >> vetor[i];
//    }
//
//    int soma = 0;
//    for (int i = 0; i < 7; ++i) {
//        soma += vetor[i];
//    }
//    cout << "Soma dos elementos: " << soma << endl;
//
//    return 0;
//}

//ATIVIDADE 3//

//using namespace std;
//
//int main() {
//    float media = (3 * 18 + 2 * 17 + 12 * 16) / static_cast<float>(3 + 2 + 12);
//    cout << "Media das idades: " << media << endl;
//
//    return 0;
//}

//ATIVIDADE 4//

//using namespace std;
//
//int main() {
//    int total = 5 + 9 + 7 + 10 + 15 + 23 + 20 + 30;
//    cout << "Total depositado: " << total << endl;
//
//    return 0;
//}

//ATIVIDADE 5//

using namespace std;

int main() {
    int vetor[10];
    cout << "Insira os elementos do vetor:" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vetor[i];
    }

    int opcao;
    cout << "Escolha uma opção (1 - Soma, 2 - Subtração, 3 - Multiplicação): ";
    cin >> opcao;

    int resultado;
    if (opcao == 1) {
        resultado = 0;
        for (int i = 0; i < 10; ++i) {
            resultado += vetor[i];
        }
        cout << "Resultado da soma: " << resultado << endl;
    }
    else if (opcao == 2) {
        resultado = vetor[0];
        for (int i = 1; i < 10; ++i) {
            resultado -= vetor[i];
        }
        cout << "Resultado da subtracao: " << resultado << endl;
    }
    else if (opcao == 3) {
        resultado = 1;
        for (int i = 0; i < 10; ++i) {
            resultado *= vetor[i];
        }
        cout << "Resultado da multiplicacaoo: " << resultado << endl;
    }
    else {
        cout << "Opcao invalida!" << endl;
    }

    return 0;
}
