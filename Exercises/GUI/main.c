#include <stdlib.h>
#include <iup.h>

int main(int argc, char** argv)
{
	IupOpen(&argc, &argv);

	Ihandle* button = IupButton("OK", NULL);
	Ihandle *dlg = IupDialog(button);
	IupSetAttribute(dlg, "TITLE", "Mannagg a maronn");
	IupShowXY(dlg, IUP_CENTER, IUP_CENTER);
	
	IupMainLoop();

	IupClose();
	return EXIT_SUCCESS;
}