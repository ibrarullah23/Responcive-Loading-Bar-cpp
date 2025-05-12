#include <iostream>
#include <windows.h> // for Sleep()
using namespace std;
int main()
{
	system("mode con: cols=100 lines=25");
	char x = 219;	
	cout<<"\n\n\n\n\n\n\n\n\t\t"<<"\t\t\t  L O A D I N G ...\n\n\t\t\t";
	for(int i=0 ; i<50 ; i++){
		if(i<21)
		Sleep(1);
		if(i==4 || i==21 )
		Sleep(150);
		else if (i==10 || i==50 || i==35)
		Sleep(800);
		cout<<x;
		if(i==49){
		cout<<"\n\n\t\t\t\t\t    D O N E ...";
		}
	}
	cout<<"\n\n\n\n\n\n\n\n";
	system("pause");
	return 0;
}
