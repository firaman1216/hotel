    // NAMES OF STUDENTS PARTICIPATED.............COMPUTER SCIENCE DEPARTMENT SECTION TWO
    
      //NAME....................................................ID
     //1.SABONA TEREFE.........................................UGR/2309/13
     //2.KUON KHAILECH.........................................UGR/8480/13
     //3.OLIYAD KEDIR..........................................UGR706/13
     //4.NAOD YARED............................................UGR/4152/13
     //5.NAOL BIRHANU..........................................UGR/1304/13
     //6.YOSEF MELKAMU.........................................UGR/1339/13


#include <iostream>
#include <fstream>
#include <windows.h>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <sstream>
#include <cstdio>
#include <stdio.h>
#include "info center.txt"
using namespace std;
struct Hotel
{
    int  room;
    char first[21];
    char last[21];
    char mob[21];
    char nid[21];
    char mangr[21];
    char date[21];
    char gender[5];

};
//Function prototype
void menu();
int   check(int);    
void  customer_reserve();
void  display_all();
void  spec_record(int);
void  edit(int);
void  del_resdata(int);
void  leave_room(int);
void  rooms_list();
void  pre_record();
int compare(int,string);
void additional_info();

int main()
{

	menu();

return 0;
}


   void menu(){
   int flag;
   int room;
   int choice;
   int again;
   int key;
   char x[20];
   cout << endl;
   system("pause");
   system("color 5F");
   
   cout << "*--------------------------------------------------*\n" <<endl;
   cout << "\n**------------------------------------------------**" <<endl;
   cout << "\n***WELCOME TO THE HOTEL RESERVATION APPLICATION****\n" <<endl;
   cout << "   \n ****************   \n" <<endl;
   cout << "     \n ***********     \n" <<endl;
   cout << endl;
   Beep(2000, 500);//causes the computer to beep
   char l = 219;
   system("color 5F");
   cout << "Please wait while the system is analyzing the data\n ";
   for (int i=0; i<20; i++){
    Beep(2000,500);//for loading bar
    cout <<l;
   }
   cout <<endl;
   cout << "----------------------------------" <<endl;
   cout <<endl;
//   flag= login();  //rejected function calling
//   if(flag){
//   	
   	 cout << "----------------------------------" <<endl;
   cout <<endl;
   do
    {
        menu:
    cout << endl;
    cout<<"0.PRESS 0 TO SEE PREVIOUS RECORD:"<<endl;
    cout<<endl;
    cout <<"1.PRESS 1 TO SEE ROOMS  LIST:" <<endl;
    cout <<endl;
    cout <<"2.PRESS 2 TO RESERVE ROOM MENU:" <<endl;
    cout <<endl;
    cout <<"3.PRESS 3 TO SEE ALL RECORDS:" <<endl;
    cout <<endl;
    cout <<"4.PRESS 4 TO SEE RECORD SPECIFIC CUSTOMER:" <<endl;
    cout <<endl;
    cout <<"5.PRESS 5 TO EDIT RECORD OF A CUSTOMER:" <<endl;
    cout <<endl;
    cout <<"6.PRESS 6 TO DELETE RECORD A CUSTOMER:"  <<endl;
    cout <<endl;;
    cout <<"7.PRESS 7 TO CHECKING ROOM FOR RESERVATION:"<<endl;
    cout << endl;
    cout <<"8.PRESS 8 TO LEAVE THE ROOM:" <<endl;
    cout<<endl;
    cout<<"9.PRESS 9 FOR ADDITIONAL INFORMATION: "<<endl;
    cout<<endl;
    cout << endl;
    cout <<"10.PRESS 00 TO EXIT:" <<endl;
    cout << endl;
    system("pause");
    system("cls");
	cout <<"\nENTER HERE YOUR CHOICE......\n" << endl;
    cin >> choice;
    cout << "################################" <<endl;
    cout <<endl;
    switch(choice)
    {
    case 0:
    		cout<<"WELCOME TO  PREVIOUS RECORD OF CUSTOMERS:"<<endl;
    		pre_record();
    case 1:
        cout << "************************************" <<endl;
        cout << "  \n  WElCOME TO ROOMS INFORMATION MENU. \n" <<endl;
        cout << "      --------------------          " <<endl;
        cout <<endl;
        cout <<endl;
        system("color 5E");
        rooms_list(); //Vacant rooms function calling
        break;
    case 2:
        cout << "-----------------------------------" <<endl;
        cout << "  \nWELCOME TO THE RESERVATION MENU. \n" <<endl;
        cout << "    ***********************        " <<endl;
        cout <<endl;
        cout <<endl;
        system("color 5F");
        customer_reserve();
        break;

    case 3:
        cout << "########################################" <<endl;
        cout << "  \n WELCOME TO DISPLAYING ALL RECORDS MENU.\n" <<endl;
        cout << "    *******************************************" <<endl;
        cout <<endl;
        cout <<endl;
        system("5A");
        display_all();
        break;
    case 4:
        cout << "---------------------------------------"  <<endl;
        cout << " \nWELCOME TO SEE CUSTOMER SPECIFIC RECORD MENU.\n   "<<endl;
        cout << "     ************************          " <<endl;
        cout <<endl;
        cout << "Enter room number of records you want to see:"<<endl;
        cin >>room;
        cout <<endl;
        flag = check(room);
        if(flag){
         system("pause");
         system("cls");
         spec_record(room);
        }
        else{
            Beep(330,400);
            cout <<"\nRoom was not reserved"<<endl;
        
        }




    break;
    case 5:
        cout << "..............................." <<endl;
        cout << "\n\nWELCOME TO EDTING CUSTOMER RECORD MENU."<<endl;
        cout << endl;
        cout << "Enter room number of customer you want to edit its record:"<<endl;
        cin >>room;
        flag = check(room);
        if(flag){
        system("pause");
        system("cls");
        edit(room);
        }
        else{
                  Beep(330,400);
            cout <<"\nRoom was not reserved"<<endl;
            cout <<"\nPress 7 to continue to menu: ";
            cin>>key;
            if(key==7){
            	goto menu;
			}
			else{
				
				exit(1);
			}
        }

    break;
    case 6:
    	system("color 3D");
        cout << "######################################" <<endl;
        cout << "   \nWELCOME TO DELETING CUSTOMER RECORD MENU.\n" <<endl;
        cout << "      ------------------------        " <<endl;
        cout <<endl;
        cout <<endl;
        cout << "Enter room number of customer you want to delete its record.\n\n";
        cin >> room;
        flag = check(room);
        if(flag){	
        system("pause");
        system("cls");
        del_resdata(room);
		}
		else{
			cout <<"\nEmpty room!!"<<endl;
			cout <<"Press 7 to continue to menu or press any key to exit: ";
			cin >>key;
			if (key==7){
				goto menu;
				}else{
					exit(1);
				}
			}
		
       
        
        break;
    case 7:
        cout << "\nWELCOME TO CHECKING ROOM STATUS MENU:\n"<<endl;
        cout <<endl;
        cout << "\n......................................\n"<<endl;
        
        cout << "\nEnter room number to check for reservation.\n"<<endl;
        cin >>room;
        check(room);
        flag = check(room);
        if (flag){
            cout << "Room No: " <<room <<"   is reserved room."<<endl;
        }
            else{
            cout <<  "Room No: "<<room<<"    is empty room. "<<endl;
            }
     break;

   case 8:
   	system("color 3E");
     cout << "\nWECOME TO CHECK OUT ROOM MENU.\n"<<endl;
     cout<< "\nEnter room number to check out.\n"<<endl;
     cin >>room;
      flag = check(room);
     if(flag){
     system("pause");
     system("cls");
     leave_room(room);
     }
     else{
        Beep(333,400);
        cout << "\nEmpty room"<<endl;
        system("pause");
        system("cls");
        cout << "\nPress 7 to continue to menu or press any key to exit: ";
        cin>>key;
        if(key==7){
        	goto menu;
		}
		else{
			exit(1);
		}
     }
     case 9:
     	exit(1);
        break;
    default:
        cout << "**************************************************" <<endl;
        cout << "  SORRY!!!..........YOU HAVE ENTERED INVALID INPUT. " << endl;
        cout <<endl;
        cout <<endl;
        }
        cout << "Press 1 to go back to the main menu or 0 to terminate the program. " <<endl;
        cin >> again;
        cout << "......................................" <<endl;
        cout <<endl;

   }while (again == 1);


cout << "\nThank you for using Hotel management application.\n"  <<endl;
Beep(333,400);
cout << "\nHave a nice day!!!\n" <<endl;
Beep(333,400);
cout << endl;
cout << "\n//////////////////////\n" <<endl;
Beep(333,400);
cout << "\nProgramming II project...Year - 2022...Bye Bye!!!\n"<<endl;
Beep(333,400);
system("pause");
system("clc");

   }
   	
   
  
   void rooms_list(){
       string line;
       ifstream fin;
       fin.open("rooms.txt", ios::in);
       if(!fin){
        cout << "File is not found!\n"<<endl;
       }
       else{
            cout << "All rooms list:\n" <<endl;

        {


                   getline(fin,line);
                   cout << line <<endl;
                   cout <<endl;

                  }

       }
   }

   int check(int r){
   ifstream fin;
    int flag=0;
    string line;
    fin.open("user info input.txt",ios::in);
  
    	fin.seekg(0,ios::beg);
        while(!fin.eof()){
            getline(fin,line);
            if(compare(r,line)==3){
			
                        flag =1;
                        break;
                    }
                }
        
    

      fin.close();

      return flag;

   }

