/****************************************************************************************/
/**
   @file     bank1.h

   @brief    RF LSI register information header file
   @version  V1.00
   @date     22. Feb. 2018

   @copyright    Copyright (C) 2018 LAPIS Semiconductor Co., Ltd. All rights reserved.

   @par  
        This software is provided "as is" and any expressed or implied
         warranties, including, but not limited to, the implied warranties of
         merchantability and fitness for a particular purpose are disclaimed.
         LAPIS Semiconductor shall not be liable for any direct, indirect, consequential or 
         incidental damages arising from using or modifying this software.
         You (customer) can modify and use this software in whole or part on
         your own responsibility, only for the purpose of developing the software
         for use with microcontroller manufactured by LAPIS Semiconductor.
    
*******************************************************************************************/
#ifndef _bank1_H
#define _bank1_H

/**
    \addtogroup RF_REGISTER_BANK1
    \{
 */
 
/*mBANK1 Register Address DefinitionsbBANK1WX^AhXè`n*/
#define RADIO_CLK_OUT_ADR               (0x01u)      /*!< mb<in-house>*TODO*póbCLK_OUT(GPIOn)(@ref RADIO_CLK_OUT_T ^ÅANZX)n */
#define RADIO_TX_RATE_H_ADR             (0x02u)      /*!< mb<in-house>*TODO*póbMf[^[gÏ·Ýè(ãÊoCg)(@ref RADIO_TX_RATE_H_T ^ÅANZX)n */
#define RADIO_TX_RATE_L_ADR             (0x03u)      /*!< mb<in-house>*TODO*póbMf[^[gÏ·Ýè(ºÊoCg)(@ref RADIO_TX_RATE_L_T ^ÅANZX)n */
#define RADIO_RX_RATE1_H_ADR            (0x04u)      /*!< mb<in-house>*TODO*póbóMf[^[gÏ·Ýè1(ãÊoCg)(@ref RADIO_RX_RATE1_H_T ^ÅANZX)n */
#define RADIO_RX_RATE1_L_ADR            (0x05u)      /*!< mb<in-house>*TODO*póbóMf[^[gÏ·Ýè1(ºÊoCg)(@ref RADIO_RX_RATE1_L_T ^ÅANZX)n */
#define RADIO_RX_RATE2_ADR              (0x06u)      /*!< mb<in-house>*TODO*póbóMf[^[gÏ·Ýè2(@ref RADIO_RX_RATE2_T ^ÅANZX)n */
#define RADIO_NONPUBLIC_B1_ADR07        (0x07u)      /*!< mb<in-house>*TODO*póbñöJn */
#define RADIO_OSC_W_SEL_ADR             (0x08u)      /*!< mb<in-house>*TODO*póbNbNÀè»Ò¿ÔÝè(@ref RADIO_OSC_W_SEL_T ^ÅANZX)n */
#define RADIO_NONPUBLIC_B1_ADR09        (0x09u)      /*!< mb<in-house>*TODO*póbñöJn */
#define RADIO_NONPUBLIC_B1_ADR0A        (0x0Au)      /*!< mb<in-house>*TODO*póbñöJn */
#define RADIO_PLL_LOCK_DETECT_ADR       (0x0Bu)      /*!< mb<in-house>*TODO*póbPLLbN»èÝè(@ref RADIO_PLL_LOCK_DETECT_T ^ÅANZX)n */
#define RADIO_GAIN_HTOL_ADR             (0x0Cu)      /*!< mb<in-house>*TODO*póbQC©çáQCÖÌØèÖ¦èlÝè(@ref RADIO_GAIN_HTOL_T ^ÅANZX)n */
#define RADIO_GAIN_LTOH_ADR             (0x0Du)      /*!< mb<in-house>*TODO*póbáQC©çQCÖÌØèÖ¦èlÝè(@ref RADIO_GAIN_LTOH_T ^ÅANZX)n */
#define RADIO_GAIN_HOLD_ADR             (0x0Eu)      /*!< mb<in-house>*TODO*póbQCØèÖ¦Ýè(@ref RADIO_GAIN_HOLD_T ^ÅANZX)n */
#define RADIO_RSSI_STABLE_RES_ADR       (0x0Fu)      /*!< mb<in-house>*TODO*póbRSSIÀè»Ò¿Ôªð\Ýè(@ref RADIO_RSSI_STABLE_RES_T ^ÅANZX)n */
#define RADIO_GC_CTRL_DIV_ADR           (0x10u)      /*!< mb<in-house>*TODO*pób_Co[VeBÌQC§äÝè(@ref RADIO_GC_CTRL_DIV_T ^ÅANZX)n */
#define RADIO_RSSI_ADJ_L_ADR            (0x11u)      /*!< mb<in-house>*TODO*póbáQC®ìÌRSSIItZbglÝè(@ref RADIO_RSSI_ADJ_L_T ^ÅANZX)n */
#define RADIO_RSSI_STABLE_TIME_ADR      (0x12u)      /*!< mb<in-house>*TODO*póbRSSIÀè»Ò¿ÔÝè(@ref RADIO_RSSI_STABLE_TIME_T ^ÅANZX)n */
#define RADIO_RSSI_MAG_ADJ_ADR          (0x13u)      /*!< mb<in-house>*TODO*póbEDÏ·pRSSIâ³Ýè(@ref RADIO_RSSI_MAG_ADJ_T ^ÅANZX)n */
#define RADIO_NONPUBLIC_B1_ADR14        (0x14u)      /*!< mb<in-house>*TODO*póbñöJn */
#define RADIO_AFC_GC_CTRL_ADR           (0x15u)      /*!< mb<in-house>*TODO*póbAFC/QC§äÝè(@ref RADIO_AFC_GC_CTRL_T ^ÅANZX)n */
#define RADIO_CRC_POLY3_ADR             (0x16u)      /*!< mb<in-house>*TODO*póbCRC¶¬½®3(@ref RADIO_CRC_POLY3_T ^ÅANZX)n */
#define RADIO_CRC_POLY2_ADR             (0x17u)      /*!< mb<in-house>*TODO*póbCRC¶¬½®2(@ref RADIO_CRC_POLY2_T ^ÅANZX)n */
#define RADIO_CRC_POLY1_ADR             (0x18u)      /*!< mb<in-house>*TODO*póbCRC¶¬½®1(@ref RADIO_CRC_POLY1_T ^ÅANZX)n */
#define RADIO_CRC_POLY0_ADR             (0x19u)      /*!< mb<in-house>*TODO*póbCRC¶¬½®0(@ref RADIO_CRC_POLY0_T ^ÅANZX)n */
#define RADIO_PLL_DIV_SET_ADR           (0x1Au)      /*!< mb<in-house>*TODO*póbPLLoÍ2ªüØèÖ¦Ýè(@ref RADIO_PLL_DIV_SET_T ^ÅANZX)n */
#define RADIO_TXFREQ_I_ADR              (0x1Bu)      /*!< mb<in-house>*TODO*póbMügIJE^Ýè(@ref RADIO_TXFREQ_I_T ^ÅANZX)n */
#define RADIO_TXFREQ_FH_ADR             (0x1Cu)      /*!< mb<in-house>*TODO*póbMügFJE^Ýè(ãÊ4rbg)(@ref RADIO_TXFREQ_FH_T ^ÅANZX)n */
#define RADIO_TXFREQ_FM_ADR             (0x1Du)      /*!< mb<in-house>*TODO*póbMügFJE^Ýè(Ê8rbg)(@ref RADIO_TXFREQ_FM_T ^ÅANZX)n */
#define RADIO_TXFREQ_FL_ADR             (0x1Eu)      /*!< mb<in-house>*TODO*póbMügFJE^Ýè(ºÊ8rbg)(@ref RADIO_TXFREQ_FL_T ^ÅANZX)n */
#define RADIO_RXFREQ_I_ADR              (0x1Fu)      /*!< mb<in-house>*TODO*póbóMügIJE^Ýè(@ref RADIO_RXFREQ_I_T ^ÅANZX)n */
#define RADIO_RXFREQ_FH_ADR             (0x20u)      /*!< mb<in-house>*TODO*póbóMügFJE^Ýè(ãÊ4rbg)(@ref RADIO_RXFREQ_FH_T ^ÅANZX)n */
#define RADIO_RXFREQ_FM_ADR             (0x21u)      /*!< mb<in-house>*TODO*póbóMügFJE^Ýè(Ê8rbg)(@ref RADIO_RXFREQ_FM_T ^ÅANZX)n */
#define RADIO_RXFREQ_FL_ADR             (0x22u)      /*!< mb<in-house>*TODO*póbóMügFJE^Ýè(ºÊ8rbg)(@ref RADIO_RXFREQ_FL_T ^ÅANZX)n */
#define RADIO_CH_SPACE_H_ADR            (0x23u)      /*!< mb<in-house>*TODO*pób`lÔuÝè(ãÊoCg)(@ref RADIO_CH_SPACE_H_T ^ÅANZX)n */
#define RADIO_CH_SPACE_L_ADR            (0x24u)      /*!< mb<in-house>*TODO*pób`lÔuÝè(ºÊoCg)(@ref RADIO_CH_SPACE_L_T ^ÅANZX)n */
#define RADIO_SYNC_WORD_LEN_ADR         (0x25u)      /*!< mb<in-house>*TODO*póbSYNC_WORD·Ýè(@ref RADIO_SYNC_WORD_LEN_T ^ÅANZX)n */
#define RADIO_SYNC_WORD_EN_ADR          (0x26u)      /*!< mb<in-house>*TODO*póbSYNC_WORDCl[uÝè(@ref RADIO_SYNC_WORD_EN_T ^ÅANZX)n */
#define RADIO_SYNCWORD1_SET0_ADR        (0x27u)      /*!< mb<in-house>*TODO*póbSYNC_WORD1Ýè1(@ref RADIO_SYNCWORD1_SET0_T ^ÅANZX)n */
#define RADIO_SYNCWORD1_SET1_ADR        (0x28u)      /*!< mb<in-house>*TODO*póbSYNC_WORD1Ýè2(@ref RADIO_SYNCWORD1_SET1_T ^ÅANZX)n */
#define RADIO_SYNCWORD1_SET2_ADR        (0x29u)      /*!< mb<in-house>*TODO*póbSYNC_WORD1Ýè3(@ref RADIO_SYNCWORD1_SET2_T ^ÅANZX)n */
#define RADIO_SYNCWORD1_SET3_ADR        (0x2Au)      /*!< mb<in-house>*TODO*póbSYNC_WORD1Ýè4(@ref RADIO_SYNCWORD1_SET3_T ^ÅANZX)n */
#define RADIO_SYNCWORD2_SET0_ADR        (0x2Bu)      /*!< mb<in-house>*TODO*póbSYNC_WORD2Ýè1(@ref RADIO_SYNCWORD2_SET0_T ^ÅANZX)n */
#define RADIO_SYNCWORD2_SET1_ADR        (0x2Cu)      /*!< mb<in-house>*TODO*póbSYNC_WORD2Ýè2(@ref RADIO_SYNCWORD2_SET1_T ^ÅANZX)n */
#define RADIO_SYNCWORD2_SET2_ADR        (0x2Du)      /*!< mb<in-house>*TODO*póbSYNC_WORD2Ýè3(@ref RADIO_SYNCWORD2_SET2_T ^ÅANZX)n */
#define RADIO_SYNCWORD2_SET3_ADR        (0x2Eu)      /*!< mb<in-house>*TODO*póbSYNC_WORD2Ýè4(@ref RADIO_SYNCWORD2_SET3_T ^ÅANZX)n */
#define RADIO_FSK_CTRL_ADR              (0x2Fu)      /*!< mb<in-house>*TODO*póbGFSK/FSKÏ²^C~Oªð\Ýè(@ref RADIO_FSK_CTRL_T ^ÅANZX)n */
#define RADIO_GFSK_DEV_H_ADR            (0x30u)      /*!< mb<in-house>*TODO*póbGFSKügÎÊÝè(ãÊ6rbg)(@ref RADIO_GFSK_DEV_H_T ^ÅANZX)n */
#define RADIO_GFSK_DEV_L_ADR            (0x31u)      /*!< mb<in-house>*TODO*póbGFSKügÎÊÝè(ºÊoCg)(@ref RADIO_GFSK_DEV_L_T ^ÅANZX)n */
#define RADIO_FSK_DEV0_H_GFIL0_ADR      (0x32u)      /*!< mb<in-house>*TODO*póbFSKügÎÊÝè0/KEVAtB^WÝè1(@ref RADIO_FSK_DEV0_H_GFIL0_T ^ÅANZX)n */
#define RADIO_FSK_DEV0_L_GFIL1_ADR      (0x33u)      /*!< mb<in-house>*TODO*póbFSKügÎÊÝè0/KEVAtB^WÝè2(@ref RADIO_FSK_DEV0_L_GFIL1_T ^ÅANZX)n */
#define RADIO_FSK_DEV1_H_GFIL2_ADR      (0x34u)      /*!< mb<in-house>*TODO*póbFSKügÎÊÝè1/KEVAtB^WÝè3(@ref RADIO_FSK_DEV1_H_GFIL2_T ^ÅANZX)n */
#define RADIO_FSK_DEV1_L_GFIL3_ADR      (0x35u)      /*!< mb<in-house>*TODO*póbFSKügÎÊÝè1/KEVAtB^WÝè4(@ref RADIO_FSK_DEV1_L_GFIL3_T ^ÅANZX)n */
#define RADIO_FSK_DEV2_H_GFIL4_ADR      (0x36u)      /*!< mb<in-house>*TODO*póbFSKügÎÊÝè2/KEVAtB^WÝè5(@ref RADIO_FSK_DEV2_H_GFIL4_T ^ÅANZX)n */
#define RADIO_FSK_DEV2_L_GFIL5_ADR      (0x37u)      /*!< mb<in-house>*TODO*póbFSKügÎÊÝè2/KEVAtB^WÝè6(@ref RADIO_FSK_DEV2_L_GFIL5_T ^ÅANZX)n */
#define RADIO_FSK_DEV3_H_GFIL6_ADR      (0x38u)      /*!< mb<in-house>*TODO*póbFSKügÎÊÝè3/KEVAtB^WÝè7(@ref RADIO_FSK_DEV3_H_GFIL6_T ^ÅANZX)n */
#define RADIO_FSK_DEV3_L_ADR            (0x39u)      /*!< mb<in-house>*TODO*póbFSKügÎÊÝè3(@ref RADIO_FSK_DEV3_L_T ^ÅANZX)n */
#define RADIO_FSK_DEV4_H_ADR            (0x3Au)      /*!< mb<in-house>*TODO*póbFSKügÎÊÝè4(@ref RADIO_FSK_DEV4_H_T ^ÅANZX)n */
#define RADIO_FSK_DEV4_L_ADR            (0x3Bu)      /*!< mb<in-house>*TODO*póbFSKügÎÊÝè4(@ref RADIO_FSK_DEV4_L_T ^ÅANZX)n */
#define RADIO_FSK_TIM_ADJ4_ADR          (0x3Cu)      /*!< mb<in-house>*TODO*póbFSKæ4ügÎÊÌÛÔÝè(@ref RADIO_FSK_TIM_ADJ4_T ^ÅANZX)n */
#define RADIO_FSK_TIM_ADJ3_ADR          (0x3Du)      /*!< mb<in-house>*TODO*póbFSKæ3ügÎÊÌÛÔÝè(@ref RADIO_FSK_TIM_ADJ3_T ^ÅANZX)n */
#define RADIO_FSK_TIM_ADJ2_ADR          (0x3Eu)      /*!< mb<in-house>*TODO*póbFSKæ2ügÎÊÌÛÔÝè(@ref RADIO_FSK_TIM_ADJ2_T ^ÅANZX)n */
#define RADIO_FSK_TIM_ADJ1_ADR          (0x3Fu)      /*!< mb<in-house>*TODO*póbFSKæ1ügÎÊÌÛÔÝè(@ref RADIO_FSK_TIM_ADJ1_T ^ÅANZX)n */
#define RADIO_FSK_TIM_ADJ0_ADR          (0x40u)      /*!< mb<in-house>*TODO*póbFSKüg³ÎÊiLAügjÌÛÔÝè(@ref RADIO_FSK_TIM_ADJ0_T ^ÅANZX)n */
#define RADIO_4FSK_DATA_MAP_ADR         (0x41u)      /*!< mb<in-house>*TODO*pób4FSKÌf[^}bsO(@ref RADIO_4FSK_DATA_MAP_T ^ÅANZX)n */
#define RADIO_FREQ_ADJ_H_ADR            (0x42u)      /*!< mb<in-house>*TODO*póbóMüg÷²®ÝèiãÊoCgj(@ref RADIO_FREQ_ADJ_H_T ^ÅANZX)n */
#define RADIO_FREQ_ADJ_L_ADR            (0x43u)      /*!< mb<in-house>*TODO*póbóMüg÷²®ÝèiºÊoCgj(@ref RADIO_FREQ_ADJ_L_T ^ÅANZX)n */
#define RADIO_NONPUBLIC_B1_ADR44        (0x44u)      /*!< mb<in-house>*TODO*póbñöJn */
#define RADIO_NONPUBLIC_B1_ADR45        (0x45u)      /*!< mb<in-house>*TODO*póbñöJn */
#define RADIO_NONPUBLIC_B1_ADR46        (0x46u)      /*!< mb<in-house>*TODO*póbñöJn */
#define RADIO_NONPUBLIC_B1_ADR47        (0x47u)      /*!< mb<in-house>*TODO*póbñöJn */
#define RADIO_2DIV_MODE_ADR             (0x48u)      /*!< mb<in-house>*TODO*póbAei_Co[VeB[hÝè(@ref RADIO_2DIV_MODE_T ^ÅANZX)n */
#define RADIO_2DIV_SEARCH1_ADR          (0x49u)      /*!< mb<in-house>*TODO*póbAei_Co[VeBT[`ÔÝè(@ref RADIO_2DIV_SEARCH1_T ^ÅANZX)n */
#define RADIO_2DIV_SEARCH2_ADR          (0x4Au)      /*!< mb<in-house>*TODO*póbAei_Co[VeBT[`ÔÝè(@ref RADIO_2DIV_SEARCH2_T ^ÅANZX)n */
#define RADIO_2DIV_FAST_LVL_ADR         (0x4Bu)      /*!< mb<in-house>*TODO*póbAei_Co[VeBFAST[hÌEDèlÝè(@ref RADIO_2DIV_FAST_LVL_T ^ÅANZX)n */
#define RADIO_2DIV_PB_TH_ADR            (0x4Cu)      /*!< mb<in-house>*TODO*pób(@ref RADIO_2DIV_PB_TH_T ^ÅANZX)n */
#define RADIO_VCO_CAL_MIN_I_ADR         (0x4Du)      /*!< mb<in-house>*TODO*póbVCO_CALºÀügIJE^Ýè(@ref RADIO_VCO_CAL_MIN_I_T ^ÅANZX)n */
#define RADIO_VCO_CAL_MIN_FH_ADR        (0x4Eu)      /*!< mb<in-house>*TODO*póbVCO_CALºÀügFJE^Ýè(ãÊ6rbg)(@ref RADIO_VCO_CAL_MIN_FH_T ^ÅANZX)n */
#define RADIO_VCO_CAL_MIN_FM_ADR        (0x4Fu)      /*!< mb<in-house>*TODO*póbVCO_CALºÀügFJE^Ýè(Ê8rbg)(@ref RADIO_VCO_CAL_MIN_FM_T ^ÅANZX)n */
#define RADIO_VCO_CAL_MIN_FL_ADR        (0x50u)      /*!< mb<in-house>*TODO*póbVCO_CALºÀügFJE^Ýè(ºÊ8rbg)(@ref RADIO_VCO_CAL_MIN_FL_T ^ÅANZX)n */
#define RADIO_VCO_CAL_MAX_N_ADR         (0x51u)      /*!< mb<in-house>*TODO*póbVCO_CAL_MaxügÝè(@ref RADIO_VCO_CAL_MAX_N_T ^ÅANZX)n */
#define RADIO_FVCAL_MIN_ADR             (0x52u)      /*!< mb<in-house>*TODO*póbVCOLu[VºÀl(@ref RADIO_FVCAL_MIN_T ^ÅANZX)n */
#define RADIO_FVCAL_MAX_ADR             (0x53u)      /*!< mb<in-house>*TODO*póbVCOLu[VãÀl(@ref RADIO_FVCAL_MAX_T ^ÅANZX)n */
#define RADIO_VCO_ACAL_ADR              (0x54u)      /*!< mb<in-house>*TODO*póbVCOULu[Vl\¦ÆÝè(@ref RADIO_VCO_ACAL_T ^ÅANZX)n */
#define RADIO_VCO_ACAL_WR_EN_ADR        (0x55u)      /*!< mb<in-house>*TODO*póbVCOULu[Vã«Ýè(@ref RADIO_VCO_ACAL_WR_EN_T ^ÅANZX)n */
#define RADIO_DEMOD_SET0_ADR            (0x56u)      /*!< mb<in-house>*TODO*pób²íÝè0(@ref RADIO_DEMOD_SET0_T ^ÅANZX)n */
#define RADIO_DEMOD_SET1_ADR            (0x57u)      /*!< mb<in-house>*TODO*pób²íÝè1(@ref RADIO_DEMOD_SET1_T ^ÅANZX)n */
#define RADIO_DEMOD_SET2_ADR            (0x58u)      /*!< mb<in-house>*TODO*pób²íÝè2(@ref RADIO_DEMOD_SET2_T ^ÅANZX)n */
#define RADIO_DEMOD_SET3_ADR            (0x59u)      /*!< mb<in-house>*TODO*pób²íÝè3(@ref RADIO_DEMOD_SET3_T ^ÅANZX)n */
#define RADIO_RX_IQ_SEL_ADR             (0x5Au)      /*!< mb<in-house>*TODO*póbóMIQIðÝè(@ref RADIO_RX_IQ_SEL_T ^ÅANZX) n */
#define RADIO_DEMOD_SET5_ADR            (0x5Bu)      /*!< mb<in-house>*TODO*póbñöJn */
#define RADIO_DEMOD_SET6_ADR            (0x5Cu)      /*!< mb<in-house>*TODO*pób²íÝè6(@ref RADIO_DEMOD_SET6_T ^ÅANZX)n */
#define RADIO_DEMOD_SET7_ADR            (0x5Du)      /*!< mb<in-house>*TODO*pób²íÝè7(@ref RADIO_DEMOD_SET7_T ^ÅANZX)n */
#define RADIO_DEMOD_SET8_ADR            (0x5Eu)      /*!< mb<in-house>*TODO*pób²íÝè8(@ref RADIO_DEMOD_SET8_T ^ÅANZX)n */
#define RADIO_DEMOD_SET9_ADR            (0x5Fu)      /*!< mb<in-house>*TODO*pób²íÝè9(@ref RADIO_DEMOD_SET9_T ^ÅANZX)n */
#define RADIO_DEMOD_SET10_ADR           (0x60u)      /*!< mb<in-house>*TODO*pób²íÝè10(@ref RADIO_DEMOD_SET10_T ^ÅANZX)n */
#define RADIO_DEMOD_SET11_ADR           (0x61u)      /*!< mb<in-house>*TODO*pób²íÝè11(@ref RADIO_DEMOD_SET11_T ^ÅANZX)n */
#define RADIO_ADDR_CHK_CTR_H_ADR        (0x62u)      /*!< mb<in-house>*TODO*póbAhX`FbNJE^\¦(ãÊ3rbg)(@ref RADIO_ADDR_CHK_CTR_H_T ^ÅANZX)n */
#define RADIO_ADDR_CHK_CTR_L_ADR        (0x63u)      /*!< mb<in-house>*TODO*póbAhX`FbNJE^\¦(ºÊoCg)(@ref RADIO_ADDR_CHK_CTR_L_T ^ÅANZX)n */
#define RADIO_WHT_INIT_H_ADR            (0x64u)      /*!< mb<in-house>*TODO*póbWhiteningúóÔÝè(ãÊ1rbg)(@ref RADIO_WHT_INIT_H_T ^ÅANZX)n */
#define RADIO_WHT_INIT_L_ADR            (0x65u)      /*!< mb<in-house>*TODO*póbWhiteningúóÔÝè(ºÊ8rbg)(@ref RADIO_WHT_INIT_L_T ^ÅANZX)n */
#define RADIO_WHT_CFG_ADR               (0x66u)      /*!< mb<in-house>*TODO*póbWhitening¶¬½®Ýè(@ref RADIO_WHT_CFG_T ^ÅANZX)n */
#define RADIO_NONPUBLIC_B1_ADR67        (0x67u)      /*!< mb<in-house>*TODO*póbñöJn */
#define RADIO_NONPUBLIC_B1_ADR68        (0x68u)      /*!< mb<in-house>*TODO*póbñöJn */
#define RADIO_NONPUBLIC_B1_ADR69        (0x69u)      /*!< mb<in-house>*TODO*póbñöJn */
#define RADIO_NONPUBLIC_B1_ADR6A        (0x6Au)      /*!< mb<in-house>*TODO*póbñöJn */
#define RADIO_NONPUBLIC_B1_ADR6B        (0x6Bu)      /*!< mb<in-house>*TODO*póbñöJn */
#define RADIO_NONPUBLIC_B1_ADR6C        (0x6Cu)      /*!< mb<in-house>*TODO*póbñöJn */
#define RADIO_GPIO5_CTRL_ADR            (0x6Du)      /*!< mb<in-house>*TODO*póbGPIO5[q§ä(@ref RADIO_GPIO5_CTRL_T ^ÅANZX)n */
#define RADIO_NONPUBLIC_B1_ADR6E        (0x6Eu)      /*!< mb<in-house>*TODO*póbñöJn */
#define RADIO_NONPUBLIC_B1_ADR6F        (0x6Fu)      /*!< mb<in-house>*TODO*póbñöJn */
#define RADIO_DCDC_CTRL_ADR             (0x70u)      /*!< mb<in-house>*TODO*póbDCDCRo[^§ä(@ref RADIO_DCDC_CTRL_T ^ÅANZX)n */
#define RADIO_NONPUBLIC_B1_ADR71        (0x71u)      /*!< mb<in-house>*TODO*póbñöJn */
#define RADIO_NONPUBLIC_B1_ADR72        (0x72u)      /*!< mb<in-house>*TODO*póbñöJn */
#define RADIO_NONPUBLIC_B1_ADR73        (0x73u)      /*!< mb<in-house>*TODO*póbñöJn */
#define RADIO_VCO_FCAL_MIN_2P4G_ADR     (0x74u)      /*!< mb<in-house>*TODO*póbºÀ¤VCOügLu[Vl\¦ÆÝè(2.4GHz TXp)(@ref RADIO_VCO_FCAL_MIN_2P4G_T ^ÅANZX)n */
#define RADIO_VCO_FCAL_MAX_2P4G_ADR     (0x75u)      /*!< mb<in-house>*TODO*póbãÀ¤VCOügLu[Vl\¦ÆÝè(2.4GHz TXp)(@ref RADIO_VCO_FCAL_MAX_2P4G_T ^ÅANZX)n */
#define RADIO_VCO_FCAL_MIN_2P4G_RX_ADR  (0x76u)      /*!< mb<in-house>*TODO*póbºÀ¤VCOügLu[Vl\¦ÆÝè(2.4GHz RXp)(@ref RADIO_VCO_FCAL_MIN_2P4G_T ^ÅANZX)n */
#define RADIO_VCO_FCAL_MAX_2P4G_RX_ADR  (0x77u)      /*!< mb<in-house>*TODO*póbãÀ¤VCOügLu[Vl\¦ÆÝè(2.4GHz RXp)(@ref RADIO_VCO_FCAL_MAX_2P4G_T ^ÅANZX)n */
#define RADIO_NONPUBLIC_B1_ADR78        (0x78u)      /*!< mb<in-house>*TODO*póbñöJn */
#define RADIO_NONPUBLIC_B1_ADR79        (0x79u)      /*!< mb<in-house>*TODO*póbñöJn */
#define RADIO_NONPUBLIC_B1_ADR7A        (0x7Au)      /*!< mb<in-house>*TODO*póbñöJn */
#define RADIO_TX_RATE2_EN_ADR           (0x7Bu)      /*!< mb<in-house>*TODO*póbMf[^[gÝèCl[u(@ref RADIO_TX_RATE2_EN_T ^ÅANZX)n */
#define RADIO_TX_RATE2_H_ADR            (0x7Cu)      /*!< mb<in-house>*TODO*póbMf[^[gÝè2iãÊoCgj(@ref RADIO_TX_RATE2_H_T ^ÅANZX)n */
#define RADIO_TX_RATE2_L_ADR            (0x7Du)      /*!< mb<in-house>*TODO*póbMf[^[gÝè2iºÊoCgj(@ref RADIO_TX_RATE2_L_T ^ÅANZX)n */
#define RADIO_NONPUBLIC_B1_ADR7E        (0x7Eu)      /*!< mb<in-house>*TODO*póbñöJn */
#define RADIO_ID_CODE_ADR               (0x7Fu)      /*!< mb<in-house>*TODO*póbIDR[h\¦(@ref RADIO_ID_CODE_T ^ÅANZX)n */

