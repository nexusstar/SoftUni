# Problem 01 – Temperature


Nakov is a weatherman. He makes research about global warming. He sends his students to measure temperature and humidity in cities. You task is to process the data and print on the console the max / min temperatures and the city where they were measured, the max / min humidity and the city where they were measured and the average temperature / humidity in all cities.

You will receive several input lines with data. After processing the data you should print the result in format:

Max temperature {city} {maxTemperature}
Min temperature {city} {minTemperature}
Max humidity {city} {maxHumidity }
Min humidity {city} {maxHumidity }
Average temperature/humidity {averageTemperature}/{averageHumidity}
If two towns have same temperature or humidity, print the first in input order.

## Input

The input is in format “{town}-{temperature}-{humidity}”.

Input data is passed to the first JavaScript function found in your code, as an array of strings.

## Output
Print the result in exactly in the format, specified above.

Print all floating point numbers with two digits, after the decimal point. Example: (2.256 to 2.26)

## Constraints
The temperature will be a floating point number in range [-100.0; 100.0]

The humidity will be a floating point number in range[0, 100.0]

 The cities will consist of English alphabetic characters.

The numbers of input lines is in range [1,100]

Allowed time/memory: 100ms/16MB

INPUT	OUTPUT

Sofia   30.00 87.00	Max temperature Burgas 35.00

Burgas  35.00 90.00	Min temperature Sofia 30.00

Plovdiv 33.00 86.00	Max humidity Burgas 90.00

Min     humidity Plovdiv 86.00

Average temperature/humidity 32.67/87.67
