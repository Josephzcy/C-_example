/***
 * @Copyright: Copyright 2023 MINIEYE
 * @Author: zhangchengyu zhangchengyu@minieye.cc
 * @Date: 2023-08-03 23:15:51
 * @LastEditors: zhangchengyu zhangchengyu@minieye.cc
 * @LastEditTime: 2023-08-03 23:50:31
 * @fileName: Do not edit
 * @FilePath: /cpp_example/include/template_detach.h
 * @Description:
 */

template <typename T>
class Node {
 public:
  Node(const T& data);
  ~Node();
  const T& GetData() const;
  const Node* const GetNext() const;

 private:
  T _data;
  Node* _next;
};

#include "template_detach.inl"  // 重点关注点