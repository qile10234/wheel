#pragma once

typedef int Rank;
#define ListNodePosi(T) ListNode<T>*
template <typename T>
struct ListNode
{
	// ��Ա
	T data; ListNodePosi(T) pred; ListNodePosi(T) succ;// ��ֵ  ǰ�� ���
	ListNode() {}
	ListNode(T e, ListNodePosi(T) p = NULL, ListNodePosi(T) s = NULL) :data(e), pred(p), succ(s) {}
    // ops
	ListNodePosi(T) insertAdPred(T const& e);// ��ǰ�ڵ�ǰ�����½ڵ�
	ListNodePosi(T) insertAdSucc(T const& e);// ��ǰ�ڵ������½ڵ�
};


template <typename T>  class List
{
private:
	int _size; ListNodePosi(T) header; ListNodePosi(T) trailer;
protected:
	void init();//�б���ʱ�ĳ�ʼ��
public:
	List();
	~List();
	// ֻ���ӿ�
	ListNodePosi(T) first { return header->succ; }
	ListNodePosi(T) last(){ return trailer->pred;}
	// ��д�ӿ�
	ListNodePosi(T) insertAsFirst(T const& e);
	ListNodePosi(T) insertAsLast(T const& e);
};

