#include <stdio.h>

int zaehle (const char *text){
    int n = 0;
    while (text[n]!= '\0')
    {
        n++;
    }
    
    return n;
}

void vertauschtAusgeben(const char *text)
{
   int n = zaehle (text);
   int g = 0;
   int r = -1;
   if (n%2 == 0) g = (n/2) -1;
   else g = (n-1)/2;
    for (int i = 0; i <=g; i++) {
        if (text[i]==text[n-i-1] || text[i]==(text[n-i-1]- 'a' + 'A')){
            r++;
        }
    }
    if (r == g){
        printf ("Die Eingabe ist ein Palindrom");
    }
    else printf("Die Eingabe ist kein Palindrom");
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        printf("Aufruf: %s STRING\n", argv[0]);
        return 1;
    }

    int n = zaehle(argv[1]);
    printf("Die Summe ist %d\n", n);
    vertauschtAusgeben(argv[1]);

    return 0;
}