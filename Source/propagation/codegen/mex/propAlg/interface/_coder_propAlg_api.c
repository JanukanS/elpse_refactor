/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_propAlg_api.c
 *
 * Code generation for function '_coder_propAlg_api'
 *
 */

/* Include files */
#include "_coder_propAlg_api.h"
#include "propAlg.h"
#include "propAlg_data.h"
#include "propAlg_emxutil.h"
#include "propAlg_types.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
static emlrtRTEInfo ab_emlrtRTEI = { 1,/* lineNo */
  1,                                   /* colNo */
  "_coder_propAlg_api",                /* fName */
  ""                                   /* pName */
};

/* Function Declarations */
static void ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_boolean_T *ret);
static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u);
static void bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *rayBundle,
  const char_T *identifier, struct0_T *y);
static void cb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct0_T *y);
static void db_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[4]);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static real_T (*eb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[4];
static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const struct0_T u);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_char_T *y);
static real_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_cell_wrap_0 *y);
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_boolean_T *y);
static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *rayGd, const
  char_T *identifier, struct1_T *y);
static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct1_T *y);
static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y);
static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[4]);
static real_T p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *tStep,
  const char_T *identifier);
static real_T (*q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *margin,
  const char_T *identifier))[4];
static real_T (*r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[4];
static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *cnst, const
  char_T *identifier, struct2_T *y);
static void t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct2_T *y);
static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);
static void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_char_T *ret);
static real_T x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static void y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret);

/* Function Definitions */
static void ab_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_boolean_T *ret)
{
  static const int32_T dims[2] = { 1, -1 };

  int32_T iv[2];
  int32_T i;
  const boolean_T bv[2] = { false, true };

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "logical", false, 2U, dims, &bv[0],
    iv);
  i = ret->size[0] * ret->size[1];
  ret->size[0] = iv[0];
  ret->size[1] = iv[1];
  emxEnsureCapacity_boolean_T(sp, ret, i, (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b(sp, src, ret->data, 1, false);
  emlrtDestroyArray(&src);
}

static const mxArray *b_emlrt_marshallOut(const emxArray_real_T *u)
{
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T iv[2];
  int32_T b_i;
  int32_T i;
  y = NULL;
  iv[0] = u->size[0];
  iv[1] = u->size[1];
  m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
  pData = emlrtMxGetPr(m);
  i = 0;
  for (b_i = 0; b_i < u->size[1]; b_i++) {
    pData[i] = u->data[b_i];
    i++;
  }

  emlrtAssign(&y, m);
  return y;
}

static void bb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[1] = { -1 };

  int32_T iv[1];
  int32_T i;
  const boolean_T bv[1] = { true };

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 1U, dims, &bv[0],
    iv);
  i = ret->size[0];
  ret->size[0] = iv[0];
  emxEnsureCapacity_real_T(sp, ret, i, (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b(sp, src, ret->data, 8, false);
  emlrtDestroyArray(&src);
}

static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *rayBundle,
  const char_T *identifier, struct0_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  d_emlrt_marshallIn(sp, emlrtAlias(rayBundle), &thisId, y);
  emlrtDestroyArray(&rayBundle);
}

static void cb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { -1, -1 };

  int32_T iv[2];
  int32_T i;
  const boolean_T bv[2] = { true, true };

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv[0],
    iv);
  i = ret->size[0] * ret->size[1];
  ret->size[0] = iv[0];
  ret->size[1] = iv[1];
  emxEnsureCapacity_real_T(sp, ret, i, (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b(sp, src, ret->data, 8, false);
  emlrtDestroyArray(&src);
}

static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct0_T *y)
{
  static const int32_T dims = 0;
  static const char_T *fieldNames[7] = { "frequency", "nc", "type", "mode",
    "nrays", "trajs", "halt" };

  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 7, fieldNames, 0U, &dims);
  thisId.fIdentifier = "frequency";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 0, "frequency")),
                     &thisId, y->frequency);
  thisId.fIdentifier = "nc";
  e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 1, "nc")),
                     &thisId, y->nc);
  thisId.fIdentifier = "type";
  f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 2, "type")),
                     &thisId, y->type);
  thisId.fIdentifier = "mode";
  f_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 3, "mode")),
                     &thisId, y->mode);
  thisId.fIdentifier = "nrays";
  y->nrays = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 4,
    "nrays")), &thisId);
  thisId.fIdentifier = "trajs";
  h_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 5, "trajs")),
                     &thisId, y->trajs);
  thisId.fIdentifier = "halt";
  j_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 6, "halt")),
                     &thisId, y->halt);
  emlrtDestroyArray(&u);
}

