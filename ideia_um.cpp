#include <iostream>
#include <list>
#include <fstream>

using namespace std;

int main (/*int argc, char* argv[]*/){
	std::ifstream arq;
	
	/*arq.open(argv[1]); 
	 if(!arq.is_open()){
        return 0;
    }*/
	// RECEBER AS ENTRADAS E COLOCAR EM UMA LISTA

	int tam, aux;
	list<int> lista;
	cin >> tam;
	for(int i=0 ; i < tam ; i++){
		cin >> aux;
		lista.push_back(aux);
	}

	// ORDENAR A LISTA 

	lista.sort();

	// LOOP PRINCIPAL

	while(lista.size() >= 0){

		// LISTA VAZIA, RESPOSTA É ZERO

		if(lista.size() == 0){
			cout << 0;
			break;
			//return 0;
		}

		// LISTA COM UM ELEMENTO RESPOSTA É O ELEMENTO

		if(lista.size() == 1){
			cout << lista.front();
			break;
			//return lista.front();
		}

		// LISTAS COM MAIS ELEMENTOS DEVEM SOFRER AS "COMBINAÇÕES"

		// SEPARA OS DOIS ULTIMOS E OS COMBINA 

		int ultimo    = lista.back();
		lista.pop_back();
		int penultimo = lista.back();
		lista.pop_back();
		// O CASO EM QUE OS DOIS ULTIMOS NUMEROS SÃO IGUAIS, MAS A LISTA TEM MAIS DE 2 ELEMENTOS
		// É ESPECIAL, POIS ESSE CANCELAMENTO PODE IMPEDIR NUMEROS MENORES DE SE CANCELAREM
		// (confesso que seja na gambiarra mas isso deve ter algum embasamento q eu n percebi)
		if(ultimo == penultimo && lista.size() > 2){
			int aux2  = penultimo;
			penultimo = lista.back();
			lista.pop_back();
			lista.push_back(aux2);
		}
		int combinado = ultimo - penultimo;

		// SE O REUSLTADO DA COMBINAÇÃO FOR MAIOR QUE ZERO, TEM QUE ADICIONAR
		// O RESULTADO NA LISTA NUMA POSIÇÃO QUE MANTENHA A ORDEM
		if(combinado > 0){
			bool eh_o_ultimo = true;
			list<int>::iterator it;
			for(it = lista.begin(); it != lista.end(); it++){
				// SE ACHAR ONDE ELE DEVERIA ENCAIXAR, COLOQUE-O
				if(combinado <= *it){
					lista.insert(it, combinado);
					eh_o_ultimo = false;
					break;
				}
			}
			// SE NÃO ACHAR É PORQUE ELE É O MAIOR DE TODOS
			if(eh_o_ultimo)
				lista.push_back(combinado);
		}
	}
	//arq.close();
	return 0;
}