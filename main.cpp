//
//  main.cpp
//  Structure
//
//  Created by Eun Jae Lee on 4/12/17.
//  Copyright © 2017 Eun Jae Lee. All rights reserved.
//

#include <iostream>
using namespace std;
struct collection { // struct - keyword for define structure
    
    char a;
    int b;
};// x; x here for global variable

int main(int argc, const char * argv[]) {

    cout<<"Enter one character followed by a number: \n";
    
    collection x,y;// x has become object for structure collection
    cin>> x.a;// . for reference of member of the collection structure
    cin>> x.b;
    
    y=x;// not x=y
    
    cout<<y.a<<"\n";
    cout<<y.b<<"\n";
    
}

