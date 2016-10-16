#include <cstdlib>
#include <iostream>
#include <string>

#include "hash.h"


using namespace std;

int main(int argc, char* argv[]){

int index;
hash hashObj;

index = hashObj.Hash("Asif");

cout << " index  " << index << endl; 


return 0;
}
