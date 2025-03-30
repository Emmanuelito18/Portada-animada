#ifndef PORTADA_H
#define PORTADA_H

class Portada{
	public:
		//Constructor
		Portada();
		//Destructor
		~Portada();
		void mostrarPortada();
	protected:
		void irA(int,int);
		void ocultarCursor();
		void mostrarCursor();
		void portada();
		virtual void animacion();//M�todo virtual
};

#endif
