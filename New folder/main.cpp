#include <iostream>
#include<conio.h>
#include<stdlib.h>
#include<Windows.h>
using namespace std;

int main()
{   int n; char ch2;
STARTUPINFO a={0};
	PROCESS_INFORMATION b={0};
	do{
cout<<"Eter the action you want to perform:"<<endl;
cout<<"1.Notepad\n2.Paint\n3.Calculator \n4.Wordpad \n5.Chrome \n6.Control panel \n7.Cmd \n8.IPaddress \n9.Folder options \n10.Power \n11.Resource monitor";
cout<<"\n\nEnter your  choice:";
cin>>n;
switch(n){
	
case 1:
	
	CreateProcess(TEXT("C:\\Windows\\System32\\notepad.exe"),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&a,&b);
	break;
case 2:
	
	CreateProcess(TEXT("C:\\Windows\\System32\\mspaint.exe"),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&a,&b);
	break;
case 3:
	
	CreateProcess(TEXT("C:\\Windows\\System32\\calc.exe"),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&a,&b);
	break;
case 4:
	
	CreateProcess(TEXT("C:\\Windows\\System32\\write.exe"),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&a,&b);
	break;
case 5:
	
	CreateProcess(TEXT("C:\\Program Files (x86)\\Google\\Chrome\\Application\\chrome.exe"),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&a,&b);
	break;
case 6:
	
	CreateProcess(TEXT("C:\\Windows\\System32\\control.exe"),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&a,&b);
	break;
case 7:
		
	CreateProcess(TEXT("C:\\Windows\\System32\\cmd.exe"),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&a,&b);
	break;
case 8:
	system("C:\\Windows\\System32\\ipconfig");
	break;

case 9: int ch;cout<<"enter 1.Create \n2.Delete \n3.rename";
	cin>>ch;
	if(ch==1)
	{
		system("md C:\\Newfolder");
	}
	else if(ch==2)
	{
		system("rd c:\\Newfolder");
	}
	else
	{
		system("rename C:\\Newfolder prabin");
	}
 break;
 case 10:int ch1;
        cout<<"enter the power options:\n";
        cout<<"1.Restart \n2.Shut down....";
        cin>>ch1;
        if(ch1==1){
        		system("C:\\Windows\\System32\\shutdown /r /t 5");
		}
		else if(ch1==2){
				system("C:\\Windows\\System32\\shutdown /s /t 5");
		}
 	break;
 	case 11:
 			system("C:\\Windows\\System32\\resmon.exe");
 			break;

default:
	cout<<"Wrong Choice";
	break;
	
}
cout<<"Do you wish to continue(y/n)...:";
cin>>ch2;
cout<<endl;
}while(ch2=='y');
 getch();	
	
}
