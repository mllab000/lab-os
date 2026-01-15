# Count even and odd numbers
even=0
odd=0
for i in $(seq 1 10)
do
read n
if [ $((n%2)) -eq 0 ]; then even=$((even+1)); else odd=$((odd+1)); fi
done
echo "Even=$even Odd=$odd"