static void db_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real_T ret[4])
{
  static const int32_T dims[2] = { 1, 4 };

  real_T (*r)[4];
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  r = (real_T (*)[4])emlrtMxGetData(src);
  ret[0] = (*r)[0];
  ret[1] = (*r)[1];
  ret[2] = (*r)[2];
  ret[3] = (*r)[3];
  emlrtDestroyArray(&src);
}

static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  v_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T (*eb_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[4]
{
  static const int32_T dims[2] = { 1, 4 };

  real_T (*ret)[4];
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[4])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static const mxArray *emlrt_marshallOut(const emlrtStack *sp, const struct0_T
  u)
{
  static const char_T *sv[7] = { "frequency", "nc", "type", "mode", "nrays",
    "trajs", "halt" };

  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *m;
  const mxArray *y;
  real_T *pData;
  int32_T iv[2];
  int32_T b_i;
  int32_T c_i;
  int32_T i;
  int32_T i1;
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 7, sv));
  emlrtSetFieldR2017b(y, 0, "frequency", b_emlrt_marshallOut(u.frequency), 0);
  emlrtSetFieldR2017b(y, 0, "nc", b_emlrt_marshallOut(u.nc), 1);
  b_y = NULL;
  iv[0] = u.type->size[0];
  iv[1] = u.type->size[1];
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(sp, u.type->size[1], m, &u.type->data[0]);
  emlrtAssign(&b_y, m);
  emlrtSetFieldR2017b(y, 0, "type", b_y, 2);
  c_y = NULL;
  iv[0] = u.mode->size[0];
  iv[1] = u.mode->size[1];
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(sp, u.mode->size[1], m, &u.mode->data[0]);
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(y, 0, "mode", c_y, 3);
  d_y = NULL;
  m = emlrtCreateDoubleScalar(u.nrays);
  emlrtAssign(&d_y, m);
  emlrtSetFieldR2017b(y, 0, "nrays", d_y, 4);
  e_y = NULL;
  emlrtAssign(&e_y, emlrtCreateCellArrayR2014a(2, *(int32_T (*)[2])u.trajs->size));
  for (i = 0; i < u.trajs->size[1]; i++) {
    f_y = NULL;
    iv[0] = u.trajs->data[i].f1->size[0];
    iv[1] = u.trajs->data[i].f1->size[1];
    m = emlrtCreateNumericArray(2, &iv[0], mxDOUBLE_CLASS, mxREAL);
    pData = emlrtMxGetPr(m);
    i1 = 0;
    for (b_i = 0; b_i < 5; b_i++) {
      for (c_i = 0; c_i < u.trajs->data[i].f1->size[0]; c_i++) {
        pData[i1] = u.trajs->data[i].f1->data[c_i + u.trajs->data[i].f1->size[0]
          * b_i];
        i1++;
      }
    }

    emlrtAssign(&f_y, m);
    emlrtSetCell(e_y, i, f_y);
  }

  emlrtSetFieldR2017b(y, 0, "trajs", e_y, 5);
  g_y = NULL;
  iv[0] = u.halt->size[0];
  iv[1] = u.halt->size[1];
  m = emlrtCreateLogicalArray(2, &iv[0]);
  emlrtInitLogicalArray(u.halt->size[1], m, u.halt->data);
  emlrtAssign(&g_y, m);
  emlrtSetFieldR2017b(y, 0, "halt", g_y, 6);
  return y;
}

static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_char_T *y)
{
  w_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = x_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_cell_wrap_0 *y)
{
  static const boolean_T bv[2] = { false, true };

  emlrtMsgIdentifier thisId;
  int32_T iv[2];
  int32_T sizes[2];
  int32_T i;
  char_T str[11];
  thisId.fParent = parentId;
  thisId.bParentIsCell = true;
  iv[0] = 1;
  iv[1] = -1;
  emlrtCheckVsCell(sp, parentId, u, 2U, iv, bv, sizes);
  i = y->size[0] * y->size[1];
  y->size[0] = sizes[0];
  y->size[1] = sizes[1];
  emxEnsureCapacity_cell_wrap_0(sp, y, i, (emlrtRTEInfo *)NULL);
  for (i = 0; i < sizes[1]; i++) {
    sprintf(&str[0], "%d", i + 1);
    thisId.fIdentifier = &str[0];
    i_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, i)), &thisId,
                       y->data[i].f1);
  }

  emlrtDestroyArray(&u);
}

