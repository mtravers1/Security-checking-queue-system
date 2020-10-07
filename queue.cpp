#include <iostream>
#include <queue>
  using namespace std;
  queue <char> q1;
  queue <char> q2;
  char item = 'X';
  char item1 = 'X';
  int main () {
cout << "Security Check Queuing System"<<endl<<endl;
   do {
   
    
   
    cout << "Menu"<<endl;
    cout << "1 for Enqueue"<<endl;
    
    cout << "2 for Dequeue"<<endl;
    
    cout << "3. for view"<<endl;

    cout << "4. Exit"<<endl;
    int choice;
    cin >> choice;
    if(choice >= 4) {
        cout<<"System End"<<endl;
     break;
     
     
     
     
     
     
     
     
  
     
     
     
     
    }
    else if(choice == 1) 
    {
    if(q2.size()>3)
    cout<<"Queues are full either exit or remove"<<endl;
    {
            if(q2.size()<q1.size())
            {
                q2.push(item1);
                cout<<"added to queue 2"<<endl;
            }
                 else{ 
                     q1.push(item);
                     cout<<"added to queue 1"<<endl;
                 }
    }}
    
            
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
              
    else if(choice == 2&& !q2.empty()) {
        
        if(q1.size()==0){
        cout<<"queue1 is empty"<<endl;
  
        }
        if(q2.size()<=q1.size())
            {
                q1.pop();
                cout<<"removed from queue 2"<<endl;
            }
                 else{ 
                     q2.pop();
                     cout<<"removed from queue 1"<<endl;
                 }
          
    }
    
    
    else if(choice == 3) {
       
        cout<<"***************"<<endl;
        cout<<"Q1: ";
          for(int i=0; i<q1.size(); i++)
          {
          cout<<item;
          }
          cout<<endl;
          cout<<"Q2: ";
          for(int x=0; x<q2.size(); x++)
          {
          cout<<item1;
    }
          cout<<endl;
          cout<<"***************"<<endl;
          
    }
      if(q1.size()==0)
	  {
	  	cout<<"The queues are empty"<<endl;
		  }    
   } while(true);
   
   return 0;
  }