#define BANK_CLK_OUT_ADR               (1)      /*!< mb<in-house>*TODO*póbCLK_OUT(GPIOn)(@ref RADIO_CLK_OUT_T ^ÅANZX)n */
#define BANK_TX_RATE_H_ADR             (1)      /*!< mb<in-house>*TODO*póbMf[^[gÏ·Ýè(ãÊoCg)(@ref RADIO_TX_RATE_H_T ^ÅANZX)n */
#define BANK_TX_RATE_L_ADR             (1)      /*!< mb<in-house>*TODO*póbMf[^[gÏ·Ýè(ºÊoCg)(@ref RADIO_TX_RATE_L_T ^ÅANZX)n */
#define BANK_RX_RATE1_H_ADR            (1)      /*!< mb<in-house>*TODO*póbóMf[^[gÏ·Ýè1(ãÊoCg)(@ref RADIO_RX_RATE1_H_T ^ÅANZX)n */
#define BANK_RX_RATE1_L_ADR            (1)      /*!< mb<in-house>*TODO*póbóMf[^[gÏ·Ýè1(ºÊoCg)(@ref RADIO_RX_RATE1_L_T ^ÅANZX)n */
#define BANK_RX_RATE2_ADR              (1)      /*!< mb<in-house>*TODO*póbóMf[^[gÏ·Ýè2(@ref RADIO_RX_RATE2_T ^ÅANZX)n */
#define BANK_NONPUBLIC_B1_ADR07        (1)      /*!< mb<in-house>*TODO*póbñöJn */
#define BANK_OSC_W_SEL_ADR             (1)      /*!< mb<in-house>*TODO*póbNbNÀè»Ò¿ÔÝè(@ref RADIO_OSC_W_SEL_T ^ÅANZX)n */
#define BANK_NONPUBLIC_B1_ADR09        (1)      /*!< mb<in-house>*TODO*póbñöJn */
#define BANK_NONPUBLIC_B1_ADR0A        (1)      /*!< mb<in-house>*TODO*póbñöJn */
#define BANK_PLL_LOCK_DETECT_ADR       (1)      /*!< mb<in-house>*TODO*póbPLLbN»èÝè(@ref RADIO_PLL_LOCK_DETECT_T ^ÅANZX)n */
#define BANK_GAIN_HTOL_ADR             (1)      /*!< mb<in-house>*TODO*póbQC©çáQCÖÌØèÖ¦èlÝè(@ref RADIO_GAIN_HTOL_T ^ÅANZX)n */
#define BANK_GAIN_LTOH_ADR             (1)      /*!< mb<in-house>*TODO*póbáQC©çQCÖÌØèÖ¦èlÝè(@ref RADIO_GAIN_LTOH_T ^ÅANZX)n */
#define BANK_GAIN_HOLD_ADR             (1)      /*!< mb<in-house>*TODO*póbQCØèÖ¦Ýè(@ref RADIO_GAIN_HOLD_T ^ÅANZX)n */
#define BANK_RSSI_STABLE_RES_ADR       (1)      /*!< mb<in-house>*TODO*póbRSSIÀè»Ò¿Ôªð\Ýè(@ref RADIO_RSSI_STABLE_RES_T ^ÅANZX)n */
#define BANK_GC_CTRL_DIV_ADR           (1)      /*!< mb<in-house>*TODO*pób_Co[VeBÌQC§äÝè(@ref RADIO_GC_CTRL_DIV_T ^ÅANZX)n */
#define BANK_RSSI_ADJ_L_ADR            (1)      /*!< mb<in-house>*TODO*póbáQC®ìÌRSSIItZbglÝè(@ref RADIO_RSSI_ADJ_L_T ^ÅANZX)n */
#define BANK_RSSI_STABLE_TIME_ADR      (1)      /*!< mb<in-house>*TODO*póbRSSIÀè»Ò¿ÔÝè(@ref RADIO_RSSI_STABLE_TIME_T ^ÅANZX)n */
#define BANK_RSSI_MAG_ADJ_ADR          (1)      /*!< mb<in-house>*TODO*póbEDÏ·pRSSIâ³Ýè(@ref RADIO_RSSI_MAG_ADJ_T ^ÅANZX)n */
#define BANK_NONPUBLIC_B1_ADR14        (1)      /*!< mb<in-house>*TODO*póbñöJn */
#define BANK_AFC_GC_CTRL_ADR           (1)      /*!< mb<in-house>*TODO*póbAFC/QC§äÝè(@ref RADIO_AFC_GC_CTRL_T ^ÅANZX)n */
#define BANK_CRC_POLY3_ADR             (1)      /*!< mb<in-house>*TODO*póbCRC¶¬½®3(@ref RADIO_CRC_POLY3_T ^ÅANZX)n */
#define BANK_CRC_POLY2_ADR             (1)      /*!< mb<in-house>*TODO*póbCRC¶¬½®2(@ref RADIO_CRC_POLY2_T ^ÅANZX)n */
#define BANK_CRC_POLY1_ADR             (1)      /*!< mb<in-house>*TODO*póbCRC¶¬½®1(@ref RADIO_CRC_POLY1_T ^ÅANZX)n */
#define BANK_CRC_POLY0_ADR             (1)      /*!< mb<in-house>*TODO*póbCRC¶¬½®0(@ref RADIO_CRC_POLY0_T ^ÅANZX)n */
#define BANK_PLL_DIV_SET_ADR           (1)      /*!< mb<in-house>*TODO*póbPLLoÍ2ªüØèÖ¦Ýè(@ref RADIO_PLL_DIV_SET_T ^ÅANZX)n */
#define BANK_TXFREQ_I_ADR              (1)      /*!< mb<in-house>*TODO*póbMügIJE^Ýè(@ref RADIO_TXFREQ_I_T ^ÅANZX)n */
#define BANK_TXFREQ_FH_ADR             (1)      /*!< mb<in-house>*TODO*póbMügFJE^Ýè(ãÊ4rbg)(@ref RADIO_TXFREQ_FH_T ^ÅANZX)n */
#define BANK_TXFREQ_FM_ADR             (1)      /*!< mb<in-house>*TODO*póbMügFJE^Ýè(Ê8rbg)(@ref RADIO_TXFREQ_FM_T ^ÅANZX)n */
#define BANK_TXFREQ_FL_ADR             (1)      /*!< mb<in-house>*TODO*póbMügFJE^Ýè(ºÊ8rbg)(@ref RADIO_TXFREQ_FL_T ^ÅANZX)n */
#define BANK_RXFREQ_I_ADR              (1)      /*!< mb<in-house>*TODO*póbóMügIJE^Ýè(@ref RADIO_RXFREQ_I_T ^ÅANZX)n */
#define BANK_RXFREQ_FH_ADR             (1)      /*!< mb<in-house>*TODO*póbóMügFJE^Ýè(ãÊ4rbg)(@ref RADIO_RXFREQ_FH_T ^ÅANZX)n */
#define BANK_RXFREQ_FM_ADR             (1)      /*!< mb<in-house>*TODO*póbóMügFJE^Ýè(Ê8rbg)(@ref RADIO_RXFREQ_FM_T ^ÅANZX)n */
#define BANK_RXFREQ_FL_ADR             (1)      /*!< mb<in-house>*TODO*póbóMügFJE^Ýè(ºÊ8rbg)(@ref RADIO_RXFREQ_FL_T ^ÅANZX)n */
#define BANK_CH_SPACE_H_ADR            (1)      /*!< mb<in-house>*TODO*pób`lÔuÝè(ãÊoCg)(@ref RADIO_CH_SPACE_H_T ^ÅANZX)n */
#define BANK_CH_SPACE_L_ADR            (1)      /*!< mb<in-house>*TODO*pób`lÔuÝè(ºÊoCg)(@ref RADIO_CH_SPACE_L_T ^ÅANZX)n */
#define BANK_SYNC_WORD_LEN_ADR         (1)      /*!< mb<in-house>*TODO*póbSYNC_WORD·Ýè(@ref RADIO_SYNC_WORD_LEN_T ^ÅANZX)n */
#define BANK_SYNC_WORD_EN_ADR          (1)      /*!< mb<in-house>*TODO*póbSYNC_WORDCl[uÝè(@ref RADIO_SYNC_WORD_EN_T ^ÅANZX)n */
#define BANK_SYNCWORD1_SET0_ADR        (1)      /*!< mb<in-house>*TODO*póbSYNC_WORD1Ýè1(@ref RADIO_SYNCWORD1_SET0_T ^ÅANZX)n */
#define BANK_SYNCWORD1_SET1_ADR        (1)      /*!< mb<in-house>*TODO*póbSYNC_WORD1Ýè2(@ref RADIO_SYNCWORD1_SET1_T ^ÅANZX)n */
#define BANK_SYNCWORD1_SET2_ADR        (1)      /*!< mb<in-house>*TODO*póbSYNC_WORD1Ýè3(@ref RADIO_SYNCWORD1_SET2_T ^ÅANZX)n */
#define BANK_SYNCWORD1_SET3_ADR        (1)      /*!< mb<in-house>*TODO*póbSYNC_WORD1Ýè4(@ref RADIO_SYNCWORD1_SET3_T ^ÅANZX)n */
#define BANK_SYNCWORD2_SET0_ADR        (1)      /*!< mb<in-house>*TODO*póbSYNC_WORD2Ýè1(@ref RADIO_SYNCWORD2_SET0_T ^ÅANZX)n */
#define BANK_SYNCWORD2_SET1_ADR        (1)      /*!< mb<in-house>*TODO*póbSYNC_WORD2Ýè2(@ref RADIO_SYNCWORD2_SET1_T ^ÅANZX)n */
#define BANK_SYNCWORD2_SET2_ADR        (1)      /*!< mb<in-house>*TODO*póbSYNC_WORD2Ýè3(@ref RADIO_SYNCWORD2_SET2_T ^ÅANZX)n */
#define BANK_SYNCWORD2_SET3_ADR        (1)      /*!< mb<in-house>*TODO*póbSYNC_WORD2Ýè4(@ref RADIO_SYNCWORD2_SET3_T ^ÅANZX)n */
#define BANK_FSK_CTRL_ADR              (1)      /*!< mb<in-house>*TODO*póbGFSK/FSKÏ²^C~Oªð\Ýè(@ref RADIO_FSK_CTRL_T ^ÅANZX)n */
#define BANK_GFSK_DEV_H_ADR            (1)      /*!< mb<in-house>*TODO*póbGFSKügÎÊÝè(ãÊ6rbg)(@ref RADIO_GFSK_DEV_H_T ^ÅANZX)n */
#define BANK_GFSK_DEV_L_ADR            (1)      /*!< mb<in-house>*TODO*póbGFSKügÎÊÝè(ºÊoCg)(@ref RADIO_GFSK_DEV_L_T ^ÅANZX)n */
#define BANK_FSK_DEV0_H_GFIL0_ADR      (1)      /*!< mb<in-house>*TODO*póbFSKügÎÊÝè0/KEVAtB^WÝè1(@ref RADIO_FSK_DEV0_H_GFIL0_T ^ÅANZX)n */
#define BANK_FSK_DEV0_L_GFIL1_ADR      (1)      /*!< mb<in-house>*TODO*póbFSKügÎÊÝè0/KEVAtB^WÝè2(@ref RADIO_FSK_DEV0_L_GFIL1_T ^ÅANZX)n */
#define BANK_FSK_DEV1_H_GFIL2_ADR      (1)      /*!< mb<in-house>*TODO*póbFSKügÎÊÝè1/KEVAtB^WÝè3(@ref RADIO_FSK_DEV1_H_GFIL2_T ^ÅANZX)n */
#define BANK_FSK_DEV1_L_GFIL3_ADR      (1)      /*!< mb<in-house>*TODO*póbFSKügÎÊÝè1/KEVAtB^WÝè4(@ref RADIO_FSK_DEV1_L_GFIL3_T ^ÅANZX)n */
#define BANK_FSK_DEV2_H_GFIL4_ADR      (1)      /*!< mb<in-house>*TODO*póbFSKügÎÊÝè2/KEVAtB^WÝè5(@ref RADIO_FSK_DEV2_H_GFIL4_T ^ÅANZX)n */
#define BANK_FSK_DEV2_L_GFIL5_ADR      (1)      /*!< mb<in-house>*TODO*póbFSKügÎÊÝè2/KEVAtB^WÝè6(@ref RADIO_FSK_DEV2_L_GFIL5_T ^ÅANZX)n */
#define BANK_FSK_DEV3_H_GFIL6_ADR      (1)      /*!< mb<in-house>*TODO*póbFSKügÎÊÝè3/KEVAtB^WÝè7(@ref RADIO_FSK_DEV3_H_GFIL6_T ^ÅANZX)n */
#define BANK_FSK_DEV3_L_ADR            (1)      /*!< mb<in-house>*TODO*póbFSKügÎÊÝè3(@ref RADIO_FSK_DEV3_L_T ^ÅANZX)n */
#define BANK_FSK_DEV4_H_ADR            (1)      /*!< mb<in-house>*TODO*póbFSKügÎÊÝè4(@ref RADIO_FSK_DEV4_H_T ^ÅANZX)n */
#define BANK_FSK_DEV4_L_ADR            (1)      /*!< mb<in-house>*TODO*póbFSKügÎÊÝè4(@ref RADIO_FSK_DEV4_L_T ^ÅANZX)n */
#define BANK_FSK_TIM_ADJ4_ADR          (1)      /*!< mb<in-house>*TODO*póbFSKæ4ügÎÊÌÛÔÝè(@ref RADIO_FSK_TIM_ADJ4_T ^ÅANZX)n */
#define BANK_FSK_TIM_ADJ3_ADR          (1)      /*!< mb<in-house>*TODO*póbFSKæ3ügÎÊÌÛÔÝè(@ref RADIO_FSK_TIM_ADJ3_T ^ÅANZX)n */
#define BANK_FSK_TIM_ADJ2_ADR          (1)      /*!< mb<in-house>*TODO*póbFSKæ2ügÎÊÌÛÔÝè(@ref RADIO_FSK_TIM_ADJ2_T ^ÅANZX)n */
#define BANK_FSK_TIM_ADJ1_ADR          (1)      /*!< mb<in-house>*TODO*póbFSKæ1ügÎÊÌÛÔÝè(@ref RADIO_FSK_TIM_ADJ1_T ^ÅANZX)n */
#define BANK_FSK_TIM_ADJ0_ADR          (1)      /*!< mb<in-house>*TODO*póbFSKüg³ÎÊiLAügjÌÛÔÝè(@ref RADIO_FSK_TIM_ADJ0_T ^ÅANZX)n */
#define BANK_4FSK_DATA_MAP_ADR         (1)      /*!< mb<in-house>*TODO*pób4FSKÌf[^}bsO(@ref RADIO_4FSK_DATA_MAP_T ^ÅANZX)n */
#define BANK_FREQ_ADJ_H_ADR            (1)      /*!< mb<in-house>*TODO*póbóMüg÷²®ÝèiãÊoCgj(@ref RADIO_FREQ_ADJ_H_T ^ÅANZX)n */
#define BANK_FREQ_ADJ_L_ADR            (1)      /*!< mb<in-house>*TODO*póbóMüg÷²®ÝèiºÊoCgj(@ref RADIO_FREQ_ADJ_L_T ^ÅANZX)n */
#define BANK_NONPUBLIC_B1_ADR44        (1)      /*!< mb<in-house>*TODO*póbñöJn */
#define BANK_NONPUBLIC_B1_ADR45        (1)      /*!< mb<in-house>*TODO*póbñöJn */
#define BANK_NONPUBLIC_B1_ADR46        (1)      /*!< mb<in-house>*TODO*póbñöJn */
#define BANK_NONPUBLIC_B1_ADR47        (1)      /*!< mb<in-house>*TODO*póbñöJn */
#define BANK_2DIV_MODE_ADR             (1)      /*!< mb<in-house>*TODO*póbAei_Co[VeB[hÝè(@ref RADIO_2DIV_MODE_T ^ÅANZX)n */
#define BANK_2DIV_SEARCH1_ADR          (1)      /*!< mb<in-house>*TODO*póbAei_Co[VeBT[`ÔÝè(@ref RADIO_2DIV_SEARCH1_T ^ÅANZX)n */
#define BANK_2DIV_SEARCH2_ADR          (1)      /*!< mb<in-house>*TODO*póbAei_Co[VeBT[`ÔÝè(@ref RADIO_2DIV_SEARCH2_T ^ÅANZX)n */
#define BANK_2DIV_FAST_LVL_ADR         (1)      /*!< mb<in-house>*TODO*póbAei_Co[VeBFAST[hÌEDèlÝè(@ref RADIO_2DIV_FAST_LVL_T ^ÅANZX)n */
#define BANK_2DIV_PB_TH_ADR            (1)      /*!< mb<in-house>*TODO*pób(@ref RADIO_2DIV_PB_TH_T ^ÅANZX)n */
#define BANK_VCO_CAL_MIN_I_ADR         (1)      /*!< mb<in-house>*TODO*póbVCO_CALºÀügIJE^Ýè(@ref RADIO_VCO_CAL_MIN_I_T ^ÅANZX)n */
#define BANK_VCO_CAL_MIN_FH_ADR        (1)      /*!< mb<in-house>*TODO*póbVCO_CALºÀügFJE^Ýè(ãÊ6rbg)(@ref RADIO_VCO_CAL_MIN_FH_T ^ÅANZX)n */
#define BANK_VCO_CAL_MIN_FM_ADR        (1)      /*!< mb<in-house>*TODO*póbVCO_CALºÀügFJE^Ýè(Ê8rbg)(@ref RADIO_VCO_CAL_MIN_FM_T ^ÅANZX)n */
#define BANK_VCO_CAL_MIN_FL_ADR        (1)      /*!< mb<in-house>*TODO*póbVCO_CALºÀügFJE^Ýè(ºÊ8rbg)(@ref RADIO_VCO_CAL_MIN_FL_T ^ÅANZX)n */
#define BANK_VCO_CAL_MAX_N_ADR         (1)      /*!< mb<in-house>*TODO*póbVCO_CAL_MaxügÝè(@ref RADIO_VCO_CAL_MAX_N_T ^ÅANZX)n */
#define BANK_FVCAL_MIN_ADR             (1)      /*!< mb<in-house>*TODO*póbVCOLu[VºÀl(@ref RADIO_FVCAL_MIN_T ^ÅANZX)n */
#define BANK_FVCAL_MAX_ADR             (1)      /*!< mb<in-house>*TODO*póbVCOLu[VãÀl(@ref RADIO_FVCAL_MAX_T ^ÅANZX)n */
#define BANK_VCO_ACAL_ADR              (1)      /*!< mb<in-house>*TODO*póbVCOULu[Vl\¦ÆÝè(@ref RADIO_VCO_ACAL_T ^ÅANZX)n */
#define BANK_VCO_ACAL_WR_EN_ADR        (1)      /*!< mb<in-house>*TODO*póbVCOULu[Vã«Ýè(@ref RADIO_VCO_ACAL_WR_EN_T ^ÅANZX)n */
#define BANK_DEMOD_SET0_ADR            (1)      /*!< mb<in-house>*TODO*pób²íÝè0(@ref RADIO_DEMOD_SET0_T ^ÅANZX)n */
#define BANK_DEMOD_SET1_ADR            (1)      /*!< mb<in-house>*TODO*pób²íÝè1(@ref RADIO_DEMOD_SET1_T ^ÅANZX)n */
#define BANK_DEMOD_SET2_ADR            (1)      /*!< mb<in-house>*TODO*pób²íÝè2(@ref RADIO_DEMOD_SET2_T ^ÅANZX)n */
#define BANK_DEMOD_SET3_ADR            (1)      /*!< mb<in-house>*TODO*pób²íÝè3(@ref RADIO_DEMOD_SET3_T ^ÅANZX)n */
#define BANK_RX_IQ_SEL_ADR             (1)      /*!< mb<in-house>*TODO*póbóMIQIðÝè(@ref RADIO_RX_IQ_SEL_T ^ÅANZX) n */
#define BANK_DEMOD_SET5_ADR            (1)      /*!< mb<in-house>*TODO*póbñöJn */
#define BANK_DEMOD_SET6_ADR            (1)      /*!< mb<in-house>*TODO*pób²íÝè6(@ref RADIO_DEMOD_SET6_T ^ÅANZX)n */
#define BANK_DEMOD_SET7_ADR            (1)      /*!< mb<in-house>*TODO*pób²íÝè7(@ref RADIO_DEMOD_SET7_T ^ÅANZX)n */
#define BANK_DEMOD_SET8_ADR            (1)      /*!< mb<in-house>*TODO*pób²íÝè8(@ref RADIO_DEMOD_SET8_T ^ÅANZX)n */
#define BANK_DEMOD_SET9_ADR            (1)      /*!< mb<in-house>*TODO*pób²íÝè9(@ref RADIO_DEMOD_SET9_T ^ÅANZX)n */
#define BANK_DEMOD_SET10_ADR           (1)      /*!< mb<in-house>*TODO*pób²íÝè10(@ref RADIO_DEMOD_SET10_T ^ÅANZX)n */
#define BANK_DEMOD_SET11_ADR           (1)      /*!< mb<in-house>*TODO*pób²íÝè11(@ref RADIO_DEMOD_SET11_T ^ÅANZX)n */
#define BANK_ADDR_CHK_CTR_H_ADR        (1)      /*!< mb<in-house>*TODO*póbAhX`FbNJE^\¦(ãÊ3rbg)(@ref RADIO_ADDR_CHK_CTR_H_T ^ÅANZX)n */
#define BANK_ADDR_CHK_CTR_L_ADR        (1)      /*!< mb<in-house>*TODO*póbAhX`FbNJE^\¦(ºÊoCg)(@ref RADIO_ADDR_CHK_CTR_L_T ^ÅANZX)n */
#define BANK_WHT_INIT_H_ADR            (1)      /*!< mb<in-house>*TODO*póbWhiteningúóÔÝè(ãÊ1rbg)(@ref RADIO_WHT_INIT_H_T ^ÅANZX)n */
#define BANK_WHT_INIT_L_ADR            (1)      /*!< mb<in-house>*TODO*póbWhiteningúóÔÝè(ºÊ8rbg)(@ref RADIO_WHT_INIT_L_T ^ÅANZX)n */
#define BANK_WHT_CFG_ADR               (1)      /*!< mb<in-house>*TODO*póbWhitening¶¬½®Ýè(@ref RADIO_WHT_CFG_T ^ÅANZX)n */
#define BANK_NONPUBLIC_B1_ADR67        (1)      /*!< mb<in-house>*TODO*póbñöJn */
#define BANK_NONPUBLIC_B1_ADR68        (1)      /*!< mb<in-house>*TODO*póbñöJn */
#define BANK_NONPUBLIC_B1_ADR69        (1)      /*!< mb<in-house>*TODO*póbñöJn */
#define BANK_NONPUBLIC_B1_ADR6A        (1)      /*!< mb<in-house>*TODO*póbñöJn */
#define BANK_NONPUBLIC_B1_ADR6B        (1)      /*!< mb<in-house>*TODO*póbñöJn */
#define BANK_NONPUBLIC_B1_ADR6C        (1)      /*!< mb<in-house>*TODO*póbñöJn */
#define BANK_GPIO5_CTRL_ADR            (1)      /*!< mb<in-house>*TODO*póbGPIO5[q§ä(@ref RADIO_GPIO5_CTRL_T ^ÅANZX)n */
#define BANK_NONPUBLIC_B1_ADR6E        (1)      /*!< mb<in-house>*TODO*póbñöJn */
#define BANK_NONPUBLIC_B1_ADR6F        (1)      /*!< mb<in-house>*TODO*póbñöJn */
#define BANK_DCDC_CTRL_ADR             (1)      /*!< mb<in-house>*TODO*póbDCDCRo[^§ä(@ref RADIO_DCDC_CTRL_T ^ÅANZX)n */
#define BANK_NONPUBLIC_B1_ADR71        (1)      /*!< mb<in-house>*TODO*póbñöJn */
#define BANK_NONPUBLIC_B1_ADR72        (1)      /*!< mb<in-house>*TODO*póbñöJn */
#define BANK_NONPUBLIC_B1_ADR73        (1)      /*!< mb<in-house>*TODO*póbñöJn */
#define BANK_VCO_FCAL_MIN_2P4G_ADR     (1)      /*!< mb<in-house>*TODO*póbºÀ¤VCOügLu[Vl\¦ÆÝè(2.4GHz TXp)(@ref RADIO_VCO_FCAL_MIN_2P4G_T ^ÅANZX)n */
#define BANK_VCO_FCAL_MAX_2P4G_ADR     (1)      /*!< mb<in-house>*TODO*póbãÀ¤VCOügLu[Vl\¦ÆÝè(2.4GHz TXp)(@ref RADIO_VCO_FCAL_MAX_2P4G_T ^ÅANZX)n */
#define BANK_VCO_FCAL_MIN_2P4G_RX_ADR  (1)      /*!< mb<in-house>*TODO*póbºÀ¤VCOügLu[Vl\¦ÆÝè(2.4GHz RXp)(@ref RADIO_VCO_FCAL_MIN_2P4G_T ^ÅANZX)n */
#define BANK_VCO_FCAL_MAX_2P4G_RX_ADR  (1)      /*!< mb<in-house>*TODO*póbãÀ¤VCOügLu[Vl\¦ÆÝè(2.4GHz RXp)(@ref RADIO_VCO_FCAL_MAX_2P4G_T ^ÅANZX)n */
#define BANK_NONPUBLIC_B1_ADR78        (1)      /*!< mb<in-house>*TODO*póbñöJn */
#define BANK_NONPUBLIC_B1_ADR79        (1)      /*!< mb<in-house>*TODO*póbñöJn */
#define BANK_NONPUBLIC_B1_ADR7A        (1)      /*!< mb<in-house>*TODO*póbñöJn */
#define BANK_TX_RATE2_EN_ADR           (1)      /*!< mb<in-house>*TODO*póbMf[^[gÝèCl[u(@ref RADIO_TX_RATE2_EN_T ^ÅANZX)n */
#define BANK_TX_RATE2_H_ADR            (1)      /*!< mb<in-house>*TODO*póbMf[^[gÝè2iãÊoCgj(@ref RADIO_TX_RATE2_H_T ^ÅANZX)n */
#define BANK_TX_RATE2_L_ADR            (1)      /*!< mb<in-house>*TODO*póbMf[^[gÝè2iºÊoCgj(@ref RADIO_TX_RATE2_L_T ^ÅANZX)n */
#define BANK_NONPUBLIC_B1_ADR7E        (1)      /*!< mb<in-house>*TODO*póbñöJn */
#define BANK_ID_CODE_ADR               (1)      /*!< mb<in-house>*TODO*póbIDR[h\¦(@ref RADIO_ID_CODE_T ^ÅANZX)n */

