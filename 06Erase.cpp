#include<iostream>
#include<vector>
using namespace std ;

int main(){

    vector<int> v ;

    cout << "Size is : " << v.size() << endl ;
    cout << "Capacity is : " << v.capacity() << endl << endl ;

    v.push_back(1) ;

    cout << "Size is : " << v.size() << endl ;
    cout << "Capacity is : " << v.capacity() << endl << endl ;
   
    v.push_back(2) ;

    cout << "Size is : " << v.size() << endl ;
    cout << "Capacity is : " << v.capacity() << endl << endl ;

    v.push_back(3) ;

    cout << "Size is : " << v.size() << endl ;
    cout << "Capacity is : " << v.capacity() << endl << endl ; 

    for( int i = 0; i < v.size(); i++ ){
        cout << v[i] << endl ;
    }

    cout << endl ;

    v.erase( v.begin() + 1 ) ;

    for( int i = 0; i < v.size(); i++ ){
        cout << v[i] << endl ;
    }

    return 0 ;

}