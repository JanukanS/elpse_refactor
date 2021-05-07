/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * propAlg.c
 *
 * Code generation for function 'propAlg'
 *
 */

/* Include files */
#include "propAlg.h"
#include "inDomain.h"
#include "ode45.h"
#include "propAlg_data.h"
#include "propAlg_emxutil.h"
#include "propAlg_types.h"
#include "rectLocate.h"
#include "rt_nonfinite.h"
#include "blas.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 45,    /* lineNo */
  "propAlg",                           /* fcnName */
  "/home/janukan/Documents/research_s21/elpse_refactor/Source/propagation/propAlg.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 48,  /* lineNo */
  "propAlg",                           /* fcnName */
  "/home/janukan/Documents/research_s21/elpse_refactor/Source/propagation/propAlg.m"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 52,  /* lineNo */
  "propAlg",                           /* fcnName */
  "/home/janukan/Documents/research_s21/elpse_refactor/Source/propagation/propAlg.m"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 69,  /* lineNo */
  "propAlg",                           /* fcnName */
  "/home/janukan/Documents/research_s21/elpse_refactor/Source/propagation/propAlg.m"/* pathName */
};

static emlrtRSInfo r_emlrtRSI = { 45,  /* lineNo */
  "@(t,y) odeEmRayFun(t,y,omega_ps, ...\n                                                rayGd,margin,cnstVar)",/* fcnName */
  "/home/janukan/Documents/research_s21/elpse_refactor/Source/propagation/propAlg.m"/* pathName */
};

static emlrtRSInfo t_emlrtRSI = { 46,  /* lineNo */
  "odeEmRayFun",                       /* fcnName */
  "/home/janukan/Documents/research_s21/elpse_refactor/Source/propagation/odeEmRayFun.m"/* pathName */
};

static emlrtRSInfo u_emlrtRSI = { 50,  /* lineNo */
  "odeEmRayFun",                       /* fcnName */
  "/home/janukan/Documents/research_s21/elpse_refactor/Source/propagation/odeEmRayFun.m"/* pathName */
};

static emlrtRSInfo w_emlrtRSI = { 55,  /* lineNo */
  "odeEmRayFun",                       /* fcnName */
  "/home/janukan/Documents/research_s21/elpse_refactor/Source/propagation/odeEmRayFun.m"/* pathName */
};

static emlrtRSInfo x_emlrtRSI = { 59,  /* lineNo */
  "odeEmRayFun",                       /* fcnName */
  "/home/janukan/Documents/research_s21/elpse_refactor/Source/propagation/odeEmRayFun.m"/* pathName */
};

static emlrtRSInfo fb_emlrtRSI = { 48, /* lineNo */
  "@(t,y) odeLwRayFun(t,y,omega_ps, ...\n                                                rayGd,margin,cnstVar)",/* fcnName */
  "/home/janukan/Documents/research_s21/elpse_refactor/Source/propagation/propAlg.m"/* pathName */
};

static emlrtRSInfo gb_emlrtRSI = { 28, /* lineNo */
  "odeLwRayFun",                       /* fcnName */
  "/home/janukan/Documents/research_s21/elpse_refactor/Source/propagation/odeLwRayFun.m"/* pathName */
};

static emlrtRSInfo hb_emlrtRSI = { 33, /* lineNo */
  "odeLwRayFun",                       /* fcnName */
  "/home/janukan/Documents/research_s21/elpse_refactor/Source/propagation/odeLwRayFun.m"/* pathName */
};

static emlrtRSInfo ib_emlrtRSI = { 35, /* lineNo */
  "odeLwRayFun",                       /* fcnName */
  "/home/janukan/Documents/research_s21/elpse_refactor/Source/propagation/odeLwRayFun.m"/* pathName */
};

static emlrtRSInfo jb_emlrtRSI = { 42, /* lineNo */
  "odeLwRayFun",                       /* fcnName */
  "/home/janukan/Documents/research_s21/elpse_refactor/Source/propagation/odeLwRayFun.m"/* pathName */
};

static emlrtRSInfo kb_emlrtRSI = { 45, /* lineNo */
  "odeLwRayFun",                       /* fcnName */
  "/home/janukan/Documents/research_s21/elpse_refactor/Source/propagation/odeLwRayFun.m"/* pathName */
};

static emlrtRSInfo lb_emlrtRSI = { 50, /* lineNo */
  "odeLwRayFun",                       /* fcnName */
  "/home/janukan/Documents/research_s21/elpse_refactor/Source/propagation/odeLwRayFun.m"/* pathName */
};

static emlrtRSInfo mb_emlrtRSI = { 51, /* lineNo */
  "odeLwRayFun",                       /* fcnName */
  "/home/janukan/Documents/research_s21/elpse_refactor/Source/propagation/odeLwRayFun.m"/* pathName */
};

static emlrtRSInfo nb_emlrtRSI = { 56, /* lineNo */
  "odeLwRayFun",                       /* fcnName */
  "/home/janukan/Documents/research_s21/elpse_refactor/Source/propagation/odeLwRayFun.m"/* pathName */
};

static emlrtRSInfo ob_emlrtRSI = { 59, /* lineNo */
  "odeLwRayFun",                       /* fcnName */
  "/home/janukan/Documents/research_s21/elpse_refactor/Source/propagation/odeLwRayFun.m"/* pathName */
};

static emlrtRSInfo pb_emlrtRSI = { 64, /* lineNo */
  "odeLwRayFun",                       /* fcnName */
  "/home/janukan/Documents/research_s21/elpse_refactor/Source/propagation/odeLwRayFun.m"/* pathName */
};

static emlrtRSInfo qb_emlrtRSI = { 67, /* lineNo */
  "odeLwRayFun",                       /* fcnName */
  "/home/janukan/Documents/research_s21/elpse_refactor/Source/propagation/odeLwRayFun.m"/* pathName */
};

static emlrtRSInfo rb_emlrtRSI = { 73, /* lineNo */
  "odeLwRayFun",                       /* fcnName */
  "/home/janukan/Documents/research_s21/elpse_refactor/Source/propagation/odeLwRayFun.m"/* pathName */
};

static emlrtRSInfo sb_emlrtRSI = { 27, /* lineNo */
  "cat",                               /* fcnName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/eml/+coder/+internal/cat.m"/* pathName */
};

static emlrtRSInfo tb_emlrtRSI = { 102,/* lineNo */
  "cat_impl",                          /* fcnName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/eml/+coder/+internal/cat.m"/* pathName */
};

static emlrtRTEInfo d_emlrtRTEI = { 283,/* lineNo */
  27,                                  /* colNo */
  "check_non_axis_size",               /* fName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/eml/+coder/+internal/cat.m"/* pName */
};

static emlrtBCInfo emlrtBCI = { -1,    /* iFirst */
  -1,                                  /* iLast */
  68,                                  /* lineNo */
  36,                                  /* colNo */
  "rayBundle_trajs",                   /* aName */
  "propAlg",                           /* fName */
  "/home/janukan/Documents/research_s21/elpse_refactor/Source/propagation/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo b_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  33,                                  /* colNo */
  "rayBundle_trajs",                   /* aName */
  "propAlg",                           /* fName */
  "/home/janukan/Documents/research_s21/elpse_refactor/Source/propagation/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  68,                                  /* lineNo */
  46,                                  /* colNo */
  "rayBundle_trajs{rayIdx}",           /* aName */
  "propAlg",                           /* fName */
  "/home/janukan/Documents/research_s21/elpse_refactor/Source/propagation/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo d_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  68,                                  /* lineNo */
  44,                                  /* colNo */
  "rayBundle_trajs{rayIdx}",           /* aName */
  "propAlg",                           /* fName */
  "/home/janukan/Documents/research_s21/elpse_refactor/Source/propagation/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo e_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  57,                                  /* lineNo */
  37,                                  /* colNo */
  "yr",                                /* aName */
  "propAlg",                           /* fName */
  "/home/janukan/Documents/research_s21/elpse_refactor/Source/propagation/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo f_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  26,                                  /* lineNo */
  41,                                  /* colNo */
  "rayBundle_trajs{rayIdx}",           /* aName */
  "propAlg",                           /* fName */
  "/home/janukan/Documents/research_s21/elpse_refactor/Source/propagation/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo e_emlrtRTEI = { 19,/* lineNo */
  21,                                  /* colNo */
  "propAlg",                           /* fName */
  "/home/janukan/Documents/research_s21/elpse_refactor/Source/propagation/propAlg.m"/* pName */
};

