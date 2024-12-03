#include<stdio.h>
#include<conio.h>

main()
{
      int score;
      char ch;
      clrscr();
      printf("anter numer ");
      scanf("%d",&score);
      (score>=90&& score<=100) ?(printf("grede is A\n"),ch='a')
	 :(score>80&& score<=90)   ? (printf("grede is b\n"),ch='b')
	 :(score>70&& score<=80)   ? (printf("gredeis c\n"),ch='c')
	 :(score>60&& score<=70)   ? (printf("grede is d\n"),ch='d')
	 :(score>50&& score<=60)   ? (printf("grede is e\n"),	ch='e')
	 :(score>30&&score<=40)    ?(printf("gred is f: you are failed\n"),ch='f')
	 :printf("please enter valid choice");



	    
	    switch(ch)
	 {
	    case 'A':
	    case 'a':
		  printf("excellent wrok!");
		  break;
	    case 'B':
	    case 'b':
		  printf("well done");
		  break;
	    case 'C':
	    case 'c':
		  printf("good job");
		  break;
	    case 'D':
	    case 'd':
		  printf("You passed, but you could do brtter ");
		  break;
	    case 'E':
	    case 'e':
		  printf("you passed");
		  break;
	    case 'F':
	    case 'f':
		  printf("sorry you failed");
	    }
	    
		if(ch=='A'||ch=='B'||ch=='c'||ch=='d'||ch=='E' || ch=='a'||ch=='b'||ch=='c'||ch=='d'||ch=='e')
		{
		printf("congrtulations!You are eligible for the next level\n ");
		}
		else if(ch=='f' || ch=='F')
		{
		   printf("plsase try again netxt time");
		}
        getch();
		
}
