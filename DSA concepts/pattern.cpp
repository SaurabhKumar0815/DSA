// triangle pattern :->   (*)

#include<iostream>
using namespace std;
int main(){
    int n = 5 ;
    for( int i = 0 ; i< n ; i++)
    {
        for ( int j = 0; j< i+ 1 ; j++)                 //*
        {                                               //* *               
            cout<< "  *  ";                             //* * *
                                                        //* * * *
        }                                               //* * * * *
      cout << endl;
    }
    return 0;
}
//With number ( triangle pattern )
/*#include<iostream>
using namespace std;
int main(){
    int n = 4 ;
    for( int i = 0 ; i< n ; i++)
    {                                                 //1
        for(int j =0 ; j< i+1; j++)                   //2 2 
                                                      //3 3 3
        {                                             //4 4 4 4
            cout<<(i+1)<<"  ";

        }
        cout<<endl;
    }
    return 0; 
}*/



/*#include<iostream>
using namespace std;
int main(){
    int n = 5 ;
    for( int i = 1 ; i< n ; i++)
    {                                                 //1
        for(int j =1 ; j< i+1; j++)                  // 1 2 
                                                     // 1 2 3 
        {                                            // 1 2 3 4
            cout<<j<<"  ";
        }
        cout <<endl;
    }
    return 0;
}         */


 // Reverse triangle pattern 
    
  /*#include<iostream>
using namespace std;
int main(){
    int n = 4 ;
    for( int i = 0 ; i< n ; i++)                      //1
    {                                                 //2 1 
        for ( int j =i+1; j>0; j--)                   //3 2 1 
        {                                             //4 3 2 1
            cout <<j <<"  ";
        }           
        cout<<endl;
    }
    return 0;
}
*/



      
        