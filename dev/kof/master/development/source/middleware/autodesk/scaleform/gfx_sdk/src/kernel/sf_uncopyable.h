#pragma once

class Unassignable
{
private:
	Unassignable & operator=(const Unassignable &);
};
class Uncopyable
{
private:
	Uncopyable(const Uncopyable &);
protected:
	Uncopyable();
};