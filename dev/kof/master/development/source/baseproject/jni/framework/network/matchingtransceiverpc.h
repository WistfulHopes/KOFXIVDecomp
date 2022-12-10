#pragma once

class Fw::NetTransceiver
{
public:
	static bool Startup();
	static bool Startup2();
	static void Shutdown();
	static void Shutdown2();
	static unsigned short GetMemberId(const char *);
	static bool GetOnlineId(unsigned long long, char *);
	static bool GetSignaling(char *);
	static void GetRttAndBandwidth(char *, Fw::MEMBER_RTTANDBANDWIDTH *);
	static void SetRtt(Fw::MEMBER_RTTANDBANDWIDTH *, unsigned long long, unsigned long, unsigned long);
	static void GetRtt(unsigned long long, unsigned long &, unsigned long &);
	static bool SendUdp(char *, long, long, void *, long, long *, bool, bool);
	static bool RecvUdp(void *, unsigned long long, CSteamID *, unsigned long *);
	static void AddPeer(CSteamID, unsigned short, unsigned long long, unsigned long, unsigned long, UserId *, CSteamID, bool);
	static void DelAllPeer();
	static void DelPeer(unsigned long long);
	static void UpdateConnectInfo(Fw::MEMBER_RTTANDBANDWIDTH *, char *, bool);
	static long getCntConectedUser();
	struct NetInfo;
private:
	static long setupUdpSocket(CSteamID *, unsigned short, unsigned short, const char *);
	static bool setupUdpSocket(Fw::NetTransceiver::NetInfo *);
	static void releaseUdpSocket();
	static bool m_IsStartupFlag; // 0xFFFFFFFFFFFFFFFF
	static bool m_IsStartupFlag2; // 0xFFFFFFFFFFFFFFFF
	static const char * m_SocketName[2]; // 0xFFFFFFFFFFFFFFFF
	static Fw::cMutex m_SendMutex; // 0xFFFFFFFFFFFFFFFF
	static std::vector<Fw::TUdpP2pInfo,std::allocator<Fw::TUdpP2pInfo> > m_UserInfo; // 0xFFFFFFFFFFFFFFFF
};
struct Fw::NetTransceiver::NetInfo
{
	CSteamID * localAddr; // 0x0
};
class std::vector<Fw::TUdpP2pInfo,std::allocator<Fw::TUdpP2pInfo> > :
	std::_Vector_alloc<std::_Vec_base_types<Fw::TUdpP2pInfo,std::allocator<Fw::TUdpP2pInfo> > >
{
	class _Myt;
	class _Mybase;
	class allocator_type;
	struct _Alty;
	struct value_type;
	typedef unsigned long long size_type;
	typedef long long difference_type;
	typedef Fw::TUdpP2pInfo pointer;
	typedef const Fw::TUdpP2pInfo const_pointer;
	typedef Fw::TUdpP2pInfo reference;
	typedef const Fw::TUdpP2pInfo const_reference;
	class iterator;
	class const_iterator;
	class reverse_iterator;
	class const_reverse_iterator;
public:
	vector<Fw::TUdpP2pInfo,std::allocator<Fw::TUdpP2pInfo> >(std::initializer_list<Fw::TUdpP2pInfo>, const std::allocator<Fw::TUdpP2pInfo> &);
	vector<Fw::TUdpP2pInfo,std::allocator<Fw::TUdpP2pInfo> >(std::vector<Fw::TUdpP2pInfo,std::allocator<Fw::TUdpP2pInfo> > &, const std::allocator<Fw::TUdpP2pInfo> &);
	vector<Fw::TUdpP2pInfo,std::allocator<Fw::TUdpP2pInfo> >(std::vector<Fw::TUdpP2pInfo,std::allocator<Fw::TUdpP2pInfo> > &);
	vector<Fw::TUdpP2pInfo,std::allocator<Fw::TUdpP2pInfo> >(const std::vector<Fw::TUdpP2pInfo,std::allocator<Fw::TUdpP2pInfo> > &, const std::allocator<Fw::TUdpP2pInfo> &);
	vector<Fw::TUdpP2pInfo,std::allocator<Fw::TUdpP2pInfo> >(const std::vector<Fw::TUdpP2pInfo,std::allocator<Fw::TUdpP2pInfo> > &);
	vector<Fw::TUdpP2pInfo,std::allocator<Fw::TUdpP2pInfo> >(unsigned long long, const Fw::TUdpP2pInfo &, const std::allocator<Fw::TUdpP2pInfo> &);
	vector<Fw::TUdpP2pInfo,std::allocator<Fw::TUdpP2pInfo> >(unsigned long long, const Fw::TUdpP2pInfo &);
	vector<Fw::TUdpP2pInfo,std::allocator<Fw::TUdpP2pInfo> >(unsigned long long);
	vector<Fw::TUdpP2pInfo,std::allocator<Fw::TUdpP2pInfo> >(const std::allocator<Fw::TUdpP2pInfo> &);
	vector<Fw::TUdpP2pInfo,std::allocator<Fw::TUdpP2pInfo> >();
	void _Construct_n(unsigned long long, const Fw::TUdpP2pInfo *);
	std::vector<Fw::TUdpP2pInfo,std::allocator<Fw::TUdpP2pInfo> > & operator=(const std::vector<Fw::TUdpP2pInfo,std::allocator<Fw::TUdpP2pInfo> > &);
	std::vector<Fw::TUdpP2pInfo,std::allocator<Fw::TUdpP2pInfo> > & operator=(std::initializer_list<Fw::TUdpP2pInfo>);
	std::vector<Fw::TUdpP2pInfo,std::allocator<Fw::TUdpP2pInfo> > & operator=(std::vector<Fw::TUdpP2pInfo,std::allocator<Fw::TUdpP2pInfo> > &);
	void _Assign_rv(std::vector<Fw::TUdpP2pInfo,std::allocator<Fw::TUdpP2pInfo> > &);
	void _Assign_rv(std::vector<Fw::TUdpP2pInfo,std::allocator<Fw::TUdpP2pInfo> > &, std::integral_constant<bool,0>);
	void _Assign_rv(std::vector<Fw::TUdpP2pInfo,std::allocator<Fw::TUdpP2pInfo> > &, std::integral_constant<bool,1>);
	void push_back(const Fw::TUdpP2pInfo &);
	void push_back(Fw::TUdpP2pInfo &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Fw::TUdpP2pInfo> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Fw::TUdpP2pInfo> > >, unsigned long long, const Fw::TUdpP2pInfo &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Fw::TUdpP2pInfo> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Fw::TUdpP2pInfo> > >, const Fw::TUdpP2pInfo &);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Fw::TUdpP2pInfo> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Fw::TUdpP2pInfo> > >, std::initializer_list<Fw::TUdpP2pInfo>);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Fw::TUdpP2pInfo> > > insert(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Fw::TUdpP2pInfo> > >, Fw::TUdpP2pInfo &);
	void assign(unsigned long long, const Fw::TUdpP2pInfo &);
	void assign(std::initializer_list<Fw::TUdpP2pInfo>);
	~vector<Fw::TUdpP2pInfo,std::allocator<Fw::TUdpP2pInfo> >();
	void reserve(unsigned long long);
	unsigned long long capacity();
	unsigned long long _Unused_capacity();
	unsigned long long _Has_unused_capacity();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Fw::TUdpP2pInfo> > > begin();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Fw::TUdpP2pInfo> > > begin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Fw::TUdpP2pInfo> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Fw::TUdpP2pInfo> > > end();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Fw::TUdpP2pInfo> > > _Make_iter(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Fw::TUdpP2pInfo> > >);
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Fw::TUdpP2pInfo> > > > rbegin();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Fw::TUdpP2pInfo> > > > rbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Fw::TUdpP2pInfo> > > > rend();
	std::reverse_iterator<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Fw::TUdpP2pInfo> > > > rend();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Fw::TUdpP2pInfo> > > cbegin();
	std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Fw::TUdpP2pInfo> > > cend();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Fw::TUdpP2pInfo> > > > crbegin();
	std::reverse_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Fw::TUdpP2pInfo> > > > crend();
	void shrink_to_fit();
	void resize(unsigned long long, const Fw::TUdpP2pInfo &);
	void resize(unsigned long long);
	unsigned long long size();
	unsigned long long max_size();
	bool empty();
	std::allocator<Fw::TUdpP2pInfo> get_allocator();
	Fw::TUdpP2pInfo & at(unsigned long long);
	const Fw::TUdpP2pInfo & at(unsigned long long);
	Fw::TUdpP2pInfo & operator[](unsigned long long);
	const Fw::TUdpP2pInfo & operator[](unsigned long long);
	const Fw::TUdpP2pInfo * data();
	Fw::TUdpP2pInfo * data();
	const Fw::TUdpP2pInfo & front();
	Fw::TUdpP2pInfo & front();
	const Fw::TUdpP2pInfo & back();
	Fw::TUdpP2pInfo & back();
	void pop_back();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Fw::TUdpP2pInfo> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Fw::TUdpP2pInfo> > >, std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Fw::TUdpP2pInfo> > >);
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Fw::TUdpP2pInfo> > > erase(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Fw::TUdpP2pInfo> > >);
	void _Pop_back_n(unsigned long long);
	void clear();
	void swap(std::vector<Fw::TUdpP2pInfo,std::allocator<Fw::TUdpP2pInfo> > &);
protected:
	bool _Buy(unsigned long long);
	void _Destroy(Fw::TUdpP2pInfo *, Fw::TUdpP2pInfo *);
	unsigned long long _Grow_to(unsigned long long);
	bool _Inside(const Fw::TUdpP2pInfo *);
	void _Reallocate(unsigned long long);
	void _Reserve(unsigned long long);
	void _Tidy();
	std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Fw::TUdpP2pInfo> > > _Insert_n(std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<Fw::TUdpP2pInfo> > >, unsigned long long, const Fw::TUdpP2pInfo &);
	Fw::TUdpP2pInfo * _Ufill(Fw::TUdpP2pInfo *, unsigned long long, const Fw::TUdpP2pInfo *);
	void _Xlen();
	void _Xran();
	void _Orphan_range(Fw::TUdpP2pInfo *, Fw::TUdpP2pInfo *);
};