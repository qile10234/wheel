#pragma once

typedef int Rank;
#define ListNodePosi(T) ListNode<T>*
template <typename T>
struct ListNode
{
	// 成员
	T data; ListNodePosi(T) pred; ListNodePosi(T) succ;// 数值  前驱 后继
	ListNode() {}
	ListNode(T e, ListNodePosi(T) p = NULL, ListNodePosi(T) s = NULL) :data(e), pred(p), succ(s) {}
    // ops
	ListNodePosi(T) insertAdPred(T const& e);// 当前节点前插入新节点
	ListNodePosi(T) insertAdSucc(T const& e);// 当前节点后插入新节点
};


template <typename T>  class List
{
private:
	int _size; ListNodePosi(T) header; ListNodePosi(T) trailer;
protected:
	void init();//列表创建时的初始化
public:
	List();
	~List();
	// 只读接口
	ListNodePosi(T) first { return header->succ; }
	ListNodePosi(T) last(){ return trailer->pred;}
	// 可写接口
	ListNodePosi(T) insertAsFirst(T const& e);
	ListNodePosi(T) insertAsLast(T const& e);
};

