//Dr_T Unit 2 COSC-1437 Starter Code
/* Task -
Top level solution folder: C_STL_Library_Boggs

create a single main.cpp that contains code samples and implementations of each of the following topics */

#include <iostream>
#include <vector>
#include <algorithm> 
#include <string>
#include <cassert>
#include <stack>
#include <set>
#include <utility>

using namespace std; 

//Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/ clarifications added
// Class Example 1
class MyClassVector1 
{ 
  private:  
      vector<int> vec; 
  public: 
      MyClassVector1 (vector<int> v)  //parameterized constructor
      { 
        vec = v; 
      } 
      void print() 
      { 
          /// print the value of vector 
          for (int i = 0; i < vec.size(); i++) 
          {
              cout << vec[i] << " "; 
          }    
      } 
};
// Class Example 2
class MyClassVector2 
{
    private:
    vector<int> vec2;
  
public:
    MyClassVector2(vector<int> v) : vec2(v)
    {
    }
    void print()
    {
        /// print the value of vector
        for (int i = 0; i < vec2.size(); i++)
            cout << vec2[i] << " ";
    }
};
// Class Example 3
class MyClassVector3 
{
    private:
    vector<int> vec3;
  
public:
    MyClassVector3(vector<int> v) : vec3(v)
    {
    }
    void print()
    {
        /// print the value of vector
        for (int i = 0; i < vec3.size(); i++)
            cout << vec3[i] << " ";
    }
};
int main(int arc, char* argv[]) 
{
    /****Section_Name***Vectors*/ 
    //Write the base code for: 5. std::vector example
    vector<double> vd; //vd elments are floating point numbers
    vector<int> vi; //vi elements are integer numbers 
    vector<string> vs; //vs elements are string objects 

    //Expand this code to:

    //add 3 elements to the vd vector
    vd.push_back(1);
    vd.push_back(2);
    vd.push_back(3);
    vd.push_back(55.4); 

    //add 3 elements to the vi vector
    vi.push_back(1);
    vi.push_back(2);
    vi.push_back(3);
    vi.push_back(36);
   
   // add 3 elements to the vs vector
    vs.push_back("A");
    vs.push_back("B");
    vs.push_back("C");
   
   // display the 3 elements in the vd vector
   // Dr. T's Example
   cout << "\nValues in vd: \n"; 
   for(double vals : vd)
   {
     cout << vals << endl; 
   }
   cout << "\nAnother way to print vector: " << endl; 
   for(int i = 0; i < vd.size(); i++)
   {
     cout << vd[i] << endl; 
   }

 //display the 3 elements in the vi vector
  cout << "\nValues in vi: \n";
  for( int i = 0; i< vi.size(); i++)
  {
    cout << vi[i] << endl;
  }
   // display the 3 elements in the vs vector
  cout << "\nValues in vs: \n";
  for (string vals: vs){
    cout << vals << endl;
  }
  
    /****Section_Name***Vector_as_Class_Member*/ 
    //Credit https://www.geeksforgeeks.org/passing-vector-constructor-c/

   cout << "\nVector_as_Class_Member" << endl; 
    vector<int> vec; 
        for (int i = 1; i <= 5; i++) 
            vec.push_back(i); 
        MyClassVector1 obj(vec); 
        obj.print(); 
      
      //Continue with MyClassVector2 and MyClassVector3
      // MyClassVector2
    cout <<"\nVector_as_Class_Member_2" << endl;
    vector<int> vec2;
    for (int i = 1; i <= 5; i++)
        vec.push_back(i);
    MyClassVector2 obj2(vec);
    obj.print();
    

    //MyClassVector3 
    cout <<"\nVector_as_Class_Member_3" << endl;
    vector<int> vec3;
    for (int i = 1; i <= 5; i++)
        vec.push_back(i);
    MyClassVector3 obj3(vec);
    obj.print();
   
    
    /****Section_Name***STL_Iterators*/ 
    // 10 Elements
    cout << "\nSTL_Iterators Output" << endl;
    vector<int> vint(10); // vector w/ 10 integers
    vint[0] = 3;
    vint[1] = 7;
    vint[2] = 8;
    vint[3] = 12;
    vint[4] = 15;
    vint[5] = 19;

    //Display elements of the vector
    vector<int>::iterator it;
    for (it = vint.begin(); it != vint.end(); ++it ){
      cout << " " << *it;
    }
    

    /****Section_Name*** Stack*/
    stack<int> st;
    st.push(100); //push number on the stack
    assert( st.size() == 1); // verify one element is on the stack
    assert( st.top() == 100); // verify element value
    
    st.top() = 456; // assign new value
    assert( st.top() == 456 );

    st.pop();
    assert( st.empty() == true );

    /****Section_Name**** Set*/
    //Write the code as presented in: 3. std::set
    set <int> iset; //set of unique integer numbers
    cout << "\nSet Element Output" << endl;
    iset.insert (11); //populate with some values
    iset.insert (-11);
    iset.insert (55);
    iset.insert (22);
    iset.insert (22);

    if (iset.find(55) != iset.end() ){ // is value already stored?
      iset.insert(55);
    }
    assert( iset.size() == 4 ); // sanity check :3
    set<int>::iterator it2;
    for(it2 = iset.begin(); it2 != iset.end(); it2++ ){
      cout << " " << *it2;
    }

    /****Section_Name****Pair_Structure*/
    //Write the code as presented in: 4. std::pair structure
    pair< string, string > strstr; // A pair is much like a container that holds
    strstr.first = "Hello";        // exactly two elements. The pair is defined
    strstr.second = "World";       // in the standard header named utility.

    pair< int, string > intstr;
    intstr.first = 1;
    intstr.second = "one";

    pair< string, int > strint("two", 2 );
    assert( strint.first == "two" );
    assert( strint.second == 2 );

    /****Section_Name**** Map_Insert*/
    //Write the code as presented in: 14. std::map::insert

    //Write comments that help one better understand what the code is doing.

    /****Section_Name****Map_Summary*/
    //Write the code as presented in: 16. Map summary

    //Write comments that help one better understand what the code is doing.

    /****Section_Name**** Sort_Algorithm*/
    //Write the code as presented in: 23. sort example

    //Write comments that help one better understand what the code is doing.

    /****Section_Name****Predicate_Algorithm*/
    //Write the code as presented in: 25. count_if and predicate function

    //Write comments that help one better understand what the code is doing. 

      return 0; 
 }