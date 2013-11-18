#include <stdio.h>

	int main()
	{
int a, b, c, f, m1, m2, m5, m;
a=0;
b=0;
c=0;
scanf ("%d %d %d %d", &m1, &m2, &m5, &m);
f=m;
	while ((m>=5) && (c<m5))
 {
  m-=5;
  c+=1;
 }
        while ((m>=2) && (b<m2))
 {
  m-=2;
  b+=1;
 }
        while ((m>=1) && (a<m1))
 {
  m-=1;
  a+=1;
 }

        if ((a*1)+(b*2)+(c*5)==f) {printf("Yes: %d, %d, %d\n", a, b, c);}
        else printf ("No\n");

return 0;
}