/* mRF register structuresbRFWX^\¢Ìn */
/** @brief mType definition for @ref RADIO_CLK_OUT_ADR accessb@ref RADIO_CLK_OUT_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t clk_div:            8;      /*!<mb<in-house>*TODO*póboÍNbNügÝè R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_CLK_OUT_T;

/** @brief mType definition for @ref RADIO_TX_RATE_H_ADR accessb@ref RADIO_TX_RATE_H_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t tx_rate_h:          8;      /*!<mb<in-house>*TODO*póbMf[^[gÏ·Ýè(ãÊoCg) R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_TX_RATE_H_T;

/** @brief mType definition for @ref RADIO_TX_RATE_L_ADR accessb@ref RADIO_TX_RATE_L_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t tx_rate_l:          8;      /*!<mb<in-house>*TODO*póbMf[^[gÏ·Ýè(ºÊoCg) R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_TX_RATE_L_T;

/** @brief mType definition for @ref RADIO_RX_RATE1_H_ADR accessb@ref RADIO_RX_RATE1_H_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t rx_rate1_h:         8;      /*!<mb<in-house>*TODO*póbóMf[^[gÏ·Ýè(ãÊoCg) R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_RX_RATE1_H_T;

/** @brief mType definition for @ref RADIO_RX_RATE1_L_ADR accessb@ref RADIO_RX_RATE1_L_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t rx_rate1_l:         8;      /*!<mb<in-house>*TODO*póbóMf[^[gÏ·Ýè(ºÊoCg) R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_RX_RATE1_L_T;

/** @brief mType definition for @ref RADIO_RX_RATE2_ADR accessb@ref RADIO_RX_RATE2_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t rx_rate2:           7;      /*!<mb<in-house>*TODO*póbóMf[^[gÏ·Ýè2(ÝèÍÍ: 30`127) R/Wn*/
        uint8_t reserved0:          1;      /*!<mb<in-house>*TODO*pób\ñ R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_RX_RATE2_T;

/** @brief mType definition for @ref RADIO_OSC_W_SEL_ADR accessb@ref RADIO_OSC_W_SEL_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t reserved0:          4;      /*!<mb<in-house>*TODO*pób\ñ Rn*/
        uint8_t osc_w_sel:          3;      /*!<mb<in-house>*TODO*póbNbNÀè»Ò¿ÔÝè R/Wn*/
        uint8_t reserved1:          1;      /*!<mb<in-house>*TODO*pób\ñ Rn*/
    }bits;
    uint8_t byte;
}RADIO_OSC_W_SEL_T;

