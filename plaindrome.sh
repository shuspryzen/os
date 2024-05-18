read -p "Enter a string: " input

if [[ "$input" == "$(rev <<< "$input")" ]]; then
echo "The entered string '$input' is a palindrome."

else
echo "The entered string '$input' is not a palindrome."

fi