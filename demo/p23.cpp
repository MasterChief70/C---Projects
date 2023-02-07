#include<iostream>
using namespace std;
int main()
{
int a,b,c,d,e,f,g;
cout<<endl<<"Enter 1 for Dosa=>100";
cout<<endl<<"Enter 2 for Maggi=>200";
cout<<endl<<"Enter 3 for Pizza=>300";
cout<<endl<<"Enter 4 for Pasta=>400";
cout<<endl<<"Enter 5 for All=>";
cin>>a;
switch(a)
{
	case 1:
		cout<<endl<<"Enter Quantity=>";
	    cin>>b;
	    cout<<endl<<"Bill Amount="<<b*100;
	    break;
    case 2:
        cout<<endl<<"Enter Quantity=>";
	    cin>>b;
	    cout<<endl<<"Bill Amount="<<b*200;
	    break;
    case 3:
	    cout<<endl<<"Enter Quantity=>";
	    cin>>b;
	    cout<<endl<<"Bill Amount="<<b*300;
        break;
    case 4:
	    cout<<endl<<"Enter Quantity=>";
	    cin>>b;
	    cout<<endl<<"Bill Amount="<<b*400;
        break;
    case 5:
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
