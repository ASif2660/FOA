#include <cstdlib>
#include <iostream>
#include <string>

#include "hash.h"


using namespace std;


hash::hash(){

      int tableSize = 100;

}



int hash::Hash(string key){


 int hash = 0;
 int index;

// index = key.length();

 //find where information is stored in hashtable



  //remander is stored in the index. egx:  402 mod 100 is 2

 for( int i =0; i<key.length(); i++){


    //all the hash key values 

    hash = hash + (int)key[i]; //adds all the ASCII values into hash variable	  
    cout << "hash = " << hash << endl;

 }

   index = hash % tableSize;

/* cout << "key[0] =" << (int)key[0] << endl;

 cout << "key[1] =" << (int)key[1] << endl;

 cout << "key[2] =" << (int)key[2] << endl;

 cout << "key[3] = " << (int)key[3] << endl;*/
 
 
 return index;


 }
