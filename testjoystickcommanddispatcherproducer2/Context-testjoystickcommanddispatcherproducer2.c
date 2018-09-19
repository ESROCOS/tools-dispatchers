/*
Code automatically generated by asn1scc tool
*/
#include <limits.h>
#include <string.h>
#include <math.h>
#include "Context-testjoystickcommanddispatcherproducer2.h"


const asn1SccContext_testjoystickcommanddispatcherproducer2 testjoystickcommanddispatcherproducer2_ctxt = {
    .init_val = 0.00000000000000000000E+000,
    .inc = 1.00000000000000000000E-002
};


flag asn1SccContext_testjoystickcommanddispatcherproducer2_Equal(const asn1SccContext_testjoystickcommanddispatcherproducer2* pVal1, const asn1SccContext_testjoystickcommanddispatcherproducer2* pVal2)
{
	flag ret=TRUE;

    ret = (pVal1->init_val == pVal2->init_val);

    if (ret) {
        ret = (pVal1->inc == pVal2->inc);

    }
	return ret;

}

void asn1SccContext_testjoystickcommanddispatcherproducer2_Initialize(asn1SccContext_testjoystickcommanddispatcherproducer2* pVal)
{


	/*set init_val */
	asn1SccT_Float_Initialize((&(pVal->init_val)));
	/*set inc */
	asn1SccT_Float_Initialize((&(pVal->inc)));
}

flag asn1SccContext_testjoystickcommanddispatcherproducer2_IsConstraintValid(const asn1SccContext_testjoystickcommanddispatcherproducer2 *pVal, int* pErrCode)
{
    flag ret = TRUE;
	
    ret = ((-3.40282346600000020000E+038 <= pVal->init_val) && (pVal->init_val <= 3.40282346600000020000E+038));
    *pErrCode = ret ? 0 :  ERR_CONTEXT_TESTJOYSTICKCOMMANDDISPATCHERPRODUCER2_INIT_VAL;
    if (ret) {
        ret = ((-3.40282346600000020000E+038 <= pVal->inc) && (pVal->inc <= 3.40282346600000020000E+038));
        *pErrCode = ret ? 0 :  ERR_CONTEXT_TESTJOYSTICKCOMMANDDISPATCHERPRODUCER2_INC;
    }

	return ret;
}

