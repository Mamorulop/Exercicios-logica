#include <stdio.h>

struct Romano{
	
	char letra;
	int valor;	
};

int main() {
	int tamanhoCaracter = 7;
	char romano[tamanhoCaracter]; 
	int valorRomano = 0;
	int posicao;
	int total = 0;
	int atual = 0;
	int proximo = 0;


	struct Romano Mapeamento[7] = {
		{Mapeamento[0].letra = 'I', Mapeamento[0].valor = 1},
		{Mapeamento[1].letra = 'V', Mapeamento[1].valor = 5},
		{Mapeamento[2].letra = 'X', Mapeamento[2].valor = 10},
		{Mapeamento[3].letra = 'L', Mapeamento[3].valor = 50},
		{Mapeamento[4].letra = 'C', Mapeamento[4].valor = 100},
		{Mapeamento[5].letra = 'D', Mapeamento[5].valor = 500},
		{Mapeamento[6].letra = 'M', Mapeamento[6].valor = 1000}
	};

	printf("QUAL SEU NUMERO ROMANO?\n ");
	// *!=* --> Significa diferente de "Numero escolhido" ex: != 1; --> Quer dizer que "Diferente de 1"
	if (scanf("%s", romano) != 1); 
	
		while (romano[valorRomano] != '\0'){ //IA
			for (posicao = 0; posicao < 7; posicao++) {
            if (Mapeamento[posicao].letra == romano[valorRomano]) {
                 atual = Mapeamento[posicao].valor;
                break;
        }
	}
			if (romano[valorRomano + 1] != '\0') {
           	for (posicao = 0; posicao < 7; posicao++) {
              if (Mapeamento[posicao].letra == romano[valorRomano + 1]) {
                  proximo = Mapeamento[posicao].valor;
                    break;
        	}
    	}
    }          
        	if (proximo > atual) {
            	total -= atual;
        		} else {
            	total += atual;
    }
        valorRomano++; 
    }
      
    printf("Resultado: %d\n", total); 
  
}