/** @brief mType definition for @ref RADIO_PLL_LOCK_DETECT_ADR accessb@ref RADIO_PLL_LOCK_DETECT_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t tim_pll_ld:         7;      /*!<mb<in-house>*TODO*póbPLLbN»èÔ²® R/Wn*/
        uint8_t pll_ld_en:          1;      /*!<mb<in-house>*TODO*póbMÌPLLbNOêoãÌóÔÝè R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_PLL_LOCK_DETECT_T;

/** @brief mType definition for @ref RADIO_GAIN_HTOL_ADR accessb@ref RADIO_GAIN_HTOL_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t agc_th_hl:          8;      /*!<mb<in-house>*TODO*póbQCØèÖ¦èl(QCËáQC) Rn*/
    }bits;
    uint8_t byte;
}RADIO_GAIN_HTOL_T;

/** @brief mType definition for @ref RADIO_GAIN_LTOH_ADR accessb@ref RADIO_GAIN_LTOH_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t agc_th_lh:          8;      /*!<mb<in-house>*TODO*póbQCØèÖ¦èl(áQCËQC) Rn*/
    }bits;
    uint8_t byte;
}RADIO_GAIN_LTOH_T;

/** @brief mType definition for @ref RADIO_GAIN_HOLD_ADR accessb@ref RADIO_GAIN_HOLD_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t reserved0:          7;      /*!<mb<in-house>*TODO*pób\ñ Rn*/
        uint8_t gain_sync_hold:     1;      /*!<mb<in-house>*TODO*póbQCØèÖ¦Ýè R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_GAIN_HOLD_T;

/** @brief mType definition for @ref RADIO_RSSI_STABLE_RES_ADR accessb@ref RADIO_RSSI_STABLE_RES_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t rssi_stable_res:    1;      /*!<mb<in-house>*TODO*póbRSSIÀèÒ¿Ôªð\Ýè R/Wn*/
        uint8_t reserved0:          7;      /*!<mb<in-house>*TODO*pób\ñ Rn*/
    }bits;
    uint8_t byte;
}RADIO_RSSI_STABLE_RES_T;

