# Compare two files and delete second if same
if cmp "$1" "$2" >/dev/null
then echo "Files $1 and $2 have same content"
rm "$2"
echo "So $2 is deleted"
else echo "Files $1 and $2 have different content"
fi
