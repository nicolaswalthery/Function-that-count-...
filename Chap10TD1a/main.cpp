/*==================================================================================
===That program count every letter "e" contained the in chart variable "string_chart"===
===================================================================================*/
#include <stdio.h>
#include <string.h>
/*------Function Prototype------*/
int strcntchar(const char*, char);

int main()
{
   char string_chart[]="I'm the text contained in that chart.",//A char chart to contain some text.
        letter_searched='e',
        intro_explaination[]="That program count every letter \"e\" contained in the chart variable \"string_chart\".";

   int how_many_times;

   how_many_times=strcntchar(string_chart, letter_searched);//string_chart is already an address so you don't need to specify it with "&" as you must do if it was an ordinary variable.

   printf("%s\n\n", intro_explaination);
   printf("%s\n", string_chart);
   printf("And 'e' appears %d times in that sentence.\n", how_many_times);

   getchar(); getchar(); //Use here to prevent the console screen from closing, i know there is certainly another way to do it but that'll do the trick for now. ;)
}
int strcntchar (const char* string_chart, char letter_searched)
{
   int counter, //The counter used in the "for" iteration to compare every cells of the string_chart, one by one, with the letter_searched.
       ret_val=0; //ret_val: variable that will contain the value that the function will return.
                  //ALWAYS initialize ret_val to 0. If you do not the variable will contain whatever the C language will find where it place the variable.

   for(counter=0;counter<strlen(string_chart);counter++)//Here the function from string.h, strlen count how many typographic characters their is in the char chart insert in parameter.
   {                                                    //strlen is used here to limited the iteration to the numbers of characters contain in string_chart.
      if(string_chart[counter]==letter_searched)//About string_chart[counter]: Here we do not have to indicate that it is a pointer because when
         ret_val++;                             //a cell of a chart is used alone, it behave like a ordinary variable.
   }

   return ret_val;
}
