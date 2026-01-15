# Leap year check
year=${1:-$(date +%Y)}
if [ $((year%400)) -eq 0 ] || [ $((year%4)) -eq 0 -a $((year%100)) -ne 0 ]
then echo "Leap Year"
else echo "Not Leap Year"
fi
