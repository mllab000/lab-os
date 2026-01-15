# Overtime pay of 10 employees
rate=12
for i in $(seq 1 10)
do
read hours
if [ $hours -gt 40 ]; then
ot=$((hours-40))
pay=$((ot*rate))
else
pay=0
fi
echo "Employee $i Overtime Pay = Rs.$pay"
done
