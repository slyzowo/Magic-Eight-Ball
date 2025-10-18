#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

  srand(time(0));

  char userInput[] = "";

  printf("what is your question?\n");
  scanf("%s", &userInput);

  int randNum = (rand() % 20) + 1;
  switch (randNum){
    case 1:
      printf("It is certain\n");
      break;
    case 2:
      printf("As I see it, yes\n");
      break;
    case 3:
      printf("Reply hazy, try again\n");
      break;
    case 4:
      printf("Don't count on it\n");
      break;
    case 5:
      printf("It is decidedly so\n");
      break;
    case 6:
      printf("Most likely\n");
      break;
    case 7:
      printf("Ask again later\n");
      break;
    case 8:
      printf("My reply is no\n");
      break;
    case 9:
      printf("Without a doubt\n");
      break;
    case 10:
      printf("Outlook good\n");
      break;
    case 11:
      printf("Better not tell you now\n");
      break;
    case 12:
      printf("My sources say no\n");
      break;
    case 13:
      printf("Yes definitely\n");
      break;
    case 14:
      printf("Yes\n");
      break;
    case 15:
      printf("Cannot predict now\n");
      break;
    case 16:
      printf("Outlook not so good\n");
      break;
    case 17:
      printf("You may rely on it\n");
      break;
    case 18:
      printf("Signs point to yes\n");
      break;
    case 19:
      printf("Concentrate and ask again\n");
      break;
    case 20:
      printf("Very doubtful\n");
      break;
    
    default:
    printf("Error\n");
    break;
  }

return 0;
}