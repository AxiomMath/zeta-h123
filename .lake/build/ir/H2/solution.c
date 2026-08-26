// Lean compiler output
// Module: H2.solution
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lp_mathlib_List_sum___at___00Nat_zeckendorfEquiv_spec__1(lean_object*);
LEAN_EXPORT lean_object* lp_ZetaH123_blockSum(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ZetaH123_Phi___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ZetaH123_slotLen___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_List_range(lean_object*);
LEAN_EXPORT lean_object* lp_ZetaH123_qdigit(lean_object*, lean_object*, lean_object*);
lean_object* l_List_replicateTR___redArg(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
LEAN_EXPORT lean_object* lp_ZetaH123_slotList(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ZetaH123_slotList___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lp_mathlib_Finset_sum___at___00Fin_accumulate_spec__0___redArg(lean_object*, lean_object*);
static lean_object* lp_ZetaH123_slotList___closed__0;
lean_object* lean_nat_pow(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ZetaH123_Phi___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lp_mathlib_Nat_digits(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ZetaH123_Phi(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ZetaH123___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00slotList_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ZetaH123_slotLen___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ZetaH123_qdigit___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ZetaH123___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00slotList_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ZetaH123_slotLen___redArg___boxed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ZetaH123_slotLen(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ZetaH123_blockSum___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_getD___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_drop___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_ZetaH123_qdigit(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lp_mathlib_Nat_digits(x_1, x_2);
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_List_getD___redArg(x_4, x_3, x_5);
lean_dec(x_4);
return x_6;
}
}
LEAN_EXPORT lean_object* lp_ZetaH123_qdigit___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_ZetaH123_qdigit(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_ZetaH123___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00slotList_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_5; 
lean_dec(x_2);
x_5 = lean_array_to_list(x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_6 = lean_ctor_get(x_3, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_3, 1);
lean_inc(x_7);
lean_dec_ref(x_3);
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_1, x_8);
lean_inc(x_6);
lean_inc(x_2);
x_10 = lp_ZetaH123_qdigit(x_1, x_2, x_6);
x_11 = lean_nat_sub(x_9, x_10);
lean_dec(x_10);
lean_dec(x_9);
x_12 = lean_nat_pow(x_1, x_6);
lean_dec(x_6);
x_13 = l_List_replicateTR___redArg(x_11, x_12);
x_14 = l_List_foldl___at___00Array_appendList_spec__0___redArg(x_4, x_13);
x_3 = x_7;
x_4 = x_14;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_ZetaH123___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00slotList_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lp_ZetaH123___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00slotList_spec__0(x_1, x_2, x_3, x_4);
lean_dec(x_1);
return x_5;
}
}
static lean_object* _init_lp_ZetaH123_slotList___closed__0() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_ZetaH123_slotList(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = l_List_range(x_3);
x_5 = lp_ZetaH123_slotList___closed__0;
x_6 = lp_ZetaH123___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00slotList_spec__0(x_1, x_2, x_4, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* lp_ZetaH123_slotList___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_ZetaH123_slotList(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_ZetaH123_blockSum(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_sub(x_1, x_5);
x_7 = lean_nat_sub(x_4, x_5);
x_8 = lean_nat_mul(x_7, x_6);
lean_dec(x_7);
x_9 = lp_ZetaH123_slotList(x_1, x_2, x_3);
x_10 = l_List_drop___redArg(x_8, x_9);
lean_dec(x_9);
x_11 = lp_ZetaH123_slotList___closed__0;
lean_inc(x_10);
x_12 = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(x_10, x_10, x_6, x_11);
lean_dec(x_10);
x_13 = lp_mathlib_List_sum___at___00Nat_zeckendorfEquiv_spec__1(x_12);
lean_dec(x_12);
return x_13;
}
}
LEAN_EXPORT lean_object* lp_ZetaH123_blockSum___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lp_ZetaH123_blockSum(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_ZetaH123_Phi___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_nat_sub(x_1, x_5);
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_add(x_5, x_7);
x_9 = lp_ZetaH123_blockSum(x_2, x_3, x_4, x_8);
lean_dec(x_8);
x_10 = lean_nat_mul(x_6, x_9);
lean_dec(x_9);
lean_dec(x_6);
return x_10;
}
}
LEAN_EXPORT lean_object* lp_ZetaH123_Phi___lam__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lp_ZetaH123_Phi___lam__0(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_5);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* lp_ZetaH123_Phi(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
lean_inc(x_3);
x_5 = lean_alloc_closure((void*)(lp_ZetaH123_Phi___lam__0___boxed), 5, 4);
lean_closure_set(x_5, 0, x_3);
lean_closure_set(x_5, 1, x_1);
lean_closure_set(x_5, 2, x_2);
lean_closure_set(x_5, 3, x_4);
x_6 = l_List_range(x_3);
x_7 = lp_mathlib_Finset_sum___at___00Fin_accumulate_spec__0___redArg(x_6, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* lp_ZetaH123_slotLen___redArg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = lean_unsigned_to_nat(1u);
x_4 = lean_nat_add(x_2, x_3);
x_5 = lean_nat_mul(x_1, x_4);
lean_dec(x_4);
x_6 = lean_nat_add(x_2, x_5);
lean_dec(x_5);
x_7 = lean_nat_add(x_6, x_3);
lean_dec(x_6);
return x_7;
}
}
LEAN_EXPORT lean_object* lp_ZetaH123_slotLen___redArg___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_ZetaH123_slotLen___redArg(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_ZetaH123_slotLen(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_ZetaH123_slotLen___redArg(x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_ZetaH123_slotLen___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_ZetaH123_slotLen(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_mathlib_Mathlib(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_ZetaH123_H2_solution(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_mathlib_Mathlib(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_ZetaH123_slotList___closed__0 = _init_lp_ZetaH123_slotList___closed__0();
lean_mark_persistent(lp_ZetaH123_slotList___closed__0);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
