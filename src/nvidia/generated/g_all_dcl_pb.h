// Generated by the protocol buffer compiler.  DO NOT EDIT!

#ifndef G_ALL_DCL_PB_H__
#define G_ALL_DCL_PB_H__

#include "g_engines_pb.h"
#include "g_journal_pb.h"
#include "g_rc_pb.h"
#include "g_regs_pb.h"

extern const PRB_MSG_DESC prb_messages_dcl[];

// Message descriptor pointers
#define DCL_ENGINES (&prb_messages_dcl[0])
#define DCL_DCLMSG (&prb_messages_dcl[1])
#define DCL_ERRORBLOCK (&prb_messages_dcl[2])

// Message maximum lengths
// Does not include repeated fields, strings and byte arrays.
#define DCL_ENGINES_LEN 130
#define DCL_DCLMSG_LEN 567
#define DCL_ERRORBLOCK_LEN 571

extern const PRB_FIELD_DESC prb_fields_dcl_engines[];

// 'Engines' field descriptor pointers
#define DCL_ENGINES_ENG_GPU (&prb_fields_dcl_engines[0])
#define DCL_ENGINES_ENG_MC (&prb_fields_dcl_engines[1])

// 'Engines' field lengths
#define DCL_ENGINES_ENG_GPU_LEN 59
#define DCL_ENGINES_ENG_MC_LEN 69

extern const PRB_FIELD_DESC prb_fields_dcl_dclmsg[];

// 'DclMsg' field descriptor pointers
#define DCL_DCLMSG_COMMON (&prb_fields_dcl_dclmsg[0])
#define DCL_DCLMSG_JOURNAL_ASSERT (&prb_fields_dcl_dclmsg[1])
#define DCL_DCLMSG_JOURNAL_RVAHEADER (&prb_fields_dcl_dclmsg[2])
#define DCL_DCLMSG_JOURNAL_BADREAD (&prb_fields_dcl_dclmsg[3])
#define DCL_DCLMSG_JOURNAL_BUGCHECK (&prb_fields_dcl_dclmsg[4])
#define DCL_DCLMSG_RCCOUNTER (&prb_fields_dcl_dclmsg[5])
#define DCL_DCLMSG_ENGINE (&prb_fields_dcl_dclmsg[6])

// 'DclMsg' field lengths
#define DCL_DCLMSG_COMMON_LEN 42
#define DCL_DCLMSG_JOURNAL_ASSERT_LEN 128
#define DCL_DCLMSG_JOURNAL_RVAHEADER_LEN 54
#define DCL_DCLMSG_JOURNAL_BADREAD_LEN 70
#define DCL_DCLMSG_JOURNAL_BUGCHECK_LEN 69
#define DCL_DCLMSG_RCCOUNTER_LEN 64
#define DCL_DCLMSG_ENGINE_LEN 133

extern const PRB_FIELD_DESC prb_fields_dcl_errorblock[];

// 'ErrorBlock' field descriptor pointers
#define DCL_ERRORBLOCK_DATA (&prb_fields_dcl_errorblock[0])

// 'ErrorBlock' field lengths
#define DCL_ERRORBLOCK_DATA_LEN 570

extern const PRB_SERVICE_DESC prb_services_dcl[];

// Service descriptor pointers

#endif // G_ALL_DCL_PB_H__