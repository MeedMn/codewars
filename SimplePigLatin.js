/*

Move the first letter of each word to the end of it, then add "ay" to the end of the word. Leave punctuation marks untouched.
Examples

Kata.PigIt("Pig latin is cool"); // igPay atinlay siay oolcay
Kata.PigIt("Hello world !");     // elloHay orldway !

*/

function pigIt(str){
  return str.split(' ').map(x =>/[a-zA-Z]+/.test(x) ? x
         .slice(1)+x[0]+'ay' : x).join(' ');
}
