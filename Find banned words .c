#include <stdio.h>
#include <string.h>
int main() {
   char msg[200] = "This post contains spam and fake offers";
   char banned[3][20] = {"spam", "fake", "scam"};
   int n = 3, found = 0;
   printf("Banned words detected:\n");
   for (int i = 0; i < n; i++) {
       if (strstr(msg, banned[i])) {
       printf("%s\n", banned[i]);
       found++;
       }
   }
   printf("Total banned words found: %d", found);
}
