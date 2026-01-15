# Factorial using command line argument
n=$1
fact=1
while [ $n -gt 0 ]
do
fact=$((fact*n))
n=$((n-1))
done
echo $fact
