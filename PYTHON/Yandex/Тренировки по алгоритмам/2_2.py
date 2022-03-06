def findrightx(seq, x):
  ans = -1
  for i in range(len(seq)):
    if seq[i] == x:
      ans = i
  return ans
