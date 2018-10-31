#ifndef		DFFT_H
#define		DFFT_H
/* Notes from RFB:

Looks like the user-level routines are:

Real FFT

void __ogg_fdrffti(int n, double *wsave, int *ifac)
void __ogg_fdrfftf(int n, double *r, double *wsave, int *ifac)
void __ogg_fdrfftb(int n, double *r, double *wsave, int *ifac)

__ogg_fdrffti == initialization
__ogg_fdrfftf == forward transform
__ogg_fdrfftb == backward transform

Parameters are
n == length of sequence
r == sequence to be transformed (input)
== transformed sequence (output)
wsave == work array of length 2n (allocated by caller)
ifac == work array of length 15 (allocated by caller)

Cosine quarter-wave FFT

void __ogg_fdcosqi(int n, double *wsave, int *ifac)
void __ogg_fdcosqf(int n, double *x, double *wsave, int *ifac)
void __ogg_fdcosqb(int n, double *x, double *wsave, int *ifac)
*/

/********************************************************************
*                                                                  *
* THIS FILE IS PART OF THE OggSQUISH SOFTWARE CODEC SOURCE CODE.   *
*                                                                  *
********************************************************************

file: fft.c
function: Fast discrete Fourier and cosine transforms and inverses
author: Monty <xiphmont@mit.edu>
modifications by: Monty
last modification date: Jul 1 1996

********************************************************************/

/* These Fourier routines were originally based on the Fourier
routines of the same names from the NETLIB bihar and fftpack
fortran libraries developed by Paul N. Swarztrauber at the National
Center for Atmospheric Research in Boulder, CO USA.  They have been
reimplemented in C and optimized in a few ways for OggSquish. */

/* As the original fortran libraries are public domain, the C Fourier
routines in this file are hereby released to the public domain as
well.  The C routines here produce output exactly equivalent to the
original fortran routines.  Of particular interest are the facts
that (like the original fortran), these routines can work on
arbitrary length vectors that need not be powers of two in
length. */

#define STIN static
#include <math.h>
namespace algo{
static void drfti1(int n, double *wa, int *ifac);

void __ogg_fdrffti(int n, double *wsave, int *ifac);

#ifdef LBBBBBBBBBBBBB

void __ogg_fdcosqi(int n, double *wsave, int *ifac);

#endif

STIN void dradf2(int ido, int l1, double *cc, double *ch, double *wa1);

STIN void dradf4(int ido, int l1, double *cc, double *ch, double *wa1,
				 double *wa2, double *wa3);

STIN void dradfg(int ido, int ip, int l1, int idl1, double *cc, double *c1,
				 double *c2, double *ch, double *ch2, double *wa);

STIN void drftf1(int n, double *c, double *ch, double *wa, int *ifac);

void __ogg_fdrfftf(int n, double *r, double *wsave, int *ifac);

#ifdef LBBBBBBBBBBBBBBBB

STIN void dcsqf1(int n, double *x, double *w, double *xh, int *ifac);

void __ogg_fdcosqf(int n, double *x, double *wsave, int *ifac);

STIN void dradb2(int ido, int l1, double *cc, double *ch, double *wa1);

STIN void dradb3(int ido, int l1, double *cc, double *ch, double *wa1, double *wa2);

STIN void dradb4(int ido, int l1, double *cc, double *ch, double *wa1,
				 double *wa2, double *wa3);

STIN void dradbg(int ido, int ip, int l1, int idl1, double *cc, double *c1,
				 double *c2, double *ch, double *ch2, double *wa);

STIN void drftb1(int n, double *c, double *ch, double *wa, int *ifac);

void __ogg_fdrfftb(int n, double *r, double *wsave, int *ifac);

STIN void dcsqb1(int n, double *x, double *w, double *xh, int *ifac);

void __ogg_fdcosqb(int n, double *x, double *wsave, int *ifac);
#endif
}
#undef STIN


#endif
