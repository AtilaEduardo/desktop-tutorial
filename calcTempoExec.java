package caixeiroViajante;

class Caxeiro {

	static void calcularFatorial() {
		long numero = 50;
		long fatorial = 1; 
		
		for(fatorial = 1; numero > 1; numero = numero - 5){
			fatorial = fatorial * numero;
		}
		System.out.println("fatorial: " + fatorial);
		
	}

	  public static void main(String[] args) {

	    long start = System.nanoTime();
	    
	    calcularFatorial();

	    long end = System.nanoTime();

	    long execution = (end - start);
	    
	    System.out.println("O tempo de execução do Método Recursivo é: " + execution + " nanossegundos");
	  }
	}