static emlrtDCInfo emlrtDCI = { 19,    /* lineNo */
  23,                                  /* colNo */
  "propAlg",                           /* fName */
  "/home/janukan/Documents/research_s21/elpse_refactor/Source/propagation/propAlg.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo g_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  21,                                  /* lineNo */
  9,                                   /* colNo */
  "rayBundle_halt",                    /* aName */
  "propAlg",                           /* fName */
  "/home/janukan/Documents/research_s21/elpse_refactor/Source/propagation/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo h_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  34,                                  /* lineNo */
  24,                                  /* colNo */
  "rayBundle_frequency",               /* aName */
  "propAlg",                           /* fName */
  "/home/janukan/Documents/research_s21/elpse_refactor/Source/propagation/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo i_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  59,                                  /* lineNo */
  14,                                  /* colNo */
  "rayBundle_halt",                    /* aName */
  "propAlg",                           /* fName */
  "/home/janukan/Documents/research_s21/elpse_refactor/Source/propagation/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo j_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  70,                                  /* lineNo */
  10,                                  /* colNo */
  "rayBundle_trajs",                   /* aName */
  "propAlg",                           /* fName */
  "/home/janukan/Documents/research_s21/elpse_refactor/Source/propagation/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo k_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  70,                                  /* lineNo */
  46,                                  /* colNo */
  "newPath",                           /* aName */
  "propAlg",                           /* fName */
  "/home/janukan/Documents/research_s21/elpse_refactor/Source/propagation/propAlg.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo l_emlrtBCI = { -1,  /* iFirst */
  -1,                                  /* iLast */
  6,                                   /* lineNo */
  36,                                  /* colNo */
  "grid",                              /* aName */
  "triInterp",                         /* fName */
  "/home/janukan/Documents/research_s21/elpse_refactor/Source/interpolation/triInterp.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRTEInfo j_emlrtRTEI = { 13,/* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/lib/matlab/elfun/sqrt.m"/* pName */
};

static emlrtRTEInfo k_emlrtRTEI = { 79,/* lineNo */
  2,                                   /* colNo */
  "propAlg",                           /* fName */
  "/home/janukan/Documents/research_s21/elpse_refactor/Source/propagation/propAlg.m"/* pName */
};

static emlrtRTEInfo l_emlrtRTEI = { 21,/* lineNo */
  13,                                  /* colNo */
  "function_handle",                   /* fName */
  "/usr/local/MATLAB/R2020b/toolbox/eml/eml/+coder/+internal/function_handle.m"/* pName */
};

static emlrtRTEInfo m_emlrtRTEI = { 52,/* lineNo */
  10,                                  /* colNo */
  "propAlg",                           /* fName */
  "/home/janukan/Documents/research_s21/elpse_refactor/Source/propagation/propAlg.m"/* pName */
};

static emlrtRTEInfo n_emlrtRTEI = { 68,/* lineNo */
  20,                                  /* colNo */
  "propAlg",                           /* fName */
  "/home/janukan/Documents/research_s21/elpse_refactor/Source/propagation/propAlg.m"/* pName */
};

static emlrtRTEInfo o_emlrtRTEI = { 69,/* lineNo */
  10,                                  /* colNo */
  "propAlg",                           /* fName */
  "/home/janukan/Documents/research_s21/elpse_refactor/Source/propagation/propAlg.m"/* pName */
};

static emlrtRTEInfo p_emlrtRTEI = { 70,/* lineNo */
  10,                                  /* colNo */
  "propAlg",                           /* fName */
  "/home/janukan/Documents/research_s21/elpse_refactor/Source/propagation/propAlg.m"/* pName */
};

static emlrtRTEInfo q_emlrtRTEI = { 45,/* lineNo */
  18,                                  /* colNo */
  "propAlg",                           /* fName */
  "/home/janukan/Documents/research_s21/elpse_refactor/Source/propagation/propAlg.m"/* pName */
};

static emlrtRTEInfo r_emlrtRTEI = { 45,/* lineNo */
  15,                                  /* colNo */
  "propAlg",                           /* fName */
  "/home/janukan/Documents/research_s21/elpse_refactor/Source/propagation/propAlg.m"/* pName */
};

static emlrtRTEInfo s_emlrtRTEI = { 68,/* lineNo */
  10,                                  /* colNo */
  "propAlg",                           /* fName */
  "/home/janukan/Documents/research_s21/elpse_refactor/Source/propagation/propAlg.m"/* pName */
};

static emlrtRTEInfo t_emlrtRTEI = { 48,/* lineNo */
  30,                                  /* colNo */
  "propAlg",                           /* fName */
  "/home/janukan/Documents/research_s21/elpse_refactor/Source/propagation/propAlg.m"/* pName */
};

