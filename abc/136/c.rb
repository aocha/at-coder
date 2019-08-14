# ----- コンテスト中の提出 -----
# n = gets.to_i
# heights = gets.split.map(&:to_i)

# max_height = heights[0]
# result = 'Yes'

# (n - 1).times do |i|
#   next_stair_height = heights[i + 1]

#   if max_height <= next_stair_height || max_height - 1 <= next_stair_height
#     max_height = [max_height, next_stair_height].max
#     result = 'Yes'
#   else
#     result = 'No'
#     break
#   end
# end

# puts result



# ----- 貪欲、Greedy -----
# 左から右へ向かって単調非減少するための部分最適解は以下の通りと考えられる
# 1. 次の高さを-1しても問題なければ-1
# 2. 次の高さを-1するとダメならそのまま
# 3. 1も2もダメなら単調非減少にはできない
N = gets.to_i
Hn = gets.split.map(&:to_i)
res = 'Yes'
prev = -999

N.times do |i|
  h = Hn[i]

  if prev <= h - 1
    prev = h - 1
  elsif prev <= h
    prev = h
  else
    res = 'No'
  end
end

puts res
