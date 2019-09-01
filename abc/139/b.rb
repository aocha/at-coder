A, B = gets.split.map(&:to_i)
cnt = 0

if B == 1
  puts 0
elsif A >= B
  puts 1
else
  loop do
    if (A - 1) * cnt + A >= B
      cnt += 1
      break
    end

    cnt += 1
  end

  puts cnt
end
