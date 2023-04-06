nguồn tham khảo: https://viblo.asia/p/de-quy-duoi-tail-recursive-function-trong-scala-zoZVRg9LGmg5
def listLength2(list: List[_]): Int = {
  def listLength2Helper(list: List[_], len: Int): Int = {
    if (list == Nil) len
    else listLength2Helper(list.tail, len + 1)
  }
  listLength2Helper(list, 0)
}
