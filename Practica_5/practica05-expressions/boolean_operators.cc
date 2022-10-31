/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author F. de Sande
 * @date Oct 14th 2021
 * @brief Static Cast
 *
 * If we want to output a char as a number instead of a character, we have to tell std::cout to print the char as if it were an integer 
 * One (poor) way to do this is by assigning the char to an integer, and printing the integer.
 * A better way is to use a type cast. 
 * A type cast creates a value of one type from a value of another type. 
 * To convert between fundamental data types we use a type cast called a static cast.
 *
 * @see https://www.learncpp.com/cpp-tutorial/chars/
 */

#include <iostream>
using namespace std;
int main () {

    bool p;
   
    cout<<"  p  "<<"  q  "<<"  p && q  "<< "  p||q  "<< "  !p  "<<"  !q  "<<endl;
    cout<<"----  ----  --------  ------  ----  ----"<<endl;
    cout<<" "<< false<<"     "<< false<< "      "<< (false && false)<<"     "<<(false||false)<< "        "<<(!false)<< "       "<<(!false)<<endl;


    cout<<"----  ----  ----  ---------  ----  ----"<<endl;

    cout<<" "<< false<<"     "<< true<< "      "<< (false && true)<<"     "<<(false||true)<< "        "<<(!false)<< "       "<<(!true)<<endl;


    cout<<"----  ----  ----  ---------  ----  ----"<<endl;

    cout<<" "<< true<<"     "<< false<< "      "<< (true && false)<<"     "<<(true||false)<< "        "<<(!true)<< "       "<<(!false)<<endl;


    cout<<"----  ----  ----  ---------  ----  ----"<<endl;



    cout<<" "<< true<<"     "<< true<< "      "<< (true && true)<<"     "<<(true||true)<< "        "<<(!true)<< "       "<<(!true)<<endl;











    return 0;
}
