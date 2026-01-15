# Student division calculation
sum=0
for i in 1 2 3 4 5
do
read m
sum=$((sum+m))
done

per=$((sum/5))

if [ $per -ge 60 ]; then
echo "First Division"
elif [ $per -ge 50 ]; then
echo "Second Division"
elif [ $per -ge 40 ]; then
echo "Third Division"
else
echo "Fail"
fi
