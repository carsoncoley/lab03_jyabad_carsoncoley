// countDucks.cpp 
// P. Conrad for CS16, Winter 2015
// Example program to read from file and count occurences

#include <iostream> // for printf()
#include <cstdlib> // for exit(), perror()
#include <fstream> // for ifstream

using namespace std;

int main(int argc, char *argv[])
{
   if (argc!=2) {
   // if argc is not 2, print an error message and exit
   cerr << "Usage: "<< argv[0] << " inputFile" << endl;
   exit(1); // defined in cstdlib
   }
   ifstream ifs;
   ifs.open("animals01.txt");
   int result = 0;
   string line;
   getline(ifs, line);
   if(line == "Duck"){
        result++;
   }
   
   while(ifs){
             result++;
             getline(ifs, line);
             if(line == "Duck"){
                    result++;
             }
   }
   cout<<"There were "<<result<<" ducks in animals01.txt"<<endl;
 
   return 0;
}
