/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "NR-RRC-Definitions.asn"
 * 	`asn1c -fcompound-names -no-gen-example -pdu=all`
 */

#ifndef	_PUSCH_Config_H_
#define	_PUSCH_Config_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"
#include "NativeEnumerated.h"
#include "NULL.h"
#include "DMRS-UplinkConfig.h"
#include "constr_CHOICE.h"
#include "asn_SEQUENCE_OF.h"
#include "constr_SEQUENCE_OF.h"
#include "PUSCH-TimeDomainResourceAllocationList.h"
#include "UCI-OnPUSCH.h"
#include "MinSchedulingOffsetK2-Values-r16.h"
#include "UL-AccessConfigListDCI-0-1-r16.h"
#include "FrequencyHoppingOffsetListsDCI-0-2-r16.h"
#include "UCI-OnPUSCH-ListDCI-0-2-r16.h"
#include "PUSCH-TimeDomainResourceAllocationList-r16.h"
#include "UCI-OnPUSCH-ListDCI-0-1-r16.h"
#include "PUSCH-PowerControl-v1610.h"
#include "constr_SEQUENCE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum PUSCH_Config__txConfig {
	PUSCH_Config__txConfig_codebook	= 0,
	PUSCH_Config__txConfig_nonCodebook	= 1
} e_PUSCH_Config__txConfig;
typedef enum PUSCH_Config__dmrs_UplinkForPUSCH_MappingTypeA_PR {
	PUSCH_Config__dmrs_UplinkForPUSCH_MappingTypeA_PR_NOTHING,	/* No components present */
	PUSCH_Config__dmrs_UplinkForPUSCH_MappingTypeA_PR_release,
	PUSCH_Config__dmrs_UplinkForPUSCH_MappingTypeA_PR_setup
} PUSCH_Config__dmrs_UplinkForPUSCH_MappingTypeA_PR;
typedef enum PUSCH_Config__dmrs_UplinkForPUSCH_MappingTypeB_PR {
	PUSCH_Config__dmrs_UplinkForPUSCH_MappingTypeB_PR_NOTHING,	/* No components present */
	PUSCH_Config__dmrs_UplinkForPUSCH_MappingTypeB_PR_release,
	PUSCH_Config__dmrs_UplinkForPUSCH_MappingTypeB_PR_setup
} PUSCH_Config__dmrs_UplinkForPUSCH_MappingTypeB_PR;
typedef enum PUSCH_Config__frequencyHopping {
	PUSCH_Config__frequencyHopping_intraSlot	= 0,
	PUSCH_Config__frequencyHopping_interSlot	= 1
} e_PUSCH_Config__frequencyHopping;
typedef enum PUSCH_Config__resourceAllocation {
	PUSCH_Config__resourceAllocation_resourceAllocationType0	= 0,
	PUSCH_Config__resourceAllocation_resourceAllocationType1	= 1,
	PUSCH_Config__resourceAllocation_dynamicSwitch	= 2
} e_PUSCH_Config__resourceAllocation;
typedef enum PUSCH_Config__pusch_TimeDomainAllocationList_PR {
	PUSCH_Config__pusch_TimeDomainAllocationList_PR_NOTHING,	/* No components present */
	PUSCH_Config__pusch_TimeDomainAllocationList_PR_release,
	PUSCH_Config__pusch_TimeDomainAllocationList_PR_setup
} PUSCH_Config__pusch_TimeDomainAllocationList_PR;
typedef enum PUSCH_Config__pusch_AggregationFactor {
	PUSCH_Config__pusch_AggregationFactor_n2	= 0,
	PUSCH_Config__pusch_AggregationFactor_n4	= 1,
	PUSCH_Config__pusch_AggregationFactor_n8	= 2
} e_PUSCH_Config__pusch_AggregationFactor;
typedef enum PUSCH_Config__mcs_Table {
	PUSCH_Config__mcs_Table_qam256	= 0,
	PUSCH_Config__mcs_Table_qam64LowSE	= 1
} e_PUSCH_Config__mcs_Table;
typedef enum PUSCH_Config__mcs_TableTransformPrecoder {
	PUSCH_Config__mcs_TableTransformPrecoder_qam256	= 0,
	PUSCH_Config__mcs_TableTransformPrecoder_qam64LowSE	= 1
} e_PUSCH_Config__mcs_TableTransformPrecoder;
typedef enum PUSCH_Config__transformPrecoder {
	PUSCH_Config__transformPrecoder_enabled	= 0,
	PUSCH_Config__transformPrecoder_disabled	= 1
} e_PUSCH_Config__transformPrecoder;
typedef enum PUSCH_Config__codebookSubset {
	PUSCH_Config__codebookSubset_fullyAndPartialAndNonCoherent	= 0,
	PUSCH_Config__codebookSubset_partialAndNonCoherent	= 1,
	PUSCH_Config__codebookSubset_nonCoherent	= 2
} e_PUSCH_Config__codebookSubset;
typedef enum PUSCH_Config__rbg_Size {
	PUSCH_Config__rbg_Size_config2	= 0
} e_PUSCH_Config__rbg_Size;
typedef enum PUSCH_Config__uci_OnPUSCH_PR {
	PUSCH_Config__uci_OnPUSCH_PR_NOTHING,	/* No components present */
	PUSCH_Config__uci_OnPUSCH_PR_release,
	PUSCH_Config__uci_OnPUSCH_PR_setup
} PUSCH_Config__uci_OnPUSCH_PR;
typedef enum PUSCH_Config__tp_pi2BPSK {
	PUSCH_Config__tp_pi2BPSK_enabled	= 0
} e_PUSCH_Config__tp_pi2BPSK;
typedef enum PUSCH_Config__minimumSchedulingOffsetK2_r16_PR {
	PUSCH_Config__minimumSchedulingOffsetK2_r16_PR_NOTHING,	/* No components present */
	PUSCH_Config__minimumSchedulingOffsetK2_r16_PR_release,
	PUSCH_Config__minimumSchedulingOffsetK2_r16_PR_setup
} PUSCH_Config__minimumSchedulingOffsetK2_r16_PR;
typedef enum PUSCH_Config__ul_AccessConfigListDCI_0_1_r16_PR {
	PUSCH_Config__ul_AccessConfigListDCI_0_1_r16_PR_NOTHING,	/* No components present */
	PUSCH_Config__ul_AccessConfigListDCI_0_1_r16_PR_release,
	PUSCH_Config__ul_AccessConfigListDCI_0_1_r16_PR_setup
} PUSCH_Config__ul_AccessConfigListDCI_0_1_r16_PR;
typedef enum PUSCH_Config__dmrs_SequenceInitializationDCI_0_2_r16 {
	PUSCH_Config__dmrs_SequenceInitializationDCI_0_2_r16_enabled	= 0
} e_PUSCH_Config__dmrs_SequenceInitializationDCI_0_2_r16;
typedef enum PUSCH_Config__antennaPortsFieldPresenceDCI_0_2_r16 {
	PUSCH_Config__antennaPortsFieldPresenceDCI_0_2_r16_enabled	= 0
} e_PUSCH_Config__antennaPortsFieldPresenceDCI_0_2_r16;
typedef enum PUSCH_Config__dmrs_UplinkForPUSCH_MappingTypeA_DCI_0_2_r16_PR {
	PUSCH_Config__dmrs_UplinkForPUSCH_MappingTypeA_DCI_0_2_r16_PR_NOTHING,	/* No components present */
	PUSCH_Config__dmrs_UplinkForPUSCH_MappingTypeA_DCI_0_2_r16_PR_release,
	PUSCH_Config__dmrs_UplinkForPUSCH_MappingTypeA_DCI_0_2_r16_PR_setup
} PUSCH_Config__dmrs_UplinkForPUSCH_MappingTypeA_DCI_0_2_r16_PR;
typedef enum PUSCH_Config__dmrs_UplinkForPUSCH_MappingTypeB_DCI_0_2_r16_PR {
	PUSCH_Config__dmrs_UplinkForPUSCH_MappingTypeB_DCI_0_2_r16_PR_NOTHING,	/* No components present */
	PUSCH_Config__dmrs_UplinkForPUSCH_MappingTypeB_DCI_0_2_r16_PR_release,
	PUSCH_Config__dmrs_UplinkForPUSCH_MappingTypeB_DCI_0_2_r16_PR_setup
} PUSCH_Config__dmrs_UplinkForPUSCH_MappingTypeB_DCI_0_2_r16_PR;
typedef enum PUSCH_Config__frequencyHoppingDCI_0_2_r16_PR {
	PUSCH_Config__frequencyHoppingDCI_0_2_r16_PR_NOTHING,	/* No components present */
	PUSCH_Config__frequencyHoppingDCI_0_2_r16_PR_pusch_RepTypeA,
	PUSCH_Config__frequencyHoppingDCI_0_2_r16_PR_pusch_RepTypeB
} PUSCH_Config__frequencyHoppingDCI_0_2_r16_PR;
typedef enum PUSCH_Config__frequencyHoppingDCI_0_2_r16__pusch_RepTypeA {
	PUSCH_Config__frequencyHoppingDCI_0_2_r16__pusch_RepTypeA_intraSlot	= 0,
	PUSCH_Config__frequencyHoppingDCI_0_2_r16__pusch_RepTypeA_interSlot	= 1
} e_PUSCH_Config__frequencyHoppingDCI_0_2_r16__pusch_RepTypeA;
typedef enum PUSCH_Config__frequencyHoppingDCI_0_2_r16__pusch_RepTypeB {
	PUSCH_Config__frequencyHoppingDCI_0_2_r16__pusch_RepTypeB_interRepetition	= 0,
	PUSCH_Config__frequencyHoppingDCI_0_2_r16__pusch_RepTypeB_interSlot	= 1
} e_PUSCH_Config__frequencyHoppingDCI_0_2_r16__pusch_RepTypeB;
typedef enum PUSCH_Config__frequencyHoppingOffsetListsDCI_0_2_r16_PR {
	PUSCH_Config__frequencyHoppingOffsetListsDCI_0_2_r16_PR_NOTHING,	/* No components present */
	PUSCH_Config__frequencyHoppingOffsetListsDCI_0_2_r16_PR_release,
	PUSCH_Config__frequencyHoppingOffsetListsDCI_0_2_r16_PR_setup
} PUSCH_Config__frequencyHoppingOffsetListsDCI_0_2_r16_PR;
typedef enum PUSCH_Config__codebookSubsetDCI_0_2_r16 {
	PUSCH_Config__codebookSubsetDCI_0_2_r16_fullyAndPartialAndNonCoherent	= 0,
	PUSCH_Config__codebookSubsetDCI_0_2_r16_partialAndNonCoherent	= 1,
	PUSCH_Config__codebookSubsetDCI_0_2_r16_nonCoherent	= 2
} e_PUSCH_Config__codebookSubsetDCI_0_2_r16;
typedef enum PUSCH_Config__invalidSymbolPatternIndicatorDCI_0_2_r16 {
	PUSCH_Config__invalidSymbolPatternIndicatorDCI_0_2_r16_enabled	= 0
} e_PUSCH_Config__invalidSymbolPatternIndicatorDCI_0_2_r16;
typedef enum PUSCH_Config__mcs_TableDCI_0_2_r16 {
	PUSCH_Config__mcs_TableDCI_0_2_r16_qam256	= 0,
	PUSCH_Config__mcs_TableDCI_0_2_r16_qam64LowSE	= 1
} e_PUSCH_Config__mcs_TableDCI_0_2_r16;
typedef enum PUSCH_Config__mcs_TableTransformPrecoderDCI_0_2_r16 {
	PUSCH_Config__mcs_TableTransformPrecoderDCI_0_2_r16_qam256	= 0,
	PUSCH_Config__mcs_TableTransformPrecoderDCI_0_2_r16_qam64LowSE	= 1
} e_PUSCH_Config__mcs_TableTransformPrecoderDCI_0_2_r16;
typedef enum PUSCH_Config__priorityIndicatorDCI_0_2_r16 {
	PUSCH_Config__priorityIndicatorDCI_0_2_r16_enabled	= 0
} e_PUSCH_Config__priorityIndicatorDCI_0_2_r16;
typedef enum PUSCH_Config__pusch_RepTypeIndicatorDCI_0_2_r16 {
	PUSCH_Config__pusch_RepTypeIndicatorDCI_0_2_r16_pusch_RepTypeA	= 0,
	PUSCH_Config__pusch_RepTypeIndicatorDCI_0_2_r16_pusch_RepTypeB	= 1
} e_PUSCH_Config__pusch_RepTypeIndicatorDCI_0_2_r16;
typedef enum PUSCH_Config__resourceAllocationDCI_0_2_r16 {
	PUSCH_Config__resourceAllocationDCI_0_2_r16_resourceAllocationType0	= 0,
	PUSCH_Config__resourceAllocationDCI_0_2_r16_resourceAllocationType1	= 1,
	PUSCH_Config__resourceAllocationDCI_0_2_r16_dynamicSwitch	= 2
} e_PUSCH_Config__resourceAllocationDCI_0_2_r16;
typedef enum PUSCH_Config__resourceAllocationType1GranularityDCI_0_2_r16 {
	PUSCH_Config__resourceAllocationType1GranularityDCI_0_2_r16_n2	= 0,
	PUSCH_Config__resourceAllocationType1GranularityDCI_0_2_r16_n4	= 1,
	PUSCH_Config__resourceAllocationType1GranularityDCI_0_2_r16_n8	= 2,
	PUSCH_Config__resourceAllocationType1GranularityDCI_0_2_r16_n16	= 3
} e_PUSCH_Config__resourceAllocationType1GranularityDCI_0_2_r16;
typedef enum PUSCH_Config__uci_OnPUSCH_ListDCI_0_2_r16_PR {
	PUSCH_Config__uci_OnPUSCH_ListDCI_0_2_r16_PR_NOTHING,	/* No components present */
	PUSCH_Config__uci_OnPUSCH_ListDCI_0_2_r16_PR_release,
	PUSCH_Config__uci_OnPUSCH_ListDCI_0_2_r16_PR_setup
} PUSCH_Config__uci_OnPUSCH_ListDCI_0_2_r16_PR;
typedef enum PUSCH_Config__pusch_TimeDomainAllocationListDCI_0_2_r16_PR {
	PUSCH_Config__pusch_TimeDomainAllocationListDCI_0_2_r16_PR_NOTHING,	/* No components present */
	PUSCH_Config__pusch_TimeDomainAllocationListDCI_0_2_r16_PR_release,
	PUSCH_Config__pusch_TimeDomainAllocationListDCI_0_2_r16_PR_setup
} PUSCH_Config__pusch_TimeDomainAllocationListDCI_0_2_r16_PR;
typedef enum PUSCH_Config__pusch_TimeDomainAllocationListDCI_0_1_r16_PR {
	PUSCH_Config__pusch_TimeDomainAllocationListDCI_0_1_r16_PR_NOTHING,	/* No components present */
	PUSCH_Config__pusch_TimeDomainAllocationListDCI_0_1_r16_PR_release,
	PUSCH_Config__pusch_TimeDomainAllocationListDCI_0_1_r16_PR_setup
} PUSCH_Config__pusch_TimeDomainAllocationListDCI_0_1_r16_PR;
typedef enum PUSCH_Config__invalidSymbolPatternIndicatorDCI_0_1_r16 {
	PUSCH_Config__invalidSymbolPatternIndicatorDCI_0_1_r16_enabled	= 0
} e_PUSCH_Config__invalidSymbolPatternIndicatorDCI_0_1_r16;
typedef enum PUSCH_Config__priorityIndicatorDCI_0_1_r16 {
	PUSCH_Config__priorityIndicatorDCI_0_1_r16_enabled	= 0
} e_PUSCH_Config__priorityIndicatorDCI_0_1_r16;
typedef enum PUSCH_Config__pusch_RepTypeIndicatorDCI_0_1_r16 {
	PUSCH_Config__pusch_RepTypeIndicatorDCI_0_1_r16_pusch_RepTypeA	= 0,
	PUSCH_Config__pusch_RepTypeIndicatorDCI_0_1_r16_pusch_RepTypeB	= 1
} e_PUSCH_Config__pusch_RepTypeIndicatorDCI_0_1_r16;
typedef enum PUSCH_Config__frequencyHoppingDCI_0_1_r16 {
	PUSCH_Config__frequencyHoppingDCI_0_1_r16_interRepetition	= 0,
	PUSCH_Config__frequencyHoppingDCI_0_1_r16_interSlot	= 1
} e_PUSCH_Config__frequencyHoppingDCI_0_1_r16;
typedef enum PUSCH_Config__uci_OnPUSCH_ListDCI_0_1_r16_PR {
	PUSCH_Config__uci_OnPUSCH_ListDCI_0_1_r16_PR_NOTHING,	/* No components present */
	PUSCH_Config__uci_OnPUSCH_ListDCI_0_1_r16_PR_release,
	PUSCH_Config__uci_OnPUSCH_ListDCI_0_1_r16_PR_setup
} PUSCH_Config__uci_OnPUSCH_ListDCI_0_1_r16_PR;
typedef enum PUSCH_Config__pusch_PowerControl_v1610_PR {
	PUSCH_Config__pusch_PowerControl_v1610_PR_NOTHING,	/* No components present */
	PUSCH_Config__pusch_PowerControl_v1610_PR_release,
	PUSCH_Config__pusch_PowerControl_v1610_PR_setup
} PUSCH_Config__pusch_PowerControl_v1610_PR;
typedef enum PUSCH_Config__ul_FullPowerTransmission_r16 {
	PUSCH_Config__ul_FullPowerTransmission_r16_fullpower	= 0,
	PUSCH_Config__ul_FullPowerTransmission_r16_fullpowerMode1	= 1,
	PUSCH_Config__ul_FullPowerTransmission_r16_fullpoweMode2	= 2
} e_PUSCH_Config__ul_FullPowerTransmission_r16;
typedef enum PUSCH_Config__pusch_TimeDomainAllocationListForMultiPUSCH_r16_PR {
	PUSCH_Config__pusch_TimeDomainAllocationListForMultiPUSCH_r16_PR_NOTHING,	/* No components present */
	PUSCH_Config__pusch_TimeDomainAllocationListForMultiPUSCH_r16_PR_release,
	PUSCH_Config__pusch_TimeDomainAllocationListForMultiPUSCH_r16_PR_setup
} PUSCH_Config__pusch_TimeDomainAllocationListForMultiPUSCH_r16_PR;

