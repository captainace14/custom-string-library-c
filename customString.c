#include<stdio.h>
#include<string.h>


size_t my_strlen(const char *s) {
	const char *p = s;
	while(*p++);
	return (size_t)(p - s) - 1;
}


void *my_memcpy(void *s1, const void *s2, size_t n) {

	char *c1 = s1;
	const char *c2 = s2;

	while(n--)*c1++ = *c2++;	
	return s1;
}


char *my_strcopy(char *dest, char *src) {
	char *p = dest;
	
	while( (*p++ = *src++) );

	return dest;
}

int main(void) {
 
	char s[100] = "Goats";
	char t[100];
	my_memcpy(t, s, 2);
	
	t[2] = '\0';
	
	printf("%s\n",t );
  
  	
  return 0;
}
