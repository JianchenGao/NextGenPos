#pragma once
#include "GlobleDefine.h"
#include "ProductDecription.h"
#include <map>

class ProductCatalog
{
public:
	ProductCatalog() {
		ItemID id1 = ItemID(100);
		ItemID id2 = ItemID(200);
		Money price = Money(3);

		ProductDecription desc1 = ProductDecription(id1, price, "product 1");
		descriptions.insert(std::pair<ItemID, ProductDecription>(id1, desc1));

		ProductDecription desc2 = ProductDecription(id1, price, "product 1");
		descriptions.insert(std::pair<ItemID, ProductDecription>(id2, desc2));

	}

	ProductDecription getProductDecription(ItemID id)
	{
		//TODO
		return descriptions[id];
	}
private:
	std::map<ItemID, ProductDecription> descriptions;
};

