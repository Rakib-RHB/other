#include <stdio.h>
int main()
{
  char ch;
  ch = getchar();
  int i, k;
  for(i=0, k=65;i<26;i++,k++){
      if(ch==k){
        break;
      }
  }
  printf("%d\n",++i);
  return 0;
}



#include <stdio.h> is a standard C library header that provides functions for input and output.

The main function is the entry point of the program.

The char ch; declaration defines a character variable named ch to store the character input by the user.

ch = getchar(); reads a single character from the user and assigns it to the ch variable.

Two integer variables, i and k, are declared. i will be used to keep track of the position of the character in the alphabet, and k is initialized with the ASCII value of 'A' (65).

The for loop is used to iterate through the English alphabet (from 'A' to 'Z'). The loop has the following parts:

i = 0 initializes i to 0.
k = 65 initializes k to the ASCII value of 'A'.
Inside the loop, if (ch == k) checks if the character ch is equal to the current character represented by the value of k. If they are equal, it means we have found the input character's position in the alphabet, and the loop is terminated using break.

If ch is not equal to the current character represented by k, the loop continues to the next character by incrementing i (which represents the character's position) and k (which represents the ASCII value of the next character).

After the loop, the program prints the value of i incremented by 1 using printf("%d\n", ++i);. The ++i increments i by 1 before printing it, so it correctly represents the position of the input character in the English alphabet.

In summary, this program takes a character as input, searches for it in the English alphabet (from 'A' to 'Z'), and prints the position of the character in the alphabet.






