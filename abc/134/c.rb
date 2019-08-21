# 1番目に大きい値が2個以上なら解はすべて1番目に大きくなる
# 1番目に大きい値が1個しかなければ、解は1番目に大きい値のみ2番目に大きかった値に置き換わる
N = gets.to_i
num_seq = []
N.times { num_seq << gets.to_i }
sorted_num_seq = num_seq.sort.reverse

results = num_seq.each_with_object([]) do |num, arr|
  max = (num == sorted_num_seq[0]) ? sorted_num_seq[1] : sorted_num_seq[0]
  arr << max
end

puts results
