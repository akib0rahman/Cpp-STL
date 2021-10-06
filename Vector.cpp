#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool myFunc(int a, int b)
{
    return a > b;
}

int main(){

//    Function list ::
//    push_back()
//    size()
//    find()  #include <algorithm>
//    reverse()
//    clear()
//    sort()  #include <algorithm>
//    insert()
//    erase()
//    empty()
//    resize()

//The vector element can be accessed with [] operator like a normal array.

      vector <int> vec;
      vec.push_back(34);
      vec.push_back(10);
      vec.push_back(11);
      vec.push_back(40);

      //Random Access
      cout << "Random ele  : "<< vec[0] << endl;

      cout << "Vector size : ";
      cout << vec.size() << endl;
      puts("");

      cout << "Print vec   : ";
      for (int i = 0; i < vec.size(); i++)
      {
          cout << vec[i] << "\t";
      }
      puts("\n");

      //Another way to take input in a vector is to declare a vector
      // of a certain size and take input using scanf / cin.
      //Initialize a vector with fixed size and fixed element
      vector <int> vec2 (5,33);
      vector <int>::iterator it;
      vec2.push_back(11);
      cout << "Print vec2  : ";
      for (int i = 0; i < vec2.size(); i++)
      {
          cout << vec2[i] << "\t";
      }
      puts("\n");

      //Using of iterator
      cout << "First ele   : ";
      it = vec2.begin();
      cout << *it << endl; // we use asterisk sign to print the value of that memory address
      it++;
      cout << "Second ele  : ";
      cout << *it << endl << endl;

      //Print using iterator
      cout << "Print  iter : ";
      for(it = vec2.begin(); it != vec2.end();it++)
      {
          cout << *it << "\t";
      }
      puts("\n");

      //Using of ascending sort
      sort(vec.begin(),vec.end());
      cout << "Sort vec    : ";
      for(it = vec.begin(); it != vec.end(); it++)
      {
          cout << *it << "\t";
      }
      puts("\n");
      //Using of descending sort
      sort(vec.begin(),vec.end(),myFunc);
      cout << "Sort vec    : ";
      for(it = vec.begin(); it != vec.end(); it++)
      {
          cout << *it << "\t";
      }
      puts("\n");

      //Sort in a range
      sort(vec.begin(),vec.begin()+3);
      cout << "Sort 3 ele  : ";
      for(it = vec.begin(); it != vec.end(); it++)
      {
          cout << *it << "\t";
      }
      puts("\n");


      //Using of empty
      if(vec.empty())
      {
          cout << "Empty  ! ! " << endl;
      }
      else
        cout << "\tVec Filled ! " << endl;


      //Using of insert
      vec.insert(vec.begin(),34);
      cout << "After insert : ";
      for(it = vec.begin(); it != vec.end(); it++)
      {
          cout << *it << "\t";
      }
      puts("\n");


      //Using of erase
      vec.erase(vec.begin()+1);
      cout << "After erase  : ";
      for(it = vec.begin(); it != vec.end(); it++)
      {
          cout << *it << "\t";
      }
      puts("\n");


      //If you define size and declare a vector without initial value,
      // initially all the elements of the vector are zero.
      vector <int> vec3(5);
      cout << "Print vec3   : ";
      for(it = vec3.begin(); it != vec3.end(); it++)
      {
          cout << *it << "\t";
      }
      puts("\n");


      //The resize () member function is used to resize the vector
      vec3.resize(3);
      cout << "After resize : ";
      for(it = vec3.begin(); it != vec3.end(); it++)
      {
          cout << *it << "\t";
      }
      puts("\n");






}
