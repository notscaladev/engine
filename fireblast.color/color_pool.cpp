#include "../fireblast.util/base_pool.h"
#include "color.h"

class ColorPool : public BasePool<Color>
{
public:
	Color ColorPool::onAllocatePoolItem()
	{
	}
};