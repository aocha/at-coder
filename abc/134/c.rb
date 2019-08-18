# 1番目に大きい値が2個以上なら解はすべて1番目に大きくなる
# 1番目に大きい値が1個しかなければ、解は1番目に大きい値のみ2番目に大きかった値に置き換わる
N = gets.to_i
max = { val: 0, cnt: 0 }
arr = []

N.times do
  input = gets.to_i
  arr << input

  if max[:val] == input
    max[:cnt] += 1
  elsif max[:val] < input
    max[:val] = input
    max[:cnt] = 0
    max[:cnt] += 1
  end
end

if max[:cnt] > 1
  puts Array.new(arr.size, max[:val])
else
  arr2 = Array.new(arr.size, max[:val])
  index = arr.index(max[:val])
  arr2[index] = arr.sort[-2]
  puts arr2
end
