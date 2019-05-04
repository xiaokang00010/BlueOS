#include <iostream>
#include <cstdlib>
#include <cstring>
#include <tchar.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
void com()
{
	system(_T("title Blue OS 命令提示程序")); 
	cout << "[Blue OS(R) Operaing System] 1.7.2" << endl;
	cout << _T("[Blue OS 命令提示程序]") << endl;
	while(1)
	{
		cout << ">" ;
		string command,ver;
		ver="ver";
		getline(cin,command);
		if(command == ver)
		{
			cout << _T("\n[Blue OS(R) Operaing System] 1.7.2\n") << endl;
		}
		else if(command == "exit"){
			exit(0);
		}
		const char* cmd=command.data();
		system(_T("title Blue OS 命令提示程序 - Running Command...") ); 
		system(cmd);
		system(_T("title Blue OS 命令提示程序"));
	}
}
int main()
{
	com();
	return 0;
}
