#ifndef START_H_
#define START_H_

#include "ListaDomande.h"
#include "Aiuto.h"
#include <fstream>

class Start{
	private:
		ListaDomande l;
		Aiuto a;
	public:
		Start(ListaDomande lista);
		void vdomanda();
		void vmontepremi();
		bool verificacorretta(Domanda d, int risp);
		void vaiuto(Domanda d);
		void salvalapartita();
};

#endif
