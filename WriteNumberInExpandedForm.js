/*

Write Number in Expanded Form

You will be given a number and you will need to return it as a string in Expanded Form. For example:

Kata.ExpandedForm(12); # Should return "10 + 2"
Kata.ExpandedForm(42); # Should return "40 + 2"
Kata.ExpandedForm(70304); # Should return "70000 + 300 + 4"

NOTE: All numbers will be whole numbers greater than 0.

*/

function expandedForm(num) {
      let numStr = num.toString().split('');
      for(let i = 0 ; i < numStr.length; i++ )
          for(let j = numStr.length - i; j > 1; j--)
             numStr[i] += '0'; 
      return numStr.filter(value => !value.startsWith(0)).join(' + ')
}
