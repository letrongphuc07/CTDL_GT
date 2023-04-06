nguồn tham khảo: https://viblo.asia/p/de-quy-duoi-tail-recursive-function-trong-scala-zoZVRg9LGmg5
def sum(x, running_total=0):
  if x == 0
    return running_total
  else
    return sum(x - 1, running_total + x)
  end
end
