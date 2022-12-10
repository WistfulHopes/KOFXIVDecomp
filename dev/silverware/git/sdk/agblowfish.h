#pragma once

class AgBlowfish :
	AgReferencedObject
{
public:
	AgBlowfish(AgBlowfish &);
	AgBlowfish(const AgBlowfish &);
	AgBlowfish(const unsigned char *, long);
	unsigned long Encrypt(unsigned char *, unsigned long);
	unsigned long Decrypt(unsigned char *, unsigned long);
private:
	void SetKey(const unsigned char *, long);
	void EncryptBlock(unsigned long *, unsigned long *);
	void DecryptBlock(unsigned long *, unsigned long *);
	unsigned long Feistel(unsigned long);
	unsigned long m_pary_[18]; // 0x8
	unsigned long m_sbox_[256][4]; // 0x50
public:
	AgBlowfish & operator=(AgBlowfish &);
	AgBlowfish & operator=(const AgBlowfish &);
};