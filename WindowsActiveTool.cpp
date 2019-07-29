#include <stdlib.h>

int main()
{
	system("cscript %WinDir%/System32/slmgr.vbs /skms kms.03k.org");
	system("cscript %WinDir%/System32/slmgr.vbs /ato");
	system("cscript %WinDir%/System32/slmgr.vbs /dlv");
	system("cscript %WinDir%/System32/slmgr.vbs /xpr");
	system("pause");
	return 0;
}