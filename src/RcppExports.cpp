// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "SharedObject_types.h"
#include <Rcpp.h>

using namespace Rcpp;

// C_getSharedProperty
SEXP C_getSharedProperty(SEXP x);
RcppExport SEXP _SharedObject_C_getSharedProperty(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(C_getSharedProperty(x));
    return rcpp_result_gen;
END_RCPP
}
// C_testFunc
SEXP C_testFunc(SEXP a);
RcppExport SEXP _SharedObject_C_testFunc(SEXP aSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type a(aSEXP);
    rcpp_result_gen = Rcpp::wrap(C_testFunc(a));
    return rcpp_result_gen;
END_RCPP
}
// C_findAvailableKey
DID C_findAvailableKey(DID dataID);
RcppExport SEXP _SharedObject_C_findAvailableKey(SEXP dataIDSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DID >::type dataID(dataIDSEXP);
    rcpp_result_gen = Rcpp::wrap(C_findAvailableKey(dataID));
    return rcpp_result_gen;
END_RCPP
}
// C_createSharedMemory
void C_createSharedMemory(SEXP R_x, SEXP R_dataInfo);
RcppExport SEXP _SharedObject_C_createSharedMemory(SEXP R_xSEXP, SEXP R_dataInfoSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type R_x(R_xSEXP);
    Rcpp::traits::input_parameter< SEXP >::type R_dataInfo(R_dataInfoSEXP);
    C_createSharedMemory(R_x, R_dataInfo);
    return R_NilValue;
END_RCPP
}
// C_readSharedMemory
SEXP C_readSharedMemory(DID dataID);
RcppExport SEXP _SharedObject_C_readSharedMemory(SEXP dataIDSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DID >::type dataID(dataIDSEXP);
    rcpp_result_gen = Rcpp::wrap(C_readSharedMemory(dataID));
    return rcpp_result_gen;
END_RCPP
}
// C_createAltrep
SEXP C_createAltrep(SEXP SM_obj);
RcppExport SEXP _SharedObject_C_createAltrep(SEXP SM_objSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type SM_obj(SM_objSEXP);
    rcpp_result_gen = Rcpp::wrap(C_createAltrep(SM_obj));
    return rcpp_result_gen;
END_RCPP
}
// C_clearObj
void C_clearObj(double dataID);
RcppExport SEXP _SharedObject_C_clearObj(SEXP dataIDSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type dataID(dataIDSEXP);
    C_clearObj(dataID);
    return R_NilValue;
END_RCPP
}
// C_getDataIDList
std::vector<double> C_getDataIDList();
RcppExport SEXP _SharedObject_C_getDataIDList() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(C_getDataIDList());
    return rcpp_result_gen;
