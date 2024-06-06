#include <iostream>
#include <conio.h>
#include <ctime>
using namespace std;
class Library
{
	private:
		struct Node
		{
			string id, name, author, Publisher, Book_Content;
			string IDsearch, SeNumber, studentname;
			int countForPreorder = 0;
			int countForOrder = 0;
			int countForDOnate = 0;
			int totalcount = 0;
			int count = 0;
			Node* Next_node;
		}s;
		struct Node2
		{
			int countForDOnate = 0;
			string pn;
			string name1, author1, Publisher1, category1, bookname1;
            Node2* next_Node2;	
		}Ds;
		string username;
		string password;
	public:
		Node*  head  = NULL;
		Node2* head1 = NULL;
		
		void menu();
        void librarian();
        void Insert();
        void Search();
        void SearchById();
        void SearchByBookName();
        void Update();
        void Delete();
        void Show();
        void Student();
        void Borrow();
        void Review();
        void Purchase();
        void Order();
        void PreOrder();
        void Donate();
        void Thanks();
        string getUsername()
		{
            return username;
        }
        string getPassword()
		{
            return password;
        }
        string getLogin()
		{
    	    return "\t\t\t\t  <======== LOGIN ========>\n";
	    }   
        string getError()
		{
            return "\t\t\t\t  Incorrect UserName or Password";
        }
        string getInvalidation()
		{
            return "\t\t\t\t  Invalid Entry";
        }
        string getChoice()
		{
        	return "\t\t\t\t  Enter Choice: ";
	    }
        string getPressKey()
		{
        	return "\t\t\t\t  Press Any Key For Futher Information ....";
    	}
};
void Library::menu()
{
	There:
	int Choice = 0;
    system("cls");
    cout << endl << "\n\t\t\t\t  #######################################################";
	cout 		 << "\n\t\t\t\t  #######################################################" << endl;
	cout << endl <<   "\t\t\t\t  #                                                     #" << endl;
	cout << endl <<   "\t\t\t\t  #        WELCOME TO LIBRARY MANAGEMENT SYSTEM         #" << endl;
	cout << endl <<   "\t\t\t\t  #                                                     #" ;
	cout << endl << "\n\t\t\t\t  #######################################################";
	cout 		 << "\n\t\t\t\t  #######################################################" << endl;

	cout << endl << "\t\t\t\t  1. Librarian" << endl;
    cout         << "\t\t\t\t  2. Student"   << endl;
    cout         << "\t\t\t\t  0. Exit"      << endl;
    cout << endl << getChoice();
    cin  >> Choice;
    switch(Choice)
    {
        case 0:
            exit(0);
            break;
        case 1:
            librarian();
            break;
        case 2:
            Student();
            break;
        default:
            cout << getInvalidation() << endl;
            cout << getPressKey()     << endl;
            break;
    }
    getch();
    goto There;
}
void Library::librarian()
{
	int Choice = 0;
    system("cls");
    cout << getLogin();
    cout << "\t\t\t\t  Enter UserName: ";
    cin  >> username;
    cout << "\t\t\t\t  Enter Password: ";
    cin  >> password;
    if(getUsername() == "MAJU" && getPassword() =="123")
	{
		There:
        system("cls");
        cout 		 << "\n\t\t\t\t  #################################################";
	    cout << endl <<   "\t\t\t\t  #                                               #";
        cout << endl <<   "\t\t\t\t  #              LIBRARIAN DASHBOARD              #";
        cout << endl <<   "\t\t\t\t  #                                               #";
        cout << endl << "  \t\t\t\t  #################################################" << endl;
		cout << endl << "\t\t\t\t  1. Insert Book"     << endl;
        cout         << "\t\t\t\t  2. Search Book"     << endl;
        cout         << "\t\t\t\t  3. Update Book"     << endl;
        cout         << "\t\t\t\t  4. Delete Book"     << endl;
        cout         << "\t\t\t\t  5. Show All Record" << endl;
        cout         << "\t\t\t\t  0. Main Menu"       << endl;
        cout << endl << getChoice();
        cin  >> Choice;
        switch(Choice) 
		{
            case 1:
    	        Insert();
                break;
            case 2: 
    	        Search();
                break;
            case 3:
    	        Update();
                break;
            case 4:
    	        Delete();
                break;
            case 5:
    	        Show();
                break;
            case 0:
                menu();
                break;
            default:
                cout << getInvalidation() << endl;
                cout << getPressKey()     << endl;
                break;
        }
        getch();
        goto There;
    }
    else 
	{
        cout << getError()    << endl;
        cout << getPressKey() << endl;
        getch();
        menu();
    }
}
void Library::Student()
{
	int Choice = 0;
    system("cls");
    cout << getLogin();
    cout << "\t\t\t\t  Enter UserName: ";
    cin  >> username;
    cout << "\t\t\t\t  Enter Password: ";
    cin  >> password;
    if(getUsername() == "MAJU" && getPassword() =="321")
	{
		There:
        system("cls");
        cout 		 << "\n\t\t\t\t  ###############################################";
	    cout << endl <<   "\t\t\t\t  #                                             #";
        cout << endl <<   "\t\t\t\t  #              STUDENT DASHBOARD              #";
        cout << endl <<   "\t\t\t\t  #                                             #";
        cout << endl << "  \t\t\t\t  ###############################################" << endl;

		cout << endl << "\t\t\t\t  1. Borrow Book"   << endl;
        cout         << "\t\t\t\t  2. Purchase Book" << endl;
        cout         << "\t\t\t\t  3. Donate Book"   << endl;
        cout         << "\t\t\t\t  0. Main Menu"     << endl;
        cout << endl << getChoice();
        cin  >> Choice;
        switch(Choice) 
		{
            case 1:
    	        Borrow();
                break;
            case 2:
    	        Purchase();
                break;
            case 3:
    	        Donate ();
                break;
            case 0:
    	        menu();
                break;
            default:
                cout << getInvalidation() << endl;
                cout << getPressKey()     << endl;
                break;
        }
        getch();
        goto There;
    }
    else 
	{
        cout << getError()    << endl;
        cout << getPressKey() << endl;
        getch();
		menu();
    }
}
void Library::Insert()
{
	system("cls");
	cout 		 << "\n\t\t\t\t  #######################################";
    cout << endl <<   "\t\t\t\t  #              ADD BOOKS              #";
    cout << endl << "  \t\t\t\t  #######################################" << endl;
	Node *new_Node = new Node;
	cout << endl << "\t\t\t\t  Book Id: ";
	cin  >> new_Node->id;
	cout << "\t\t\t\t  Book Name: ";
	cin  >> new_Node->name;
	cout << "\t\t\t\t  Book Content: ";
	cin  >> new_Node->Book_Content;
	cout << "\t\t\t\t  Author: ";
	cin  >> new_Node->author;
	cout << "\t\t\t\t  Publisher Name: ";
	cin  >> new_Node->Publisher;
	new_Node ->Next_node = NULL;
	if(head==NULL)
	{
		head = new_Node;
	}
	else
	{
		Node *ptr=head;
		while(ptr->Next_node!=NULL)
		{
			ptr = ptr->Next_node;
		}
		ptr->Next_node = new_Node;
	}
	cout << endl << "\t\t\t\t  Book Add Successfully .... ";
}
void Library::Search()
{
	int Choice = 0;
	There:
	system("cls");
	cout 		 << "\n\t\t\t\t  ##########################################";
	cout << endl <<   "\t\t\t\t  #                                        #";
    cout << endl <<   "\t\t\t\t  #              SEARCH BOOKS              #";
    cout << endl <<   "\t\t\t\t  #                                        #";
    cout << endl << "  \t\t\t\t  ##########################################" << endl;
	cout << endl << "\t\t\t\t  1. Search By Id: "        << endl;
	cout         << "\t\t\t\t  2. Search By Book Name: " << endl;
	cout         << "\t\t\t\t  0. Main Menu: "           << endl;
	cout << endl << getChoice();
	cin  >> Choice;
	switch(Choice)
	{
		case 1:
			SearchById();
			break;
		case 2:
			SearchByBookName();
			break;
		case 0:
			menu();
			break;
		default:
		cout << getInvalidation() << "\n";
        cout << getPressKey();
        break;
    }
    getch();
    goto There;
}
void Library::SearchById()
{
	string t_id;
	int found = 0;
	system("cls");
	cout 		 << "\n\t\t\t\t  ##########################################";
    cout << endl <<   "\t\t\t\t  #              SEARCH BY ID              #";
    cout << endl << "  \t\t\t\t  ##########################################" << endl;
	if(head == NULL)
	{
		cout << endl << "\t\t\t\t  Book Shelf Is Empty"   << endl;
		cout         << getPressKey();
	}
	else
	{
		cout << endl << "\t\t\t\t  Enter Book Id: ";
		cin  >> t_id;
		Node *ptr = head;
		while(ptr != NULL)
		{
			if(t_id == ptr->id)
			{
				system("cls");
				cout << endl << "\t\t\t\t  <=========== SEARCH BOOKS ===========> "<< endl;
				cout << endl << "\t\t\t\t  Book Id: "        << ptr->id            << endl;
				cout         << "\t\t\t\t  Book Name: "      << ptr->name          << endl;
				cout         << "\t\t\t\t  Book Content: "   << ptr->Book_Content  << endl;
				cout         << "\t\t\t\t  Author: "         << ptr->author        << endl;
				cout         << "\t\t\t\t  Publisher Name: " << ptr->Publisher     << endl;			
			    found++;
			    cout << endl << getPressKey();
			}
			ptr = ptr->Next_node;
		}
		if(found==0)
		{
			cout << endl << getInvalidation();
		}
	}
}
void Library::SearchByBookName()
{
    string t_name;
    int found = 0;
	system("cls");
	cout 		 << "\n\t\t\t\t  #################################################";
    cout << endl <<   "\t\t\t\t  #              SEARCH BY BOOK NAME              #";
    cout << endl << "  \t\t\t\t  #################################################" << endl;

	if(head == NULL)
	{
		cout << "\t\t\t\t  Book Shelf Is Empty"   << endl;
		cout << endl << getPressKey();
	}
	else
	{
		cout << "\t\t\t\t  Enter Book Name: ";
		cin  >> t_name;
		Node *ptr = head;
		while(ptr != NULL)
		{
			if(t_name == ptr->name)
			{
				system("cls");
				cout << endl << "\t\t\t\t  <=========== SEARCH BOOKS ===========> "<< endl;
				cout << endl << "\t\t\t\t  Book Id: "        << ptr->id            << endl;
				cout         << "\t\t\t\t  Book Name: "      << ptr->name          << endl;
				cout         << "\t\t\t\t  Book Content: "   << ptr->Book_Content  << endl;
				cout         << "\t\t\t\t  Author: "         << ptr->author        << endl;
				cout         << "\t\t\t\t  Publisher Name: " << ptr->Publisher     << endl;			
			    			    found++;
			    cout << endl << getPressKey();
			}
			ptr = ptr->Next_node;
		}
		if(found==0)
		{
			cout << endl << getInvalidation() << endl;
		}
	}
}
void Library::Update()
{
    string t_id;
    int found = 0;
	system("cls");
	cout 		 << "\n\t\t\t\t  ##########################################";
    cout << endl <<   "\t\t\t\t  #              UPDATE BOOKS              #";
    cout << endl << "  \t\t\t\t  ##########################################" << endl;

	if(head == NULL)
	{
		cout << "\t\t\t\t  Book Shelf Is Empty"   << endl;
		cout << endl << getPressKey();
	}
	else{
		cout << endl << "\t\t\t\t  Enter Book Id: ";
		cin  >> t_id;
		Node *ptr = head;
		while(ptr != NULL)
		{
			if(t_id == ptr->id)
			{
				system("cls");
				cout 		 << "\n\t\t\t\t  ##########################################";
                cout << endl <<   "\t\t\t\t  #              UPDATE BOOKS              #";
                cout << endl << "  \t\t\t\t  ##########################################" << endl;

				cout << endl << "\t\t\t\t  Book Id: ";
				cin  >> ptr->id;
				cout << "\t\t\t\t  Book Name: ";
				cin  >> ptr->name;
				cout << "\t\t\t\t  Book Content: ";
				cin  >> ptr->Book_Content;
				cout << "\t\t\t\t  Author: ";
				cin  >> ptr->author;
				cout << "\t\t\t\t  Publisher Name: ";
				cin  >> ptr->Publisher;			
			    found++;
			    cout << endl << "\t\t\t\t  Book Updated Succesfully";
			    cout << endl << getPressKey();
			}
			ptr = ptr->Next_node;
		}
		if(found == 0)
		{
			cout << endl << getInvalidation() << endl;
		}
	}
}
void Library::Delete()
{
	string t_id;
	int found = 0;
	system("cls");
	cout 		 << "\n\t\t\t\t  ##########################################";
    cout << endl <<   "\t\t\t\t  #              DELETE BOOKS              #";
    cout << endl << "  \t\t\t\t  ##########################################" << endl;

	if(head == NULL)
	{
		cout << endl << "\t\t\t\t  Book Shelf Is Empty" << endl;
		cout << endl << getPressKey()         << endl;
	}
	else
	{
		cout << endl << "\t\t\t\t  Enter Book Id: ";
		cin  >> t_id;
		Node *ptr = head;
			if(t_id == head->id)
			{
			    head = head->Next_node;
			    delete ptr;
			    cout << endl << "\t\t\t\t  Book Delete Succesfully";
			    cout << endl << getPressKey();
			    found++;
			}
			else
			{
				Node *pre = head;
				Node *ptr = head;
				while(ptr != NULL)
				{
					if(t_id == ptr->id)
					{
						pre->Next_node = ptr->Next_node;
						delete ptr;
				    	cout << endl << "\t\t\t\t  Book Delete Succesfully";
			        	cout << endl << getPressKey();
			    	    found++;
			    	    break;
					}
					pre = ptr;
					ptr = ptr->Next_node;
				}
			}
		}
		if(found == 0)
		{
			cout << endl << getInvalidation() << endl;
		}
}
void Library::Borrow()
{
	int found = 0;
	Node *ptr = head;
	string opinion;
	system("cls");
	cout 		 << "\n\t\t\t\t  ##########################################";
    cout << endl <<   "\t\t\t\t  #              BORROW BOOKS              #";
    cout << endl << "  \t\t\t\t  ##########################################" << endl;

	cout << endl << "\t\t\t\t  Borrower Name: ";
	cin  >> s.studentname;
	cout << "\t\t\t\t  Enter Your Student Id: ";
	cin  >> s.SeNumber;
	cout << "\t\t\t\t  Enter Book Id to Borrow: ";
	cin  >> s.IDsearch;
	if(head == NULL)
	{
		cout << endl << "\t\t\t\t  Book Shelf Is Empty " << endl;
		cout << endl << getPressKey()          << endl;
	}
	else
	{
		while(ptr != NULL)
		{
		    if(s.IDsearch == ptr->id)
			{
			    cout << "\t\t\t\t  =============================================" << endl;
		        cout << "\t\t\t\t  Book Id: "        << ptr->id                   << endl;
			    cout << "\t\t\t\t  Book Name: "      << ptr->name                 << endl;
			    cout << "\t\t\t\t  Book Content: "   << ptr->Book_Content         << endl;
			    cout << "\t\t\t\t  Author: "         << ptr->author               << endl; 
			    cout << "\t\t\t\t  Publisher Name: " << ptr->Publisher            << endl;		
 	    	    cout << "\t\t\t\t  =============================================" << endl;
 	    	    cout << "\t\t\t\t  Borrow By: "      << s.studentname             << endl;
		        cout << "\t\t\t\t  Student ID:  "    << s.SeNumber                << endl;
			    cout << "\t\t\t\t  Book Borrow Successfully "                     << endl;	
			    cout << "\t\t\t\t  =============================================" << endl;
			    found++;				
			    s.count++;
		    	ptr = ptr->Next_node;
		    }
		cout << endl << getPressKey();
	    }   
    }
    if(found == 0)
	{
		cout << endl << getInvalidation();
	}
}
void Library::Purchase()
{
	int found = 0;
	int Choice = 0; 
	system("cls");
	There:
	cout 		 << "\n\t\t\t\t  ############################################";
    cout << endl <<   "\t\t\t\t  #              PURCHASE BOOKS              #";
    cout << endl << "  \t\t\t\t  ############################################" << endl;

	cout << endl << "\t\t\t\t  Enter Your Name: ";
	cin  >> s.studentname;
	cout << "\t\t\t\t  Enter Your Student Id: ";
	cin  >> s.SeNumber;
	cout << endl << "\t\t\t\t  Do u want preOrder or Buy from Library? " << endl;
	cout         << "\t\t\t\t  Press 1 for PreOrder  "                   << endl;
	cout         << "\t\t\t\t  Press 2 for Order From Library  "         << endl;
	cout << endl << getChoice();
	cin  >> Choice;
	switch(Choice)
	{
		case 1:
			PreOrder();
			break;
		case 2:
			Order();
			break;
		default:
			cout << endl << getInvalidation();
			cout << endl << getPressKey();
			goto There;
	}
}
void Library::Order()
{
	int found = 0;
	int Price = 0;
    Node *ptr = head;
    system("cls");
	cout << endl << "\t\t\t\t  You Can Purchase Only One Book !" << endl;
	cout         << "\t\t\t\t  Enter Book Id to Purchase: ";
	cin  >> s.IDsearch;	
	if(head == NULL)
	{
		cout << endl << "\t\t\t\t  Book Shelf Is Empty " << endl;
		cout         << getPressKey()                    << endl;
	}
	else
	{	
        cout << endl << "\t\t\t\t  Enter Price: ";
        cin  >> Price;
	    for(int i=0; i < 1; i++)
		{
            Price = Price + 100;
		    while(ptr != NULL)
			{
		        if(s.IDsearch == ptr->id)
				{
			        cout 		 << "\n\t\t\t\t  #########################################";
                    cout << endl <<   "\t\t\t\t  #              ORDER BOOKS              #";
                    cout << endl << "  \t\t\t\t  #########################################" << endl;

			        cout << "\t\t\t\t  ========================================" << endl;
		            cout << "\t\t\t\t  Book Id: "        << ptr->id              << endl;
			        cout << "\t\t\t\t  Book Name: "      << ptr->name            << endl;
			        cout << "\t\t\t\t  Book Content: "   << ptr->Book_Content    << endl;
			        cout << "\t\t\t\t  Author: "         << ptr->author          << endl;
			        cout << "\t\t\t\t  Publisher Name: " << ptr->Publisher       << endl;		
 	    	        cout << "\t\t\t\t  ========================================" << endl;
 	    	        cout << "\t\t\t\t  Purchased By: " << s.studentname          << endl;
 	    	        cout << "\t\t\t\t  Purchaser Id: " << s.SeNumber             << endl;
 	    	        if(Price > 500) 
					{
 	    	            int addon = Price + 250;
		                cout << endl << "\t\t\t\t  Total Bill with GST:  " << addon;
	            	}
		            else
					{
			            cout << endl << "\t\t\t\t  Total Bill:  " << Price;
		            }
		       	    cout << endl << "\t\t\t\t  Book Purchased Successfully ";
		    	    cout << endl << "\t\t\t\t  ========================================";
			        found++;				
		        	ptr = ptr->Next_node;
		        }
			s.countForOrder++;	
	        } 
        }
        if(found == 0)
		{
			cout << endl << getInvalidation();
		}
    }
}
void Library::PreOrder()
{
	int Book;
	int price = 0;
	Node *ptr=head;
	time_t ttime = time(0);
	tm *local_time = localtime(&ttime);
	system("cls");
	cout 		 << "\n\t\t\t\t  ############################################";
    cout << endl <<   "\t\t\t\t  #              PREORDER BOOKS              #";
    cout << endl << "  \t\t\t\t  ############################################" << endl;

	cout << endl << "\t\t\t\t  WELCOME TO BOOK STORE" << endl;
	cout         << "\t\t\t\t  Book Name |  Price"    << endl;
	cout         << "\t\t\t\t            |     "      << endl;
	cout         << "\t\t\t\t  1.C++     |  100"      << endl;
	cout         << "\t\t\t\t  2.Java    |  200"      << endl;
	cout         << "\t\t\t\t  3.C       |  300"      << endl;
	cout         << "\t\t\t\t  4.Python  |  400"      << endl;
	cout         << "\t\t\t\t  5.Ruby    |  500"      << endl;
	cout         << "\t\t\t\t  Enter Your Choice: ";
	cin  >> Book;
	if(Book == 1)
	{
		price = price + 100;
		cout << endl << "\t\t\t\t  <========= PURCHASER DETAILS =========> "     << endl;
		cout         << "\t\t\t\t  Buyer Name: "   << s.studentname              << endl;
		cout         << "\t\t\t\t  Buyer Id: "     << s.SeNumber                 << endl;
		cout         << "\t\t\t\t  Book Name: C++"                               << endl;
		cout         << "\t\t\t\t  Price: "        << price                      << endl;
		
		cout << endl << "\t\t\t\t  <========= DELIVERY DETAILS ==========> "     << endl;
		cout         << "\t\t\t\t  Day: "   << /*1 +*/ local_time->tm_mday       << endl;
        cout         << "\t\t\t\t  Month: " << /*1 + 1 +*/ local_time->tm_mon    << endl;
		cout         << "\t\t\t\t  Year: "  << /*1900 +*/ local_time->tm_year    << endl;
        cout         << "\t\t\t\t  Time: "  << /*1 + */local_time->tm_hour       << ":";
        cout                                << /*1 + */local_time->tm_min        << ":";
        cout                                << /*1 + */local_time->tm_sec        << endl;
        s.countForPreorder = +1;
	}
   else	if(Book == 2)
   {
		price = price + 200;
		cout << endl << "\t\t\t\t  <========= PURCHASER DETAILS =========> " << endl;
		cout         << "\t\t\t\t  Buyer Name: "   << s.studentname          << endl;
		cout         << "\t\t\t\t  Buyer Id: "     << s.SeNumber             << endl;
		cout         << "\t\t\t\t  Book Name: Java"                          << endl;
		cout         << "\t\t\t\t  Price: "        << price                  << endl;
		
		cout << endl << "\t\t\t\t  <========= DELIVERY DETAILS ==========> " << endl;
		cout         << "\t\t\t\t  Day: "   << 1 + local_time->tm_mday       << endl;
        cout         << "\t\t\t\t  Month: " << 1 + 1 + local_time->tm_mon    << endl;
		cout         << "\t\t\t\t  Year: "  << 1900 + local_time->tm_year    << endl;
        cout         << "\t\t\t\t  Time: "  << 1 + local_time->tm_hour       << ":";
        cout                                << 1 + local_time->tm_min        << ":";
        cout                                << 1 + local_time->tm_sec        << endl;
        s.countForPreorder = +1;
	}
	
   else	if(Book == 3)
   {
		price = price + 300;
		cout << endl << "\t\t\t\t  <========= PURCHASER DETAILS =========> " << endl;
		cout         << "\t\t\t\t  Buyer Name: "  << s.studentname           << endl;
		cout         << "\t\t\t\t  Buyer Id: "    << s.SeNumber              << endl;
		cout         << "\t\t\t\t  Book Name: C"                             << endl;
		cout         << "\t\t\t\t  Price: "       << price                   << endl;
		
		cout << endl << "\t\t\t\t  <========= DELIVERY DETAILS ==========> " << endl;
		cout         << "\t\t\t\t  Day: "   << 1 + local_time->tm_mday       << endl;
        cout         << "\t\t\t\t  Month: " << 1 + 1 + local_time->tm_mon    << endl;
		cout         << "\t\t\t\t  Year: "  << 1900 + local_time->tm_year    << endl;
        cout         << "\t\t\t\t  Time: "  << 1 + local_time->tm_hour       << ":";
        cout                                << 1 + local_time->tm_min        << ":";
        cout                                << 1 + local_time->tm_sec        << endl;
        s.countForPreorder = +1;
	}
	
   else	if(Book == 4)
   {
		price = price + 400;
		cout << endl << "\t\t\t\t  <========= PURCHASER DETAILS =========> " << endl;
		cout         << "\t\t\t\t  Buyer Name: "  << s.studentname           << endl;   
		cout         << "\t\t\t\t  Buyer Id: "    << s.SeNumber              << endl;
		cout         << "\t\t\t\t  Book Name: Python"                        << endl;
		cout         << "\t\t\t\t  Price: "       << price                   << endl;
		
		cout << endl << "\t\t\t\t  <========= DELIVERY DETAILS ==========> " << endl;
		cout         << "\t\t\t\t  Day: "   << 1 + local_time->tm_mday       << endl;
        cout         << "\t\t\t\t  Month: " << 1 + 1 + local_time->tm_mon    << endl;
		cout         << "\t\t\t\t  Year: "  << 1900 + local_time->tm_year    << endl;
        cout         << "\t\t\t\t  Time: "  << 1 + local_time->tm_hour       << ":";
        cout                                << 1 + local_time->tm_min        << ":";
        cout                                << 1 + local_time->tm_sec        << endl;
        s.countForPreorder = +1;
	}
	
   else	if(Book == 5)
   {
		price = price + 500;
		cout << endl << "\t\t\t\t  <========= PURCHASER DETAILS =========> " << endl;
		cout         << "\t\t\t\t  Buyer Name: "  << s.studentname           << endl;
		cout         << "\t\t\t\t  Buyer Id: "    << s.SeNumber              << endl;
		cout         << "\t\t\t\t  Book Name: Ruby"                          << endl;
		cout         << "\t\t\t\t  Price: "       << price                   << endl;
		
		cout << endl << "\t\t\t\t  <========= DELIVERY DETAILS ==========> " << endl;
		cout         << "\t\t\t\t  Day: "   << 1 + local_time->tm_mday       << endl;
        cout         << "\t\t\t\t  Month: " << 1 + 1 + local_time->tm_mon    << endl;
		cout         << "\t\t\t\t  Year: "  << 1900 + local_time->tm_year    << endl;
        cout         << "\t\t\t\t  Time: "  << 1 + local_time->tm_hour       << ":";
        cout                                << 1 + local_time->tm_min        << ":";
        cout                                << 1 + local_time->tm_sec        << endl;
        s.countForPreorder++;
	}
	int Choice = 0;
	string pin;
	cout << endl << "\t\t\t\t  <==== Payment Details ====> " << endl;
	cout         << "\t\t\t\t  1.Pay By Card: "              << endl;
	cout         << "\t\t\t\t  2.Cash On Delivery: "         << endl;
	cout         << "\t\t\t\t  Enter Your Choice: ";
	cin >> Choice;
	switch(Choice)
	{
		case 2:
			cout << endl << "\t\t\t\t  Your Order Is Successfully Placed.";
			cout << endl << "\t\t\t\t  ====================================";
			break;
		case 1:
			cout << "\t\t\t\t  Enter Pin: ";
			cin  >> pin;
			if(pin == "VS123")
			{
				cout << endl << "\t\t\t\t  ====================================" << endl;
				cout         << "\t\t\t\t  Visa Card *** "                       << endl;
				cout         << "\t\t\t\t  Card Holder Name: " << s.studentname  << endl;
				cout         << "\t\t\t\t  Card Holder Id: "   << s.SeNumber     << endl;
			    cout         << "\t\t\t\t  Transaction Done"                     << endl;
			    cout         << "\t\t\t\t  Your Order Is Successfully Placed."   << endl;
			    cout         << "\t\t\t\t  ====================================" << endl;
			    cout << endl << getPressKey();
			    getch();
				break;
			}
			else if(pin == "MS321")
			{
				cout << endl << "\t\t\t\t  ====================================" << endl;
				cout         << "\t\t\t\t  Master Card *** "                     << endl;
				cout         << "\t\t\t\t  Card Holder Name: " << s.studentname  << endl;
				cout         << "\t\t\t\t  Card Holder Id: "   << s.SeNumber     << endl;
			    cout         << "\t\t\t\t  Transaction Done"                     << endl;
			    cout         << "\t\t\t\t  Your Order Is Successfully Placed."   << endl;
			    cout         << "\t\t\t\t  ====================================" << endl;
			    cout << endl << getPressKey();
			    getch();
			    break;
		   }
		   break;
	}
}
void Library::Donate()
{
	system("cls");
    cout 		 << "\n\t\t\t\t  ##########################################";
    cout << endl <<   "\t\t\t\t  #              DONATE BOOKS              #";
    cout << endl << "  \t\t\t\t  ##########################################" << endl;

	Node2* new_Node = new Node2;
	cout << endl << "\t\t\t\t  <============ DONAR DETAILS =============>" << endl;
	cout << endl << "\t\t\t\t  Donar Name: ";
	cin  >> new_Node->name1;
	cout << "\t\t\t\t  Donar Phone Number: ";
	cin  >> new_Node->pn;
	cout << endl << "\t\t\t\t  ===========================================" << endl;
	cout << endl << "\t\t\t\t  <============= BOOK DETAILS ==============>" << endl;
	cout << endl << "\t\t\t\t  Book Name: ";
	cin  >> new_Node->bookname1;
	cout << "\t\t\t\t  Book Author: ";
	cin  >> new_Node->author1;
	cout << "\t\t\t\t  Book Publisher: ";
	cin  >> new_Node->Publisher1;
	cout << "\t\t\t\t  Book Category: ";
	cin  >> new_Node->category1;
	new_Node->next_Node2 = NULL;
	if(head1==NULL)
	{
		head1 = new_Node;
	}
	else
	{
		Node2 *ptr=head1;
		while(ptr->next_Node2 != NULL)
		{
			ptr = ptr->next_Node2;
		}
		Ds.countForDOnate++;
		ptr->next_Node2 = new_Node;
	}
	cout << endl << "\t\t\t\t  ===========================================" << endl;
	cout << "\t\t\t\t  Thank You For Donating the Book " << endl;
	cout << "\t\t\t\t  Book Donated Successfully .... "  << endl;	
	cout << "\t\t\t\t  ===========================================" << endl;

}
void Library::Show()
{
	int Choice = 0;
	
	system("cls");
	Node *ptr = head;
	cout 		 << "\n\t\t\t\t  ###############################################";
    cout << endl <<   "\t\t\t\t  #              SHOW BOOKS RECORD              #";
    cout << endl << "  \t\t\t\t  ###############################################" << endl;

	cout << endl << "\t\t\t\t  Total Donate: "            << Ds.countForDOnate  << endl;
	cout         << "\t\t\t\t  Total PreOrder Purchase: " << s.countForPreorder << endl; 
	cout         << "\t\t\t\t  Total Order Purchase: "    << s.countForOrder    << endl;
	cout         << "\t\t\t\t  Total Book Borrow: "       << s.count            << endl;
	cout << endl << "\t\t\t\t  1.For Library Books "                            << endl;
	cout         << "\t\t\t\t  2.Donate Books "                                 << endl;
	cout << endl << getChoice();
	cin  >> Choice;
	system("cls");
	if (Choice == 1)
	{
	    Node *ptr=head;
	    cout << "\t\t\t\t  <========== LIBRARY BOOKS ==========>"  << endl;
		while(ptr != NULL)
		{
		    cout << "\t\t\t\t  ===================================== " << endl;	
		    cout << "\t\t\t\t  Book Id: "        << ptr->id            << endl;
	        cout << "\t\t\t\t  Book Name: "      << ptr->name          << endl;
		    cout << "\t\t\t\t  Book Content: "   << ptr->Book_Content  << endl;
		    cout << "\t\t\t\t  Author: "         << ptr->author        << endl;
		    cout << "\t\t\t\t  Publisher Name: " << ptr->Publisher     << endl;
		    cout << "\t\t\t\t  ===================================== " << endl;
	        ptr = ptr->Next_node;
        }
    }
    else if(Choice == 2)
	{
    	Node2 *ptr = head1;
    	cout << "\t\t\t\t  <========== DONATED BOOKS ==========> " << endl;
    	while(ptr != NULL)
		{
		    cout << "\t\t\t\t  ===================================== " << endl;	
		    cout << "\t\t\t\t  Donar Name: "   << ptr->name1           << endl;
	        cout << "\t\t\t\t  Phone Number: " << ptr->pn              << endl;
		    cout << "\t\t\t\t  Book Name: "    << ptr->bookname1       << endl;
		    cout << "\t\t\t\t  Author: "       << ptr->author1         << endl;
		    cout << "\t\t\t\t  Publisher : "   << ptr->Publisher1      << endl;
		    cout << "\t\t\t\t  Category: "     << ptr->category1       << endl;
		    cout << "\t\t\t\t  ===================================== " << endl;
	        ptr = ptr->next_Node2;
     	}
    }
	cout << endl << getPressKey();
}
int main()
{
	Library obj;
	obj.menu();
	return 0;
}
