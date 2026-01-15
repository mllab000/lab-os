# Check whether a number is prime (command line argument)
n=$1
flag=1

if [ $n -le 1 ]; then
flag=0
fi

for i in $(seq 2 $(($n/2)))
do
if [ $((n%i)) -eq 0 ]; then
flag=0
break
fi
done

if [ $flag -eq 1 ]; then
echo "Prime"
else
echo "Not Prime"
fi
