# Learning how to use a static char chart.
The program contain a "homemade" function that count how many letter 'e' there are in a char chart.

# I learned:

* to create a function.

* to create a char chart and pass it to a function. The first parameter of the function strcntchar contain a pointer variable in parameter and since i want to pass it a chart and that a chart behaves like a pointer when it is passed, i don't have to specify to the C language that it is an address with the symbol '&'.
Example: how_many_times = strcntchar(string_chart, letter_searched);

* the use of strlen from string.h. strlen == string lenght and it gives the lenght of a char chart pass in parameter.
char_chart[]="Hello";
strlen(char_chart) will give you the answer 5.

# The challenge
In that case it was to find a way to compare every cells of the chart with a typograpgic character.
To do so, we just need a "for" iteration that stop when the maximum string lenght is reached. That's here the function strlen is useful.
In every step of that iteration, we'll use a "if" to compare every cells of the chart (chart[the_for_counter]) with the searched letter.
So it is string_chart[counter]==char_variable, variable containing the searched letter.
