#include <list>
#ifndef _BASEPOOL_H_
#define _BASEPOOL_H_

template<typename T> class BasePool
{
private:
	int m_growth;
	int m_AvailableItemCountMaximum;
	int m_UnrecycledItemCount;
	std::list<T> m_AvailableItems;
public:
	BasePool(){}
	~BasePool(){}
	int getUnrecycledItemCount()
	{
		return this->m_UnrecycledItemCount;
	}

	int getAvailableItemCount()
	{
		return this->sizeof(m_AvailableItems);
	}

	int getAvailableItemCountMaximum()
	{
		return this->m_AvailableItemCountMaximum;
	}

	void batchAllocatePoolItems(int count)
	{
		const std::list<T> availableItems = this->m_AvailableItems;
		int allocationCount = this->m_AvailableItemCountMaximum - sizeof(availableItems);

		if(count < allocationCount)
		{
			allocationCount = count;
		}

		for(int i = allocationCount - 1; i >= 0; i--)
		{
			availableItems->insert(this->onHandleAllocatePoolItem());
		}
	}
protected:
	virtual T onAllocatePoolItem() = 0;

	virtual void onHandleRecycleItem(T item) = 0;

	T onHandleAllocatePoolItem()
	{
		return this->onAllocatePoolItem();
	}

	virtual void onHandleObtainItem(T pItem);
};
#endif // !_BASEPOOL_H
