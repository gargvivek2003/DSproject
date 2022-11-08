#include <iostream>
#include<string.h>
using namespace std;

class contactbook
{
    struct tree{
    char name;
    int phone_number;
    tree *left;
    tree *right;
    };
    tree* head;
    char x;
    int y;
    public:
        contactbook()
        {
            head=NULL;
            x=NULL;
            y=0;
        }
        void Createnode()
	    {
	    	if(head==NULL)
	    	{
    	    	tree *newer= new tree;
	    	    cout<<"  Name of Contact: ";
		        cin>>x;
		        newer->name=x;

    		    cout<<"  Phone Number: ";
	    	    cin>>y;
		        newer->phone_number=y;
	
		        newer->left=NULL;
		        newer->right==NULL;
		        head=newer;
		        
		        cout<<"  Contact Added"<<endl;
		    }

        };
        tree *helpaddnum(tree *Node,char *Name, int num, int*error)
        {
            if(Node)
            {
                int comp = strcmp(Node->name,Name);
                if(comp>0)
                    Node->left = helpaddnum(Node->left,Name,num,error);
                else
                    Node->right = helpaddnum(Node->right,Name,num,error);
            }
            else{return Createnode();}
            return Node;
        }

        void addnum()
};