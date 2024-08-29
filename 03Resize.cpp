#include<iostream>
#include<vector>
using namespace std ;

int main(){

    vector<int> v ;

    cout << "Size is : " << v.size() << endl ;
    cout << "Capacity is : " << v.capacity() << endl << endl ;

    v.resize( 8 );

    cout << "Size is : " << v.size() << endl ;
    cout << "Capacity is : " << v.capacity() << endl << endl ;


    v.resize( 4 );

    cout << "Size is : " << v.size() << endl ;
    cout << "Capacity is : " << v.capacity() << endl << endl ;    
    
    v.resize( 7 );

    cout << "Size is : " << v.size() << endl ;
    cout << "Capacity is : " << v.capacity() << endl << endl ;  

    v.resize( 19 );

    cout << "Size is : " << v.size() << endl ;
    cout << "Capacity is : " << v.capacity() << endl << endl ;  

    v.resize( 24 );

    cout << "Size is : " << v.size() << endl ;
    cout << "Capacity is : " << v.capacity() << endl << endl ;  

    return 0 ;

}