/** @brief mType definition for @ref RADIO_GC_CTRL_DIV_ADR accessb@ref RADIO_GC_CTRL_DIV_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t gc_mode_div:        4;      /*!<mb<in-house>*TODO*pób_Co[VeBÌQC§ä[hÝè R/Wn*/
        uint8_t gc_mode_cca:        4;      /*!<mb<in-house>*TODO*póbCCAÌQC§ä[hÝè R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_GC_CTRL_DIV_T;

/** @brief mType definition for @ref RADIO_RSSI_ADJ_L_ADR accessb@ref RADIO_RSSI_ADJ_L_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t rssi_gcadd:         7;      /*!<mb<in-house>*TODO*póbáQC®ìÌRSSIItZbgl R/Wn*/
        uint8_t reserved0:          1;      /*!<mb<in-house>*TODO*pób\ñ R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_RSSI_ADJ_L_T;

/** @brief mType definition for @ref RADIO_RSSI_STABLE_TIME_ADR accessb@ref RADIO_RSSI_STABLE_TIME_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t rssi_stable:        3;      /*!<mb<in-house>*TODO*póbQCØÖãÌRSSIÀèÒ¿ÔÝè R/Wn*/
        uint8_t reserved0:          1;      /*!<mb<in-house>*TODO*pób Rn*/
        uint8_t rssi_stable2:       3;      /*!<mb<in-house>*TODO*pób¬dg`FbNQCØÖãÌRSSIÀèÒ¿ÔÝè R/Wn*/
        uint8_t reserved1:          1;      /*!<mb<in-house>*TODO*pób Rn*/
    }bits;
    uint8_t byte;
}RADIO_RSSI_STABLE_TIME_T;

