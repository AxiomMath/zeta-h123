// Lean compiler output
// Module: H1.problem
// Imports: public import Init public import Mathlib
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
LEAN_EXPORT lean_object* lp_ZetaH123_Finset_sum___at___00bCoeff_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* lp_mathlib_Multiset_map___redArg(lean_object*, lean_object*);
lean_object* l_Int_add___boxed(lean_object*, lean_object*);
static lean_object* lp_ZetaH123_Multiset_sum___at___00Finset_sum___at___00bCoeff_spec__0_spec__0___closed__0;
LEAN_EXPORT lean_object* lp_ZetaH123_bCoeff___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ZetaH123_bCoeff___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ZetaH123_F___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ZetaH123_digit___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ZetaH123_bCoeff(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* l_Int_pow(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ZetaH123_Multiset_sum___at___00Finset_sum___at___00bCoeff_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* lp_ZetaH123_digit(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ZetaH123_F___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* lp_ZetaH123_Multiset_sum___at___00Finset_sum___at___00bCoeff_spec__0_spec__0___closed__1;
lean_object* l_List_foldrTR___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ZetaH123_bCoeff___lam__0___boxed(lean_object*, lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* lean_nat_pow(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ZetaH123_Finset_sum___at___00bCoeff_spec__0___redArg(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* l_List_finRange(lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lp_mathlib_Finset_Ico___at___00FormalMultilinearSeries_compPartialSumSource_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ZetaH123_F(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ZetaH123_digit(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_nat_pow(x_1, x_3);
x_5 = lean_nat_div(x_2, x_4);
lean_dec(x_4);
x_6 = lean_nat_mod(x_5, x_1);
lean_dec(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* lp_ZetaH123_digit___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_ZetaH123_digit(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_ZetaH123_bCoeff___lam__0(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_nat_to_int(x_1);
x_4 = l_Int_pow(x_3, x_2);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_ZetaH123_bCoeff___lam__0___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_ZetaH123_bCoeff___lam__0(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_lp_ZetaH123_Multiset_sum___at___00Finset_sum___at___00bCoeff_spec__0_spec__0___closed__0() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Int_add___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_lp_ZetaH123_Multiset_sum___at___00Finset_sum___at___00bCoeff_spec__0_spec__0___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_ZetaH123_Multiset_sum___at___00Finset_sum___at___00bCoeff_spec__0_spec__0(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lp_ZetaH123_Multiset_sum___at___00Finset_sum___at___00bCoeff_spec__0_spec__0___closed__0;
x_3 = lp_ZetaH123_Multiset_sum___at___00Finset_sum___at___00bCoeff_spec__0_spec__0___closed__1;
x_4 = l_List_foldrTR___redArg(x_2, x_3, x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_ZetaH123_Finset_sum___at___00bCoeff_spec__0___redArg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lp_mathlib_Multiset_map___redArg(x_2, x_1);
x_4 = lp_ZetaH123_Multiset_sum___at___00Finset_sum___at___00bCoeff_spec__0_spec__0(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_ZetaH123_bCoeff(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(lp_ZetaH123_bCoeff___lam__0___boxed), 2, 1);
lean_closure_set(x_4, 0, x_1);
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_add(x_2, x_5);
x_7 = lean_nat_add(x_3, x_5);
x_8 = lp_mathlib_Finset_Ico___at___00FormalMultilinearSeries_compPartialSumSource_spec__0(x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
x_9 = lp_ZetaH123_Finset_sum___at___00bCoeff_spec__0___redArg(x_8, x_4);
lean_inc(x_2);
x_10 = lean_nat_to_int(x_2);
x_11 = lean_nat_to_int(x_1);
x_12 = l_Int_pow(x_11, x_2);
lean_dec(x_2);
lean_dec(x_11);
x_13 = lean_int_mul(x_10, x_12);
lean_dec(x_12);
lean_dec(x_10);
x_14 = lean_int_add(x_9, x_13);
lean_dec(x_13);
lean_dec(x_9);
x_15 = lean_int_neg(x_14);
lean_dec(x_14);
return x_15;
}
}
LEAN_EXPORT lean_object* lp_ZetaH123_bCoeff___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_ZetaH123_bCoeff(x_1, x_2, x_3);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_ZetaH123_Finset_sum___at___00bCoeff_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_ZetaH123_Finset_sum___at___00bCoeff_spec__0___redArg(x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_ZetaH123_F___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
lean_inc(x_4);
x_5 = lean_apply_1(x_1, x_4);
x_6 = lean_nat_to_int(x_5);
x_7 = lp_ZetaH123_bCoeff(x_2, x_4, x_3);
x_8 = lean_int_mul(x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* lp_ZetaH123_F___lam__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lp_ZetaH123_F___lam__0(x_1, x_2, x_3, x_4);
lean_dec(x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_ZetaH123_F(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
lean_inc(x_2);
lean_inc(x_1);
x_4 = lean_alloc_closure((void*)(lp_ZetaH123_F___lam__0___boxed), 4, 3);
lean_closure_set(x_4, 0, x_3);
lean_closure_set(x_4, 1, x_1);
lean_closure_set(x_4, 2, x_2);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lp_ZetaH123_bCoeff(x_1, x_5, x_2);
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_add(x_2, x_7);
lean_dec(x_2);
x_9 = l_List_finRange(x_8);
x_10 = lp_ZetaH123_Finset_sum___at___00bCoeff_spec__0___redArg(x_9, x_4);
x_11 = lean_int_add(x_6, x_10);
lean_dec(x_10);
lean_dec(x_6);
return x_11;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_ZetaH123_H1_problem(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_ZetaH123_Multiset_sum___at___00Finset_sum___at___00bCoeff_spec__0_spec__0___closed__0 = _init_lp_ZetaH123_Multiset_sum___at___00Finset_sum___at___00bCoeff_spec__0_spec__0___closed__0();
lean_mark_persistent(lp_ZetaH123_Multiset_sum___at___00Finset_sum___at___00bCoeff_spec__0_spec__0___closed__0);
lp_ZetaH123_Multiset_sum___at___00Finset_sum___at___00bCoeff_spec__0_spec__0___closed__1 = _init_lp_ZetaH123_Multiset_sum___at___00Finset_sum___at___00bCoeff_spec__0_spec__0___closed__1();
lean_mark_persistent(lp_ZetaH123_Multiset_sum___at___00Finset_sum___at___00bCoeff_spec__0_spec__0___closed__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
