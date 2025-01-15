Algoritmo suma_numeros
	definir n,dato, contador,s Como Entero
	escribir " cuantos datos deceas ingresar"
	leer n
	contador= 0
	s = 0
	mientras contador < n Hacer
		escribir "Ingresar un numero"
		leer dato
		contador = contador +1
		s = s + dato
		
	FinMientras
	escribir " la acumulacion de ",n, " = ",s
	
	
FinAlgoritmo
