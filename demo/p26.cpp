#include<iostream>
using namespace std;
int main()
{
int a,b,c,d,e,f,g,h;
cout<<endl<<"Enter 1 for xerox-20pages@15, More than 20pages@10";
cout<<endl<<"Enter 2 for printout-20pages@20, More than 20pages@15";
cout<<endl<<"Enter 3 for both  =>";
cin>>a;
switch(a)
{
	case 1:
	    cout<<endl<<"Enter Quantity=>";
	    cin>>b;
	    if(b<20)
	    {
		    cout<<endl<<"Your Bill is"<<b*15;
	    }
	    else
	    {
		    cout<<endl<<"Your Bill is"<<b*10;
	    }
	    break;
    case 2:
	    cout<<endl<<"Enter Quantity=>";
	    cin>>b;
	    if(b<20)
	    {
		    cout<<endl<<"Your bill is"<<b*20;
	    }
	    else
	    {
		    cout<<endl<<"Your bill is"<<b*15;
        }
        break;
    case 3:
	    cout<<endl<<"Enter Quantity for xerox=>";
	    cin>>b;
	    if(b<20)
	    {
		    d=b*15;
	    }
	    else
	    {
		    d=b*10;
	    }
	    cout<<endl<<"Enter Quantity for printout=>";
	    cin>>c;
	    if(c<20)
	    {
		    e=b*20;
	    }
	    else
	    {
		    e=b*15;
	    }
        cout<<endl<<"Your Total Bill is- "<<d+e;
        break;
    default:
	    cout<<endl<<"Invalid Response";
}
return 0;
}
