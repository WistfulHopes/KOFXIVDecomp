#pragma once

class AgMicroTransactionPlatformImplementation
{
public:
	AgMicroTransactionPlatformImplementation();
	~AgMicroTransactionPlatformImplementation();
	static long canPurchaseProducts();
	static std::vector<AgMicroTransactionProductDetail,std::allocator<AgMicroTransactionProductDetail> > requestProductDetails(const std::vector<AgString,std::allocator<AgString> >);
	static long purchaseProduct(AgString);
	static long isProductPurchased(AgString);
	static long restorePurchases();
};