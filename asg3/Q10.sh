# DOS class time by day
read day
case $day in
Monday) echo "DOS: 10AM Room 101";;
Tuesday) echo "DOS: 11AM Room 102";;
Wednesday) echo "DOS: 9AM Room 103";;
Sunday) echo "Holiday";;
*) echo "No class on $day";;
esac