static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  y_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_boolean_T *y)
{
  ab_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *rayGd, const
  char_T *identifier, struct1_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  l_emlrt_marshallIn(sp, emlrtAlias(rayGd), &thisId, y);
  emlrtDestroyArray(&rayGd);
}

static void l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct1_T *y)
{
  static const int32_T dims = 0;
  static const char_T *fieldNames[9] = { "zVal", "rVal", "gridNe",
    "gridDLogNedz", "gridDLogNedr", "gridTe", "gridDLnTedr", "gridDLnTedz",
    "domain" };

  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 9, fieldNames, 0U, &dims);
  thisId.fIdentifier = "zVal";
  m_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 0, "zVal")),
                     &thisId, y->zVal);
  thisId.fIdentifier = "rVal";
  m_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 1, "rVal")),
                     &thisId, y->rVal);
  thisId.fIdentifier = "gridNe";
  n_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 2, "gridNe")),
                     &thisId, y->gridNe);
  thisId.fIdentifier = "gridDLogNedz";
  n_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 3,
    "gridDLogNedz")), &thisId, y->gridDLogNedz);
  thisId.fIdentifier = "gridDLogNedr";
  n_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 4,
    "gridDLogNedr")), &thisId, y->gridDLogNedr);
  thisId.fIdentifier = "gridTe";
  n_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 5, "gridTe")),
                     &thisId, y->gridTe);
  thisId.fIdentifier = "gridDLnTedr";
  n_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 6,
    "gridDLnTedr")), &thisId, y->gridDLnTedr);
  thisId.fIdentifier = "gridDLnTedz";
  n_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 7,
    "gridDLnTedz")), &thisId, y->gridDLnTedz);
  thisId.fIdentifier = "domain";
  o_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 8, "domain")),
                     &thisId, y->domain);
  emlrtDestroyArray(&u);
}

static void m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  bb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, emxArray_real_T *y)
{
  cb_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real_T y[4])
{
  db_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static real_T p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *tStep,
  const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  real_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = g_emlrt_marshallIn(sp, emlrtAlias(tStep), &thisId);
  emlrtDestroyArray(&tStep);
  return y;
}

static real_T (*q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *margin,
  const char_T *identifier))[4]
{
  emlrtMsgIdentifier thisId;
  real_T (*y)[4];
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = r_emlrt_marshallIn(sp, emlrtAlias(margin), &thisId);
  emlrtDestroyArray(&margin);
  return y;
}
  static real_T (*r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[4]
{
  real_T (*y)[4];
  y = eb_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *cnst, const
  char_T *identifier, struct2_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  t_emlrt_marshallIn(sp, emlrtAlias(cnst), &thisId, y);
  emlrtDestroyArray(&cnst);
}

static void t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct2_T *y)
{
  static const int32_T dims = 0;
  static const char_T *fieldNames[15] = { "c", "e", "eps0", "mp", "pi", "twopi",
    "ln10", "cumps", "vTe1eV", "wpe", "lamDebye", "vosc", "voscToC", "lambda0",
    "omega0" };

  emlrtMsgIdentifier thisId;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 15, fieldNames, 0U, &dims);
  thisId.fIdentifier = "c";
  y->c = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 0, "c")),
    &thisId);
  thisId.fIdentifier = "e";
  y->e = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 1, "e")),
    &thisId);
  thisId.fIdentifier = "eps0";
  y->eps0 = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 2,
    "eps0")), &thisId);
  thisId.fIdentifier = "mp";
  y->mp = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 3,
    "mp")), &thisId);
  thisId.fIdentifier = "pi";
  y->pi = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 4,
    "pi")), &thisId);
  thisId.fIdentifier = "twopi";
  y->twopi = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 5,
    "twopi")), &thisId);
  thisId.fIdentifier = "ln10";
  y->ln10 = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 6,
    "ln10")), &thisId);
  thisId.fIdentifier = "cumps";
  y->cumps = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 7,
    "cumps")), &thisId);
  thisId.fIdentifier = "vTe1eV";
  y->vTe1eV = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 8,
    "vTe1eV")), &thisId);
  thisId.fIdentifier = "wpe";
  y->wpe = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 9,
    "wpe")), &thisId);
  thisId.fIdentifier = "lamDebye";
  y->lamDebye = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0,
    10, "lamDebye")), &thisId);
  thisId.fIdentifier = "vosc";
  y->vosc = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 11,
    "vosc")), &thisId);
  thisId.fIdentifier = "voscToC";
  y->voscToC = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0,
    12, "voscToC")), &thisId);
  thisId.fIdentifier = "lambda0";
  y->lambda0 = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0,
    13, "lambda0")), &thisId);
  thisId.fIdentifier = "omega0";
  y->omega0 = g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 14,
    "omega0")), &thisId);
  emlrtDestroyArray(&u);
}

