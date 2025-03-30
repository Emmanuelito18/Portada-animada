#ifndef PORTADACENTROHORIZONTAL_H
#define PORTADACENTROHORIZONTAL_H

#include "Portada.h"

/*Esta animacion funciona de los estermos hacia el centro, primero
Orden de impreción 8->E->1->m->o->m->t->a->i->n->l->u->e*/
class PortadaCentroHorizontal : public Portada{
	protected://Atributos
		
	public://Métodos
		//Constructor
		PortadaCentroHorizontal();
		//Desrtuctor
		~PortadaCentroHorizontal();
		void animacion();
};

#endif
