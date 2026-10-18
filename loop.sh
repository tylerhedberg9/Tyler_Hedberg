input_file="passwords.txt"
output_dir="passwords.file"

count=1




while IFS= read password

do

[[ -z "$password" ]]

echo "$password"
printf '%s\n' "$password" > "$output_dir/password_$count.txt"

((count++))


done < <(sort -f "$input_file")

echo "created $((count-1)) password file in $output_dir"