END_RCPP
}
// C_getDataInfo
NumericVector C_getDataInfo(DID dataID);
RcppExport SEXP _SharedObject_C_getDataInfo(SEXP dataIDSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DID >::type dataID(dataIDSEXP);
    rcpp_result_gen = Rcpp::wrap(C_getDataInfo(dataID));
    return rcpp_result_gen;
END_RCPP
}
// C_attachAttr
SEXP C_attachAttr(SEXP R_source, SEXP R_tag, SEXP R_attr);
RcppExport SEXP _SharedObject_C_attachAttr(SEXP R_sourceSEXP, SEXP R_tagSEXP, SEXP R_attrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type R_source(R_sourceSEXP);
    Rcpp::traits::input_parameter< SEXP >::type R_tag(R_tagSEXP);
    Rcpp::traits::input_parameter< SEXP >::type R_attr(R_attrSEXP);
    rcpp_result_gen = Rcpp::wrap(C_attachAttr(R_source, R_tag, R_attr));
    return rcpp_result_gen;
END_RCPP
}
// C_ALTREP
bool C_ALTREP(SEXP x);
RcppExport SEXP _SharedObject_C_ALTREP(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(C_ALTREP(x));
    return rcpp_result_gen;
END_RCPP
}
// C_getDataID
DID C_getDataID(DID did);
RcppExport SEXP _SharedObject_C_getDataID(SEXP didSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DID >::type did(didSEXP);
    rcpp_result_gen = Rcpp::wrap(C_getDataID(did));
    return rcpp_result_gen;
END_RCPP
}
// C_getProcessID
PID C_getProcessID(DID did);
RcppExport SEXP _SharedObject_C_getProcessID(SEXP didSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DID >::type did(didSEXP);
    rcpp_result_gen = Rcpp::wrap(C_getProcessID(did));
    return rcpp_result_gen;
END_RCPP
}
// C_getTypeID
int C_getTypeID(DID did);
RcppExport SEXP _SharedObject_C_getTypeID(SEXP didSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DID >::type did(didSEXP);
    rcpp_result_gen = Rcpp::wrap(C_getTypeID(did));
    return rcpp_result_gen;
END_RCPP
}
// C_getLength
ULLong C_getLength(DID did);
RcppExport SEXP _SharedObject_C_getLength(SEXP didSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DID >::type did(didSEXP);
    rcpp_result_gen = Rcpp::wrap(C_getLength(did));
    return rcpp_result_gen;
END_RCPP
}
// C_getTotalSize
ULLong C_getTotalSize(DID did);
RcppExport SEXP _SharedObject_C_getTotalSize(SEXP didSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DID >::type did(didSEXP);
    rcpp_result_gen = Rcpp::wrap(C_getTotalSize(did));
    return rcpp_result_gen;
END_RCPP
}
// C_getCopyOnWrite
bool C_getCopyOnWrite(DID did);
RcppExport SEXP _SharedObject_C_getCopyOnWrite(SEXP didSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DID >::type did(didSEXP);
    rcpp_result_gen = Rcpp::wrap(C_getCopyOnWrite(did));
    return rcpp_result_gen;
END_RCPP
}
// C_getSharedSubset
bool C_getSharedSubset(DID did);
RcppExport SEXP _SharedObject_C_getSharedSubset(SEXP didSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DID >::type did(didSEXP);
    rcpp_result_gen = Rcpp::wrap(C_getSharedSubset(did));
    return rcpp_result_gen;
END_RCPP
}
// C_getSharedCopy
bool C_getSharedCopy(DID did);
RcppExport SEXP _SharedObject_C_getSharedCopy(SEXP didSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DID >::type did(didSEXP);
    rcpp_result_gen = Rcpp::wrap(C_getSharedCopy(did));
    return rcpp_result_gen;
END_RCPP
}
// C_setCopyOnWrite
void C_setCopyOnWrite(DID did, bool value);
RcppExport SEXP _SharedObject_C_setCopyOnWrite(SEXP didSEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DID >::type did(didSEXP);
    Rcpp::traits::input_parameter< bool >::type value(valueSEXP);
    C_setCopyOnWrite(did, value);
    return R_NilValue;
END_RCPP
}
// C_setSharedSubset
void C_setSharedSubset(DID did, bool value);
RcppExport SEXP _SharedObject_C_setSharedSubset(SEXP didSEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DID >::type did(didSEXP);
    Rcpp::traits::input_parameter< bool >::type value(valueSEXP);
    C_setSharedSubset(did, value);
    return R_NilValue;
END_RCPP
}
// C_setSharedCopy
void C_setSharedCopy(DID did, bool value);
RcppExport SEXP _SharedObject_C_setSharedCopy(SEXP didSEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DID >::type did(didSEXP);
    Rcpp::traits::input_parameter< bool >::type value(valueSEXP);
    C_setSharedCopy(did, value);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_SharedObject_C_getSharedProperty", (DL_FUNC) &_SharedObject_C_getSharedProperty, 1},
    {"_SharedObject_C_testFunc", (DL_FUNC) &_SharedObject_C_testFunc, 1},
    {"_SharedObject_C_findAvailableKey", (DL_FUNC) &_SharedObject_C_findAvailableKey, 1},
    {"_SharedObject_C_createSharedMemory", (DL_FUNC) &_SharedObject_C_createSharedMemory, 2},
    {"_SharedObject_C_readSharedMemory", (DL_FUNC) &_SharedObject_C_readSharedMemory, 1},
    {"_SharedObject_C_createAltrep", (DL_FUNC) &_SharedObject_C_createAltrep, 1},
    {"_SharedObject_C_clearObj", (DL_FUNC) &_SharedObject_C_clearObj, 1},
    {"_SharedObject_C_getDataIDList", (DL_FUNC) &_SharedObject_C_getDataIDList, 0},
    {"_SharedObject_C_getDataInfo", (DL_FUNC) &_SharedObject_C_getDataInfo, 1},
    {"_SharedObject_C_attachAttr", (DL_FUNC) &_SharedObject_C_attachAttr, 3},
    {"_SharedObject_C_ALTREP", (DL_FUNC) &_SharedObject_C_ALTREP, 1},
    {"_SharedObject_C_getDataID", (DL_FUNC) &_SharedObject_C_getDataID, 1},
    {"_SharedObject_C_getProcessID", (DL_FUNC) &_SharedObject_C_getProcessID, 1},
    {"_SharedObject_C_getTypeID", (DL_FUNC) &_SharedObject_C_getTypeID, 1},
    {"_SharedObject_C_getLength", (DL_FUNC) &_SharedObject_C_getLength, 1},
    {"_SharedObject_C_getTotalSize", (DL_FUNC) &_SharedObject_C_getTotalSize, 1},
    {"_SharedObject_C_getCopyOnWrite", (DL_FUNC) &_SharedObject_C_getCopyOnWrite, 1},
    {"_SharedObject_C_getSharedSubset", (DL_FUNC) &_SharedObject_C_getSharedSubset, 1},
    {"_SharedObject_C_getSharedCopy", (DL_FUNC) &_SharedObject_C_getSharedCopy, 1},
    {"_SharedObject_C_setCopyOnWrite", (DL_FUNC) &_SharedObject_C_setCopyOnWrite, 2},
    {"_SharedObject_C_setSharedSubset", (DL_FUNC) &_SharedObject_C_setSharedSubset, 2},
    {"_SharedObject_C_setSharedCopy", (DL_FUNC) &_SharedObject_C_setSharedCopy, 2},
    {NULL, NULL, 0}
};

void init_real_class(DllInfo* dll);
void init_integer_class(DllInfo* dll);
void init_logical_class(DllInfo* dll);
void init_raw_class(DllInfo* dll);
void init_str_class(DllInfo* dll);
RcppExport void R_init_SharedObject(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
    init_real_class(dll);
    init_integer_class(dll);
    init_logical_class(dll);
    init_raw_class(dll);
    init_str_class(dll);
}