/* Forward declarations */
struct PUSCH_PowerControl;
struct InvalidSymbolPattern_r16;

/* PUSCH-Config */
typedef struct PUSCH_Config {
	long	*dataScramblingIdentityPUSCH	/* OPTIONAL */;
	long	*txConfig	/* OPTIONAL */;
	struct PUSCH_Config__dmrs_UplinkForPUSCH_MappingTypeA {
		PUSCH_Config__dmrs_UplinkForPUSCH_MappingTypeA_PR present;
		union PUSCH_Config__dmrs_UplinkForPUSCH_MappingTypeA_u {
			NULL_t	 release;
			DMRS_UplinkConfig_t	 setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *dmrs_UplinkForPUSCH_MappingTypeA;
	struct PUSCH_Config__dmrs_UplinkForPUSCH_MappingTypeB {
		PUSCH_Config__dmrs_UplinkForPUSCH_MappingTypeB_PR present;
		union PUSCH_Config__dmrs_UplinkForPUSCH_MappingTypeB_u {
			NULL_t	 release;
			DMRS_UplinkConfig_t	 setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *dmrs_UplinkForPUSCH_MappingTypeB;
	struct PUSCH_PowerControl	*pusch_PowerControl	/* OPTIONAL */;
	long	*frequencyHopping	/* OPTIONAL */;
	struct PUSCH_Config__frequencyHoppingOffsetLists {
		A_SEQUENCE_OF(long) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *frequencyHoppingOffsetLists;
	long	 resourceAllocation;
	struct PUSCH_Config__pusch_TimeDomainAllocationList {
		PUSCH_Config__pusch_TimeDomainAllocationList_PR present;
		union PUSCH_Config__pusch_TimeDomainAllocationList_u {
			NULL_t	 release;
			PUSCH_TimeDomainResourceAllocationList_t	 setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *pusch_TimeDomainAllocationList;
	long	*pusch_AggregationFactor	/* OPTIONAL */;
	long	*mcs_Table	/* OPTIONAL */;
	long	*mcs_TableTransformPrecoder	/* OPTIONAL */;
	long	*transformPrecoder	/* OPTIONAL */;
	long	*codebookSubset	/* OPTIONAL */;
	long	*maxRank	/* OPTIONAL */;
	long	*rbg_Size	/* OPTIONAL */;
	struct PUSCH_Config__uci_OnPUSCH {
		PUSCH_Config__uci_OnPUSCH_PR present;
		union PUSCH_Config__uci_OnPUSCH_u {
			NULL_t	 release;
			UCI_OnPUSCH_t	 setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *uci_OnPUSCH;
	long	*tp_pi2BPSK	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct PUSCH_Config__minimumSchedulingOffsetK2_r16 {
		PUSCH_Config__minimumSchedulingOffsetK2_r16_PR present;
		union PUSCH_Config__minimumSchedulingOffsetK2_r16_u {
			NULL_t	 release;
			MinSchedulingOffsetK2_Values_r16_t	 setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *minimumSchedulingOffsetK2_r16;
	struct PUSCH_Config__ul_AccessConfigListDCI_0_1_r16 {
		PUSCH_Config__ul_AccessConfigListDCI_0_1_r16_PR present;
		union PUSCH_Config__ul_AccessConfigListDCI_0_1_r16_u {
			NULL_t	 release;
			UL_AccessConfigListDCI_0_1_r16_t	 setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ul_AccessConfigListDCI_0_1_r16;
	long	*harq_ProcessNumberSizeDCI_0_2_r16	/* OPTIONAL */;
	long	*dmrs_SequenceInitializationDCI_0_2_r16	/* OPTIONAL */;
	long	*numberOfBitsForRV_DCI_0_2_r16	/* OPTIONAL */;
	long	*antennaPortsFieldPresenceDCI_0_2_r16	/* OPTIONAL */;
	struct PUSCH_Config__dmrs_UplinkForPUSCH_MappingTypeA_DCI_0_2_r16 {
		PUSCH_Config__dmrs_UplinkForPUSCH_MappingTypeA_DCI_0_2_r16_PR present;
		union PUSCH_Config__dmrs_UplinkForPUSCH_MappingTypeA_DCI_0_2_r16_u {
			NULL_t	 release;
			DMRS_UplinkConfig_t	 setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *dmrs_UplinkForPUSCH_MappingTypeA_DCI_0_2_r16;
	struct PUSCH_Config__dmrs_UplinkForPUSCH_MappingTypeB_DCI_0_2_r16 {
		PUSCH_Config__dmrs_UplinkForPUSCH_MappingTypeB_DCI_0_2_r16_PR present;
		union PUSCH_Config__dmrs_UplinkForPUSCH_MappingTypeB_DCI_0_2_r16_u {
			NULL_t	 release;
			DMRS_UplinkConfig_t	 setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *dmrs_UplinkForPUSCH_MappingTypeB_DCI_0_2_r16;
	struct PUSCH_Config__frequencyHoppingDCI_0_2_r16 {
		PUSCH_Config__frequencyHoppingDCI_0_2_r16_PR present;
		union PUSCH_Config__frequencyHoppingDCI_0_2_r16_u {
			long	 pusch_RepTypeA;
			long	 pusch_RepTypeB;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *frequencyHoppingDCI_0_2_r16;
	struct PUSCH_Config__frequencyHoppingOffsetListsDCI_0_2_r16 {
		PUSCH_Config__frequencyHoppingOffsetListsDCI_0_2_r16_PR present;
		union PUSCH_Config__frequencyHoppingOffsetListsDCI_0_2_r16_u {
			NULL_t	 release;
			FrequencyHoppingOffsetListsDCI_0_2_r16_t	 setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *frequencyHoppingOffsetListsDCI_0_2_r16;
	long	*codebookSubsetDCI_0_2_r16	/* OPTIONAL */;
	long	*invalidSymbolPatternIndicatorDCI_0_2_r16	/* OPTIONAL */;
	long	*maxRankDCI_0_2_r16	/* OPTIONAL */;
	long	*mcs_TableDCI_0_2_r16	/* OPTIONAL */;
	long	*mcs_TableTransformPrecoderDCI_0_2_r16	/* OPTIONAL */;
	long	*priorityIndicatorDCI_0_2_r16	/* OPTIONAL */;
	long	*pusch_RepTypeIndicatorDCI_0_2_r16	/* OPTIONAL */;
	long	*resourceAllocationDCI_0_2_r16	/* OPTIONAL */;
	long	*resourceAllocationType1GranularityDCI_0_2_r16	/* OPTIONAL */;
	struct PUSCH_Config__uci_OnPUSCH_ListDCI_0_2_r16 {
		PUSCH_Config__uci_OnPUSCH_ListDCI_0_2_r16_PR present;
		union PUSCH_Config__uci_OnPUSCH_ListDCI_0_2_r16_u {
			NULL_t	 release;
			UCI_OnPUSCH_ListDCI_0_2_r16_t	 setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *uci_OnPUSCH_ListDCI_0_2_r16;
	struct PUSCH_Config__pusch_TimeDomainAllocationListDCI_0_2_r16 {
		PUSCH_Config__pusch_TimeDomainAllocationListDCI_0_2_r16_PR present;
		union PUSCH_Config__pusch_TimeDomainAllocationListDCI_0_2_r16_u {
			NULL_t	 release;
			PUSCH_TimeDomainResourceAllocationList_r16_t	 setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *pusch_TimeDomainAllocationListDCI_0_2_r16;
	struct PUSCH_Config__pusch_TimeDomainAllocationListDCI_0_1_r16 {
		PUSCH_Config__pusch_TimeDomainAllocationListDCI_0_1_r16_PR present;
		union PUSCH_Config__pusch_TimeDomainAllocationListDCI_0_1_r16_u {
			NULL_t	 release;
			PUSCH_TimeDomainResourceAllocationList_r16_t	 setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *pusch_TimeDomainAllocationListDCI_0_1_r16;
	long	*invalidSymbolPatternIndicatorDCI_0_1_r16	/* OPTIONAL */;
	long	*priorityIndicatorDCI_0_1_r16	/* OPTIONAL */;
	long	*pusch_RepTypeIndicatorDCI_0_1_r16	/* OPTIONAL */;
	long	*frequencyHoppingDCI_0_1_r16	/* OPTIONAL */;
	struct PUSCH_Config__uci_OnPUSCH_ListDCI_0_1_r16 {
		PUSCH_Config__uci_OnPUSCH_ListDCI_0_1_r16_PR present;
		union PUSCH_Config__uci_OnPUSCH_ListDCI_0_1_r16_u {
			NULL_t	 release;
			UCI_OnPUSCH_ListDCI_0_1_r16_t	 setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *uci_OnPUSCH_ListDCI_0_1_r16;
	struct InvalidSymbolPattern_r16	*invalidSymbolPattern_r16	/* OPTIONAL */;
	struct PUSCH_Config__pusch_PowerControl_v1610 {
		PUSCH_Config__pusch_PowerControl_v1610_PR present;
		union PUSCH_Config__pusch_PowerControl_v1610_u {
			NULL_t	 release;
			PUSCH_PowerControl_v1610_t	 setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *pusch_PowerControl_v1610;
	long	*ul_FullPowerTransmission_r16	/* OPTIONAL */;
	struct PUSCH_Config__pusch_TimeDomainAllocationListForMultiPUSCH_r16 {
		PUSCH_Config__pusch_TimeDomainAllocationListForMultiPUSCH_r16_PR present;
		union PUSCH_Config__pusch_TimeDomainAllocationListForMultiPUSCH_r16_u {
			NULL_t	 release;
			PUSCH_TimeDomainResourceAllocationList_r16_t	 setup;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *pusch_TimeDomainAllocationListForMultiPUSCH_r16;
	long	*numberOfInvalidSymbolsForDL_UL_Switching_r16	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PUSCH_Config_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_txConfig_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_frequencyHopping_13;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_resourceAllocation_18;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pusch_AggregationFactor_25;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_mcs_Table_29;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_mcs_TableTransformPrecoder_32;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_transformPrecoder_35;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_codebookSubset_38;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_rbg_Size_43;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_tp_pi2BPSK_48;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_dmrs_SequenceInitializationDCI_0_2_r16_58;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_antennaPortsFieldPresenceDCI_0_2_r16_61;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pusch_RepTypeA_70;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pusch_RepTypeB_73;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_codebookSubsetDCI_0_2_r16_79;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_invalidSymbolPatternIndicatorDCI_0_2_r16_83;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_mcs_TableDCI_0_2_r16_86;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_mcs_TableTransformPrecoderDCI_0_2_r16_89;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_priorityIndicatorDCI_0_2_r16_92;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pusch_RepTypeIndicatorDCI_0_2_r16_94;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_resourceAllocationDCI_0_2_r16_97;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_resourceAllocationType1GranularityDCI_0_2_r16_101;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_invalidSymbolPatternIndicatorDCI_0_1_r16_115;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_priorityIndicatorDCI_0_1_r16_117;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_pusch_RepTypeIndicatorDCI_0_1_r16_119;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_frequencyHoppingDCI_0_1_r16_122;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_ul_FullPowerTransmission_r16_132;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_PUSCH_Config;
extern asn_SEQUENCE_specifics_t asn_SPC_PUSCH_Config_specs_1;
extern asn_TYPE_member_t asn_MBR_PUSCH_Config_1[50];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "PUSCH-PowerControl.h"
#include "InvalidSymbolPattern-r16.h"

#endif	/* _PUSCH_Config_H_ */
#include "asn_internal.h"
