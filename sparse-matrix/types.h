//  
// Created  : 10.05.2016
// Author   : Veyroter
// � AshyCat, 2016 
//  
#pragma once
#define BOOST_MSVC_STD_ITERATOR
#define IC inline
#define ICF __forceinline

#include <exception>

#ifdef _DEBUG
#	define ASSERT( x )      if( !( x ) )      { throw std::exception("AssertException : " ## #x); }
#else 
#	define ASSERT(x)
#endif

typedef	unsigned	char		u8;
typedef	unsigned	short		u16;
typedef	unsigned	int			u32;
typedef	unsigned	long long	u64;

typedef	signed		char		s8;
typedef	signed		short		s16;
typedef	signed		int			s32;
typedef	signed		long long	s64;

typedef	float					f32;
typedef	double					f64;

typedef	char*					pstr;
typedef	char const*				pcstr;

typedef	unsigned char*			pbyte;
typedef	unsigned char const*	pcbyte;

typedef	void*					pvoid;
typedef	void const*				pcvoid;

// OUR NEW C++ FEATURES

#define __ret(DATA)             { return DATA; }
#define __new(TYPE, SIZE)       ( TYPE * ) malloc( SIZE * sizeof( TYPE ) )
#define __delete(POINTER)       free( POINTER )