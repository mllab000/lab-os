# Allow semester exam or not
read mark att
if [ $mark -ge 20 -a $att -ge 75 ]; then echo "Allowed for Semester"
else echo "Not allowed"
fi
