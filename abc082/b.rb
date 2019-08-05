s = gets.chomp
t = gets.chomp

sd = s.chars.sort.join
td = t.chars.sort.reverse.join

puts sd < td ? 'Yes' : 'No'
