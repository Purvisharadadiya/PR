#include<stdio.h>
#include<conio.h>

main()
{
      int score;
      char ch;
      clrscr();
      printf("anter numer ");
      scanf("%d",&score);
      (score>=90&& score<=100)
			      ?printf("grede is A")
				     :(score>80&& score<=90)
					    ? printf("grede is b")
						 :(score>70&& score<=80)
							? printf("gredeis c")
							    :(score>60&& score<=70)
								? printf("grede is d")
								    :(score>50&& score<=60)
									? printf("grede is e")
										:(score>40&&score<=30)
										   ?printf("gred is f:you are failed")




	    fflush(stdin)
	    switch(ch)
	 {
	    case 'A':
	    case 'a';
		  printf("excellent wrok!");
	    case 'B':
	    case 'b':
		  printf("well done");
	    case 'C':
	    case 'c':
		  printf("good job");
	    case 'D':
	    case 'd':
		  printf("You passed, but you could do brtter ");
	    case 'E':
	    case 'e':
		  printf("you passed");
	    case 'F':
	    case 'f':
		  printf("sorry you failed");
	    }


		getch();

}