/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * inDomain.c
 *
 * Code generation for function 'inDomain'
 *
 */

/* Include files */
#include "inDomain.h"
#include "rt_nonfinite.h"

/* Function Definitions */
boolean_T inDomain(const real_T x[2], const real_T rayGd_domain[4], const real_T
                   margin[4])
{
  /*  INDOMAIN - given a column vector of positions x, return a list */
  /*  of logicals showing if they are in the domain (given by rayGd) */
  /*  or not */
  /*     */
  /* if ~exist('margin','var') */
  /*     margin = [0 0 0 0];    % margin in zmin zmaz rmin rmax (um) */
  /* end */
  /*  could write as zmin = (rayGd.domain+margin)(1) */
  return (x[1] < rayGd_domain[3] - margin[3]) && (x[1] > rayGd_domain[2] +
    margin[2]) && ((x[0] < rayGd_domain[1] - margin[1]) && (x[0] > rayGd_domain
    [0] + margin[0]));
}

/* End of code generation (inDomain.c) */
