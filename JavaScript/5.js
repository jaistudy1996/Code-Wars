/* 
Define a function isPrime that takes one integer argument and returns true or false depending on if the integer is a prime.

Per Wikipedia, a prime number (or a prime) is a natural number greater than 1 that has no positive divisors other than 1 and itself.

Example

isPrime(5)
=> true
*/

function isPrime(num) {
  if(num <= 0 || num == 1){
    return false;
  }
  else{
    for(var i = 2; i < num; i++){
      if(num % i == 0){
        return false;
      }
    }
  }
  return true;
}