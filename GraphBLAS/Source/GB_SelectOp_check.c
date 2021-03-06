//------------------------------------------------------------------------------
// GB_SelectOp_check: check and print a select operator
//------------------------------------------------------------------------------

// SuiteSparse:GraphBLAS, Timothy A. Davis, (c) 2017-2020, All Rights Reserved.
// http://suitesparse.com   See GraphBLAS/Doc/License.txt for license.

//------------------------------------------------------------------------------

#include "GB.h"

GB_PUBLIC   // accessed by the MATLAB tests in GraphBLAS/Test only
GrB_Info GB_SelectOp_check  // check a GraphBLAS select operator
(
    const GxB_SelectOp op,  // GraphBLAS operator to print and check
    const char *name,       // name of the operator
    int pr,                 // print level
    FILE *f,                // file for output
    GB_Context Context
)
{

    //--------------------------------------------------------------------------
    // check inputs
    //--------------------------------------------------------------------------

    GBPR0 ("\n    GraphBLAS SelectOp: %s: ", GB_NAME) ;

    if (op == NULL)
    { 
        // GrB_error status not modified since this may be an optional argument
        GBPR0 ("NULL\n") ;
        return (GrB_NULL_POINTER) ;
    }

    //--------------------------------------------------------------------------
    // check object
    //--------------------------------------------------------------------------

    GB_CHECK_MAGIC (op, "SelectOp") ;

    if (op->opcode >= GB_USER_SELECT_opcode)
    { 
        GBPR0 ("(user-defined) ") ;
    }
    else
    { 
        GBPR0 ("(built-in) ") ;
    }

    GBPR0 ("C=%s(A,k)\n", op->name) ;

    if (op->function == NULL && op->opcode >= GB_USER_SELECT_opcode)
    { 
        GBPR0 ("    function pointer is NULL\n") ;
        return (GB_ERROR (GrB_INVALID_OBJECT, (GB_LOG,
            "SelectOp has a NULL function pointer: %s [%s]",
            GB_NAME, op->name))) ;
    }

    if (op->opcode < GB_TRIL_opcode || op->opcode > GB_USER_SELECT_opcode)
    { 
        GBPR0 ("    invalid opcode\n") ;
        return (GB_ERROR (GrB_INVALID_OBJECT, (GB_LOG,
            "SelectOp has an invalid opcode: %s [%s]", GB_NAME, op->name))) ;
    }

    if (op->xtype != NULL)
    { 
        GrB_Info info = GB_Type_check (op->xtype, "xtype", pr, f, Context) ;
        if (info != GrB_SUCCESS)
        { 
            GBPR0 ("    SelectOp has an invalid xtype\n") ;
            return (GB_ERROR (GrB_INVALID_OBJECT, (GB_LOG,
                "SelectOp has an invalid xtype: %s [%s]", GB_NAME, op->name))) ;
        }
    }

    if (op->ttype != NULL)
    { 
        GrB_Info info = GB_Type_check (op->ttype, "ttype", pr, f, Context) ;
        if (info != GrB_SUCCESS)
        { 
            GBPR0 ("    SelectOp has an invalid ttype\n") ;
            return (GB_ERROR (GrB_INVALID_OBJECT, (GB_LOG,
                "SelectOp has an invalid ttype: %s [%s]", GB_NAME, op->name))) ;
        }
    }

    return (GrB_SUCCESS) ;
}

