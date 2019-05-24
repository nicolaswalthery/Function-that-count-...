# Learning how to use a static char chart.
The program contain a "homemade" function that count how many letter 'e' there are in a char chart.

# I learned:

* to create a function.

* to create a char chart and transmit it to a function. The function contain a type pointer variable in parameter and since a chart behave like a pointer when it is transmitted to a function, i don't have to specify to the C language that it is an address with the symbol '&'.

* the use of strlen from string.h. strlen == string lenght and it does what it says. ;)

# The challenge
In that case it was to find a way to compare every cells of the chart with a typograpgic caracter.
To do so, we just need a "for" iteration that stop when the maximum string lenght is reached. That's here the function strlen is useful.
In every step of that iteration, we'll use a "if" to compare every cells of the chart (chart[the_for_counter]) with the searched letter.
So it is string_chart[counter]==char_variable, variable containing the searched letter.
