/*
Longest Palindrome

Find the length of the longest substring in the given string s that is the same in reverse.

As an example, if the input was “I like racecars that go fast”, the substring (racecar) length would be 7.

If the length of the input string is 0, return value must be 0.

Example:

"a" -> 1 
"aab" -> 2  
"abcde" -> 1
"zzbaabcd" -> 4
"" -> 0
*/

function rev(string){
	var split = string.split("");
	var reverse = split.reverse();
	return reverse.join('');
}

longestPalindrome=function(s){
   max = 0;
   if(s.length == 0){
      return 0;
   }
   else if(s.length == 1){
   	return 1;
   }
   else{
   	  for(start = 0; start < s.length; start++){
	   	  for(i=0; i<=s.length; i++){
	   	  	word = s.substring(start, i);
	   	  	if(word == rev(word)){
	   	  		//console.log(rev(s.substring(start, i)), s.substring(start,i), start, i);
	   	  		wordL = word.length;
	   	  		console.log(wordL);
	   	  		if(wordL > max){
	   	  			max = wordL;
	   	  		}
	   	  	}
	   	  }
	   }
   	  console.log(max);
      return max;
   }
}


console.log(longestPalindrome('aa'));
