//Author:Jugesh Raghav
//Date: 20- August- 2021
//chapter: basics of C programming language.

// (a) # include <stdio.h>
// int main( )
// {
// int i = 4, z = 12 ;
// if ( i = 5 || z > 50 )
// printf ( "Dean of students affairs\n" ) ;
// else
// printf ( "Dosa\n" ) ;
// return 0 ;
// }
// (b) #include <stdio.h>
// int main( )
// {
// int i = 4, j = -1, k = 0, w, x, y, z ;
// w = i || j || k ;
// x = i && j && k ;
// y = i || j && k ;
// z = i && j || k ;
// printf ( "w = %d x = %d y = %d z = %d\n", w, x, y, z ) ;
// return 0 ;
// }
// (c) # include <stdio.h>
// int main( )
// {
// int x = 20, y = 40, z = 45 ;
// if ( x > y && x > z )
// printf ( "biggest = %d\n", x ) ;
// else if ( y > x && y > z )
// printf ( "biggest = %d\n", y ) ;
// else if ( z > x && z > y )
// printf ( "biggest = %d\n", z ) ;
// return 0 ;
// }
// (d) # include <stdio.h>
// int main( )
// {
// int i = -1, j = 1, k, l ;
// k = !i && j ;
// l = !i || j ;
// printf ( "%d %d\n", i, j ) ;
// return 0 ;
// }
// (e) # include <stdio.h>
// int main( )
// {
// int i = -4, j, num ;
// j = ( num < 0 ? 0 : num * num ) ;
// printf ( "%d\n", j ) ;
// return 0 ;
// }
// (f) # include <stdio.h>
// int main( )
// {
// int k, num = 30 ;
// k = ( num > 5 ? ( num <= 10 ? 100 : 200 ) : 500 ) ;
// printf ( "%d\n", num ) ;
// return 0 ;