void customer_reserve()
    {  
	
	   int status;
        ifstream fin;
        Hotel guest;
        int room_no;
        int choice,flag;               // for entering more data
        ofstream fout;
        ofstream re;
                //creating file called file
        fout.open("user info input.txt", ios::out|ios::app);
		if (!fout)
			{
				cout << "File is not found..\n\n"<<endl;
			}
			else{
			

    loop:
     cout << "\nSelect from the given rooms below:"<<endl;
     rooms_list();
      cout << "\nPress 7 if you want you to know status of each rooms: "<<endl;
      cin>> status;
      if(status==7){

       system("pause");
       system("cls");
        check(room_no);
        flag = check(room_no);
        if (flag){
            cout << "Room No: " <<room_no<<"   is reserved room."<<endl;
        }
            else{
            cout <<  "Room No: "<<room_no<<"    is empty room. "<<endl;
            }
      }
      else{
	  
	   cout <<  "Enter the room to be reserved: " <<endl;
       cin >> room_no;
       flag = check(room_no);


        if(!flag){
        guest.room=room_no;
        cin.ignore();              //to skip the new line character
        cout << endl;
        cout << "Enter guests first name: "<<endl;
        cin.getline(guest.first, 21);
        cout <<endl;
        cout << "Enter the guest last name: " <<endl;
        cin.getline(guest.last,21);
        cout <<endl;
        cout << "Enter gender of guest:"<<endl;
        cin.getline(guest.gender, 5);
        cout << "Enter the mobile number of customer: " <<endl;
        cin.getline(guest.mob, 21);
        cout <<endl;
        cout << "Enter national id no. of customer: " <<endl;
        cin.getline(guest.nid, 21);
        cout <<endl;
        cout << "Enter the name of manager in charge: " <<endl;
        cin.getline(guest.mangr,21);
        cout <<endl;
        cout << "Enter date: "<<endl;
        cin.getline(guest.date,21);


            int a;                 // for choice
            cout << "Enter 1 to save or 2 to cancel: "<<endl;
            cout <<endl;
            cin >> a;
            if (a==1){
                cout <<endl;

                fout<<guest.room <<setw(15)<<guest.first <<" "<<guest.last <<setw(18)<<guest.gender<<setw(15)<<guest.mob<<setw(15)<< guest.nid <<setw(15)<< guest.mangr << setw(15)<<guest.date <<endl;

                cout <<"\nRecord was succefully saved.\n"<<endl;

                system("cls");

                }
				else
                    {
                        Beep(333,400);
                    cout << "Record Was Not saved" <<endl;
                    cout << "...................." <<endl;
                    cout <<endl;

                }


            }
            else{

            	cout << "\nRoom is already booked!!"<<endl;
				system("pause");
                system("cls");
			}

		cout << "Enter 1 to enter another data or press 0 to return to main menu:\n ";
                cin >>choice;
                cout <<"\n............................................."<<endl;
                cout <<endl;
        if (choice==1){
          goto loop;
        }

        else if (choice==0){
            menu ();
        }

        else {
            cout << "Invalid input!!"<<endl;
             system("pause");
            system("cls");
        }
    }

    }
}

    void display_all(){
        ifstream fin;
         string line;
        fin.open("user info input.txt", ios::in);

        if(!fin){

            cout << "File is not found." <<endl;
        }
        else {
         fin.seekg(0,ios::beg);
        cout << "\nDisplaying records of all customers:\n"<<endl;
         system("pause");
         system("cls");

        cout << "Room:" <<setw(15) <<"Name:"<< setw(18)<<"Gender:"<<setw(14)<<"PhoneNo:" <<setw(15) <<"NID:"<<setw(15)<<"Manager:" <<setw(15) <<"Date:"<<endl;
        cout <<endl;
       }


	while(getline(fin,line)){


                cout <<line<<endl;
                 cout<< "\n.....................................................................................................................\n"<<endl;

             }
         }
    void spec_record(int ro){
     ifstream spec;
     string line;
     spec.open("user info input.txt", ios::in);
       if (!spec){
        cout << "File is not found" <<endl;
      }
      else{
	  spec.seekg(0,ios::beg);
	   while(!spec.eof()){
           getline(spec,line);
           if(compare(ro,line)==3){
               system("pause");
               system("cls");
                cout << "Room:" <<setw(15) <<"Name:"<<setw(18)<< " Gender:"<<setw(14)<<"PhoneNo:" <<setw(15) <<"NID:"<<setw(15)<<"Manager:" <<setw(15) <<"Date:"<<endl;
                cout<<line<<endl;
}
          
		  
		    }
    }

       spec.close();
	   system("pause");
	   system("cls");

      }


    void edit(int ro){
      ifstream fin;
      ofstream fout;
      int i,j;
      string line;
      Hotel modify;
      fin.open("user info input.txt", ios::in|ios::out|ios::app);
      fout.open("temp.txt",ios::out);
      if( !fin){
        cout << "File is not found.\n"<<endl;
      }
      else
    {
	   fin.seekg(0,ios::beg);
         while(!fin.eof()){
               getline(fin,line);
               if(compare(ro,line)==3)
                {
                	
                system("pause");
                system("cls");
                cout << "\nEnter all new records:\n"<<endl;
                system("pause");
                system("cls");
                cout << "\n...................................................................\n"<<endl;
                cout << "\nEnter new room:\n"<<endl;
                cin>>modify.room;
                cout <<"\nEnter new first name:\n"<<endl;
                cin.getline(modify.first,21);
                cout<<endl;
                cout <<"\n Enter new last name:\n"<<endl;
                cin.getline(modify.last,21);
                cout <<"\nEnter new gender:\n"<<endl;
                cin.getline(modify.gender, 5);
                cout <<"\nEnter new phone number:\n"<<endl;
                cin.getline(modify.mob,21);
                cout <<"\nEnter new national id:\n"<<endl;
                cin.getline(modify.nid,21);
                cout <<"\nEnter new name of manager in charge:\n"<<endl;
                cin.getline(modify.mangr,21);
                cout <<"\nEnter new date:\n"<<endl;
                cin.getline(modify.date,21);
                fout<<modify.room<<setw(15)<<modify.first<<" "<<modify.last<<setw(18)<<modify.gender<<setw(14)<<modify.mob<<setw(15)<<modify.nid<<setw(15)<<modify.mangr<<setw(15)<<modify.date<<endl;

               }
               else{
               	fout<<line<<endl;
			   }
			  }
         }
    
                fout.close();
                fin.close();
               
                rename("temp.txt","user info input.txt");
                remove("user info input.txt");

                i = remove("user info input.txt");
                j = rename("temp.txt", "user info input.txt");
                if(i==0&&j==0){

                    cout <<"\nFile is succefully edited.\n"<<endl;
                }
                else{
                     Beep(330,788);
                     cout <<"\nFile editimg is unsuccesfull!!"<<endl;
                }
                system("pause");
                system("cls");

    }


    void del_resdata(int ro)
    {
    	int i,j;
     ifstream fin;
    
     ofstream fout;
     string read;
     fin.open("user info input.txt",ios::in);

     fout.open("temp.txt",ios::out|ios::app);
     if(!fin){
        cout << "File is not found!!\n"<<endl;

     }
     else {
     	 fin.seekg(0,ios::beg);

		   while(!fin.eof()){
                 getline(fin,read);
                 
                 if(compare(ro,read)==7)
                 

                  fout<<read<<endl;
                }

	}
                fin.close();
                fout.close();
                 remove("user info input.txt");
                rename("temp.txt","user info input.txt");
               
                i = remove("user info input.txt");
                j = rename("temp.txt","user info input.txt");
                if(i!=0&&j!=0){
                    cout <<"\nRecord is deleted succesfully"<<endl;
                }
                else{

                   Beep(300,453);
                   cout <<"\nRecord deleting is unsuccesful!!"<<endl;



                }

     }


     void leave_room(int ro){
        Hotel out;
        char date[21];
        string leave;
        ifstream fin;
        ofstream fout1;
        ofstream fout2;
        fin.open("user info input.txt",ios::in);
         fout1.open("prerecord.txt",ios::out|ios::app);
         fout2.open("temp.txt",ios::out|ios::app);
         if(!fin){
            cout << "File is not found!!"<<endl;
         }
         else{

        fin.seekg(0,ios::beg);

        while (!fin.eof()){
                 getline(fin,leave);
                 if(compare(ro,leave)==3){
                 	cout <<"\nEnter checkout date:  ";
                 	cin.getline(date,21);
                 	fout1<<leave;
                 	fout1<<date;
                 	
				 }
				 else{
				 	fout2<<leave<<endl;
				 }
        
        }
         }
         fin.close();
         fout1.close();
         fout2.close();
         remove("user info input.txt");
         rename("temp.txt", "user info input.txt");
         system("pause");
         system("cls");


     }
