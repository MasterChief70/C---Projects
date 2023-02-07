#include<iostream>
using namespace std;
int main()
{
int b,c,d,e,f,g;
char a;
cout<<endl<<"Enter x for Dosa=>100";
cout<<endl<<"Enter y for Maggi=>200";
cout<<endl<<"Enter z for Pizza=>300";
cout<<endl<<"Enter e for Pasta=>400";
cout<<endl<<"Enter f for All=>";
cin>>a;
switch(a)
{
	case 'x':
		cout<<endl<<"Enter Quantity=>";
	    cin>>b;
	    cout<<endl<<"Bill Amount="<<b*100;
	    break;
    case 'y':
        cout<<endl<<"Enter Quantity=>";
	    cin>>b;
	    cout<<endl<<"Bill Amount="<<b*200;
	    break;
    case 'z':
	    cout<<endl<<"Enter Quantity=>";
	    cin>>b;
	    cout<<endl<<"Bill Amount="<<b*300;
        break;
    case 'e':
	    cout<<endl<<"Enter Quantity=>";
	    cin>>b;
	    cout<<endl<<"Bill Amount="<<b*400;
        break;
    case 'f':
	    cout<<endl<<"Enter Quantity for Dosa=>";
	    cin>>b;
	    cout<<endl<<"Enter Quantity for Maggi=>";
	    cin>>c;
	    cout<<endl<<"Enter Quantity for Pizza=>";
	    cin>>d;
	    cout<<endl<<"Enter Quantity for Pasta=>";
	    cin>>e;
	    cout<<endl<<"Total Bill="<<(b*100)+(c*200)+(d*300)+(e*400);
	    break;
    default:
	    cout<<endl<<"Invalid response :(";
}
return 0;
}
