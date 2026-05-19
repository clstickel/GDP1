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
   int e = 0;
   if (n == 4){
    char ente[4] = "ENTE";
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i]==ente[i]){
            e++;
        }
    }
   }
   if (e!=4){
    for (int i = 0; text[i] != '\0'; i++) {
        char c = text[i];

        if (c >= 'a' && c <= 'z') {
            printf("%c", c - 'a' + 'A'); 
        } else if (c >= 'A' && c <= 'Z') {
            printf("%c",c - 'A' + 'a');
        } else {
            putchar(c);
        }
    }

    putchar('\n');
   }

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