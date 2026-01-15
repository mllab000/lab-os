# Average and grade of student in 3 subjects
read m1 m2 m3
avg=$(((m1+m2+m3)/3))

if [ $avg -ge 75 ]; then
echo "Average=$avg Distinction"
elif [ $avg -ge 60 ]; then
echo "Average=$avg First Class"
elif [ $avg -ge 50 ]; then
echo "Average=$avg Second Class"
elif [ $avg -ge 40 ]; then
echo "Average=$avg Third Class"
else
echo "Average=$avg Fail"
fi
