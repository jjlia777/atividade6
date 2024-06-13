#include <locale>
#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

//1 – Peça para o usuário inserir dados em um vetor de 10 posições e depois, mostre os elementos(um em cada linha)

//
//int main() {
//	locale::global(locale("pt-br.UTF-8"));
//
//	vector <int> dados(10);
//
//	for (int i = 0; i < 10; i++) {
//		cout << "Insira um número: ";
//		cin >> dados[i];
//	}
//
//	for (int i = 0; i < dados.size(); i++) {
//		cout << dados[i];
//		cout << "\n";
//	}
//
//	return 0;
//}




//2 – Peça para o usuário inserir dados em um vetor de 7 posições e depois, mostre o resultado da soma dos 
// elementos


//int main() {
//	locale::global(locale("pt-br.UTF-8"));
//
//	vector <int> numeros(7);
//	int soma = 0;
//
//	for (int i = 0; i < 7; i++) {
//		cout << "Insira um número: ";
//		cin >> numeros[i];
//	}
//
//	for (int i = 0; i < numeros.size(); i++) {
//		soma += numeros[i];
//	}
//
//	cout << "O resultado da soma dos números é: " << soma;
//}





//3 – Uma sala tem alunos com diferentes idades, existe nessa sala, três alunos com 18 anos, 2 alunos
// com 17 anos e 12 alunos com 16 anos.Qual a média das idades ?

//int main() {
//	locale::global(locale("pt-br.UTF-8"));
//
//	vector <int> idade = { 18, 18, 18, 17, 17, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16 };
//	double soma = 0;
//	double media = 0;
//
//	for (int i = 0; i < idade.size(); i++) {
//		soma += idade[i];
//	}
//
//	media = soma / idade.size();
//	cout << "A média das idades é: " << media;
//
//	return 0;
//}





//4 – Um homem resolveu fazer diversos pequenos depósitos no banco, ele depositou os seguintes
// valores : 5, 9, 7, 10, 15, 23 e depois colocou mais alguns valores, 20, 30. Quanto ele tem ?

//int main() {
//	locale::global(locale("pt-br.UTF-8"));
//
//	vector <int> valores = { 5, 9, 7, 10, 15, 23 };
//	valores.push_back(20);
//	valores.push_back(30);
//
//	int soma = 0;
//
//	for (int i = 0; i < valores.size(); i++) {
//		soma += valores[i];
//	}
//
//	cout << "O homem tem na sua conta: " << soma << " reais.";
//
//	return 0;
//}





//5 – Peça para o usuário preencher um vetor com 10 posições, e depois de uma opção a ele
//- Se ele escolha a opção 1, faça a soma de todos os elementos do vetor.
//- Se ele escolher a opção 2, faça a subtração de todos os elementos do vetor
//- Se ele escolher a opção 3, faça a multiplicação de todos os elementos do vetor

//int main() {
//	locale::global(locale("pt-br.UTF-8"));
//
//	vector <int> numero(10);
//	double soma = 0;
//	double sub = 0;
//	double mult = 1;
//	int opcao;
//
//	for (int i = 0; i < 10; i++) {
//		cout << "Insira um número: ";
//		cin >> numero[i];
//	}
//
//	cout << "Escolha uma opção: 1(soma), 2(subtração) e 3(multiplicação)";
//	cin >> opcao;
//
//    for (int i = 0; i < 10; i++) {
//        if (opcao == 1) {
//            soma += numero[i];
//        }
//        else if (opcao == 2) {
//            sub -= numero[i];
//        }
//        else if (opcao == 3) {
//            mult *= numero[i];
//        }
//        else {
//            cout << "Essa opção não existe";
//        }
//    }
//
//    if (opcao == 1) {
//        cout << "O resultado da soma é: " << soma;
//    }
//    else if (opcao == 2) {
//        cout << "O resultado da subtração é: " << sub;
//    }
//    else if (opcao == 3) {
//        cout << "O resultado da multiplicação é: " << mult;
//    }
//
//    return 0;
//}