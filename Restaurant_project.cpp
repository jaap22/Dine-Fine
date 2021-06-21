# include<iostream>
# include<conio.h>
using namespace std;
main()
{
	//requirements 5 items to be maintained pizza,buger,sandwich,cake purchasing
	//also 5 variable to tell us sale items
	// 5 variable inidvidual total profit save
	int p_p=0,p_b=0,p_s=0,p_i=0,p_c=0;
	int s_p=0,s_b=0,s_s=0,s_i=0,s_c=0;
	int p=0,b=0,s=0,i=0,c=0;
	int choice,q;
	//first pooche aaj ke din aapne jo 5 items purchase ki hai kitni kitni ki hai
	cout<<"\n\t\t\t Purchase items";
    cout<<"\n\n Number of pizza";
	cin>>p_p;
	cout<<"\n\n Number of burgers";
	cin>>p_b;
	cout<<"\n\n Number of sandwitch";
	cin>>p_s;
	cout<<"\n\n Number of icecream";
	cin>>p_i;
	cout<<"\n\n Number of cake";
	cin>>p_c;
	p:
	//now clear previous screen
	system("cls");
	//now add control pannel ki aapne kya krna hai
	cout<<"\n\t\t\tControl Panel";
	cout<<"\n\n 1.Pizza";
	cout<<"\n 2.Burger";
	cout<<"\n 3.Sandwich";
    cout<<"\n 4.Ice cream";
    cout<<"\n 5.Cake";
    cout<<"\n 6.Details";
    cout<<"\n\n 7.Enter your choice";
    cin>>choice;
    switch(choice)
    {
    	case 1:
    		cout<<"\n\n enter pizza quantity";
    		cin>>q;
    		if(p_p-s_p>=q)//check pizza hai bhi hai
    		{
    		   	s_p=s_p+q;//add quantity in selling
    		   	p+=q*700;
    		   	cout<<"\n\n\n\t\t\t"<<q<<"Pizza sales thankyou";
    		   	
			}
			else
			{
				cout<<"\n\n\n\t\t\t Sorry "<<p_p-s_p<<" pizza remaining in restaurant......";
			}
    		break;
    	case 2:
    		cout<<"\n\n enter burger quantity";
    		cin>>q;
    		if(p_b-s_b>=q)//check pizza hai bhi hai
    		{
    		   	s_b=s_b+q;//add quantity in selling
    		   	b+=q*100;
    		   	cout<<"\n\n\n\t\t\t"<<q<<"burger sales thankyou";
    		   	
			}
			else
			{
				cout<<"\n\n\n\t\t\t Sorry "<<p_b-s_b<<" burger remaining in restaurant......";
			}
    		break;
    	case 3:
    		cout<<"\n\n enter sandwich quantity";
    		cin>>q;
    		if(p_s-s_s>=q)//check pizza hai bhi hai
    		{
    		   	s_s=s_s+q;//add quantity in selling
    		   	s+=q*150;
    		   	cout<<"\n\n\n\t\t\t"<<q<<"sandwich sales thankyou";
    		   	
			}
			else
			{
				cout<<"\n\n\n\t\t\t Sorry "<<p_s-s_s<<" sanwich remaining in restaurant......";
			}
    		break;
		case 4:
			cout<<"\n\n enter icecream quantity";
    		cin>>q;
    		if(p_i-s_i>=q)//check pizza hai bhi hai
    		{
    		   	s_i=s_i+q;//add quantity in selling
    		   	i+=q*200;
    		   	cout<<"\n\n\n\t\t\t"<<q<<"icecream sales thankyou";
    		   	
			}
			else
			{
				cout<<"\n\n\n\t\t\t Sorry "<<p_i-s_i<<" icecream remaining in restaurant......";
			}
    		break;
    	case 5:
    		cout<<"\n\n enter cake quantity";
    		cin>>q;
    		if(p_c-s_c>=q)//check pizza hai bhi hai
    		{
    		   	s_c=s_c+q;//add quantity in selling
    		   	c+=q*500;
    		   	cout<<"\n\n\n\t\t\t"<<q<<"cake sales thankyou";
    		   	
			}
			else
			{
				cout<<"\n\n\n\t\t\t Sorry "<<p_c-s_c<<" cake remaining in restaurant......";
			}
    		break;
    	case 6:
    		//tells kitni purchase ki,kitni sale hui,kitni remaining hai,kitna profit generate,overall profit
    		system("cls");
    		cout<<"\n\t\t\tDetails Panel";
    		cout<<"\n\n Purchase pizza quantity:"<<p_p;
    		cout<<"\n sales pizza quantity:"<<s_p;
    		cout<<"\n remaining pizza quantity"<<p_p-s_p;
    		cout<<"\n total pizza price in a day:"<<p;
    		
    		cout<<"\n\n Purchase burger quantity:"<<p_b;
    		cout<<"\n sales burger quantity:"<<s_b;
    		cout<<"\n remaining burger quantity"<<p_b-s_b;
    		cout<<"\n total burger price in a day:"<<b;
    		
    			
    		cout<<"\n\n Purchase sandwich quantity:"<<p_s;
    		cout<<"\n sales sandwich quantity:"<<s_s;
    		cout<<"\n remaining sandwich quantity"<<p_s-s_s;
    		cout<<"\n total sandwich price in a day:"<<s;
    		
    			
    		cout<<"\n\n Purchase icecream quantity:"<<p_i;
    		cout<<"\n sales  icecream quantity:"<<s_i;
    		cout<<"\n remaining  icecream quantity"<<p_i-s_i;
    		cout<<"\n total  icecream price in a day:"<<i;
    		
    			
    		cout<<"\n\n Purchase cake quantity:"<<p_c;
    		cout<<"\n sales cake quantity:"<<s_c;
    		cout<<"\n remaining cake quantity"<<p_c-s_c;
    		cout<<"\n total cake price in a day:"<<c;
    	    
    	    cout<<"\n\n\n Total day price:"<<p+b+s+i+c;
    		break;
    	case 7:
    		exit(0);
    	default:
    		cout<<"\n\n invalid value.please try again";
	}
	getch();//jb tk main press na kru tb tk vapis an jaye
	goto p;
	
	
	
	
}
