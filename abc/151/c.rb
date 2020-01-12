# N問の問題、M回の提出、i回目の提出はPi番目の問題への提出で結果はSi('AC' or 'WA')
# 正答数は'AC'を1回以上出した問題の数、ペナルティ数は'AC'を出すまでに出した'WA'の総和
# 正答数とペナルティ数を答える

n, m = gets.split.map(&:to_i)
submissions = Hash.new { |h, k| h[k] = [] }
ac = 0
wa = 0

m.times do
  pi, s = gets.split

  submissions[pi.to_i] << s.chomp
end

submissions.each do |_pi, s_ary|
  # ある問題piに対してAC数が0ならスキップ
  next if s_ary.count('AC').zero?

  # 初めてACしたのが何回目の提出か
  first_ac_idx = s_ary.index('AC')

  ac += 1
  wa += first_ac_idx
end

puts "#{ac} #{wa}"