void pre_record(){
   string line;
   ifstream fin;
   fin.open("prerecord.txt",ios::in);
   if(!fin){

    cout << "\nNo previous record file exist."<<endl;
   }
   else{
    cout <<"Room:"<<setw(15)<<"Name:"<<setw(18)<<"Gender:"<<setw(14)<<"PhoneNO:"<<setw(15)<<"National ID:" <<setw(15)<<"Manager:"<<setw(17)<<"CheckIndate:"<<setw(17)<<"CheckOdate:"<<endl;
     while(getline(fin,line)){

        cout <<line<<endl;
     }


}
}


int compare(int room, string line)
{
	string roo = to_string(room);
	string ln = line.substr(0,4);
	
	if(roo==ln){
		return 3;
		
		
	}
	else{
		return 7;
	}
	
}

void addtional(){
	int opt;
	cout<<"Press 3 if you want to know about the project or 7 to get help:  ";
	system("cls");
	cout << "Enter your option here:  "; 
	cin >>opt;
if(opt==3){
	cout<< "Welcome to know about this application:"<<endl;
	about();
	cout << "Thanks for your interest to know about the project."<<endl;
	
}

	else if(opt==7){
		
		cout <<"Here is hepful information to guide you:"<<endl;
		help();
		cout<<"Thank you ...... keep in touch."<<endl;
	}
	else{
		cout <<"Invalid input ...... try again."<<endl;
}
}

	

