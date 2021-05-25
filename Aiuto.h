#ifndef AIUTO_H_
#define AIUTO_H_

#include "ListaDomande.h"

class Aiuto{
	private:
		bool aiutiutilizzati[3];
	public:
		Aiuto();
		bool usaaiuto(ListaDomande l, Domanda d, int i);
		int getausati();
		void reset();
};

#endif
