/*
A bookseller has lots of books classified in 26 categories labeled A, B, ... Z. Each book has a code c of 3, 4, 5 or more capitals letters. The 1st letter of a code is the capital letter of the book category. In the bookseller's stocklist each code c is followed by a space and by a positive integer n (int n >= 0) which indicates the quantity of books of this code in stock.

In a given stocklist all codes have the same length and all numbers have their own same length (can be different from the code length).

For example an extract of one of the stocklists could be:

L = {"ABART 20", "CDXEF 50", "BKWRK 25", "BTSQZ 89", "DRTYM 60"}.
or

L = ["ABART 20", "CDXEF 50", "BKWRK 25", "BTSQZ 89", "DRTYM 60"].
In this stocklist all codes have a length of five and all numbers have a length of two.

You will be given a stocklist (e.g. : L) and a list of categories in capital letters e.g :

  M = {"A", "B", "C", "W"}
or

  M = ["A", "B", "C", "W"]
and your task is to find all the books of L with codes belonging to each category of M and to sum their quantity according to each category.

For the lists L and M of example you have to return the string (in Haskell/Clojure a list of pairs):

  (A : 20) - (B : 114) - (C : 50) - (W : 0)
where A, B, C, W are the categories, 20 is the sum of the unique book of category A, 114 the sum corresponding to "BKWRK" and "BTSQZ", 50 corresponding to "CDXEF" and 0 to category 'W' since there are no code beginning with W.

If L or M are empty return string is "".
*/

function stockList(listOfArt, listOfCat){
	categories = {};
	if(listOfCat.length == 0 || listOfArt.length == 0){
		return "";
	}
	for(i=0; i<listOfArt.length; i++){
		art = listOfArt[i];
		number = Number(art.substr(art.indexOf(' ')));
		// console.log(art, number+number);
		if(categories[art[0]] == undefined){
			categories[art[0]] = number;
		}
		else{
			categories[art[0]] += number;
		}
	}
	console.log(categories); 
	retrunStr = "";
	for(i=0; i<listOfCat.length; i++){
		if(i != 0 && i != listOfCat.length){
			retrunStr += ' - ';
		}
		if(categories[listOfCat[i]] != undefined){
			retrunStr += '(' + listOfCat[i] + ' : ' + categories[listOfCat[i]] + ')';
		}
		else{
			retrunStr += '(' + listOfCat[i] + ' : ' + '0' + ')';
		}
	}
	return retrunStr;
}

b = ["ABAR 200", "CDXE 500", "BKWR 250", "BTSQ 890", "DRTY 600"]
c = ["A", "B"]

console.log(stockList(b, c));