static void v_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { 1, -1 };

  int32_T iv[2];
  int32_T i;
  const boolean_T bv[2] = { false, true };

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv[0],
    iv);
  i = ret->size[0] * ret->size[1];
  ret->size[0] = iv[0];
  ret->size[1] = iv[1];
  emxEnsureCapacity_real_T(sp, ret, i, (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b(sp, src, ret->data, 8, false);
  emlrtDestroyArray(&src);
}

static void w_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_char_T *ret)
{
  static const int32_T dims[2] = { 1, -1 };

  int32_T iv[2];
  int32_T i;
  const boolean_T bv[2] = { false, true };

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "char", false, 2U, dims, &bv[0], iv);
  i = ret->size[0] * ret->size[1];
  ret->size[0] = iv[0];
  ret->size[1] = iv[1];
  emxEnsureCapacity_char_T(sp, ret, i, (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b(sp, src, ret->data, 1, false);
  emlrtDestroyArray(&src);
}

static real_T x_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  real_T ret;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void y_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, emxArray_real_T *ret)
{
  static const int32_T dims[2] = { -1, 5 };

  int32_T iv[2];
  int32_T i;
  const boolean_T bv[2] = { true, false };

  emlrtCheckVsBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims, &bv[0],
    iv);
  i = ret->size[0] * ret->size[1];
  ret->size[0] = iv[0];
  ret->size[1] = iv[1];
  emxEnsureCapacity_real_T(sp, ret, i, (emlrtRTEInfo *)NULL);
  emlrtImportArrayR2015b(sp, src, ret->data, 8, false);
  emlrtDestroyArray(&src);
}

void propAlg_api(const mxArray * const prhs[6], const mxArray *plhs[1])
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  struct0_T b_rayBundle;
  struct0_T bundleOut_internal;
  struct0_T rayBundle;
  struct1_T rayGd;
  struct2_T cnst;
  real_T (*margin)[4];
  real_T npts;
  real_T tStep;
  st.tls = emlrtRootTLSGlobal;
  emlrtHeapReferenceStackEnterFcnR2012b(&st);
  emxInitStruct_struct0_T(&st, &rayBundle, &ab_emlrtRTEI, true);
  emxInitStruct_struct1_T(&st, &rayGd, &ab_emlrtRTEI, true);
  emxInitStruct_struct0_T(&st, &bundleOut_internal, &ab_emlrtRTEI, true);

  /* Marshall function inputs */
  c_emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "rayBundle", &rayBundle);
  k_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "rayGd", &rayGd);
  tStep = p_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "tStep");
  margin = q_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "margin");
  npts = p_emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "npts");
  s_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "cnst", &cnst);

  /* Invoke the target function */
  b_rayBundle = rayBundle;
  propAlg(&st, &b_rayBundle, &rayGd, tStep, *margin, npts, &cnst,
          &bundleOut_internal);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(&st, bundleOut_internal);
  emxFreeStruct_struct0_T(&bundleOut_internal);
  emxFreeStruct_struct1_T(&rayGd);
  emxFreeStruct_struct0_T(&rayBundle);
  emlrtHeapReferenceStackLeaveFcnR2012b(&st);
}

/* End of code generation (_coder_propAlg_api.c) */
