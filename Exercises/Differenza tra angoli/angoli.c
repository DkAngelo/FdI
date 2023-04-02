#include "angoli.h"

struct angolo differenza_angoli(struct angolo a, struct angolo b) {

	int asecondi = a.gradi * 3600 + a.primi * 60 + a.secondi;
	int bsecondi = b.gradi * 3600 + b.primi * 60 + b.secondi;

	struct angolo ret = { 0xFFFF, 0xFF, 0xFF };
	if (asecondi >= bsecondi) {
		
		int diffsec = asecondi - bsecondi;
		ret.secondi = diffsec % 60;
		int diffpr = diffsec / 60;
		ret.primi = diffpr % 60;
		ret.gradi = diffpr / 60;

	}
	return ret;
}