/* Function Definitions */
void anon(const emlrtStack *sp, real_T omega_ps, const emxArray_real_T
          *rayGd_zVal, const emxArray_real_T *rayGd_rVal, const emxArray_real_T *
          rayGd_gridNe, const emxArray_real_T *rayGd_gridDLogNedz, const
          emxArray_real_T *rayGd_gridDLogNedr, const real_T rayGd_domain[4],
          const real_T margin[4], const real_T cnstVar[6], const real_T y[4],
          real_T varargout_1[4])
{
  emlrtStack b_st;
  emlrtStack st;
  real_T inds[8];
  real_T weights[4];
  real_T a;
  real_T kVac;
  real_T lambdaum_tmp;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &r_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;

  /*  RHS for our ray ode for electromagnetic waves */
  /*  */
  /*      t        - time in ps */
  /*      y        - phase space point [z r kz kr] ('?) */
  /*      omega_ps - EM wave frequency in 1/ps */
  /*      rayGd    - grid struct  */
  /*   output dydt is a column vector: */
  /*   dydt = [dz/dt,dr/dt,dk_z/dt,dk_r/dt]' */
  /*  */
  /*  */
  /*  Added a check to ensure that the position y(1:2) where */
  /*  the RHS is to be evaluated is inside the domain where */
  /*  the grid data is defined. Attempting to evaluate outside */
  /*  of the domain will give "triangulation" errors, i.e., */
  /*  the pointLocation() function will give an error. */
  /*  */
  /*  If the point is outside the domain the function will */
  /*  return zero for dydt in the second and third positions */
  /*  */
  /*  The same needs to be done for odeLwRayFun but I haven't */
  /*  implemented it yet. */
  /*  */
  /*  (JFM 21 July, 2020) */
  /* .c; */
  /*  need these */
  lambdaum_tmp = muDoubleScalarAbs(omega_ps);
  a = cnstVar[3] * cnstVar[1] / lambdaum_tmp;

  /*  vac wavelength microns */
  kVac = lambdaum_tmp / cnstVar[1];

  /*  vacuum wavenumber 1/um */
  /*  crit density in 1/cm^3 */
  /*  current position at phase space point y */
  /*  current ray wavevector at phase space point y */
  /* goodPt = 1; */
  if (inDomain(*(real_T (*)[2])&y[0], rayGd_domain, margin)) {
    /*  interpolation for current position */
    /* [ti,bc] = pointLocation(rayGd.DT,x');  % Delauney triangles     */
    b_st.site = &t_emlrtRSI;
    rectLocate(&b_st, *(real_T (*)[2])&y[0], rayGd_zVal, rayGd_rVal, weights,
               inds);

    /* triValNe = rayGd.valsNe(rayGd.DT(ti,:)); */
    /* logNe = dot(bc',triValNe')';     % log10 of electron density */
    /*     disp(logNe)  % debugging */
    b_st.site = &u_emlrtRSI;

    /* acquire interpolated value by multiplying value of nearest neighbours */
    /* by their weighting */
    if (((int32_T)inds[0] < 1) || ((int32_T)inds[0] > rayGd_gridNe->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[0], 1, rayGd_gridNe->size[0],
        &l_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[4] < 1) || ((int32_T)inds[4] > rayGd_gridNe->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[4], 1, rayGd_gridNe->size[1],
        &l_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[1] < 1) || ((int32_T)inds[1] > rayGd_gridNe->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[1], 1, rayGd_gridNe->size[0],
        &l_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[5] < 1) || ((int32_T)inds[5] > rayGd_gridNe->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[5], 1, rayGd_gridNe->size[1],
        &l_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[2] < 1) || ((int32_T)inds[2] > rayGd_gridNe->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[2], 1, rayGd_gridNe->size[0],
        &l_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[6] < 1) || ((int32_T)inds[6] > rayGd_gridNe->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[6], 1, rayGd_gridNe->size[1],
        &l_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[3] < 1) || ((int32_T)inds[3] > rayGd_gridNe->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[3], 1, rayGd_gridNe->size[0],
        &l_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[7] < 1) || ((int32_T)inds[7] > rayGd_gridNe->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[7], 1, rayGd_gridNe->size[1],
        &l_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    /* triValDLogNedz = rayGd.valsDLogNedz(rayGd.DT(ti,:)); */
    /* dLogNedz = dot(bc',triValDLogNedz')';   % at phase space point */
    b_st.site = &w_emlrtRSI;

    /* acquire interpolated value by multiplying value of nearest neighbours */
    /* by their weighting */
    if (((int32_T)inds[0] < 1) || ((int32_T)inds[0] > rayGd_gridDLogNedz->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[0], 1,
        rayGd_gridDLogNedz->size[0], &l_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[4] < 1) || ((int32_T)inds[4] > rayGd_gridDLogNedz->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[4], 1,
        rayGd_gridDLogNedz->size[1], &l_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[1] < 1) || ((int32_T)inds[1] > rayGd_gridDLogNedz->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[1], 1,
        rayGd_gridDLogNedz->size[0], &l_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[5] < 1) || ((int32_T)inds[5] > rayGd_gridDLogNedz->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[5], 1,
        rayGd_gridDLogNedz->size[1], &l_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[2] < 1) || ((int32_T)inds[2] > rayGd_gridDLogNedz->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[2], 1,
        rayGd_gridDLogNedz->size[0], &l_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[6] < 1) || ((int32_T)inds[6] > rayGd_gridDLogNedz->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[6], 1,
        rayGd_gridDLogNedz->size[1], &l_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[3] < 1) || ((int32_T)inds[3] > rayGd_gridDLogNedz->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[3], 1,
        rayGd_gridDLogNedz->size[0], &l_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[7] < 1) || ((int32_T)inds[7] > rayGd_gridDLogNedz->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[7], 1,
        rayGd_gridDLogNedz->size[1], &l_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    /* triValDLogNedr = rayGd.valsDLogNedr(rayGd.DT(ti,:)); */
    /* dLogNedr = dot(bc',triValDLogNedr')';   % at phase space point */
    b_st.site = &x_emlrtRSI;

    /* acquire interpolated value by multiplying value of nearest neighbours */
    /* by their weighting */
    if (((int32_T)inds[0] < 1) || ((int32_T)inds[0] > rayGd_gridDLogNedr->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[0], 1,
        rayGd_gridDLogNedr->size[0], &l_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[4] < 1) || ((int32_T)inds[4] > rayGd_gridDLogNedr->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[4], 1,
        rayGd_gridDLogNedr->size[1], &l_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[1] < 1) || ((int32_T)inds[1] > rayGd_gridDLogNedr->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[1], 1,
        rayGd_gridDLogNedr->size[0], &l_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[5] < 1) || ((int32_T)inds[5] > rayGd_gridDLogNedr->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[5], 1,
        rayGd_gridDLogNedr->size[1], &l_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[2] < 1) || ((int32_T)inds[2] > rayGd_gridDLogNedr->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[2], 1,
        rayGd_gridDLogNedr->size[0], &l_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[6] < 1) || ((int32_T)inds[6] > rayGd_gridDLogNedr->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[6], 1,
        rayGd_gridDLogNedr->size[1], &l_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[3] < 1) || ((int32_T)inds[3] > rayGd_gridDLogNedr->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[3], 1,
        rayGd_gridDLogNedr->size[0], &l_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[7] < 1) || ((int32_T)inds[7] > rayGd_gridDLogNedr->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[7], 1,
        rayGd_gridDLogNedr->size[1], &l_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    varargout_1[0] = muDoubleScalarSign(omega_ps) * cnstVar[1] * y[2] / kVac;
    varargout_1[1] = muDoubleScalarSign(omega_ps) * cnstVar[1] * y[3] / kVac;
    lambdaum_tmp = -0.5 * cnstVar[2] * omega_ps * (muDoubleScalarPower(10.0,
      ((weights[0] * rayGd_gridNe->data[((int32_T)inds[0] + rayGd_gridNe->size[0]
      * ((int32_T)inds[4] - 1)) - 1] + weights[1] * rayGd_gridNe->data[((int32_T)
      inds[1] + rayGd_gridNe->size[0] * ((int32_T)inds[5] - 1)) - 1]) + weights
       [2] * rayGd_gridNe->data[((int32_T)inds[2] + rayGd_gridNe->size[0] *
      ((int32_T)inds[6] - 1)) - 1]) + weights[3] * rayGd_gridNe->data[((int32_T)
      inds[3] + rayGd_gridNe->size[0] * ((int32_T)inds[7] - 1)) - 1]) / (1.1E+21
      / (a * a)));
    varargout_1[2] = lambdaum_tmp * (((weights[0] * rayGd_gridDLogNedz->data
      [((int32_T)inds[0] + rayGd_gridDLogNedz->size[0] * ((int32_T)inds[4] - 1))
      - 1] + weights[1] * rayGd_gridDLogNedz->data[((int32_T)inds[1] +
      rayGd_gridDLogNedz->size[0] * ((int32_T)inds[5] - 1)) - 1]) + weights[2] *
      rayGd_gridDLogNedz->data[((int32_T)inds[2] + rayGd_gridDLogNedz->size[0] *
      ((int32_T)inds[6] - 1)) - 1]) + weights[3] * rayGd_gridDLogNedz->data
      [((int32_T)inds[3] + rayGd_gridDLogNedz->size[0] * ((int32_T)inds[7] - 1))
      - 1]);
    varargout_1[3] = lambdaum_tmp * (((weights[0] * rayGd_gridDLogNedr->data
      [((int32_T)inds[0] + rayGd_gridDLogNedr->size[0] * ((int32_T)inds[4] - 1))
      - 1] + weights[1] * rayGd_gridDLogNedr->data[((int32_T)inds[1] +
      rayGd_gridDLogNedr->size[0] * ((int32_T)inds[5] - 1)) - 1]) + weights[2] *
      rayGd_gridDLogNedr->data[((int32_T)inds[2] + rayGd_gridDLogNedr->size[0] *
      ((int32_T)inds[6] - 1)) - 1]) + weights[3] * rayGd_gridDLogNedr->data
      [((int32_T)inds[3] + rayGd_gridDLogNedr->size[0] * ((int32_T)inds[7] - 1))
      - 1]);

    /*  column vector  */
  } else {
    /*  move ray in a straight line */
    lambdaum_tmp = muDoubleScalarSign(omega_ps) * cnstVar[1];
    varargout_1[0] = lambdaum_tmp * y[2] / kVac;
    varargout_1[1] = lambdaum_tmp * y[3] / kVac;
    varargout_1[2] = 0.0;
    varargout_1[3] = 0.0;

    /*  column vector          */
  }
}

void b_anon(const emlrtStack *sp, real_T omega_ps, const emxArray_real_T
            *rayGd_zVal, const emxArray_real_T *rayGd_rVal, const
            emxArray_real_T *rayGd_gridNe, const emxArray_real_T
            *rayGd_gridDLogNedz, const emxArray_real_T *rayGd_gridDLogNedr,
            const emxArray_real_T *rayGd_gridTe, const emxArray_real_T
            *rayGd_gridDLnTedr, const emxArray_real_T *rayGd_gridDLnTedz, const
            real_T rayGd_domain[4], const real_T margin[4], const real_T
            cnstVar[6], const real_T y[4], real_T varargout_1[4])
{
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T inds[8];
  real_T weights[4];
  real_T a_data[2];
  real_T b_data[2];
  real_T Te;
  real_T k2;
  real_T varargout_1_tmp;
  real_T wpe;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &fb_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;

  /*  RHS for our ray ode for Langmuir waves */
  /*   output dydt is a column vector: */
  /*   dydt = [dz/dt,dr/dt,dk_z/dt,dk_r/dt]' */
  /*  NOTE: here omega_ps is a scalar (since we deal with a single ray) */
  /* .c; */
  /*  wave frequency in rads/ps */
  /*  current position at phase space point y */
  /*  current ray wavevector at phase space point y */
  a_data[0] = y[2];
  b_data[0] = y[2];
  a_data[1] = y[3];
  b_data[1] = y[3];
  n_t = (ptrdiff_t)2;
  incx_t = (ptrdiff_t)1;
  incy_t = (ptrdiff_t)1;
  k2 = ddot(&n_t, &a_data[0], &incx_t, &b_data[0], &incy_t);

  /* goodPt = 1;     */
  if (inDomain(*(real_T (*)[2])&y[0], rayGd_domain, margin)) {
    /*  interpolation for current position */
    b_st.site = &gb_emlrtRSI;
    rectLocate(&b_st, *(real_T (*)[2])&y[0], rayGd_zVal, rayGd_rVal, weights,
               inds);

    /* locations of rectangle nodes and weights   */
    /*  density */
    /* triValNe = rayGd.valsNe(rayGd.DT(ti,:)); */
    /* logNe = dot(bc',triValNe')';           % log10 of electron density */
    b_st.site = &hb_emlrtRSI;

    /* acquire interpolated value by multiplying value of nearest neighbours */
    /* by their weighting */
    if (((int32_T)inds[0] < 1) || ((int32_T)inds[0] > rayGd_gridNe->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[0], 1, rayGd_gridNe->size[0],
        &l_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[4] < 1) || ((int32_T)inds[4] > rayGd_gridNe->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[4], 1, rayGd_gridNe->size[1],
        &l_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[1] < 1) || ((int32_T)inds[1] > rayGd_gridNe->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[1], 1, rayGd_gridNe->size[0],
        &l_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[5] < 1) || ((int32_T)inds[5] > rayGd_gridNe->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[5], 1, rayGd_gridNe->size[1],
        &l_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[2] < 1) || ((int32_T)inds[2] > rayGd_gridNe->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[2], 1, rayGd_gridNe->size[0],
        &l_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[6] < 1) || ((int32_T)inds[6] > rayGd_gridNe->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[6], 1, rayGd_gridNe->size[1],
        &l_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[3] < 1) || ((int32_T)inds[3] > rayGd_gridNe->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[3], 1, rayGd_gridNe->size[0],
        &l_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[7] < 1) || ((int32_T)inds[7] > rayGd_gridNe->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[7], 1, rayGd_gridNe->size[1],
        &l_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    b_st.site = &ib_emlrtRSI;
    wpe = cnstVar[4] * muDoubleScalarSqrt(muDoubleScalarPower(10.0, ((weights[0]
      * rayGd_gridNe->data[((int32_T)inds[0] + rayGd_gridNe->size[0] * ((int32_T)
      inds[4] - 1)) - 1] + weights[1] * rayGd_gridNe->data[((int32_T)inds[1] +
      rayGd_gridNe->size[0] * ((int32_T)inds[5] - 1)) - 1]) + weights[2] *
      rayGd_gridNe->data[((int32_T)inds[2] + rayGd_gridNe->size[0] * ((int32_T)
      inds[6] - 1)) - 1]) + weights[3] * rayGd_gridNe->data[((int32_T)inds[3] +
      rayGd_gridNe->size[0] * ((int32_T)inds[7] - 1)) - 1])) * 1.0E-12;

    /*  electron plasma */
    /*  frequency (rad/ps) */
    /*     disp(wpe) */
    /* triValDLogNedz = rayGd.valsDLogNedz(rayGd.DT(ti,:)); */
    /* dLogNedz = dot(bc',triValDLogNedz')';   % at phase space point */
    /*     disp(dLogNedz) */
    b_st.site = &jb_emlrtRSI;

    /* acquire interpolated value by multiplying value of nearest neighbours */
    /* by their weighting */
    if (((int32_T)inds[0] < 1) || ((int32_T)inds[0] > rayGd_gridDLogNedz->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[0], 1,
        rayGd_gridDLogNedz->size[0], &l_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[4] < 1) || ((int32_T)inds[4] > rayGd_gridDLogNedz->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[4], 1,
        rayGd_gridDLogNedz->size[1], &l_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[1] < 1) || ((int32_T)inds[1] > rayGd_gridDLogNedz->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[1], 1,
        rayGd_gridDLogNedz->size[0], &l_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[5] < 1) || ((int32_T)inds[5] > rayGd_gridDLogNedz->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[5], 1,
        rayGd_gridDLogNedz->size[1], &l_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[2] < 1) || ((int32_T)inds[2] > rayGd_gridDLogNedz->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[2], 1,
        rayGd_gridDLogNedz->size[0], &l_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[6] < 1) || ((int32_T)inds[6] > rayGd_gridDLogNedz->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[6], 1,
        rayGd_gridDLogNedz->size[1], &l_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[3] < 1) || ((int32_T)inds[3] > rayGd_gridDLogNedz->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[3], 1,
        rayGd_gridDLogNedz->size[0], &l_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[7] < 1) || ((int32_T)inds[7] > rayGd_gridDLogNedz->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[7], 1,
        rayGd_gridDLogNedz->size[1], &l_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    /* triValDLogNedr = rayGd.valsDLogNedr(rayGd.DT(ti,:)); */
    /* dLogNedr = dot(bc',triValDLogNedr')';   % at phase space point */
    b_st.site = &kb_emlrtRSI;

    /* acquire interpolated value by multiplying value of nearest neighbours */
    /* by their weighting */
    if (((int32_T)inds[0] < 1) || ((int32_T)inds[0] > rayGd_gridDLogNedr->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[0], 1,
        rayGd_gridDLogNedr->size[0], &l_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[4] < 1) || ((int32_T)inds[4] > rayGd_gridDLogNedr->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[4], 1,
        rayGd_gridDLogNedr->size[1], &l_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[1] < 1) || ((int32_T)inds[1] > rayGd_gridDLogNedr->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[1], 1,
        rayGd_gridDLogNedr->size[0], &l_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[5] < 1) || ((int32_T)inds[5] > rayGd_gridDLogNedr->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[5], 1,
        rayGd_gridDLogNedr->size[1], &l_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[2] < 1) || ((int32_T)inds[2] > rayGd_gridDLogNedr->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[2], 1,
        rayGd_gridDLogNedr->size[0], &l_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[6] < 1) || ((int32_T)inds[6] > rayGd_gridDLogNedr->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[6], 1,
        rayGd_gridDLogNedr->size[1], &l_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[3] < 1) || ((int32_T)inds[3] > rayGd_gridDLogNedr->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[3], 1,
        rayGd_gridDLogNedr->size[0], &l_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[7] < 1) || ((int32_T)inds[7] > rayGd_gridDLogNedr->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[7], 1,
        rayGd_gridDLogNedr->size[1], &l_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    /*  derivatives of electron temperature */
    /* triValTe = rayGd.valsTe(rayGd.DT(ti,:)); */
    /* Te = dot(bc',triValTe')';        % electron temperature in eV */
    b_st.site = &lb_emlrtRSI;

    /* acquire interpolated value by multiplying value of nearest neighbours */
    /* by their weighting */
    if (((int32_T)inds[0] < 1) || ((int32_T)inds[0] > rayGd_gridTe->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[0], 1, rayGd_gridTe->size[0],
        &l_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[4] < 1) || ((int32_T)inds[4] > rayGd_gridTe->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[4], 1, rayGd_gridTe->size[1],
        &l_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[1] < 1) || ((int32_T)inds[1] > rayGd_gridTe->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[1], 1, rayGd_gridTe->size[0],
        &l_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[5] < 1) || ((int32_T)inds[5] > rayGd_gridTe->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[5], 1, rayGd_gridTe->size[1],
        &l_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[2] < 1) || ((int32_T)inds[2] > rayGd_gridTe->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[2], 1, rayGd_gridTe->size[0],
        &l_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[6] < 1) || ((int32_T)inds[6] > rayGd_gridTe->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[6], 1, rayGd_gridTe->size[1],
        &l_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[3] < 1) || ((int32_T)inds[3] > rayGd_gridTe->size[0])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[3], 1, rayGd_gridTe->size[0],
        &l_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[7] < 1) || ((int32_T)inds[7] > rayGd_gridTe->size[1])) {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[7], 1, rayGd_gridTe->size[1],
        &l_emlrtBCI, &b_st);
    }

    Te = ((weights[0] * rayGd_gridTe->data[((int32_T)inds[0] +
            rayGd_gridTe->size[0] * ((int32_T)inds[4] - 1)) - 1] + weights[1] *
           rayGd_gridTe->data[((int32_T)inds[1] + rayGd_gridTe->size[0] *
            ((int32_T)inds[5] - 1)) - 1]) + weights[2] * rayGd_gridTe->data
          [((int32_T)inds[2] + rayGd_gridTe->size[0] * ((int32_T)inds[6] - 1)) -
          1]) + weights[3] * rayGd_gridTe->data[((int32_T)inds[3] +
      rayGd_gridTe->size[0] * ((int32_T)inds[7] - 1)) - 1];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    b_st.site = &mb_emlrtRSI;
    c_st.site = &mb_emlrtRSI;
    if (Te < 0.0) {
      emlrtErrorWithMessageIdR2018a(&c_st, &j_emlrtRTEI,
        "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
        4, "sqrt");
    }

    Te = cnstVar[5] * muDoubleScalarSqrt(Te);
    Te *= Te;

    /*  square of electron thermal velocity (um/ps)^2 */
    /* triValDLnTedz = rayGd.valsDLnTedz(rayGd.DT(ti,:)); */
    /* dLnTedz = dot(bc',triValDLnTedz')';   % at phase space point */
    /*     disp(dLnTedz) */
    b_st.site = &nb_emlrtRSI;

    /* acquire interpolated value by multiplying value of nearest neighbours */
    /* by their weighting */
    if (((int32_T)inds[0] < 1) || ((int32_T)inds[0] > rayGd_gridDLnTedr->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[0], 1, rayGd_gridDLnTedr->
        size[0], &l_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[4] < 1) || ((int32_T)inds[4] > rayGd_gridDLnTedr->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[4], 1, rayGd_gridDLnTedr->
        size[1], &l_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[1] < 1) || ((int32_T)inds[1] > rayGd_gridDLnTedr->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[1], 1, rayGd_gridDLnTedr->
        size[0], &l_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[5] < 1) || ((int32_T)inds[5] > rayGd_gridDLnTedr->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[5], 1, rayGd_gridDLnTedr->
        size[1], &l_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[2] < 1) || ((int32_T)inds[2] > rayGd_gridDLnTedr->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[2], 1, rayGd_gridDLnTedr->
        size[0], &l_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[6] < 1) || ((int32_T)inds[6] > rayGd_gridDLnTedr->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[6], 1, rayGd_gridDLnTedr->
        size[1], &l_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[3] < 1) || ((int32_T)inds[3] > rayGd_gridDLnTedr->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[3], 1, rayGd_gridDLnTedr->
        size[0], &l_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[7] < 1) || ((int32_T)inds[7] > rayGd_gridDLnTedr->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[7], 1, rayGd_gridDLnTedr->
        size[1], &l_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    /* triValDLnTedr = rayGd.valsDLnTedr(rayGd.DT(ti,:)); */
    /* dLnTedr = dot(bc',triValDLnTedr')';   % at phase space point */
    b_st.site = &ob_emlrtRSI;

    /* acquire interpolated value by multiplying value of nearest neighbours */
    /* by their weighting */
    if (((int32_T)inds[0] < 1) || ((int32_T)inds[0] > rayGd_gridDLnTedz->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[0], 1, rayGd_gridDLnTedz->
        size[0], &l_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[4] < 1) || ((int32_T)inds[4] > rayGd_gridDLnTedz->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[4], 1, rayGd_gridDLnTedz->
        size[1], &l_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[1] < 1) || ((int32_T)inds[1] > rayGd_gridDLnTedz->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[1], 1, rayGd_gridDLnTedz->
        size[0], &l_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[5] < 1) || ((int32_T)inds[5] > rayGd_gridDLnTedz->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[5], 1, rayGd_gridDLnTedz->
        size[1], &l_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[2] < 1) || ((int32_T)inds[2] > rayGd_gridDLnTedz->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[2], 1, rayGd_gridDLnTedz->
        size[0], &l_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[6] < 1) || ((int32_T)inds[6] > rayGd_gridDLnTedz->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[6], 1, rayGd_gridDLnTedz->
        size[1], &l_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    if (((int32_T)inds[3] < 1) || ((int32_T)inds[3] > rayGd_gridDLnTedz->size[0]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[3], 1, rayGd_gridDLnTedz->
        size[0], &l_emlrtBCI, &b_st);
    }

    if (((int32_T)inds[7] < 1) || ((int32_T)inds[7] > rayGd_gridDLnTedz->size[1]))
    {
      emlrtDynamicBoundsCheckR2012b((int32_T)inds[7], 1, rayGd_gridDLnTedz->
        size[1], &l_emlrtBCI, &b_st);
    }

    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&b_st);
    }

    b_st.site = &pb_emlrtRSI;
    b_st.site = &qb_emlrtRSI;
    varargout_1_tmp = 3.0 * Te / omega_ps;
    varargout_1[0] = varargout_1_tmp * y[2];
    varargout_1[1] = varargout_1_tmp * y[3];
    varargout_1_tmp = -(wpe * wpe) / (2.0 * omega_ps) * cnstVar[2];
    Te = 1.5 * (k2 * Te / omega_ps);
    varargout_1[2] = varargout_1_tmp * (((weights[0] * rayGd_gridDLogNedz->data
      [((int32_T)inds[0] + rayGd_gridDLogNedz->size[0] * ((int32_T)inds[4] - 1))
      - 1] + weights[1] * rayGd_gridDLogNedz->data[((int32_T)inds[1] +
      rayGd_gridDLogNedz->size[0] * ((int32_T)inds[5] - 1)) - 1]) + weights[2] *
      rayGd_gridDLogNedz->data[((int32_T)inds[2] + rayGd_gridDLogNedz->size[0] *
      ((int32_T)inds[6] - 1)) - 1]) + weights[3] * rayGd_gridDLogNedz->data
      [((int32_T)inds[3] + rayGd_gridDLogNedz->size[0] * ((int32_T)inds[7] - 1))
      - 1]) - Te * (((weights[0] * rayGd_gridDLnTedr->data[((int32_T)inds[0] +
      rayGd_gridDLnTedr->size[0] * ((int32_T)inds[4] - 1)) - 1] + weights[1] *
                      rayGd_gridDLnTedr->data[((int32_T)inds[1] +
      rayGd_gridDLnTedr->size[0] * ((int32_T)inds[5] - 1)) - 1]) + weights[2] *
                     rayGd_gridDLnTedr->data[((int32_T)inds[2] +
      rayGd_gridDLnTedr->size[0] * ((int32_T)inds[6] - 1)) - 1]) + weights[3] *
                    rayGd_gridDLnTedr->data[((int32_T)inds[3] +
      rayGd_gridDLnTedr->size[0] * ((int32_T)inds[7] - 1)) - 1]);
    varargout_1[3] = varargout_1_tmp * (((weights[0] * rayGd_gridDLogNedr->data
      [((int32_T)inds[0] + rayGd_gridDLogNedr->size[0] * ((int32_T)inds[4] - 1))
      - 1] + weights[1] * rayGd_gridDLogNedr->data[((int32_T)inds[1] +
      rayGd_gridDLogNedr->size[0] * ((int32_T)inds[5] - 1)) - 1]) + weights[2] *
      rayGd_gridDLogNedr->data[((int32_T)inds[2] + rayGd_gridDLogNedr->size[0] *
      ((int32_T)inds[6] - 1)) - 1]) + weights[3] * rayGd_gridDLogNedr->data
      [((int32_T)inds[3] + rayGd_gridDLogNedr->size[0] * ((int32_T)inds[7] - 1))
      - 1]) - Te * (((weights[0] * rayGd_gridDLnTedz->data[((int32_T)inds[0] +
      rayGd_gridDLnTedz->size[0] * ((int32_T)inds[4] - 1)) - 1] + weights[1] *
                      rayGd_gridDLnTedz->data[((int32_T)inds[1] +
      rayGd_gridDLnTedz->size[0] * ((int32_T)inds[5] - 1)) - 1]) + weights[2] *
                     rayGd_gridDLnTedz->data[((int32_T)inds[2] +
      rayGd_gridDLnTedz->size[0] * ((int32_T)inds[6] - 1)) - 1]) + weights[3] *
                    rayGd_gridDLnTedz->data[((int32_T)inds[3] +
      rayGd_gridDLnTedz->size[0] * ((int32_T)inds[7] - 1)) - 1]);

    /*  column vector  */
  } else {
    /*  dummy electron temperature in eV */
    b_st.site = &rb_emlrtRSI;
    b_st.site = &rb_emlrtRSI;
    Te = cnstVar[5] * 44.721359549995796;

    /*  square of elec therm vel (um/ps) */
    varargout_1_tmp = 3.0 * (Te * Te) / omega_ps;
    varargout_1[0] = varargout_1_tmp * y[2];
    varargout_1[1] = varargout_1_tmp * y[3];
    varargout_1[2] = 0.0;
    varargout_1[3] = 0.0;

    /*  column vector          */
  }
}

emlrtCTX emlrtGetRootTLSGlobal(void)
{
  return emlrtRootTLSGlobal;
}

void emlrtLockerFunction(EmlrtLockeeFunction aLockee, const emlrtConstCTX aTLS,
  void *aData)
{
  omp_set_lock(&emlrtLockGlobal);
  emlrtCallLockeeFunction(aLockee, aTLS, aData);
  omp_unset_lock(&emlrtLockGlobal);
}

void propAlg(const emlrtStack *sp, struct0_T *rayBundle, const struct1_T *rayGd,
             real_T tStep, const real_T margin[4], real_T npts, const struct2_T *
             cnst, struct0_T *bundleOut_internal)
{
  static const char_T cv[2] = { 'E', 'M' };

  jmp_buf b_emlrtJBEnviron;
  jmp_buf * volatile emlrtJBStack;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_real_T *c_this_tunableEnvironment_f2_gr;
  emxArray_real_T *d_this_tunableEnvironment_f2_gr;
  emxArray_real_T *e_this_tunableEnvironment_f2_gr;
  emxArray_real_T *f_this_tunableEnvironment_f2_gr;
  emxArray_real_T *g_this_tunableEnvironment_f2_gr;
  emxArray_real_T *h_this_tunableEnvironment_f2_gr;
  emxArray_real_T *newPath;
  emxArray_real_T *newTraj;
  emxArray_real_T *oldTraj;
  emxArray_real_T *this_tunableEnvironment_f2_rVal;
  emxArray_real_T *this_tunableEnvironment_f2_zVal;
  emxArray_real_T *tr;
  emxArray_real_T *yr;
  real_T cnstVar[6];
  real_T c_this_tunableEnvironment_f2_do[4];
  real_T ray0[4];
  real_T tSpan[2];
  real_T omega_ps;
  real_T tStop;
  int32_T b_withinMargin;
  int32_T exitg1;
  int32_T i;
  int32_T i1;
  int32_T input_sizes_idx_0;
  int32_T kstr;
  int32_T rayIdx;
  int32_T sizes_idx_1;
  int32_T ub_loop;
  int8_T i2;
  boolean_T emlrtHadParallelError = false;
  boolean_T withinMargin;
  (void)npts;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /*  Integrate all the rays in the bundle one at a time  */
  /* rayBundle_rayICs = rayBundle.rayICs; */
  /* rayBundle_direction = rayBundle.direction; */
  /*  speed of light in microns/ps */
  cnstVar[0] = cnst->c;
  cnstVar[1] = cnst->c * 1.0E-6;
  cnstVar[2] = cnst->ln10;
  cnstVar[3] = cnst->twopi;
  cnstVar[4] = cnst->wpe;
  cnstVar[5] = cnst->vTe1eV;
  if (rayBundle->nrays != (int32_T)muDoubleScalarFloor(rayBundle->nrays)) {
    emlrtIntegerCheckR2012b(rayBundle->nrays, &emlrtDCI, sp);
  }

  emlrtForLoopVectorCheckR2012b(1.0, 1.0, rayBundle->nrays, mxDOUBLE_CLASS,
    (int32_T)rayBundle->nrays, &e_emlrtRTEI, sp);
  ub_loop = (int32_T)rayBundle->nrays - 1;
  emlrtEnterParallelRegion(sp, omp_in_parallel());
  emlrtPushJmpBuf(sp, &emlrtJBStack);

#pragma omp parallel \
 num_threads(emlrtAllocRegionTLSs(sp->tls, omp_in_parallel(), omp_get_max_threads(), omp_get_num_procs())) \
 private(c_this_tunableEnvironment_f2_gr,d_this_tunableEnvironment_f2_gr,e_this_tunableEnvironment_f2_gr,f_this_tunableEnvironment_f2_gr,g_this_tunableEnvironment_f2_gr,h_this_tunableEnvironment_f2_gr,this_tunableEnvironment_f2_rVal,this_tunableEnvironment_f2_zVal,newTraj,oldTraj,newPath,tr,yr,withinMargin,ray0,tSpan,tStop,omega_ps,b_emlrtJBEnviron,d_st,rayIdx,i,i1,kstr,exitg1,b_withinMargin,c_this_tunableEnvironment_f2_do,i2,sizes_idx_1,input_sizes_idx_0) \
 firstprivate(st,b_st,c_st,emlrtHadParallelError)

  {
    if (setjmp(b_emlrtJBEnviron) == 0) {
      st.prev = sp;
      st.tls = emlrtAllocTLS(sp, omp_get_thread_num());
      st.site = NULL;
      emlrtSetJmpBuf(&st, &b_emlrtJBEnviron);
      b_st.prev = &st;
      b_st.tls = st.tls;
      c_st.prev = &b_st;
      c_st.tls = b_st.tls;
      d_st.prev = &c_st;
      d_st.tls = c_st.tls;
      emxInit_real_T(&st, &c_this_tunableEnvironment_f2_gr, 2, &t_emlrtRTEI,
                     true);
      emxInit_real_T(&st, &d_this_tunableEnvironment_f2_gr, 2, &t_emlrtRTEI,
                     true);
      emxInit_real_T(&st, &e_this_tunableEnvironment_f2_gr, 2, &t_emlrtRTEI,
                     true);
      emxInit_real_T(&st, &f_this_tunableEnvironment_f2_gr, 2, &t_emlrtRTEI,
                     true);
      emxInit_real_T(&st, &g_this_tunableEnvironment_f2_gr, 2, &t_emlrtRTEI,
                     true);
      emxInit_real_T(&st, &h_this_tunableEnvironment_f2_gr, 2, &t_emlrtRTEI,
                     true);
      emxInit_real_T(&st, &this_tunableEnvironment_f2_rVal, 1, &t_emlrtRTEI,
                     true);
      emxInit_real_T(&st, &this_tunableEnvironment_f2_zVal, 1, &t_emlrtRTEI,
                     true);
      emxInit_real_T(&st, &newTraj, 2, &m_emlrtRTEI, true);
      emxInit_real_T(&st, &oldTraj, 2, &s_emlrtRTEI, true);
      emxInit_real_T(&st, &newPath, 2, &o_emlrtRTEI, true);
      emxInit_real_T(&st, &tr, 1, &r_emlrtRTEI, true);
      emxInit_real_T(&st, &yr, 2, &q_emlrtRTEI, true);
    } else {
      emlrtHadParallelError = true;
    }

#pragma omp for nowait

    for (rayIdx = 0; rayIdx <= ub_loop; rayIdx++) {
      if (emlrtHadParallelError)
        continue;
      if (setjmp(b_emlrtJBEnviron) == 0) {
        /*  check to see if we need to move this ray */
        if (((int32_T)(rayIdx + 1U) < 1) || ((int32_T)(rayIdx + 1U) >
             rayBundle->halt->size[1])) {
          emlrtDynamicBoundsCheckR2012b((int32_T)(rayIdx + 1U), 1,
            rayBundle->halt->size[1], &g_emlrtBCI, &st);
        }

        if (!rayBundle->halt->data[rayIdx]) {
          if (rayIdx > rayBundle->trajs->size[1] - 1) {
            emlrtDynamicBoundsCheckR2012b(rayIdx, 0, rayBundle->trajs->size[1] -
              1, &b_emlrtBCI, &st);
          }

          i = rayBundle->trajs->data[rayIdx].f1->size[0];
          i1 = rayBundle->trajs->data[rayIdx].f1->size[0];
          if ((i1 < 1) || (i1 > i)) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, i, &f_emlrtBCI, &st);
          }

          /*  use the last time info */
          /*  position row vector */
          /*  wave vector row vector */
          /* end */
          /*  TO DO: deal with the case where rayBundle.frequency is a row vector */
          /*  */
          if ((rayIdx + 1 < 1) || (rayIdx + 1 > rayBundle->frequency->size[1]))
          {
            emlrtDynamicBoundsCheckR2012b(rayIdx + 1, 1, rayBundle->
              frequency->size[1], &h_emlrtBCI, &st);
          }

          omega_ps = 1.0E-12 * rayBundle->frequency->data[rayIdx];

          /*  see w hich direction we're going */
          tStop = rayBundle->trajs->data[rayIdx].f1->data[rayBundle->trajs->
            data[rayIdx].f1->size[0] - 1] + tStep;
          tSpan[0] = rayBundle->trajs->data[rayIdx].f1->data[rayBundle->
            trajs->data[rayIdx].f1->size[0] - 1];
          tSpan[1] = tStop;
          ray0[0] = rayBundle->trajs->data[rayIdx].f1->data[(rayBundle->
            trajs->data[rayIdx].f1->size[0] + rayBundle->trajs->data[rayIdx].
            f1->size[0]) - 1];
          ray0[2] = rayBundle->trajs->data[rayIdx].f1->data[(rayBundle->
            trajs->data[rayIdx].f1->size[0] + rayBundle->trajs->data[rayIdx].
            f1->size[0] * 3) - 1];
          ray0[1] = rayBundle->trajs->data[rayIdx].f1->data[(rayBundle->
            trajs->data[rayIdx].f1->size[0] + rayBundle->trajs->data[rayIdx].
            f1->size[0] * 2) - 1];
          ray0[3] = rayBundle->trajs->data[rayIdx].f1->data[(rayBundle->
            trajs->data[rayIdx].f1->size[0] + rayBundle->trajs->data[rayIdx].
            f1->size[0] * 4) - 1];

          /*  initial condition (column vector) */
          /*  in phase space for ode integrator */
          if (tStop > rayBundle->trajs->data[rayIdx].f1->data[rayBundle->
              trajs->data[rayIdx].f1->size[0] - 1]) {
            withinMargin = false;
            if (rayBundle->type->size[1] == 2) {
              kstr = 0;
              do {
                exitg1 = 0;
                if (kstr < 2) {
                  if (rayBundle->type->data[kstr] != cv[kstr]) {
                    exitg1 = 1;
                  } else {
                    kstr++;
                  }
                } else {
                  withinMargin = true;
                  exitg1 = 1;
                }
              } while (exitg1 == 0);
            }

            if (withinMargin) {
              b_withinMargin = 0;
            } else {
              b_withinMargin = -1;
            }

            switch (b_withinMargin) {
             case 0:
              b_withinMargin = rayGd->zVal->size[0];
              i = this_tunableEnvironment_f2_zVal->size[0];
              this_tunableEnvironment_f2_zVal->size[0] = rayGd->zVal->size[0];
              emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f2_zVal, i,
                &l_emlrtRTEI);
              for (i = 0; i < b_withinMargin; i++) {
                this_tunableEnvironment_f2_zVal->data[i] = rayGd->zVal->data[i];
              }

              b_withinMargin = rayGd->rVal->size[0];
              i = this_tunableEnvironment_f2_rVal->size[0];
              this_tunableEnvironment_f2_rVal->size[0] = rayGd->rVal->size[0];
              emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f2_rVal, i,
                &l_emlrtRTEI);
              for (i = 0; i < b_withinMargin; i++) {
                this_tunableEnvironment_f2_rVal->data[i] = rayGd->rVal->data[i];
              }

              i = h_this_tunableEnvironment_f2_gr->size[0] *
                h_this_tunableEnvironment_f2_gr->size[1];
              h_this_tunableEnvironment_f2_gr->size[0] = rayGd->gridNe->size[0];
              h_this_tunableEnvironment_f2_gr->size[1] = rayGd->gridNe->size[1];
              emxEnsureCapacity_real_T(&st, h_this_tunableEnvironment_f2_gr, i,
                &l_emlrtRTEI);
              b_withinMargin = rayGd->gridNe->size[0] * rayGd->gridNe->size[1];
              for (i = 0; i < b_withinMargin; i++) {
                h_this_tunableEnvironment_f2_gr->data[i] = rayGd->gridNe->data[i];
              }

              i = g_this_tunableEnvironment_f2_gr->size[0] *
                g_this_tunableEnvironment_f2_gr->size[1];
              g_this_tunableEnvironment_f2_gr->size[0] = rayGd->
                gridDLogNedz->size[0];
              g_this_tunableEnvironment_f2_gr->size[1] = rayGd->
                gridDLogNedz->size[1];
              emxEnsureCapacity_real_T(&st, g_this_tunableEnvironment_f2_gr, i,
                &l_emlrtRTEI);
              b_withinMargin = rayGd->gridDLogNedz->size[0] *
                rayGd->gridDLogNedz->size[1];
              for (i = 0; i < b_withinMargin; i++) {
                g_this_tunableEnvironment_f2_gr->data[i] = rayGd->
                  gridDLogNedz->data[i];
              }

              i = f_this_tunableEnvironment_f2_gr->size[0] *
                f_this_tunableEnvironment_f2_gr->size[1];
              f_this_tunableEnvironment_f2_gr->size[0] = rayGd->
                gridDLogNedr->size[0];
              f_this_tunableEnvironment_f2_gr->size[1] = rayGd->
                gridDLogNedr->size[1];
              emxEnsureCapacity_real_T(&st, f_this_tunableEnvironment_f2_gr, i,
                &l_emlrtRTEI);
              b_withinMargin = rayGd->gridDLogNedr->size[0] *
                rayGd->gridDLogNedr->size[1];
              for (i = 0; i < b_withinMargin; i++) {
                f_this_tunableEnvironment_f2_gr->data[i] = rayGd->
                  gridDLogNedr->data[i];
              }

              c_this_tunableEnvironment_f2_do[0] = rayGd->domain[0];
              c_this_tunableEnvironment_f2_do[1] = rayGd->domain[1];
              c_this_tunableEnvironment_f2_do[2] = rayGd->domain[2];
              c_this_tunableEnvironment_f2_do[3] = rayGd->domain[3];
              b_st.site = &emlrtRSI;
              ode45(&b_st, omega_ps, this_tunableEnvironment_f2_zVal,
                    this_tunableEnvironment_f2_rVal,
                    h_this_tunableEnvironment_f2_gr,
                    g_this_tunableEnvironment_f2_gr,
                    f_this_tunableEnvironment_f2_gr,
                    c_this_tunableEnvironment_f2_do, margin, cnstVar, tSpan,
                    ray0, tr, yr);
              break;

             default:
              /* assuming EPW is the only other possibility */
              b_withinMargin = rayGd->zVal->size[0];
              i = this_tunableEnvironment_f2_zVal->size[0];
              this_tunableEnvironment_f2_zVal->size[0] = rayGd->zVal->size[0];
              emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f2_zVal, i,
                &l_emlrtRTEI);
              for (i = 0; i < b_withinMargin; i++) {
                this_tunableEnvironment_f2_zVal->data[i] = rayGd->zVal->data[i];
              }

              b_withinMargin = rayGd->rVal->size[0];
              i = this_tunableEnvironment_f2_rVal->size[0];
              this_tunableEnvironment_f2_rVal->size[0] = rayGd->rVal->size[0];
              emxEnsureCapacity_real_T(&st, this_tunableEnvironment_f2_rVal, i,
                &l_emlrtRTEI);
              for (i = 0; i < b_withinMargin; i++) {
                this_tunableEnvironment_f2_rVal->data[i] = rayGd->rVal->data[i];
              }

              i = h_this_tunableEnvironment_f2_gr->size[0] *
                h_this_tunableEnvironment_f2_gr->size[1];
              h_this_tunableEnvironment_f2_gr->size[0] = rayGd->gridNe->size[0];
              h_this_tunableEnvironment_f2_gr->size[1] = rayGd->gridNe->size[1];
              emxEnsureCapacity_real_T(&st, h_this_tunableEnvironment_f2_gr, i,
                &l_emlrtRTEI);
              b_withinMargin = rayGd->gridNe->size[0] * rayGd->gridNe->size[1];
              for (i = 0; i < b_withinMargin; i++) {
                h_this_tunableEnvironment_f2_gr->data[i] = rayGd->gridNe->data[i];
              }

              i = g_this_tunableEnvironment_f2_gr->size[0] *
                g_this_tunableEnvironment_f2_gr->size[1];
              g_this_tunableEnvironment_f2_gr->size[0] = rayGd->
                gridDLogNedz->size[0];
              g_this_tunableEnvironment_f2_gr->size[1] = rayGd->
                gridDLogNedz->size[1];
              emxEnsureCapacity_real_T(&st, g_this_tunableEnvironment_f2_gr, i,
                &l_emlrtRTEI);
              b_withinMargin = rayGd->gridDLogNedz->size[0] *
                rayGd->gridDLogNedz->size[1];
              for (i = 0; i < b_withinMargin; i++) {
                g_this_tunableEnvironment_f2_gr->data[i] = rayGd->
                  gridDLogNedz->data[i];
              }

              i = f_this_tunableEnvironment_f2_gr->size[0] *
                f_this_tunableEnvironment_f2_gr->size[1];
              f_this_tunableEnvironment_f2_gr->size[0] = rayGd->
                gridDLogNedr->size[0];
              f_this_tunableEnvironment_f2_gr->size[1] = rayGd->
                gridDLogNedr->size[1];
              emxEnsureCapacity_real_T(&st, f_this_tunableEnvironment_f2_gr, i,
                &l_emlrtRTEI);
              b_withinMargin = rayGd->gridDLogNedr->size[0] *
                rayGd->gridDLogNedr->size[1];
              for (i = 0; i < b_withinMargin; i++) {
                f_this_tunableEnvironment_f2_gr->data[i] = rayGd->
                  gridDLogNedr->data[i];
              }

              i = e_this_tunableEnvironment_f2_gr->size[0] *
                e_this_tunableEnvironment_f2_gr->size[1];
              e_this_tunableEnvironment_f2_gr->size[0] = rayGd->gridTe->size[0];
              e_this_tunableEnvironment_f2_gr->size[1] = rayGd->gridTe->size[1];
              emxEnsureCapacity_real_T(&st, e_this_tunableEnvironment_f2_gr, i,
                &l_emlrtRTEI);
              b_withinMargin = rayGd->gridTe->size[0] * rayGd->gridTe->size[1];
              for (i = 0; i < b_withinMargin; i++) {
                e_this_tunableEnvironment_f2_gr->data[i] = rayGd->gridTe->data[i];
              }

              i = d_this_tunableEnvironment_f2_gr->size[0] *
                d_this_tunableEnvironment_f2_gr->size[1];
              d_this_tunableEnvironment_f2_gr->size[0] = rayGd->
                gridDLnTedr->size[0];
              d_this_tunableEnvironment_f2_gr->size[1] = rayGd->
                gridDLnTedr->size[1];
              emxEnsureCapacity_real_T(&st, d_this_tunableEnvironment_f2_gr, i,
                &l_emlrtRTEI);
              b_withinMargin = rayGd->gridDLnTedr->size[0] * rayGd->
                gridDLnTedr->size[1];
              for (i = 0; i < b_withinMargin; i++) {
                d_this_tunableEnvironment_f2_gr->data[i] = rayGd->
                  gridDLnTedr->data[i];
              }

              i = c_this_tunableEnvironment_f2_gr->size[0] *
                c_this_tunableEnvironment_f2_gr->size[1];
              c_this_tunableEnvironment_f2_gr->size[0] = rayGd->
                gridDLnTedz->size[0];
              c_this_tunableEnvironment_f2_gr->size[1] = rayGd->
                gridDLnTedz->size[1];
              emxEnsureCapacity_real_T(&st, c_this_tunableEnvironment_f2_gr, i,
                &l_emlrtRTEI);
              b_withinMargin = rayGd->gridDLnTedz->size[0] * rayGd->
                gridDLnTedz->size[1];
              for (i = 0; i < b_withinMargin; i++) {
                c_this_tunableEnvironment_f2_gr->data[i] = rayGd->
                  gridDLnTedz->data[i];
              }

              c_this_tunableEnvironment_f2_do[0] = rayGd->domain[0];
              c_this_tunableEnvironment_f2_do[1] = rayGd->domain[1];
              c_this_tunableEnvironment_f2_do[2] = rayGd->domain[2];
              c_this_tunableEnvironment_f2_do[3] = rayGd->domain[3];
              b_st.site = &b_emlrtRSI;
              b_ode45(&b_st, omega_ps, this_tunableEnvironment_f2_zVal,
                      this_tunableEnvironment_f2_rVal,
                      h_this_tunableEnvironment_f2_gr,
                      g_this_tunableEnvironment_f2_gr,
                      f_this_tunableEnvironment_f2_gr,
                      e_this_tunableEnvironment_f2_gr,
                      d_this_tunableEnvironment_f2_gr,
                      c_this_tunableEnvironment_f2_gr,
                      c_this_tunableEnvironment_f2_do, margin, cnstVar, tSpan,
                      ray0, tr, yr);
              break;
            }

            b_st.site = &c_emlrtRSI;
            c_st.site = &sb_emlrtRSI;
            if (tr->size[0] != 0) {
              kstr = tr->size[0];
            } else if (yr->size[0] != 0) {
              kstr = yr->size[0];
            } else {
              kstr = 0;
            }

            d_st.site = &tb_emlrtRSI;
            if ((tr->size[0] != kstr) && (tr->size[0] != 0)) {
              emlrtErrorWithMessageIdR2018a(&d_st, &d_emlrtRTEI,
                "MATLAB:catenate:matrixDimensionMismatch",
                "MATLAB:catenate:matrixDimensionMismatch", 0);
            }

            if ((yr->size[0] != kstr) && (yr->size[0] != 0)) {
              emlrtErrorWithMessageIdR2018a(&d_st, &d_emlrtRTEI,
                "MATLAB:catenate:matrixDimensionMismatch",
                "MATLAB:catenate:matrixDimensionMismatch", 0);
            }

            withinMargin = (kstr == 0);
            if (withinMargin || (tr->size[0] != 0)) {
              i2 = 1;
            } else {
              i2 = 0;
            }

            if (withinMargin || (yr->size[0] != 0)) {
              sizes_idx_1 = 4;
            } else {
              sizes_idx_1 = 0;
            }

            i = newTraj->size[0] * newTraj->size[1];
            newTraj->size[0] = kstr;
            newTraj->size[1] = i2 + sizes_idx_1;
            emxEnsureCapacity_real_T(&c_st, newTraj, i, &m_emlrtRTEI);
            b_withinMargin = i2;
            for (i = 0; i < b_withinMargin; i++) {
              for (i1 = 0; i1 < kstr; i1++) {
                newTraj->data[i1] = tr->data[i1];
              }
            }

            for (i = 0; i < sizes_idx_1; i++) {
              for (i1 = 0; i1 < kstr; i1++) {
                newTraj->data[i1 + newTraj->size[0] * (i + i2)] = yr->data[i1 +
                  yr->size[0] * i];
              }
            }

            /*  because otherwise ode45 will return */
            /*  a struct          */
            /*  need to check and set halt flags if we are too close to */
            /*  theboundary at the last time */
            /*  */
            if (yr->size[0] < 1) {
              emlrtDynamicBoundsCheckR2012b(yr->size[0], 1, yr->size[0],
                &e_emlrtBCI, &st);
            }

            tSpan[0] = yr->data[yr->size[0] - 1];
            tSpan[1] = yr->data[(yr->size[0] + yr->size[0]) - 1];
            withinMargin = inDomain(tSpan, rayGd->domain, margin);
            if (!withinMargin) {
              if ((rayIdx + 1 < 1) || (rayIdx + 1 > rayBundle->halt->size[1])) {
                emlrtDynamicBoundsCheckR2012b(rayIdx + 1, 1, rayBundle->
                  halt->size[1], &i_emlrtBCI, &st);
              }

              rayBundle->halt->data[rayIdx] = true;

              /*  set halt flag for */
              /*  out-of-margin */
            }

            /*  attach solution to rayBundle structure */
            /*   have two cases here...  */
            /* if trajIsNew */
            /*     rayBundle.trajs{rayIdx} = newTraj; */
            /* else */
            /*  append to existing */
            if (rayIdx > rayBundle->trajs->size[1] - 1) {
              emlrtDynamicBoundsCheckR2012b(rayIdx, 0, rayBundle->trajs->size[1]
                - 1, &emlrtBCI, &st);
            }

            if (1 > rayBundle->trajs->data[rayIdx].f1->size[0] - 1) {
              b_withinMargin = 0;
            } else {
              i = rayBundle->trajs->data[rayIdx].f1->size[0];
              if (1 > i) {
                emlrtDynamicBoundsCheckR2012b(1, 1, i, &d_emlrtBCI, &st);
              }

              i = rayBundle->trajs->data[rayIdx].f1->size[0];
              b_withinMargin = rayBundle->trajs->data[rayIdx].f1->size[0] - 1;
              if ((b_withinMargin < 1) || (b_withinMargin > i)) {
                emlrtDynamicBoundsCheckR2012b(b_withinMargin, 1, i, &c_emlrtBCI,
                  &st);
              }
            }

            /*  drop IC */
            b_st.site = &d_emlrtRSI;
            c_st.site = &sb_emlrtRSI;
            if (b_withinMargin != 0) {
              sizes_idx_1 = 5;
            } else if ((newTraj->size[0] != 0) && (newTraj->size[1] != 0)) {
              sizes_idx_1 = newTraj->size[1];
            } else {
              sizes_idx_1 = 5;
            }

            d_st.site = &tb_emlrtRSI;
            if ((5 != sizes_idx_1) && (b_withinMargin != 0)) {
              emlrtErrorWithMessageIdR2018a(&d_st, &d_emlrtRTEI,
                "MATLAB:catenate:matrixDimensionMismatch",
                "MATLAB:catenate:matrixDimensionMismatch", 0);
            }

            if ((newTraj->size[1] != sizes_idx_1) && ((newTraj->size[0] != 0) &&
                 (newTraj->size[1] != 0))) {
              emlrtErrorWithMessageIdR2018a(&d_st, &d_emlrtRTEI,
                "MATLAB:catenate:matrixDimensionMismatch",
                "MATLAB:catenate:matrixDimensionMismatch", 0);
            }

            if (b_withinMargin != 0) {
              input_sizes_idx_0 = b_withinMargin;
            } else {
              input_sizes_idx_0 = 0;
            }

            i = oldTraj->size[0] * oldTraj->size[1];
            oldTraj->size[0] = b_withinMargin;
            oldTraj->size[1] = 5;
            emxEnsureCapacity_real_T(&c_st, oldTraj, i, &n_emlrtRTEI);
            for (i = 0; i < 5; i++) {
              for (i1 = 0; i1 < b_withinMargin; i1++) {
                oldTraj->data[i1 + oldTraj->size[0] * i] = rayBundle->
                  trajs->data[rayIdx].f1->data[i1 + rayBundle->trajs->
                  data[rayIdx].f1->size[0] * i];
              }
            }

            if ((newTraj->size[0] != 0) && (newTraj->size[1] != 0)) {
              kstr = newTraj->size[0];
            } else {
              kstr = 0;
            }

            i = newPath->size[0] * newPath->size[1];
            if ((newTraj->size[0] != 0) && (newTraj->size[1] != 0)) {
              b_withinMargin = newTraj->size[0];
            } else {
              b_withinMargin = 0;
            }

            newPath->size[0] = input_sizes_idx_0 + b_withinMargin;
            newPath->size[1] = sizes_idx_1;
            emxEnsureCapacity_real_T(&c_st, newPath, i, &o_emlrtRTEI);
            for (i = 0; i < sizes_idx_1; i++) {
              for (i1 = 0; i1 < input_sizes_idx_0; i1++) {
                newPath->data[i1 + newPath->size[0] * i] = oldTraj->data[i1 +
                  input_sizes_idx_0 * i];
              }
            }

            for (i = 0; i < sizes_idx_1; i++) {
              for (i1 = 0; i1 < kstr; i1++) {
                newPath->data[(i1 + input_sizes_idx_0) + newPath->size[0] * i] =
                  newTraj->data[i1 + kstr * i];
              }
            }

            kstr = rayBundle->trajs->size[1] - 1;
            b_withinMargin = newPath->size[0];
            if (rayIdx > rayBundle->trajs->size[1] - 1) {
              emlrtDynamicBoundsCheckR2012b(rayIdx, 0, rayBundle->trajs->size[1]
                - 1, &j_emlrtBCI, &st);
            }

            i = rayBundle->trajs->data[rayIdx].f1->size[0] * rayBundle->
              trajs->data[rayIdx].f1->size[1];
            rayBundle->trajs->data[rayIdx].f1->size[0] = newPath->size[0];
            emxEnsureCapacity_real_T(&st, rayBundle->trajs->data[rayIdx].f1, i,
              &p_emlrtRTEI);
            if (rayIdx > kstr) {
              emlrtDynamicBoundsCheckR2012b(rayIdx, 0, kstr, &j_emlrtBCI, &st);
            }

            i = rayBundle->trajs->data[rayIdx].f1->size[0] * rayBundle->
              trajs->data[rayIdx].f1->size[1];
            rayBundle->trajs->data[rayIdx].f1->size[1] = 5;
            emxEnsureCapacity_real_T(&st, rayBundle->trajs->data[rayIdx].f1, i,
              &p_emlrtRTEI);
            for (i = 0; i < 5; i++) {
              for (i1 = 0; i1 < b_withinMargin; i1++) {
                if (i + 1 > newPath->size[1]) {
                  emlrtDynamicBoundsCheckR2012b(i + 1, 1, newPath->size[1],
                    &k_emlrtBCI, &st);
                }

                if (rayIdx > kstr) {
                  emlrtDynamicBoundsCheckR2012b(rayIdx, 0, kstr, &j_emlrtBCI,
                    &st);
                }

                rayBundle->trajs->data[rayIdx].f1->data[i1 + rayBundle->
                  trajs->data[rayIdx].f1->size[0] * i] = newPath->data[i1 +
                  newPath->size[0] * i];
              }
            }

            /*              rayBundle.trajs{rayIdx} = newTraj;   % debug */
            /* end */
          }

          /*  the if tSpan. */
        }

        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      } else {
        emlrtHadParallelError = true;
      }
    }

    if (!emlrtHadParallelError) {
      emlrtHeapReferenceStackLeaveScope(&st, 13);
      emxFree_real_T(&yr);
      emxFree_real_T(&tr);
      emxFree_real_T(&newPath);
      emxFree_real_T(&oldTraj);
      emxFree_real_T(&newTraj);
      emxFree_real_T(&this_tunableEnvironment_f2_zVal);
      emxFree_real_T(&this_tunableEnvironment_f2_rVal);
      emxFree_real_T(&h_this_tunableEnvironment_f2_gr);
      emxFree_real_T(&g_this_tunableEnvironment_f2_gr);
      emxFree_real_T(&f_this_tunableEnvironment_f2_gr);
      emxFree_real_T(&e_this_tunableEnvironment_f2_gr);
      emxFree_real_T(&d_this_tunableEnvironment_f2_gr);
      emxFree_real_T(&c_this_tunableEnvironment_f2_gr);
    }
  }

  emlrtPopJmpBuf(sp, &emlrtJBStack);
  emlrtExitParallelRegion(sp, omp_in_parallel());

  /*  for loop over rays */
  emxCopyStruct_struct0_T(sp, bundleOut_internal, rayBundle, &k_emlrtRTEI);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (propAlg.c) */