/** @brief mType definition for @ref RADIO_RSSI_MAG_ADJ_ADR accessb@ref RADIO_RSSI_MAG_ADJ_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t rssi_val_trim:      5;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t reserved0:          3;      /*!<mb<in-house>*TODO*pób Rn*/
    }bits;
    uint8_t byte;
}RADIO_RSSI_MAG_ADJ_T;

/** @brief mType definition for @ref RADIO_AFC_GC_CTRL_ADR accessb@ref RADIO_AFC_GC_CTRL_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t gc_mode:            4;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t pll_afc_update_sel: 2;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t pll_afc_update_en:  1;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t pll_afc_en:         1;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_AFC_GC_CTRL_T;

/** @brief mType definition for @ref RADIO_CRC_POLY3_ADR accessb@ref RADIO_CRC_POLY3_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t crc_poly:           7;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t reserved0:          1;      /*!<mb<in-house>*TODO*pób Rn*/
    }bits;
    uint8_t byte;
}RADIO_CRC_POLY3_T;

/** @brief mType definition for @ref RADIO_CRC_POLY2_ADR accessb@ref RADIO_CRC_POLY2_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t crc_poly:           8;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_CRC_POLY2_T;

/** @brief mType definition for @ref RADIO_CRC_POLY1_ADR accessb@ref RADIO_CRC_POLY1_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t crc_poly:           8;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_CRC_POLY1_T;

/** @brief mType definition for @ref RADIO_CRC_POLY0_ADR accessb@ref RADIO_CRC_POLY0_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t crc_poly:           8;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_CRC_POLY0_T;

/** @brief mType definition for @ref RADIO_PLL_DIV_SET_ADR accessb@ref RADIO_PLL_DIV_SET_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t pll_div_sel:        1;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t pll_out_div:        3;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t rx_div_sel:         1;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t reserved0:          3;      /*!<mb<in-house>*TODO*pób Rn*/
    }bits;
    uint8_t byte;
}RADIO_PLL_DIV_SET_T;

/** @brief mType definition for @ref RADIO_TXFREQ_I_ADR accessb@ref RADIO_TXFREQ_I_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t txfreq_i:           6;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t reserved0:          2;      /*!<mb<in-house>*TODO*pób Rn*/
    }bits;
    uint8_t byte;
}RADIO_TXFREQ_I_T;

/** @brief mType definition for @ref RADIO_TXFREQ_FH_ADR accessb@ref RADIO_TXFREQ_FH_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t txfreq_f:           6;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t reserved0:          2;      /*!<mb<in-house>*TODO*pób Rn*/
    }bits;
    uint8_t byte;
}RADIO_TXFREQ_FH_T;

