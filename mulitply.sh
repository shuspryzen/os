echo "Enter the value of n:"
read n

for ((i=1;i<=10;++i))
do
echo $i " * " $n " = " $((i*n))
done
