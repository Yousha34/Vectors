#include<iostream>
#include<vector>

using namespace std ;

int main(){

    vector<int> v ;

    int element ;

    for( int i = 0; i < 5; i++ ){

        cout << "Enter element : " ;
        cin >> element ;

        v.push_back( element ) ;

    } 

    for( int i = 0; i < v.size(); i++ ){
        cout << v[i] << " " ;
    }

    return 0 ;
}