/** @brief mType definition for @ref RADIO_TXFREQ_FM_ADR accessb@ref RADIO_TXFREQ_FM_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t txfreq_f:           8;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_TXFREQ_FM_T;

/** @brief mType definition for @ref RADIO_TXFREQ_FL_ADR accessb@ref RADIO_TXFREQ_FL_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t txfreq_f:           8;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_TXFREQ_FL_T;

/** @brief mType definition for @ref RADIO_RXFREQ_I_ADR accessb@ref RADIO_RXFREQ_I_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t rxfreq_i:           6;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t reserved0:          2;      /*!<mb<in-house>*TODO*pób Rn*/
    }bits;
    uint8_t byte;
}RADIO_RXFREQ_I_T;

/** @brief mType definition for @ref RADIO_RXFREQ_FH_ADR accessb@ref RADIO_RXFREQ_FH_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t rxfreq_f:           6;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t reserved0:          2;      /*!<mb<in-house>*TODO*pób Rn*/
    }bits;
    uint8_t byte;
}RADIO_RXFREQ_FH_T;

/** @brief mType definition for @ref RADIO_RXFREQ_FM_ADR accessb@ref RADIO_RXFREQ_FM_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t rxfreq_f:           8;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_RXFREQ_FM_T;

/** @brief mType definition for @ref RADIO_RXFREQ_FL_ADR accessb@ref RADIO_RXFREQ_FL_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t rxfreq_f:           8;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_RXFREQ_FL_T;

/** @brief mType definition for @ref RADIO_CH_SPACE_H_ADR accessb@ref RADIO_CH_SPACE_H_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t ch_space:           8;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_CH_SPACE_H_T;

/** @brief mType definition for @ref RADIO_CH_SPACE_L_ADR accessb@ref RADIO_CH_SPACE_L_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t ch_space:           8;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_CH_SPACE_L_T;

/** @brief mType definition for @ref RADIO_SYNC_WORD_LEN_ADR accessb@ref RADIO_SYNC_WORD_LEN_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t sync_word_len:      6;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t reserved0:          2;      /*!<mb<in-house>*TODO*pób Rn*/
    }bits;
    uint8_t byte;
}RADIO_SYNC_WORD_LEN_T;

/** @brief mType definition for @ref RADIO_SYNC_WORD_EN_ADR accessb@ref RADIO_SYNC_WORD_EN_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t sync_word_en0:      1;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t sync_word_en1:      1;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t sync_word_en2:      1;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t sync_word_en3:      1;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t reserved0:          4;      /*!<mb<in-house>*TODO*pób Rn*/
    }bits;
    uint8_t byte;
}RADIO_SYNC_WORD_EN_T;

/** @brief mType definition for @ref RADIO_SYNCWORD1_SET0_ADR accessb@ref RADIO_SYNCWORD1_SET0_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t sync_word1:         8;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_SYNCWORD1_SET0_T;

/** @brief mType definition for @ref RADIO_SYNCWORD1_SET1_ADR accessb@ref RADIO_SYNCWORD1_SET1_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t sync_word1:         8;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_SYNCWORD1_SET1_T;

/** @brief mType definition for @ref RADIO_SYNCWORD1_SET2_ADR accessb@ref RADIO_SYNCWORD1_SET2_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t sync_word1:         8;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_SYNCWORD1_SET2_T;

/** @brief mType definition for @ref RADIO_SYNCWORD1_SET3_ADR accessb@ref RADIO_SYNCWORD1_SET3_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t sync_word1:         8;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_SYNCWORD1_SET3_T;

/** @brief mType definition for @ref RADIO_SYNCWORD2_SET0_ADR accessb@ref RADIO_SYNCWORD2_SET0_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t sync_word2:         8;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_SYNCWORD2_SET0_T;

/** @brief mType definition for @ref RADIO_SYNCWORD2_SET1_ADR accessb@ref RADIO_SYNCWORD2_SET1_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t sync_word2:         8;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_SYNCWORD2_SET1_T;

/** @brief mType definition for @ref RADIO_SYNCWORD2_SET2_ADR accessb@ref RADIO_SYNCWORD2_SET2_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t sync_word2:         8;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_SYNCWORD2_SET2_T;

/** @brief mType definition for @ref RADIO_SYNCWORD2_SET3_ADR accessb@ref RADIO_SYNCWORD2_SET3_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t sync_word2:         8;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_SYNCWORD2_SET3_T;

/** @brief mType definition for @ref RADIO_FSK_CTRL_ADR accessb@ref RADIO_FSK_CTRL_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t fsk_clk_set:        1;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t gfsk_clkx2:         1;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t gfsk_clkx4:         1;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t gfsk_clkx8:         1;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t bt_sel:             2;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t reserved0:          2;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_FSK_CTRL_T;

/** @brief mType definition for @ref RADIO_GFSK_DEV_H_ADR accessb@ref RADIO_GFSK_DEV_H_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t gfsk_dev:           8;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_GFSK_DEV_H_T;

/** @brief mType definition for @ref RADIO_GFSK_DEV_L_ADR accessb@ref RADIO_GFSK_DEV_L_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t gfsk_dev:           8;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_GFSK_DEV_L_T;

/** @brief mType definition for @ref RADIO_FSK_DEV0_H_GFIL0_ADR accessb@ref RADIO_FSK_DEV0_H_GFIL0_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t fsk_dev0:           6;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t gfil0:              2;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_FSK_DEV0_H_GFIL0_T;

/** @brief mType definition for @ref RADIO_FSK_DEV0_L_GFIL1_ADR accessb@ref RADIO_FSK_DEV0_L_GFIL1_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t fsk_dev0:           8;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_FSK_DEV0_L_GFIL1_T;

/** @brief mType definition for @ref RADIO_FSK_DEV1_H_GFIL2_ADR accessb@ref RADIO_FSK_DEV1_H_GFIL2_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t fsk_dev1:           8;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_FSK_DEV1_H_GFIL2_T;

/** @brief mType definition for @ref RADIO_FSK_DEV1_L_GFIL3_ADR accessb@ref RADIO_FSK_DEV1_L_GFIL3_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t fsk_dev1:           8;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_FSK_DEV1_L_GFIL3_T;

/** @brief mType definition for @ref RADIO_FSK_DEV2_H_GFIL4_ADR accessb@ref RADIO_FSK_DEV2_H_GFIL4_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t fsk_dev2:           8;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_FSK_DEV2_H_GFIL4_T;

/** @brief mType definition for @ref RADIO_FSK_DEV2_L_GFIL5_ADR accessb@ref RADIO_FSK_DEV2_L_GFIL5_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t fsk_dev2:           8;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_FSK_DEV2_L_GFIL5_T;

/** @brief mType definition for @ref RADIO_FSK_DEV3_H_GFIL6_ADR accessb@ref RADIO_FSK_DEV3_H_GFIL6_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t fsk_dev3:           6;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t gfil6:              2;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_FSK_DEV3_H_GFIL6_T;

/** @brief mType definition for @ref RADIO_FSK_DEV3_L_ADR accessb@ref RADIO_FSK_DEV3_L_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t fsk_dev3:           8;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_FSK_DEV3_L_T;

/** @brief mType definition for @ref RADIO_FSK_DEV4_H_ADR accessb@ref RADIO_FSK_DEV4_H_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t fsk_dev4:           8;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_FSK_DEV4_H_T;

/** @brief mType definition for @ref RADIO_FSK_DEV4_L_ADR accessb@ref RADIO_FSK_DEV4_L_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t fsk_dev4:           8;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_FSK_DEV4_L_T;

/** @brief mType definition for @ref RADIO_FSK_TIM_ADJ4_ADR accessb@ref RADIO_FSK_TIM_ADJ4_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t mod_tim04:          8;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_FSK_TIM_ADJ4_T;

/** @brief mType definition for @ref RADIO_FSK_TIM_ADJ3_ADR accessb@ref RADIO_FSK_TIM_ADJ3_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t mod_tim03:          8;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_FSK_TIM_ADJ3_T;

/** @brief mType definition for @ref RADIO_FSK_TIM_ADJ2_ADR accessb@ref RADIO_FSK_TIM_ADJ2_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t mod_tim02:          8;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_FSK_TIM_ADJ2_T;

/** @brief mType definition for @ref RADIO_FSK_TIM_ADJ1_ADR accessb@ref RADIO_FSK_TIM_ADJ1_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t mod_tim01:          8;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_FSK_TIM_ADJ1_T;

/** @brief mType definition for @ref RADIO_FSK_TIM_ADJ0_ADR accessb@ref RADIO_FSK_TIM_ADJ0_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t mod_tim00:          8;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_FSK_TIM_ADJ0_T;

/** @brief mType definition for @ref RADIO_4FSK_DATA_MAP_ADR accessb@ref RADIO_4FSK_DATA_MAP_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t fsk4_freq0:         2;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t fsk4_freq1:         2;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t fsk4_freq2:         2;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t fsk4_freq3:         2;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_4FSK_DATA_MAP_T;

/** @brief mType definition for @ref RADIO_FREQ_ADJ_H_ADR accessb@ref RADIO_FREQ_ADJ_H_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t freq_adj:           2;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t reserved0:          5;      /*!<mb<in-house>*TODO*pób Rn*/
        uint8_t freq_adj_sign:      1;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_FREQ_ADJ_H_T;

/** @brief mType definition for @ref RADIO_FREQ_ADJ_L_ADR accessb@ref RADIO_FREQ_ADJ_L_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t freq_adj:           8;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_FREQ_ADJ_L_T;

/** @brief mType definition for @ref RADIO_2DIV_MODE_ADR accessb@ref RADIO_2DIV_MODE_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t div_ed_avg:         3;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t reserved0:          1;      /*!<mb<in-house>*TODO*pób Rn*/
        uint8_t search_mode:        1;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t sthold_en:          1;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t sync_chk_off:       1;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t div_gc_en:          1;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_2DIV_MODE_T;

/** @brief mType definition for @ref RADIO_2DIV_SEARCH1_ADR accessb@ref RADIO_2DIV_SEARCH1_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t search_time1:       7;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t search_time_set:    1;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_2DIV_SEARCH1_T;

/** @brief mType definition for @ref RADIO_2DIV_SEARCH2_ADR accessb@ref RADIO_2DIV_SEARCH2_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t search_time2:       7;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t reserved0:          1;      /*!<mb<in-house>*TODO*pób Rn*/
    }bits;
    uint8_t byte;
}RADIO_2DIV_SEARCH2_T;

/** @brief mType definition for @ref RADIO_2DIV_FAST_LVL_ADR accessb@ref RADIO_2DIV_FAST_LVL_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t two_div_fast_lvl:    8;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_2DIV_FAST_LVL_T;

/** @brief mType definition for @ref RADIO_2DIV_PB_TH_ADR accessb@ref RADIO_2DIV_PB_TH_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t two_div_pb_th:      5;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t reserved0:          3;      /*!<mb<in-house>*TODO*pób Rn*/
    }bits;
    uint8_t byte;
}RADIO_2DIV_PB_TH_T;

