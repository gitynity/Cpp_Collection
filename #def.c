#include <stdio.h>

#define cube(x) (x)*(x)*(x)	//if you do not put parenthesis in expression your expression will have different result

int main()
{

printf("%d\n", cube(2+3));		// 5^3 = 125

return 0;
}
/*
 *Macros are not evaluated , They are EXPANDED at compile time 
 * Example: #define cube(x) x*x*x
 * cube(1+n) => 1 + n * 1 + n * 1 + n
 * i.e 1 +n + n + n
 * i.e 3n+1
 * so cube(1+3) = 10
 * 
 * If you want correct answer then put parenthesis in your expression
 * cube(x) (x)*(x)*(x)
 * Now cube (2+3) = (2+3)*(2+3)*(2+3)
 * i.e 5*5*5
 * i.e 125
*/
