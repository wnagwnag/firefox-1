/********************************************************************
 *                                                                  *
 * THIS FILE IS PART OF THE OggTheora SOFTWARE CODEC SOURCE CODE.   *
 * USE, DISTRIBUTION AND REPRODUCTION OF THIS LIBRARY SOURCE IS     *
 * GOVERNED BY A BSD-STYLE SOURCE LICENSE INCLUDED WITH THIS SOURCE *
 * IN 'COPYING'. PLEASE READ THESE TERMS BEFORE DISTRIBUTING.       *
 *                                                                  *
 * THE Theora SOURCE CODE IS COPYRIGHT (C) 2002-2007                *
 * by the Xiph.Org Foundation and contributors http://www.xiph.org/ *
 *                                                                  *
 ********************************************************************
 function:
    last mod: $Id$

 ********************************************************************/

#ifndef __CPU_H__
#define __CPU_H__

#define OC_CPU_X86_MMX      (1<<0)
#define OC_CPU_X86_3DNOW    (1<<1)
#define OC_CPU_X86_3DNOWEXT (1<<2)
#define OC_CPU_X86_MMXEXT   (1<<3)
#define OC_CPU_X86_SSE      (1<<4)
#define OC_CPU_X86_SSE2     (1<<5)
#define OC_CPU_X86_PNI      (1<<6)
#define OC_CPU_X86_SSSE3    (1<<7)
#define OC_CPU_X86_SSE4_1   (1<<8)
#define OC_CPU_X86_SSE4_2   (1<<9)
#define OC_CPU_X86_SSE4A    (1<<10)
#define OC_CPU_X86_SSE5     (1<<11)
#define OC_CPU_PPC_ALTIVEC  (1<<12)

#endif