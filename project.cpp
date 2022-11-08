 #include <iostream>
 #include <math.h>
 #include <string.h>
 #include <stdlib.h>
 #include <ctype.h>
 using namespace std;

struct Node
{
    /* data */
    string name;
    int phone_number;
    Node *left;
    Node *right;
};

class contactbook
{
private:
    /* data */
    Node *head;
    string x;
    int y;
public:
    contactbook()
    {
        head = NULL;
        x= NULL;
        y=0;
    }

    void createNode()
    {
        if(head==NULL)
	    	{
    	    	Node *newer= new Node;
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
         else
		    {
                Node *newer= new Node;
	    	    cout<<"  Name of Contact: ";
		        cin>>x;
		        newer->name=x;

    		    cout<<"  Phone Number: ";
	    	    cin>>y;
		        newer->phone_number=y;

		    	Node *temp=head;
                int value = strcmp(temp,Node)

			}
    }
};



