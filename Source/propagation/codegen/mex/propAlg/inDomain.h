/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * inDomain.h
 *
 * Code generation for function 'inDomain'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include "omp.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
boolean_T inDomain(const real_T x[2], const real_T rayGd_domain[4], const real_T
                   margin[4]);

/* End of code generation (inDomain.h) */
