A, B = gets.split.map(&:to_i)
outlet = 1
ans = 0

# 差込口がB以上になるまで
while outlet < B do
  # 差込口を1口使ってA口増やす
  outlet += (A - 1)
  # 電源タップを増やす
  ans += 1
end

puts ans
