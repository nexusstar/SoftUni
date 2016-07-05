# Problem 03 – Supermarkets

You will receive input lines holding data about sales of supermarkets. 

The input lines will contain data about supermarkets and products in them, which will be in custom formats.

When you receive the following line: “/start {supermarketName}/”, you have to open a supermarket with the given name, after that you will receive series of input lines containing products. The valid product format is:

“/{productName} count=|{productCount}| price=|{price}|/’”.

When you receive the following line: “/end {supermarketName}/”, you have to close the currently opened market, if there is such, and wait for the opening of a new one. Products are only stored in opened markets.

When you’ve read and processed all of the input you must calculate the profit, for each product, by the formula “productCount * productPrice”. The profit from one supermarket is equal to the sum of all the profit from all its products.

The valid supermarket and product names must consist of English alphabet and numbers.

## Input

The input data is passed to the first JavaScript function found in your code as an array of strings.

## Output

As output you must print lines containing data about supermarkets in the following format:

”Name: {supermarketName}, Products: [listOfProductsName], Profit: {profit}”.

On the last line of output you must print the total profit from all supermarkets and the average supermarket profit, which is equal to “{totalSuperketsProfit} / {supermakertsCount}”. You must print that data in the following format:

“Total: {totalSupermarketsProfit}, Average Profit: {averagesupermarketsProfit}”.

All floating point numbers must be fixed to the second digit, after the decimal point.

## Constraints
All input lines that do NOT follow the formats, specified above, must be ignored.

The product price will be a floating point number in range [0, 1000].

The product count will be an integer number in range [0, 20000].

Allowed time/memory: 200ms/16MB.

INPUT	OUTPUT

/start Gamebar/	Name: Gamebar, Products: [cola, fanta], Profit: 25.00

/cola count=|5| price=|1.00|/	Total: 25.00, Average Profit: 25.00

/fanta count=|10| price=|2.00|/	

/end Gamebar/	

INPUT	OUTPUT

/start Gamebar/	Name: Gamebar, Products [cola, fanta], Profit: 25.00

/cola count=|5| price=|1.00|/	Name: market, Products [bread, tomato], Profit: 20.00

/fanta count=|10| price=|2.00|/	Total: 45.00, Average Profit: 22.50

/end Gamebar/	

/start market/	

/bread count=|10| price=|1.50|/	

/tomato count=|5| price=|1.00|/	

/cucumber price=|1.00|/	

/end market/	

/start SoftUniBar/	

/tomato count=|5| price=|1.00|/	

/end bar/
