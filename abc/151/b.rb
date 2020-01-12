n, k, m = gets.split.map(&:to_i) # n科目、k点、平均m点以上
a = gets.split.map(&:to_i).take(n - 1)

# 今の合計点
sum = a.inject(:+)

# 平均mに到達するために必要な合計点x
x = m * n

# 平均mに到達するために必要な最低点数y
y = x - sum

if y <= 0
  puts 0
elsif y <= k
  puts y
else
  puts -1
end
