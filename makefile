Práctica_10: copiar_main.cc copiar_funcion.cc 
	$(CXX) copiar_main.cc copiar_funcion.cc -o copiar

clean:
	rm -f *.all copiar *.o *.out