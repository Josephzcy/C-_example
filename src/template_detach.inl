/*
 * @Copyright: Copyright 2023 MINIEYE
 * @Author: zhangchengyu zhangchengyu@minieye.cc
 * @Date: 2023-08-03 23:15:44
 * @LastEditors: zhangchengyu zhangchengyu@minieye.cc
 * @LastEditTime: 2023-08-03 23:51:19
 * @fileName: Do not edit
 * @FilePath: /cpp_example/src/template_detach.inl
 * @Description:
 */

#include "template_detach.h"

template <typename T>
Node<T>::Node(const T& data) : _data(data), _next(nullptr) {}

template <typename T>
Node<T>::~Node() {
  if (_next) {
    delete _next;
    _next = nullptr;
  }
}

template <typename T>
const T& Node<T>::GetData() const {
  return _data;
}

template <typename T>
const Node<T>* const Node<T>::GetNext() const {
  return _next;
}