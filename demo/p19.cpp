#include<iostream>
using namespace std;
int main()
{
int a,b;
cout<<endl<<"Enter Month Number from 1 to 12=>";
cin>>a;


switch(a)
{
	case 1:
		cout<<endl<<"january";
		break;
	case 2:
		cout<<endl<<"feb";
		break;
	case 3:
		cout<<endl<<"March";
		break;
	case 4:
		cout<<endl<<"April";
		break;
	case 5:
		cout<<endl<<"May";
		break;
	case 6:
		cout<<endl<<"June";
		break;
	case 7:
		cout<<endl<<"July";
		break;
	case 8:
		cout<<endl<<"Aug";
		break;
	case 9:
		cout<<endl<<"Sept";
		break;
	case 10:
		cout<<endl<<"Oct";
		break;
	case 11:
		cout<<endl<<"Nov";
		break;
	case 12:
		cout<<endl<<"Dec";
		break;
	default:
		cout<<endl<<"wrong option";
}

return 0;
}
