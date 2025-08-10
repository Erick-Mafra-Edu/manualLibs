#ifndef maxItems
#define maxItems 10
#endif
#ifndef LISTA_HPP
#define LISTA_HPP
template<typename Tipo>
// Estrutura auxiliar para armazenar o item e seu índice original
struct ListaAuxiliar{
	Tipo item = {};
	int indice = 0;
};
template<typename Tipo>
// Estrutura que implementa uma lista simples com tamanho fixo
struct Lista{
	Tipo items[maxItems] = {};
	int indice = 0;
	ListaAuxiliar<Tipo> itensOrdenado[maxItems] = {};
	// adiciona um item na lista
	void addItem(Tipo input){
		if(indice >= maxItems)
			throw "voce ta tentando adicionar mais itens que o maximo suportado";
		items[indice++] = input;
		copyItems();
	}
	// devolve o item na posicao i
	Tipo getItem(int i){
		if(i >= indice || i < 0)
			throw "voce ta consultando fora do range";
		return items[i];
	}
	// devolve o indice do item na lista original
	// se nao encontrar retorna -1
	int searchItem(Tipo item){
		int left = 0;
		int right = indice - 1;

		while (left <= right) {
			int mid = (left + right) / 2;
			if (itensOrdenado[mid].item == item) {
				return itensOrdenado[mid].indice; // Retorna o índice na lista original
			} else if (itensOrdenado[mid].item < item) {
				left = mid + 1; // Busca na metade direita
			} else {
				right = mid - 1; // Busca na metade esquerda
			}
		}
		return -1; // Item não encontrado
	}
	// Copia os itens para o vetor auxiliar e ordena
	void copyItems(){
		for(int i = 0;i < indice;i++){
			itensOrdenado[i].item = items[i];
			itensOrdenado[i].indice = i;
		}
		orderItems();
	}
	//ordenando items pelo metodo bubble sort
	// penso em implementar outros metodos de ordenacao depois
	void orderItems(){
		for (int i = 0; i < indice - 1; i++) {
        // Últimos i elementos já estão ordenados
        for (int j = 0; j < indice - i - 1; j++) {
            // Troca se o elemento atual for maior que o próximo
            if (itensOrdenado[j].item > itensOrdenado[j + 1].item) {
                // Troca os elementos
                ListaAuxiliar<Tipo> temp = itensOrdenado[j];
                itensOrdenado[j] = itensOrdenado[j + 1];
                itensOrdenado[j + 1] = temp;
            }
        }
    }
	}
	void printItemsOrdenados(){
		for(int i = 0;i < indice;i++){
			std::cout << "Item: " << itensOrdenado[i].item << ", Indice original: " << itensOrdenado[i].indice << std::endl;
		}
	}
	void printItems(){
		for(int i = 0;i < indice;i++){
			std::cout << "Item: " << items[i] << std::endl;
		}
	}
	// Limpa a lista
	void clear(){
		indice = 0;
		for(int i = 0;i < maxItems;i++){
			items[i] = {};
			itensOrdenado[i] = {};
		}
	}
	
};

#endif // LISTA_HPP