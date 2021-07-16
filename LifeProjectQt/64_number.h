#pragma once

namespace Numbers
{
	class Number64
	{
	public:

		Number64();

		Number64(int number);
		Number64(unsigned number);

		Number64& operator= (const int number);
		Number64& operator= (const unsigned number);
		Number64& operator= (const Number64& number);

		Number64 operator+ (const Number64& second) const;
		Number64 operator- (const Number64& second) const;

		Number64 operator% (const int modulo) const;
		Number64 operator% (const unsigned modulo) const;
		Number64 operator% (const Number64& modulo) const;

		bool operator== (const Number64& second) const;
		bool operator!= (const Number64& second) const;

		bool operator> (const Number64& second) const;
		bool operator>= (const Number64& second) const;

		bool operator< (const Number64& second) const;
		bool operator<= (const Number64& second) const;

	private:

		unsigned short value;
	};
}