/** @brief mType definition for @ref RADIO_VCO_CAL_MIN_I_ADR accessb@ref RADIO_VCO_CAL_MIN_I_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t vco_cal_min_i:      6;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t reserved0:          2;      /*!<mb<in-house>*TODO*pób Rn*/
    }bits;
    uint8_t byte;
}RADIO_VCO_CAL_MIN_I_T;

/** @brief mType definition for @ref RADIO_VCO_CAL_MIN_FH_ADR accessb@ref RADIO_VCO_CAL_MIN_FH_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t vco_cal_min_f:      6;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t reserved0:          2;      /*!<mb<in-house>*TODO*pób Rn*/
    }bits;
    uint8_t byte;
}RADIO_VCO_CAL_MIN_FH_T;

/** @brief mType definition for @ref RADIO_VCO_CAL_MIN_FM_ADR accessb@ref RADIO_VCO_CAL_MIN_FM_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t vco_cal_min_f:      8;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_VCO_CAL_MIN_FM_T;

/** @brief mType definition for @ref RADIO_VCO_CAL_MIN_FL_ADR accessb@ref RADIO_VCO_CAL_MIN_FL_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t vco_cal_min_f:      8;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_VCO_CAL_MIN_FL_T;

/** @brief mType definition for @ref RADIO_FVCAL_MAX_ADR accessb@ref RADIO_FVCAL_MAX_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t vco_cal_max_n:      4;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t reserved0:          4;      /*!<mb<in-house>*TODO*pób Rn*/
    }bits;
    uint8_t byte;
}RADIO_VCO_CAL_MAX_N_T;

/** @brief mType definition for @ref RADIO_FVCAL_MIN_ADR accessb@ref RADIO_FVCAL_MIN_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t vco_cal_min:        8;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_FVCAL_MIN_T;

/** @brief mType definition for @ref RADIO_FVCAL_MAX_ADR accessb@ref RADIO_FVCAL_MAX_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t vco_cal_max:        8;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_FVCAL_MAX_T;

/** @brief mType definition for @ref RADIO_VCO_ACAL_ADR accessb@ref RADIO_VCO_ACAL_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t vco_acal:           8;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_VCO_ACAL_T;

/** @brief mType definition for @ref RADIO_VCO_ACAL_WR_EN_ADR accessb@ref RADIO_VCO_ACAL_WR_EN_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t vco_acal_wr_en:     1;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t reserved0:          7;      /*!<mb<in-house>*TODO*pób Rn*/
    }bits;
    uint8_t byte;
}RADIO_VCO_ACAL_WR_EN_T;

/** @brief mType definition for @ref RADIO_DEMOD_SET0_ADR accessb@ref RADIO_DEMOD_SET0_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t afc_off:            1;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t afc_hold_on:        1;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t afc_lim_off:        1;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t str_hold_on:        1;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t str_lim_on:         1;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t reserved0:          1;      /*!<mb<in-house>*TODO*pób Rn*/
        uint8_t iq_inv:             1;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t chfil_wide_sync:    1;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_DEMOD_SET0_T;

/** @brief mType definition for @ref RADIO_DEMOD_SET1_ADR accessb@ref RADIO_DEMOD_SET1_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t dem_fil:            3;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t reserved0:          1;      /*!<mb<in-house>*TODO*pób Rn*/
        uint8_t dem_fil2:           2;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t reserved1:          2;      /*!<mb<in-house>*TODO*pób Rn*/
    }bits;
    uint8_t byte;
}RADIO_DEMOD_SET1_T;

/** @brief mType definition for @ref RADIO_DEMOD_SET2_ADR accessb@ref RADIO_DEMOD_SET2_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t dem_gain:           3;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t reserved0:          5;      /*!<mb<in-house>*TODO*pób Rn*/
    }bits;
    uint8_t byte;
}RADIO_DEMOD_SET2_T;

/** @brief mType definition for @ref RADIO_DEMOD_SET3_ADR accessb@ref RADIO_DEMOD_SET3_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t dem_4fsk_th:        8;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_DEMOD_SET3_T;

/** @brief mType definition for @ref RADIO_RX_IQ_SEL_ADR accessb@ref RADIO_RX_IQ_SEL_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t rx_iq_sel_norm:     1;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t rx_iq_sel_fast_en:  1;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t rx_iq_sel_fast:     1;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t reserved0:          1;      /*!<mb<in-house>*TODO*pób Rn*/
        uint8_t rx_iq_sel_sync_en:  1;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t rx_iq_sel_sync:     1;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t reserved1:          2;      /*!<mb<in-house>*TODO*pób Rn*/
    }bits;
    uint8_t byte;
}RADIO_RX_IQ_SEL_T;

/** @brief mType definition for @ref RADIO_DEMOD_SET6_ADR accessb@ref RADIO_DEMOD_SET6_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t rxdev_range:        8;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_DEMOD_SET6_T;

/** @brief mType definition for @ref RADIO_DEMOD_SET7_ADR accessb@ref RADIO_DEMOD_SET7_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t afc_limit:          8;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_DEMOD_SET7_T;

/** @brief mType definition for @ref RADIO_DEMOD_SET8_ADR accessb@ref RADIO_DEMOD_SET8_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t pll_afc_shift:      3;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t reserved0:          5;      /*!<mb<in-house>*TODO*pób Rn*/
    }bits;
    uint8_t byte;
}RADIO_DEMOD_SET8_T;

/** @brief mType definition for @ref RADIO_DEMOD_SET9_ADR accessb@ref RADIO_DEMOD_SET9_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t pll_afc_co:         8;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_DEMOD_SET9_T;

/** @brief mType definition for @ref RADIO_DEMOD_SET10_ADR accessb@ref RADIO_DEMOD_SET10_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t str_pb_len:         5;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t reserved0:          2;      /*!<mb<in-house>*TODO*pób Rn*/
        uint8_t bit_sync_sel:       1;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_DEMOD_SET10_T;

/** @brief mType definition for @ref RADIO_DEMOD_SET11_ADR accessb@ref RADIO_DEMOD_SET11_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t str_pb_len_div:     5;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t reserved0:          3;      /*!<mb<in-house>*TODO*pób Rn*/
    }bits;
    uint8_t byte;
}RADIO_DEMOD_SET11_T;

/** @brief mType definition for @ref RADIO_ADDR_CHK_CTR_H_ADR accessb@ref RADIO_ADDR_CHK_CTR_H_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t addr_chk_ctr:       3;      /*!<mb<in-house>*TODO*pób Rn*/
        uint8_t reserved0:          5;      /*!<mb<in-house>*TODO*pób Rn*/
    }bits;
    uint8_t byte;
}RADIO_ADDR_CHK_CTR_H_T;

/** @brief mType definition for @ref RADIO_ADDR_CHK_CTR_L_ADR accessb@ref RADIO_ADDR_CHK_CTR_L_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t addr_chk_ctr:       8;      /*!<mb<in-house>*TODO*pób Rn*/
    }bits;
    uint8_t byte;
}RADIO_ADDR_CHK_CTR_L_T;

/** @brief mType definition for @ref RADIO_WHT_INIT_H_ADR accessb@ref RADIO_WHT_INIT_H_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t wht_init:           1;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t reserved0:          7;      /*!<mb<in-house>*TODO*pób Rn*/
    }bits;
    uint8_t byte;
}RADIO_WHT_INIT_H_T;

/** @brief mType definition for @ref RADIO_WHT_INIT_L_ADR accessb@ref RADIO_WHT_INIT_L_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t wht_init:           8;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_WHT_INIT_L_T;

/** @brief mType definition for @ref RADIO_WHT_CFG_ADR accessb@ref RADIO_WHT_CFG_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t wht_cfg:            8;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_WHT_CFG_T;

/** @brief mType definition for @ref RADIO_GPIO5_CTRL_ADR accessb@ref RADIO_GPIO5_CTRL_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t gpio5_ctrl:         4;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t gpio5_fout_en:      1;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t gpio5_fout:         1;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t gpio5_od:           1;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t gpio5_inv:          1;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_GPIO5_CTRL_T;

/** @brief mType definition for @ref RADIO_DCDC_CTRL_ADR accessb@ref RADIO_DCDC_CTRL_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t low_vdd_mode:       1;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t reserved0:          7;      /*!<mb<in-house>*TODO*pób Rn*/
    }bits;
    uint8_t byte;
}RADIO_DCDC_CTRL_T;

/** @brief mType definition for @ref RADIO_VCO_FCAL_MIN_2P4G_ADR accessb@ref RADIO_VCO_FCAL_MIN_2P4G_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t vco_cal_min_2p4g:   8;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_VCO_FCAL_MIN_2P4G_T;

/** @brief mType definition for @ref RADIO_VCO_FCAL_MAX_2P4G_ADR accessb@ref RADIO_VCO_FCAL_MAX_2P4G_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t vco_cal_max_2p4g:   8;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_VCO_FCAL_MAX_2P4G_T;

/** @brief mType definition for @ref RADIO_VCO_FCAL_MIN_2P4G_RX_ADR accessb@ref RADIO_VCO_FCAL_MIN_2P4G_RX_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t vco_cal_min_2p4g_rx: 8;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_VCO_FCAL_MIN_2P4G_RX_T;

/** @brief mType definition for @ref RADIO_VCO_FCAL_MAX_2P4G_RX_ADR accessb@ref RADIO_VCO_FCAL_MAX_2P4G_RX_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t vco_cal_max_2p4g_rx: 8;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_VCO_FCAL_MAX_2P4G_RX_T;

/** @brief mType definition for @ref RADIO_TX_RATE2_EN_ADR accessb@ref RADIO_TX_RATE2_EN_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t tx_rate2_en:        1;      /*!<mb<in-house>*TODO*pób R/Wn*/
        uint8_t reserved0:          7;      /*!<mb<in-house>*TODO*pób Rn*/
    }bits;
    uint8_t byte;
}RADIO_TX_RATE2_EN_T;

/** @brief mType definition for @ref RADIO_TX_RATE2_H_ADR accessb@ref RADIO_TX_RATE2_H_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t tx_rate2:           8;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_TX_RATE2_H_T;

/** @brief mType definition for @ref RADIO_TX_RATE2_L_ADR accessb@ref RADIO_TX_RATE2_L_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t tx_rate2:           8;      /*!<mb<in-house>*TODO*pób R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_TX_RATE2_L_T;

/** @brief mType definition for @ref RADIO_ID_CODE_ADR accessb@ref RADIO_ID_CODE_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t id:                 8;      /*!<mb<in-house>*TODO*pób Rn*/
    }bits;
    uint8_t byte;
}RADIO_ID_CODE_T;

/** \} */ /* End of group RF_REGISTER_BANK1 */

#endif
