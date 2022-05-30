#include <iostream>
#include <cstdlib>

int getNumber( int min, int count )
{
    return min + rand() % count ;
}

int main()
{
    srand( time( nullptr ) );

    // For get rand value, use getNumber
    // example ( min = 100, count = 150 ) - int randValue{ getNumber( 100, 150 ) };

    // Add your code here
    return 0;
}

