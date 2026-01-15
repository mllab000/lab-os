# Student eligibility check
read internal att external

fail=0

if [ $internal -lt 16 ]; then
echo "Internal marks are insufficient."
fail=1
fi

if [ $att -lt 40 ]; then
echo "Attendance percentage is insufficient."
fail=1
fi

if [ $external -lt 24 ]; then
echo "External marks are insufficient."
fail=1
fi

if [ $fail -eq 0 ]; then
echo "Allowed for Next Semester"
fi
