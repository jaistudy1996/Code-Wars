/*
Description:

Count the number of exclamation marks and question marks, return the product.
Examples

Product("") == 0
product("!") == 0
Product("!ab? ?") == 2
Product("!!") == 0
Product("!??") == 2
Product("!???") == 3
Product("!!!??") == 6
Product("!!!???") == 9
Product("!???!!") == 9
Product("!????!!!?") == 20
*/

function product(s){
	var ind = s.split("");
	var exclamation = 0;
	var question = 0;
	for(var i = 0; i<ind.length; i++){
		if(ind[i] == '!'){
			exclamation++;
		}
		if(ind[i] == '?'){
			question++;
		}
	}
	return exclamation*question;
}

console.log(product("!???"));
