/****************************************************************************************/
/**
   @file     bank0.h

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
#ifndef _bank0_H
#define _bank0_H

/**
    \addtogroup RF_REGISTER_BANK0
    \{
*/

/*mBANK0 Register Address DefinitionsbBANK0WX^AhXè`n*/
#define RADIO_BANK_SEL_ADR              (0x00u)      /*!< mb<in-house>*TODO*póbBANKØèÖ¦(@ref RADIO_BANK_SEL_T ^ÅANZX)n */
#define RADIO_RST_SET_ADR               (0x01u)      /*!< mb<in-house>*TODO*póbZbg§ä(@ref RADIO_RST_SET_T ^ÅANZX)n */
#define RADIO_CLK_SET1_ADR              (0x02u)      /*!< mb<in-house>*TODO*póbNbN§ä1(@ref RADIO_CLK_SET1_T ^ÅANZX)n */
#define RADIO_CLK_SET2_ADR              (0x03u)      /*!< mb<in-house>*TODO*póbNbN§ä2(@ref RADIO_CLK_SET2_T ^ÅANZX)n */
#define RADIO_PKT_CTRL1_ADR             (0x04u)      /*!< mb<in-house>*TODO*póbpPbgtH[}bgÝè1(@ref RADIO_PKT_CTRL1_T ^ÅANZX)n */
#define RADIO_PKT_CTRL2_ADR             (0x05u)      /*!< mb<in-house>*TODO*póbpPbgtH[}bgÝè2(@ref RADIO_PKT_CTRL2_T ^ÅANZX)n */
#define RADIO_DRATE_SET_ADR             (0x06u)      /*!< mb<in-house>*TODO*póbf[^[gÝè(@ref RADIO_DRATE_SET_T ^ÅANZX)n */
#define RADIO_DATA_SET1_ADR             (0x07u)      /*!< mb<in-house>*TODO*póbóMf[^eíÝè1(@ref RADIO_DATA_SET1_T ^ÅANZX)n */
#define RADIO_DATA_SET2_ADR             (0x08u)      /*!< mb<in-house>*TODO*póbóMf[^eíÝè2(@ref RADIO_DATA_SET2_T ^ÅANZX)n */
#define RADIO_CH_SET_ADR                (0x09u)      /*!< mb<in-house>*TODO*póbRF`lÝè(@ref RADIO_CH_SET_T ^ÅANZX)n */
#define RADIO_RF_STATUS_CTRL_ADR        (0x0Au)      /*!< mb<in-house>*TODO*póbRFóÔÏXÝè(@ref RADIO_RF_STATUS_CTRL_T ^ÅANZX)n */
#define RADIO_RF_STATUS_ADR             (0x0Bu)      /*!< mb<in-house>*TODO*póbRFóÔÝè(@ref RADIO_RF_STATUS_T ^ÅANZX)n */
#define RADIO_DIO_SET_ADR               (0x0Cu)      /*!< mb<in-house>*TODO*póbDIOÝè(@ref RADIO_DIO_SET_T ^ÅANZX)n */
#define RADIO_INT_SOURCE_GRP1_ADR       (0x0Du)      /*!< mb<in-house>*TODO*póbèÝ\¦1(@ref RADIO_INT_SOURCE_GRP1_T ^ÅANZX)n */
#define RADIO_INT_SOURCE_GRP2_ADR       (0x0Eu)      /*!< mb<in-house>*TODO*póbèÝ\¦2(@ref RADIO_INT_SOURCE_GRP2_T ^ÅANZX)n */
#define RADIO_INT_SOURCE_GRP3_ADR       (0x0Fu)      /*!< mb<in-house>*TODO*póbèÝ\¦3(@ref RADIO_INT_SOURCE_GRP3_T ^ÅANZX)n */
#define RADIO_INT_EN_GRP1_ADR           (0x10u)      /*!< mb<in-house>*TODO*póbèÝÊmCl[u1(@ref RADIO_INT_EN_GRP1_T ^ÅANZX)n */
#define RADIO_INT_EN_GRP2_ADR           (0x11u)      /*!< mb<in-house>*TODO*póbèÝÊmCl[u2(@ref RADIO_INT_EN_GRP2_T ^ÅANZX)n */
#define RADIO_INT_EN_GRP3_ADR           (0x12u)      /*!< mb<in-house>*TODO*póbèÝÊmCl[u3(@ref RADIO_INT_EN_GRP3_T ^ÅANZX)n */
#define RADIO_CRC_ERR_H_ADR             (0x13u)      /*!< mb<in-house>*TODO*póbCRCG[\¦1(@ref RADIO_CRC_ERR_H_T ^ÅANZX)n */
#define RADIO_CRC_ERR_M_ADR             (0x14u)      /*!< mb<in-house>*TODO*póbCRCG[\¦2(@ref RADIO_CRC_ERR_M_T ^ÅANZX)n */
#define RADIO_CRC_ERR_L_ADR             (0x15u)      /*!< mb<in-house>*TODO*póbCRCG[\¦3(@ref RADIO_CRC_ERR_L_T ^ÅANZX)n */
#define RADIO_STATE_CLR_ADR             (0x16u)      /*!< mb<in-house>*TODO*póbóÔNA§ä(@ref RADIO_STATE_CLR_T ^ÅANZX)n */
#define RADIO_TXFIFO_THRH_ADR           (0x17u)      /*!< mb<in-house>*TODO*póbMFIFO-Fullèl(@ref RADIO_TXFIFO_THRH_T ^ÅANZX)n */
#define RADIO_TXFIFO_THRL_ADR           (0x18u)      /*!< mb<in-house>*TODO*póbMFIFO-EmptyèlAFAST_TXCl[uÌèl(@ref RADIO_TXFIFO_THRL_T ^ÅANZX)n */
#define RADIO_RXFIFO_THRH_ADR           (0x19u)      /*!< mb<in-house>*TODO*póbóMFIFO-Fullèl(@ref RADIO_RXFIFO_THRH_T ^ÅANZX)n */
#define RADIO_RXFIFO_THRL_ADR           (0x1Au)      /*!< mb<in-house>*TODO*póbóMFIFO-Emptyèl(@ref RADIO_RXFIFO_THRL_T ^ÅANZX)n */
#define RADIO_C_CHECK_CTRL_B0_ADR       (0x1Bu)      /*!< mb<in-house>*TODO*póbC-field`FbNCl[u(@ref RADIO_C_CHECK_CTRL_B0_T ^ÅANZX)n */
#define RADIO_M_CHECK_CTRL_B0_ADR       (0x1Cu)      /*!< mb<in-house>*TODO*póbM-field`FbNCl[u(@ref RADIO_M_CHECK_CTRL_B0_T ^ÅANZX)n */
#define RADIO_A_CHECK_CTRL_B0_ADR       (0x1Du)      /*!< mb<in-house>*TODO*póbA-field`FbNCl[u(@ref RADIO_A_CHECK_CTRL_B0_T ^ÅANZX)n */
#define RADIO_C_FIELD_CODE1_B0_ADR      (0x1Eu)      /*!< mb<in-house>*TODO*póbC-fieldÝèR[h1(@ref RADIO_C_FIELD_CODE1_B0_T ^ÅANZX)n */
#define RADIO_C_FIELD_CODE2_B0_ADR      (0x1Fu)      /*!< mb<in-house>*TODO*póbC-fieldÝèR[h2(@ref RADIO_C_FIELD_CODE2_B0_T ^ÅANZX)n */
#define RADIO_C_FIELD_CODE3_B0_ADR      (0x20u)      /*!< mb<in-house>*TODO*póbC-fieldÝèR[h3(@ref RADIO_C_FIELD_CODE3_B0_T ^ÅANZX)n */
#define RADIO_C_FIELD_CODE4_B0_ADR      (0x21u)      /*!< mb<in-house>*TODO*póbC-fieldÝèR[h4(@ref RADIO_C_FIELD_CODE4_B0_T ^ÅANZX)n */
#define RADIO_C_FIELD_CODE5_B0_ADR      (0x22u)      /*!< mb<in-house>*TODO*póbC-fieldÝèR[h5(@ref RADIO_C_FIELD_CODE5_B0_T ^ÅANZX)n */
#define RADIO_M_FIELD_CODE1_B0_ADR      (0x23u)      /*!< mb<in-house>*TODO*póbM-field(@ref RADIO_M_FIELD_CODE1_B0_T ^ÅANZX)n */
#define RADIO_M_FIELD_CODE2_B0_ADR      (0x24u)      /*!< mb<in-house>*TODO*póbM-field(@ref RADIO_M_FIELD_CODE2_B0_T ^ÅANZX)n */
#define RADIO_M_FIELD_CODE3_B0_ADR      (0x25u)      /*!< mb<in-house>*TODO*póbM-field(@ref RADIO_M_FIELD_CODE3_B0_T ^ÅANZX)n */
#define RADIO_M_FIELD_CODE4_B0_ADR      (0x26u)      /*!< mb<in-house>*TODO*póbM-field(@ref RADIO_M_FIELD_CODE4_B0_T ^ÅANZX)n */
#define RADIO_A_FIELD_CODE1_B0_ADR      (0x27u)      /*!< mb<in-house>*TODO*póbA-field(@ref RADIO_A_FIELD_CODE1_B0_T ^ÅANZX)n */
#define RADIO_A_FIELD_CODE2_B0_ADR      (0x28u)      /*!< mb<in-house>*TODO*póbA-field(@ref RADIO_A_FIELD_CODE2_B0_T ^ÅANZX)n */
#define RADIO_A_FIELD_CODE3_B0_ADR      (0x29u)      /*!< mb<in-house>*TODO*póbA-field(@ref RADIO_A_FIELD_CODE3_B0_T ^ÅANZX)n */
#define RADIO_A_FIELD_CODE4_B0_ADR      (0x2Au)      /*!< mb<in-house>*TODO*póbA-field(@ref RADIO_A_FIELD_CODE4_B0_T ^ÅANZX)n */
#define RADIO_A_FIELD_CODE5_B0_ADR      (0x2Bu)      /*!< mb<in-house>*TODO*póbA-field(@ref RADIO_A_FIELD_CODE5_B0_T ^ÅANZX)n */
#define RADIO_A_FIELD_CODE6_B0_ADR      (0x2Cu)      /*!< mb<in-house>*TODO*póbA-field(@ref RADIO_A_FIELD_CODE6_B0_T ^ÅANZX)n */
#define RADIO_SLEEP_WU_SET_ADR          (0x2Du)      /*!< mb<in-house>*TODO*póbSLEEP/WakeUP^C}Ýè(@ref RADIO_SLEEP_WU_SET_T ^ÅANZX)n */
#define RADIO_WUT_CLK_SET_ADR           (0x2Eu)      /*!< mb<in-house>*TODO*póbWakeUP^C}pNbNªüÝè(@ref RADIO_WUT_CLK_SET_T ^ÅANZX)n */
#define RADIO_WUT_INTERVAL_H_ADR        (0x2Fu)      /*!< mb<in-house>*TODO*póbWakeUP^C}C^[oÝè(ãÊoCg)(@ref RADIO_WUT_INTERVAL_H_T ^ÅANZX)n */
#define RADIO_WUT_INTERVAL_L_ADR        (0x30u)      /*!< mb<in-house>*TODO*póbWakeUP^C}C^[oÝè(ºÊoCg)(@ref RADIO_WUT_INTERVAL_L_T ^ÅANZX)n */
#define RADIO_WU_DURATION_ADR           (0x31u)      /*!< mb<in-house>*TODO*póbWakeUPãÌ®ìp±^C}Ò­ÔÝè(@ref RADIO_WU_DURATION_T ^ÅANZX)n */
#define RADIO_GT_SET_ADR                (0x32u)      /*!< mb<in-house>*TODO*póbÄp^C}Ýè(@ref RADIO_GT_SET_T ^ÅANZX)n */
#define RADIO_GT_CLK_SET_ADR            (0x33u)      /*!< mb<in-house>*TODO*póbÄp^C}pNbNªüÝè(@ref RADIO_GT_CLK_SET_T ^ÅANZX)n */
#define RADIO_GT1_TIMER_ADR             (0x34u)      /*!< mb<in-house>*TODO*póbÄp^C}1^C}Ýè(@ref RADIO_GT1_TIMER_T ^ÅANZX)n */
#define RADIO_GT2_TIMER_ADR             (0x35u)      /*!< mb<in-house>*TODO*póbÄp^C}2^C}Ýè(@ref RADIO_GT2_TIMER_T ^ÅANZX)n */
#define RADIO_CCA_IGNORE_LVL_ADR        (0x36u)      /*!< mb<in-house>*TODO*póbCCAÌ»èOEDlÝè(@ref RADIO_CCA_IGNORE_LVL_T ^ÅANZX)n */
#define RADIO_CCA_LVL_ADR               (0x37u)      /*!< mb<in-house>*TODO*póbCCA(@ref RADIO_CCA_LVL_T ^ÅANZX)n */
#define RADIO_CCA_ABORT_ADR             (0x38u)      /*!< mb<in-house>*TODO*póbCCA(@ref RADIO_CCA_ABORT_T ^ÅANZX)n */
#define RADIO_CCA_CTRL_ADR              (0x39u)      /*!< mb<in-house>*TODO*póbCCA§äÝè(@ref RADIO_CCA_CTRL_T ^ÅANZX)n */
#define RADIO_ED_RSLT_ADR               (0x3Au)      /*!< mb<in-house>*TODO*póbEDl\¦(@ref RADIO_ED_RSLT_T ^ÅANZX)n */
#define RADIO_IDLE_WAIT_H_ADR           (0x3Bu)      /*!< mb<in-house>*TODO*póbIDLEoúÔÝè(ãÊoCg)(@ref RADIO_IDLE_WAIT_H_T ^ÅANZX)n */
#define RADIO_IDLE_WAIT_L_ADR           (0x3Cu)      /*!< mb<in-house>*TODO*póbIDLEoúÔÝè(ºÊoCg)(@ref RADIO_IDLE_WAIT_L_T ^ÅANZX)n */
#define RADIO_CCA_PROG_H_ADR            (0x3Du)      /*!< mb<in-house>*TODO*póbIDLEoúÔÊ\¦(ãÊoCg)(@ref RADIO_CCA_PROG_H_T ^ÅANZX)n */
#define RADIO_CCA_PROG_L_ADR            (0x3Eu)      /*!< mb<in-house>*TODO*póbIDLEoúÔÊ\¦(ºÊoCg)(@ref RADIO_CCA_PROG_L_T ^ÅANZX)n */
#define RADIO_PREAMBLE_SET_ADR          (0x3Fu)      /*!< mb<in-house>*TODO*póbvAup^[Ýè(@ref RADIO_PREAMBLE_SET_T ^ÅANZX)n */
#define RADIO_VCO_VTRSLT_ADR            (0x40u)      /*!< mb<in-house>*TODO*póbVCO²®d³Ê\¦(@ref RADIO_VCO_VTRSLT_T ^ÅANZX)n */
#define RADIO_ED_CTRL_ADR               (0x41u)      /*!< mb<in-house>*TODO*póbEDl½ÏñÝè(@ref RADIO_ED_CTRL_T ^ÅANZX)n */
#define RADIO_TXPR_LEN_H_ADR            (0x42u)      /*!< mb<in-house>*TODO*póbMvAu·Ýè(ãÊoCg)(@ref RADIO_TXPR_LEN_H_T ^ÅANZX)n */
#define RADIO_TXPR_LEN_L_ADR            (0x43u)      /*!< mb<in-house>*TODO*póbMvAu·Ýè(ºÊoCg)(@ref RADIO_TXPR_LEN_L_T ^ÅANZX)n */
#define RADIO_POSTAMBLE_SET_ADR         (0x44u)      /*!< mb<in-house>*TODO*pób|XgAuÝè(@ref RADIO_POSTAMBLE_SET_T ^ÅANZX)n */
#define RADIO_SYNC_CONDITION1_ADR       (0x45u)      /*!< mb<in-house>*TODO*póbóMvAuÝè(@ref RADIO_SYNC_CONDITION1_T ^ÅANZX)n */
#define RADIO_SYNC_CONDITION2_ADR       (0x46u)      /*!< mb<in-house>*TODO*pób¯úoÌEDèl(@ref RADIO_SYNC_CONDITION2_T ^ÅANZX)n */
#define RADIO_SYNC_CONDITION3_ADR       (0x47u)      /*!< mb<in-house>*TODO*póbëèeÝè(@ref RADIO_SYNC_CONDITION3_T ^ÅANZX)n */
#define RADIO_2DIV_CTRL_ADR             (0x48u)      /*!< mb<in-house>*TODO*póbAei_Co[VeBÝè(@ref RADIO_2DIV_CTRL_T ^ÅANZX)n */
#define RADIO_2DIV_RSLT_ADR             (0x49u)      /*!< mb<in-house>*TODO*póbAei_Co[VeBÊ\¦(@ref RADIO_2DIV_RSLT_T ^ÅANZX)n */
#define RADIO_ANT1_ED_ADR               (0x4Au)      /*!< mb<in-house>*TODO*póbAei1Ìæ¾EDl\¦(@ref RADIO_ANT1_ED_T ^ÅANZX)n */
#define RADIO_ANT2_ED_ADR               (0x4Bu)      /*!< mb<in-house>*TODO*póbAei2Ìæ¾EDl\¦(@ref RADIO_ANT2_ED_T ^ÅANZX)n */
#define RADIO_ANT_CTRL_ADR              (0x4Cu)      /*!< mb<in-house>*TODO*póbóMÌAei­§Ýè(@ref RADIO_ANT_CTRL_T ^ÅANZX)n */
#define RADIO_MON_CTRL_ADR              (0x4Du)      /*!< mb<in-house>*TODO*póbj^oÍMIðÝè(@ref RADIO_MON_CTRL_T ^ÅANZX)n */
#define RADIO_GPIO0_CTRL_ADR            (0x4Eu)      /*!< mb<in-house>*TODO*póbGPIO0[q§äÝè(@ref RADIO_GPIO0_CTRL_T ^ÅANZX)n */
#define RADIO_GPIO1_CTRL_ADR            (0x4Fu)      /*!< mb<in-house>*TODO*póbGPIO1[q§äÝè(@ref RADIO_GPIO1_CTRL_T ^ÅANZX)n */
#define RADIO_GPIO2_CTRL_ADR            (0x50u)      /*!< mb<in-house>*TODO*póbGPIO2[q§äÝè(@ref RADIO_GPIO2_CTRL_T ^ÅANZX)n */
#define RADIO_GPIO3_CTRL_ADR            (0x51u)      /*!< mb<in-house>*TODO*póbGPIO3[q§äÝè(@ref RADIO_GPIO3_CTRL_T ^ÅANZX)n */
#define RADIO_GPIO4_CTRL_ADR            (0x52u)      /*!< mb<in-house>*TODO*póbGPIO4[q§äÝè(@ref RADIO_GPIO4_CTRL_T ^ÅANZX)n */
#define RADIO_EXTCLK_CTRL_ADR           (0x52u)      /*!< mb<in-house>*TODO*póbEXT_CLK[q§äÝè( @ref RADIO_EXTCLK_CTRL_T ^ÅANZX)n */
#define RADIO_SPI_EXT_PA_CTRL_ADR       (0x53u)      /*!< mb<in-house>*TODO*póbSPIC^tF[XIO(@ref RADIO_SPI_EXT_PA_CTRL_T ^ÅANZX)n */
#define RADIO_CHFIL_BW_ADR              (0x54u)      /*!< mb<in-house>*TODO*pób`ltB^ÑæÝè(@ref RADIO_CHFIL_BW_T ^ÅANZX)n */
#define RADIO_DC_I_ADJ_H_ADR            (0x55u)      /*!< mb<in-house>*TODO*póbIDCItZbg²®Ýè(ãÊ6rbg)(@ref RADIO_DC_I_ADJ_H_T ^ÅANZX)n */
#define RADIO_DC_I_ADJ_L_ADR            (0x56u)      /*!< mb<in-house>*TODO*póbIDCItZbg²®Ýè(ºÊoCg)(@ref RADIO_DC_I_ADJ_L_T ^ÅANZX)n */
#define RADIO_DC_Q_ADJ_H_ADR            (0x57u)      /*!< mb<in-house>*TODO*póbQDCItZbg²®Ýè(ãÊ6rbg)(@ref RADIO_DC_Q_ADJ_H_T ^ÅANZX)n */
#define RADIO_DC_Q_ADJ_L_ADR            (0x58u)      /*!< mb<in-house>*TODO*póbQDCItZbg²®Ýè(ºÊoCg)(@ref RADIO_DC_Q_ADJ_L_T ^ÅANZX)n */
#define RADIO_DC_FIL_ADJ_ADR            (0x59u)      /*!< mb<in-house>*TODO*póbDCItZbg²®tB^Ýè(@ref RADIO_DC_FIL_ADJ_T ^ÅANZX)n */
#define RADIO_IQ_MAG_ADJ_H_ADR          (0x5Au)      /*!< mb<in-house>*TODO*póbIFÌIQUoX²®iãÊ4rbgj(@ref RADIO_IQ_MAG_ADJ_H_T ^ÅANZX)n */
#define RADIO_IQ_MAG_ADJ_L_ADR          (0x5Bu)      /*!< mb<in-house>*TODO*póbIFÌIQUoX²®iºÊoCgj(@ref RADIO_IQ_MAG_ADJ_L_T ^ÅANZX)n */
#define RADIO_IQ_PHASE_ADJ_H_ADR        (0x5Cu)      /*!< mb<in-house>*TODO*póbIFÌIQÊoX²®iãÊ4rbgj(@ref RADIO_IQ_PHASE_ADJ_H_T ^ÅANZX)n */
#define RADIO_IQ_PHASE_ADJ_L_ADR        (0x5Du)      /*!< mb<in-house>*TODO*póbIFÌIQÊoX²®iºÊoCgj(@ref RADIO_IQ_PHASE_ADJ_L_T ^ÅANZX)n */
#define RADIO_IQ_ADJ_WAIT_ADR           (0x5Eu)      /*!< mb<in-house>*TODO*póbIFÌIQ©®²®pRSSIæ¾EFCgÔ(@ref RADIO_IQ_ADJ_WAIT_T ^ÅANZX)n */
#define RADIO_IQ_ADJ_TARGET_ADR         (0x5Fu)      /*!< mb<in-house>*TODO*póbIFÌIQ©®²®pRSSI»èèl(@ref RADIO_IQ_ADJ_TARGET_T ^ÅANZX)n */
#define RADIO_DEC_GAIN_ADR              (0x60u)      /*!< mb<in-house>*TODO*póbfV[VQCÝè(@ref RADIO_DEC_GAIN_T ^ÅANZX)n */
#define RADIO_IF_FREQ_ADR               (0x61u)      /*!< mb<in-house>*TODO*póbIFügIð(@ref RADIO_IF_FREQ_T ^ÅANZX)n */
#define RADIO_OSC_ADJ1_ADR              (0x62u)      /*!< mb<in-house>*TODO*pób­UñH§ä(e²j(@ref RADIO_OSC_ADJ1_T ^ÅANZX)n */
#define RADIO_OSC_ADJ2_ADR              (0x63u)      /*!< mb<in-house>*TODO*pób­UñH§ä(÷²j(@ref RADIO_OSC_ADJ2_T ^ÅANZX)n */
#define RADIO_FIELD_CHECK_RSLT_ADR      (0x64u)      /*!< mb<in-house>*TODO*póbtB[h`FbNÊ\¦ (@ref RADIO_FIELD_CHECK_RSLT_T ^ÅANZX)n */
#define RADIO_OSC_ADJ4_ADR              (0x65u)      /*!< mb<in-house>*TODO*pób¬N®­UñHoCAXÝè(@ref RADIO_OSC_ADJ4_T ^ÅANZX)n */
#define RADIO_RSSI_ADJ_ADR              (0x66u)      /*!< mb<in-house>*TODO*póbRSSIlÌ²®(@ref RADIO_RSSI_ADJ_T ^ÅANZX)n */
#define RADIO_PA_MODE_ADR               (0x67u)      /*!< mb<in-house>*TODO*póbPA[hÝè/PAM[^²®(@ref RADIO_B0_ADR67_T ^ÅANZX)n */
#define RADIO_PA_REG_ADJ_H_ADR          (0x67u)      /*!< mb<in-house>*TODO*póbPAM[^²®(ãÊoCg)(@ref RADIO_B0_ADR67_T ^ÅANZX)n */
#define RADIO_PA_REG_FINE_ADJ_L_ADR     (0x68u)      /*!< mb<in-house>*TODO*póbPAM[^÷²®(@ref RADIO_B0_ADR68_T ^ÅANZX)n */
#define RADIO_PA_REG_ADJ_L_ADR          (0x68u)      /*!< mb<in-house>*TODO*póbPAM[^²®(ºÊoCg)(@ref RADIO_B0_ADR68_T ^ÅANZX)n */
#define RADIO_PA_ADJ_ADR                (0x69u)      /*!< mb<in-house>*TODO*póbPAp[²®Ýè(@ref RADIO_PA_ADJ_T ^ÅANZX)n */
#define RADIO_CHFIL_BW_CCA_ADR          (0x6Au)      /*!< mb<in-house>*TODO*póbCCA`ltB^ÑæÝè(@ref RADIO_CHFIL_BW_CCA_T ^ÅANZX)n */
#define RADIO_CHFIL_BW_OPTION_ADR       (0x6Bu)      /*!< mb<in-house>*TODO*pób`ltB^ÑæIvVÝè(@ref RADIO_CHFIL_BW_OPTION_T ^ÅANZX)n */
#define RADIO_DC_FIL_ADJ2_ADR           (0x6Cu)      /*!< mb<in-house>*TODO*póbDCItZbg²®tB^Ýè2(@ref RADIO_DC_FIL_ADJ2_T ^ÅANZX)n */
#define RADIO_DEC_GAIN_CCA_ADR          (0x6Du)      /*!< mb<in-house>*TODO*póbCCAÌfV[VQCÝè(@ref RADIO_DEC_GAIN_CCA_T ^ÅANZX)n */
#define RADIO_VCO_CAL_ADR               (0x6Eu)      /*!< mb<in-house>*TODO*póbVCOLu[Vl\¦Ü½ÍÝè(@ref RADIO_VCO_CAL_T ^ÅANZX)n */
#define RADIO_VCO_CAL_START_ADR         (0x6Fu)      /*!< mb<in-house>*TODO*póbVCOLu[VÀs(@ref RADIO_VCO_CAL_START_T ^ÅANZX)n */
#define RADIO_CLK_CAL_SET_ADR           (0x70u)      /*!< mb<in-house>*TODO*póbá¬NbNLu[V§ä(@ref RADIO_CLK_CAL_SET_T ^ÅANZX)n */
#define RADIO_CLK_CAL_TIME_ADR          (0x71u)      /*!< mb<in-house>*TODO*póbá¬NbNLu[VÔÝè(@ref RADIO_CLK_CAL_TIME_T ^ÅANZX)n */
#define RADIO_CLK_CAL_H_ADR             (0x72u)      /*!< mb<in-house>*TODO*póbá¬NbNLu[Vl\¦(ãÊoCg)(@ref RADIO_CLK_CAL_H_T ^ÅANZX)n */
#define RADIO_CLK_CAL_L_ADR             (0x73u)      /*!< mb<in-house>*TODO*póbá¬NbNLu[Vl\¦(ºÊoCg)(@ref RADIO_CLK_CAL_L_T ^ÅANZX)n */
#define RADIO_FEC_CTRL_ADR              (0x74u)      /*!< mb<in-house>*TODO*póbFECÝè(@ref RADIO_FEC_CTRL_T ^ÅANZX)n */
#define RADIO_SLEEP_INT_CLR_ADR         (0x75u)      /*!< mb<in-house>*TODO*póbSLEEPÝNAÝè(@ref RADIO_SLEEP_INT_CLR_T ^ÅANZX)n */
#define RADIO_RF_TEST_MODE_ADR          (0x76u)      /*!< mb<in-house>*TODO*póbMeXgp^[Ýè(@ref RADIO_RF_TEST_MODE_T ^ÅANZX)n */
#define RADIO_STM_STATE_ADR             (0x77u)      /*!< mb<in-house>*TODO*póbXe[g}VóÔ\¦(@ref RADIO_STM_STATE_T ^ÅANZX)n */
#define RADIO_FIFO_SET_ADR              (0x78u)      /*!< mb<in-house>*TODO*póbFIFO[hÝè(@ref RADIO_FIFO_SET_T ^ÅANZX)n */
#define RADIO_RX_FIFO_LAST_ADR          (0x79u)      /*!< mb<in-house>*TODO*póbóMFIFOgpÊ\¦(@ref RADIO_RX_FIFO_LAST_T ^ÅANZX)n */
#define RADIO_TX_PKT_LEN_H_ADR          (0x7Au)      /*!< mb<in-house>*TODO*póbMpPbg·Ýè(@ref RADIO_TX_PKT_LEN_H_T ^ÅANZX)n */
#define RADIO_TX_PKT_LEN_L_ADR          (0x7Bu)      /*!< mb<in-house>*TODO*póbMpPbg·Ýè(@ref RADIO_TX_PKT_LEN_L_T ^ÅANZX)n */
#define RADIO_WR_TX_FIFO_ADR            (0x7Cu)      /*!< mb<in-house>*TODO*póbMFIFO(@ref RADIO_WR_TX_FIFO_T ^ÅANZX)n */
#define RADIO_RX_PKT_LEN_H_ADR          (0x7Du)      /*!< mb<in-house>*TODO*póbóMpPbg·\¦(@ref RADIO_RX_PKT_LEN_H_T ^ÅANZX)n */
#define RADIO_RX_PKT_LEN_L_ADR          (0x7Eu)      /*!< mb<in-house>*TODO*póbóMpPbg·\¦(@ref RADIO_RX_PKT_LEN_L_T ^ÅANZX)n */
#define RADIO_RD_FIFO_ADR               (0x7Fu)      /*!< mb<in-house>*TODO*póbFIFO[h(@ref RADIO_RD_FIFO_T ^ÅANZX)n */

#define BANK_RST_SET_ADR               (0)      /*!< mb<in-house>*TODO*póbZbg§ä(@ref RADIO_RST_SET_T ^ÅANZX)n */
#define BANK_CLK_SET1_ADR              (0)      /*!< mb<in-house>*TODO*póbNbN§ä1(@ref RADIO_CLK_SET1_T ^ÅANZX)n */
#define BANK_CLK_SET2_ADR              (0)      /*!< mb<in-house>*TODO*póbNbN§ä2(@ref RADIO_CLK_SET2_T ^ÅANZX)n */
#define BANK_PKT_CTRL1_ADR             (0)      /*!< mb<in-house>*TODO*póbpPbgtH[}bgÝè1(@ref RADIO_PKT_CTRL1_T ^ÅANZX)n */
#define BANK_PKT_CTRL2_ADR             (0)      /*!< mb<in-house>*TODO*póbpPbgtH[}bgÝè2(@ref RADIO_PKT_CTRL2_T ^ÅANZX)n */
#define BANK_DRATE_SET_ADR             (0)      /*!< mb<in-house>*TODO*póbf[^[gÝè(@ref RADIO_DRATE_SET_T ^ÅANZX)n */
#define BANK_DATA_SET1_ADR             (0)      /*!< mb<in-house>*TODO*póbóMf[^eíÝè1(@ref RADIO_DATA_SET1_T ^ÅANZX)n */
#define BANK_DATA_SET2_ADR             (0)      /*!< mb<in-house>*TODO*póbóMf[^eíÝè2(@ref RADIO_DATA_SET2_T ^ÅANZX)n */
#define BANK_CH_SET_ADR                (0)      /*!< mb<in-house>*TODO*póbRF`lÝè(@ref RADIO_CH_SET_T ^ÅANZX)n */
#define BANK_RF_STATUS_CTRL_ADR        (0)      /*!< mb<in-house>*TODO*póbRFóÔÏXÝè(@ref RADIO_RF_STATUS_CTRL_T ^ÅANZX)n */
#define BANK_RF_STATUS_ADR             (0)      /*!< mb<in-house>*TODO*póbRFóÔÝè(@ref RADIO_RF_STATUS_T ^ÅANZX)n */
#define BANK_DIO_SET_ADR               (0)      /*!< mb<in-house>*TODO*póbDIOÝè(@ref RADIO_DIO_SET_T ^ÅANZX)n */
#define BANK_INT_SOURCE_GRP1_ADR       (0)      /*!< mb<in-house>*TODO*póbèÝ\¦1(@ref RADIO_INT_SOURCE_GRP1_T ^ÅANZX)n */
#define BANK_INT_SOURCE_GRP2_ADR       (0)      /*!< mb<in-house>*TODO*póbèÝ\¦2(@ref RADIO_INT_SOURCE_GRP2_T ^ÅANZX)n */
#define BANK_INT_SOURCE_GRP3_ADR       (0)      /*!< mb<in-house>*TODO*póbèÝ\¦3(@ref RADIO_INT_SOURCE_GRP3_T ^ÅANZX)n */
#define BANK_INT_EN_GRP1_ADR           (0)      /*!< mb<in-house>*TODO*póbèÝÊmCl[u1(@ref RADIO_INT_EN_GRP1_T ^ÅANZX)n */
#define BANK_INT_EN_GRP2_ADR           (0)      /*!< mb<in-house>*TODO*póbèÝÊmCl[u2(@ref RADIO_INT_EN_GRP2_T ^ÅANZX)n */
#define BANK_INT_EN_GRP3_ADR           (0)      /*!< mb<in-house>*TODO*póbèÝÊmCl[u3(@ref RADIO_INT_EN_GRP3_T ^ÅANZX)n */
#define BANK_CRC_ERR_H_ADR             (0)      /*!< mb<in-house>*TODO*póbCRCG[\¦1(@ref RADIO_CRC_ERR_H_T ^ÅANZX)n */
#define BANK_CRC_ERR_M_ADR             (0)      /*!< mb<in-house>*TODO*póbCRCG[\¦2(@ref RADIO_CRC_ERR_M_T ^ÅANZX)n */
#define BANK_CRC_ERR_L_ADR             (0)      /*!< mb<in-house>*TODO*póbCRCG[\¦3(@ref RADIO_CRC_ERR_L_T ^ÅANZX)n */
#define BANK_STATE_CLR_ADR             (0)      /*!< mb<in-house>*TODO*póbóÔNA§ä(@ref RADIO_STATE_CLR_T ^ÅANZX)n */
#define BANK_TXFIFO_THRH_ADR           (0)      /*!< mb<in-house>*TODO*póbMFIFO-Fullèl(@ref RADIO_TXFIFO_THRH_T ^ÅANZX)n */
#define BANK_TXFIFO_THRL_ADR           (0)      /*!< mb<in-house>*TODO*póbMFIFO-EmptyèlAFAST_TXCl[uÌèl(@ref RADIO_TXFIFO_THRL_T ^ÅANZX)n */
#define BANK_RXFIFO_THRH_ADR           (0)      /*!< mb<in-house>*TODO*póbóMFIFO-Fullèl(@ref RADIO_RXFIFO_THRH_T ^ÅANZX)n */
#define BANK_RXFIFO_THRL_ADR           (0)      /*!< mb<in-house>*TODO*póbóMFIFO-Emptyèl(@ref RADIO_RXFIFO_THRL_T ^ÅANZX)n */
#define BANK_C_CHECK_CTRL_B0_ADR       (0)      /*!< mb<in-house>*TODO*póbC-field`FbNCl[u(@ref RADIO_C_CHECK_CTRL_B0_T ^ÅANZX)n */
#define BANK_M_CHECK_CTRL_B0_ADR       (0)      /*!< mb<in-house>*TODO*póbM-field`FbNCl[u(@ref RADIO_M_CHECK_CTRL_B0_T ^ÅANZX)n */
#define BANK_A_CHECK_CTRL_B0_ADR       (0)      /*!< mb<in-house>*TODO*póbA-field`FbNCl[u(@ref RADIO_A_CHECK_CTRL_B0_T ^ÅANZX)n */
#define BANK_C_FIELD_CODE1_B0_ADR      (0)      /*!< mb<in-house>*TODO*póbC-fieldÝèR[h1(@ref RADIO_C_FIELD_CODE1_B0_T ^ÅANZX)n */
#define BANK_C_FIELD_CODE2_B0_ADR      (0)      /*!< mb<in-house>*TODO*póbC-fieldÝèR[h2(@ref RADIO_C_FIELD_CODE2_B0_T ^ÅANZX)n */
#define BANK_C_FIELD_CODE3_B0_ADR      (0)      /*!< mb<in-house>*TODO*póbC-fieldÝèR[h3(@ref RADIO_C_FIELD_CODE3_B0_T ^ÅANZX)n */
#define BANK_C_FIELD_CODE4_B0_ADR      (0)      /*!< mb<in-house>*TODO*póbC-fieldÝèR[h4(@ref RADIO_C_FIELD_CODE4_B0_T ^ÅANZX)n */
#define BANK_C_FIELD_CODE5_B0_ADR      (0)      /*!< mb<in-house>*TODO*póbC-fieldÝèR[h5(@ref RADIO_C_FIELD_CODE5_B0_T ^ÅANZX)n */
#define BANK_M_FIELD_CODE1_B0_ADR      (0)      /*!< mb<in-house>*TODO*póbM-field(@ref RADIO_M_FIELD_CODE1_B0_T ^ÅANZX)n */
#define BANK_M_FIELD_CODE2_B0_ADR      (0)      /*!< mb<in-house>*TODO*póbM-field(@ref RADIO_M_FIELD_CODE2_B0_T ^ÅANZX)n */
#define BANK_M_FIELD_CODE3_B0_ADR      (0)      /*!< mb<in-house>*TODO*póbM-field(@ref RADIO_M_FIELD_CODE3_B0_T ^ÅANZX)n */
#define BANK_M_FIELD_CODE4_B0_ADR      (0)      /*!< mb<in-house>*TODO*póbM-field(@ref RADIO_M_FIELD_CODE4_B0_T ^ÅANZX)n */
#define BANK_A_FIELD_CODE1_B0_ADR      (0)      /*!< mb<in-house>*TODO*póbA-field(@ref RADIO_A_FIELD_CODE1_B0_T ^ÅANZX)n */
#define BANK_A_FIELD_CODE2_B0_ADR      (0)      /*!< mb<in-house>*TODO*póbA-field(@ref RADIO_A_FIELD_CODE2_B0_T ^ÅANZX)n */
#define BANK_A_FIELD_CODE3_B0_ADR      (0)      /*!< mb<in-house>*TODO*póbA-field(@ref RADIO_A_FIELD_CODE3_B0_T ^ÅANZX)n */
#define BANK_A_FIELD_CODE4_B0_ADR      (0)      /*!< mb<in-house>*TODO*póbA-field(@ref RADIO_A_FIELD_CODE4_B0_T ^ÅANZX)n */
#define BANK_A_FIELD_CODE5_B0_ADR      (0)      /*!< mb<in-house>*TODO*póbA-field(@ref RADIO_A_FIELD_CODE5_B0_T ^ÅANZX)n */
#define BANK_A_FIELD_CODE6_B0_ADR      (0)      /*!< mb<in-house>*TODO*póbA-field(@ref RADIO_A_FIELD_CODE6_B0_T ^ÅANZX)n */
#define BANK_SLEEP_WU_SET_ADR          (0)      /*!< mb<in-house>*TODO*póbSLEEP/WakeUP^C}Ýè(@ref RADIO_SLEEP_WU_SET_T ^ÅANZX)n */
#define BANK_WUT_CLK_SET_ADR           (0)      /*!< mb<in-house>*TODO*póbWakeUP^C}pNbNªüÝè(@ref RADIO_WUT_CLK_SET_T ^ÅANZX)n */
#define BANK_WUT_INTERVAL_H_ADR        (0)      /*!< mb<in-house>*TODO*póbWakeUP^C}C^[oÝè(ãÊoCg)(@ref RADIO_WUT_INTERVAL_H_T ^ÅANZX)n */
#define BANK_WUT_INTERVAL_L_ADR        (0)      /*!< mb<in-house>*TODO*póbWakeUP^C}C^[oÝè(ºÊoCg)(@ref RADIO_WUT_INTERVAL_L_T ^ÅANZX)n */
#define BANK_WU_DURATION_ADR           (0)      /*!< mb<in-house>*TODO*póbWakeUPãÌ®ìp±^C}Ò­ÔÝè(@ref RADIO_WU_DURATION_T ^ÅANZX)n */
#define BANK_GT_SET_ADR                (0)      /*!< mb<in-house>*TODO*póbÄp^C}Ýè(@ref RADIO_GT_SET_T ^ÅANZX)n */
#define BANK_GT_CLK_SET_ADR            (0)      /*!< mb<in-house>*TODO*póbÄp^C}pNbNªüÝè(@ref RADIO_GT_CLK_SET_T ^ÅANZX)n */
#define BANK_GT1_TIMER_ADR             (0)      /*!< mb<in-house>*TODO*póbÄp^C}1^C}Ýè(@ref RADIO_GT1_TIMER_T ^ÅANZX)n */
#define BANK_GT2_TIMER_ADR             (0)      /*!< mb<in-house>*TODO*póbÄp^C}2^C}Ýè(@ref RADIO_GT2_TIMER_T ^ÅANZX)n */
#define BANK_CCA_IGNORE_LVL_ADR        (0)      /*!< mb<in-house>*TODO*póbCCAÌ»èOEDlÝè(@ref RADIO_CCA_IGNORE_LVL_T ^ÅANZX)n */
#define BANK_CCA_LVL_ADR               (0)      /*!< mb<in-house>*TODO*póbCCA(@ref RADIO_CCA_LVL_T ^ÅANZX)n */
#define BANK_CCA_ABORT_ADR             (0)      /*!< mb<in-house>*TODO*póbCCA(@ref RADIO_CCA_ABORT_T ^ÅANZX)n */
#define BANK_CCA_CTRL_ADR              (0)      /*!< mb<in-house>*TODO*póbCCA§äÝè(@ref RADIO_CCA_CTRL_T ^ÅANZX)n */
#define BANK_ED_RSLT_ADR               (0)      /*!< mb<in-house>*TODO*póbEDl\¦(@ref RADIO_ED_RSLT_T ^ÅANZX)n */
#define BANK_IDLE_WAIT_H_ADR           (0)      /*!< mb<in-house>*TODO*póbIDLEoúÔÝè(ãÊoCg)(@ref RADIO_IDLE_WAIT_H_T ^ÅANZX)n */
#define BANK_IDLE_WAIT_L_ADR           (0)      /*!< mb<in-house>*TODO*póbIDLEoúÔÝè(ºÊoCg)(@ref RADIO_IDLE_WAIT_L_T ^ÅANZX)n */
#define BANK_CCA_PROG_H_ADR            (0)      /*!< mb<in-house>*TODO*póbIDLEoúÔÊ\¦(ãÊoCg)(@ref RADIO_CCA_PROG_H_T ^ÅANZX)n */
#define BANK_CCA_PROG_L_ADR            (0)      /*!< mb<in-house>*TODO*póbIDLEoúÔÊ\¦(ºÊoCg)(@ref RADIO_CCA_PROG_L_T ^ÅANZX)n */
#define BANK_PREAMBLE_SET_ADR          (0)      /*!< mb<in-house>*TODO*póbvAup^[Ýè(@ref RADIO_PREAMBLE_SET_T ^ÅANZX)n */
#define BANK_VCO_VTRSLT_ADR            (0)      /*!< mb<in-house>*TODO*póbVCO²®d³Ê\¦(@ref RADIO_VCO_VTRSLT_T ^ÅANZX)n */
#define BANK_ED_CTRL_ADR               (0)      /*!< mb<in-house>*TODO*póbEDl½ÏñÝè(@ref RADIO_ED_CTRL_T ^ÅANZX)n */
#define BANK_TXPR_LEN_H_ADR            (0)      /*!< mb<in-house>*TODO*póbMvAu·Ýè(ãÊoCg)(@ref RADIO_TXPR_LEN_H_T ^ÅANZX)n */
#define BANK_TXPR_LEN_L_ADR            (0)      /*!< mb<in-house>*TODO*póbMvAu·Ýè(ºÊoCg)(@ref RADIO_TXPR_LEN_L_T ^ÅANZX)n */
#define BANK_POSTAMBLE_SET_ADR         (0)      /*!< mb<in-house>*TODO*pób|XgAuÝè(@ref RADIO_POSTAMBLE_SET_T ^ÅANZX)n */
#define BANK_SYNC_CONDITION1_ADR       (0)      /*!< mb<in-house>*TODO*póbóMvAuÝè(@ref RADIO_SYNC_CONDITION1_T ^ÅANZX)n */
#define BANK_SYNC_CONDITION2_ADR       (0)      /*!< mb<in-house>*TODO*pób¯úoÌEDèl(@ref RADIO_SYNC_CONDITION2_T ^ÅANZX)n */
#define BANK_SYNC_CONDITION3_ADR       (0)      /*!< mb<in-house>*TODO*póbëèeÝè(@ref RADIO_SYNC_CONDITION3_T ^ÅANZX)n */
#define BANK_2DIV_CTRL_ADR             (0)      /*!< mb<in-house>*TODO*póbAei_Co[VeBÝè(@ref RADIO_2DIV_CTRL_T ^ÅANZX)n */
#define BANK_2DIV_RSLT_ADR             (0)      /*!< mb<in-house>*TODO*póbAei_Co[VeBÊ\¦(@ref RADIO_2DIV_RSLT_T ^ÅANZX)n */
#define BANK_ANT1_ED_ADR               (0)      /*!< mb<in-house>*TODO*póbAei1Ìæ¾EDl\¦(@ref RADIO_ANT1_ED_T ^ÅANZX)n */
#define BANK_ANT2_ED_ADR               (0)      /*!< mb<in-house>*TODO*póbAei2Ìæ¾EDl\¦(@ref RADIO_ANT2_ED_T ^ÅANZX)n */
#define BANK_ANT_CTRL_ADR              (0)      /*!< mb<in-house>*TODO*póbóMÌAei­§Ýè(@ref RADIO_ANT_CTRL_T ^ÅANZX)n */
#define BANK_MON_CTRL_ADR              (0)      /*!< mb<in-house>*TODO*póbj^oÍMIðÝè(@ref RADIO_MON_CTRL_T ^ÅANZX)n */
#define BANK_GPIO0_CTRL_ADR            (0)      /*!< mb<in-house>*TODO*póbGPIO0[q§äÝè(@ref RADIO_GPIO0_CTRL_T ^ÅANZX)n */
#define BANK_GPIO1_CTRL_ADR            (0)      /*!< mb<in-house>*TODO*póbGPIO1[q§äÝè(@ref RADIO_GPIO1_CTRL_T ^ÅANZX)n */
#define BANK_GPIO2_CTRL_ADR            (0)      /*!< mb<in-house>*TODO*póbGPIO2[q§äÝè(@ref RADIO_GPIO2_CTRL_T ^ÅANZX)n */
#define BANK_GPIO3_CTRL_ADR            (0)      /*!< mb<in-house>*TODO*póbGPIO3[q§äÝè(@ref RADIO_GPIO3_CTRL_T ^ÅANZX)n */
#define BANK_GPIO4_CTRL_ADR            (0)      /*!< mb<in-house>*TODO*póbGPIO4[q§äÝè(@ref RADIO_GPIO4_CTRL_T ^ÅANZX)n */
#define BANK_EXTCLK_CTRL_ADR           (0)      /*!< mb<in-house>*TODO*póbEXT_CLK[q§äÝè( @ref RADIO_EXTCLK_CTRL_T ^ÅANZX)n */
#define BANK_SPI_EXT_PA_CTRL_ADR       (0)      /*!< mb<in-house>*TODO*póbSPIC^tF[XIO(@ref RADIO_SPI_EXT_PA_CTRL_T ^ÅANZX)n */
#define BANK_CHFIL_BW_ADR              (0)      /*!< mb<in-house>*TODO*pób`ltB^ÑæÝè(@ref RADIO_CHFIL_BW_T ^ÅANZX)n */
#define BANK_DC_I_ADJ_H_ADR            (0)      /*!< mb<in-house>*TODO*póbIDCItZbg²®Ýè(ãÊ6rbg)(@ref RADIO_DC_I_ADJ_H_T ^ÅANZX)n */
#define BANK_DC_I_ADJ_L_ADR            (0)      /*!< mb<in-house>*TODO*póbIDCItZbg²®Ýè(ºÊoCg)(@ref RADIO_DC_I_ADJ_L_T ^ÅANZX)n */
#define BANK_DC_Q_ADJ_H_ADR            (0)      /*!< mb<in-house>*TODO*póbQDCItZbg²®Ýè(ãÊ6rbg)(@ref RADIO_DC_Q_ADJ_H_T ^ÅANZX)n */
#define BANK_DC_Q_ADJ_L_ADR            (0)      /*!< mb<in-house>*TODO*póbQDCItZbg²®Ýè(ºÊoCg)(@ref RADIO_DC_Q_ADJ_L_T ^ÅANZX)n */
#define BANK_DC_FIL_ADJ_ADR            (0)      /*!< mb<in-house>*TODO*póbDCItZbg²®tB^Ýè(@ref RADIO_DC_FIL_ADJ_T ^ÅANZX)n */
#define BANK_IQ_MAG_ADJ_H_ADR          (0)      /*!< mb<in-house>*TODO*póbIFÌIQUoX²®iãÊ4rbgj(@ref RADIO_IQ_MAG_ADJ_H_T ^ÅANZX)n */
#define BANK_IQ_MAG_ADJ_L_ADR          (0)      /*!< mb<in-house>*TODO*póbIFÌIQUoX²®iºÊoCgj(@ref RADIO_IQ_MAG_ADJ_L_T ^ÅANZX)n */
#define BANK_IQ_PHASE_ADJ_H_ADR        (0)      /*!< mb<in-house>*TODO*póbIFÌIQÊoX²®iãÊ4rbgj(@ref RADIO_IQ_PHASE_ADJ_H_T ^ÅANZX)n */
#define BANK_IQ_PHASE_ADJ_L_ADR        (0)      /*!< mb<in-house>*TODO*póbIFÌIQÊoX²®iºÊoCgj(@ref RADIO_IQ_PHASE_ADJ_L_T ^ÅANZX)n */
#define BANK_IQ_ADJ_WAIT_ADR           (0)      /*!< mb<in-house>*TODO*póbIFÌIQ©®²®pRSSIæ¾EFCgÔ(@ref RADIO_IQ_ADJ_WAIT_T ^ÅANZX)n */
#define BANK_IQ_ADJ_TARGET_ADR         (0)      /*!< mb<in-house>*TODO*póbIFÌIQ©®²®pRSSI»èèl(@ref RADIO_IQ_ADJ_TARGET_T ^ÅANZX)n */
#define BANK_DEC_GAIN_ADR              (0)      /*!< mb<in-house>*TODO*póbfV[VQCÝè(@ref RADIO_DEC_GAIN_T ^ÅANZX)n */
#define BANK_IF_FREQ_ADR               (0)      /*!< mb<in-house>*TODO*póbIFügIð(@ref RADIO_IF_FREQ_T ^ÅANZX)n */
#define BANK_OSC_ADJ1_ADR              (0)      /*!< mb<in-house>*TODO*pób­UñH§ä(e²j(@ref RADIO_OSC_ADJ1_T ^ÅANZX)n */
#define BANK_OSC_ADJ2_ADR              (0)      /*!< mb<in-house>*TODO*pób­UñH§ä(÷²j(@ref RADIO_OSC_ADJ2_T ^ÅANZX)n */
#define BANK_FIELD_CHECK_RSLT_ADR      (0)      /*!< mb<in-house>*TODO*póbtB[h`FbNÊ\¦ (@ref RADIO_FIELD_CHECK_RSLT_T ^ÅANZX)n */
#define BANK_OSC_ADJ4_ADR              (0)      /*!< mb<in-house>*TODO*pób¬N®­UñHoCAXÝè(@ref RADIO_OSC_ADJ4_T ^ÅANZX)n */
#define BANK_RSSI_ADJ_ADR              (0)      /*!< mb<in-house>*TODO*póbRSSIlÌ²®(@ref RADIO_RSSI_ADJ_T ^ÅANZX)n */
#define BANK_PA_MODE_ADR               (0)      /*!< mb<in-house>*TODO*póbPA[hÝè/PAM[^²®(@ref RADIO_B0_ADR67_T ^ÅANZX)n */
#define BANK_PA_REG_ADJ_H_ADR          (0)      /*!< mb<in-house>*TODO*póbPAM[^²®(ãÊoCg)(@ref RADIO_B0_ADR67_T ^ÅANZX)n */
#define BANK_PA_REG_FINE_ADJ_L_ADR     (0)      /*!< mb<in-house>*TODO*póbPAM[^÷²®(@ref RADIO_B0_ADR68_T ^ÅANZX)n */
#define BANK_PA_REG_ADJ_L_ADR          (0)      /*!< mb<in-house>*TODO*póbPAM[^²®(ºÊoCg)(@ref RADIO_B0_ADR68_T ^ÅANZX)n */
#define BANK_PA_ADJ_ADR                (0)      /*!< mb<in-house>*TODO*póbPAp[²®Ýè(@ref RADIO_PA_ADJ_T ^ÅANZX)n */
#define BANK_CHFIL_BW_CCA_ADR          (0)      /*!< mb<in-house>*TODO*póbCCA`ltB^ÑæÝè(@ref RADIO_CHFIL_BW_CCA_T ^ÅANZX)n */
#define BANK_CHFIL_BW_OPTION_ADR       (0)      /*!< mb<in-house>*TODO*pób`ltB^ÑæIvVÝè(@ref RADIO_CHFIL_BW_OPTION_T ^ÅANZX)n */
#define BANK_DC_FIL_ADJ2_ADR           (0)      /*!< mb<in-house>*TODO*póbDCItZbg²®tB^Ýè2(@ref RADIO_DC_FIL_ADJ2_T ^ÅANZX)n */
#define BANK_DEC_GAIN_CCA_ADR          (0)      /*!< mb<in-house>*TODO*póbCCAÌfV[VQCÝè(@ref RADIO_DEC_GAIN_CCA_T ^ÅANZX)n */
#define BANK_VCO_CAL_ADR               (0)      /*!< mb<in-house>*TODO*póbVCOLu[Vl\¦Ü½ÍÝè(@ref RADIO_VCO_CAL_T ^ÅANZX)n */
#define BANK_VCO_CAL_START_ADR         (0)      /*!< mb<in-house>*TODO*póbVCOLu[VÀs(@ref RADIO_VCO_CAL_START_T ^ÅANZX)n */
#define BANK_CLK_CAL_SET_ADR           (0)      /*!< mb<in-house>*TODO*póbá¬NbNLu[V§ä(@ref RADIO_CLK_CAL_SET_T ^ÅANZX)n */
#define BANK_CLK_CAL_TIME_ADR          (0)      /*!< mb<in-house>*TODO*póbá¬NbNLu[VÔÝè(@ref RADIO_CLK_CAL_TIME_T ^ÅANZX)n */
#define BANK_CLK_CAL_H_ADR             (0)      /*!< mb<in-house>*TODO*póbá¬NbNLu[Vl\¦(ãÊoCg)(@ref RADIO_CLK_CAL_H_T ^ÅANZX)n */
#define BANK_CLK_CAL_L_ADR             (0)      /*!< mb<in-house>*TODO*póbá¬NbNLu[Vl\¦(ºÊoCg)(@ref RADIO_CLK_CAL_L_T ^ÅANZX)n */
#define BANK_FEC_CTRL_ADR              (0)      /*!< mb<in-house>*TODO*póbFECÝè(@ref RADIO_FEC_CTRL_T ^ÅANZX)n */
#define BANK_SLEEP_INT_CLR_ADR         (0)      /*!< mb<in-house>*TODO*póbSLEEPÝNAÝè(@ref RADIO_SLEEP_INT_CLR_T ^ÅANZX)n */
#define BANK_RF_TEST_MODE_ADR          (0)      /*!< mb<in-house>*TODO*póbMeXgp^[Ýè(@ref RADIO_RF_TEST_MODE_T ^ÅANZX)n */
#define BANK_STM_STATE_ADR             (0)      /*!< mb<in-house>*TODO*póbXe[g}VóÔ\¦(@ref RADIO_STM_STATE_T ^ÅANZX)n */
#define BANK_FIFO_SET_ADR              (0)      /*!< mb<in-house>*TODO*póbFIFO[hÝè(@ref RADIO_FIFO_SET_T ^ÅANZX)n */
#define BANK_RX_FIFO_LAST_ADR          (0)      /*!< mb<in-house>*TODO*póbóMFIFOgpÊ\¦(@ref RADIO_RX_FIFO_LAST_T ^ÅANZX)n */
#define BANK_TX_PKT_LEN_H_ADR          (0)      /*!< mb<in-house>*TODO*póbMpPbg·Ýè(@ref RADIO_TX_PKT_LEN_H_T ^ÅANZX)n */
#define BANK_TX_PKT_LEN_L_ADR          (0)      /*!< mb<in-house>*TODO*póbMpPbg·Ýè(@ref RADIO_TX_PKT_LEN_L_T ^ÅANZX)n */
#define BANK_WR_TX_FIFO_ADR            (0)      /*!< mb<in-house>*TODO*póbMFIFO(@ref RADIO_WR_TX_FIFO_T ^ÅANZX)n */
#define BANK_RX_PKT_LEN_H_ADR          (0)      /*!< mb<in-house>*TODO*póbóMpPbg·\¦(@ref RADIO_RX_PKT_LEN_H_T ^ÅANZX)n */
#define BANK_RX_PKT_LEN_L_ADR          (0)      /*!< mb<in-house>*TODO*póbóMpPbg·\¦(@ref RADIO_RX_PKT_LEN_L_T ^ÅANZX)n */
#define BANK_RD_FIFO_ADR               (0)      /*!< mb<in-house>*TODO*póbFIFO[h(@ref RADIO_RD_FIFO_T ^ÅANZX)n */

/* mRF register structuresbRFWX^\¢Ìn */
/** @brief mType definition for @ref RADIO_BANK_SEL_ADR accessb@ref RADIO_BANK_SEL_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t bank:               4;      /*!<mb<in-house>*TODO*póbBANKØèÖ¦ R/Wn*/
        uint8_t bank_acen:          4;      /*!<mb<in-house>*TODO*póbWX^ANZXCl[u R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_BANK_SEL_T;


/** @brief mType definition for @ref RADIO_RST_SET_ADR accessb@ref RADIO_RST_SET_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t rst_0:              1;      /*!<mb<in-house>*TODO*póbRtBO[V@\Zbg R/Wn*/
        uint8_t rst_1:              1;      /*!<mb<in-house>*TODO*póbMODEM@\Zbg R/Wn*/
        uint8_t rst_2:              1;      /*!<mb<in-house>*TODO*póbRFóÔ§ä@\Zbg R/Wn*/
        uint8_t rst_3:              1;      /*!<mb<in-house>*TODO*póbPHY@\Zbg R/Wn*/
        uint8_t rst0_en:            1;      /*!<mb<in-house>*TODO*póbZbg0Cl[uÝè R/Wn*/
        uint8_t rst1_en:            1;      /*!<mb<in-house>*TODO*póbZbg1Cl[uÝè R/Wn*/
        uint8_t rst2_en:            1;      /*!<mb<in-house>*TODO*póbZbg2Cl[uÝè R/Wn*/
        uint8_t rst3_en:            1;      /*!<mb<in-house>*TODO*póbZbg3Cl[uÝè R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_RST_SET_T;

/** @brief mType definition for @ref RADIO_CLK_SET1_ADR accessb@ref RADIO_CLK_SET1_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t clk0_en:            1;      /*!<mb<in-house>*TODO*póbPHY@\ÌNbN§ä R/Wn*/
        uint8_t clk1_en:            1;      /*!<mb<in-house>*TODO*póbóM@\(DEMOD)ÌNbN§ä R/Wn*/
        uint8_t clk2_en:            1;      /*!<mb<in-house>*TODO*póbM@\(MOD)ÌNbN§ä R/Wn*/
        uint8_t clk3_en:            1;      /*!<mb<in-house>*TODO*póbRF@\(RFóÔ§ä)ÌNbN§ä R/Wn*/
        uint8_t clk4_en:            1;      /*!<mb<in-house>*TODO*póbADCÌNbN§ä R/Wn*/
        uint8_t mstr_clk_sel1:      1;      /*!<mb<in-house>*TODO*pób}X^[NbNügIðÝè1 R/Wn*/
        uint8_t mstr_clk_sel2:      1;      /*!<mb<in-house>*TODO*pób}X^[NbNügIðÝè2 R/Wn*/
        uint8_t clk_done:           1;      /*!<mb<in-house>*TODO*póbNbNÀè»®¹tO Rn*/
    }bits;
    uint8_t byte;
}RADIO_CLK_SET1_T;

/** @brief mType definition for @ref RADIO_CLK_SET2_ADR accessb@ref RADIO_CLK_SET2_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t low_rate_en:        1;      /*!<mb<in-house>*TODO*póbóMNbNá¬»Ýè R/Wn*/
        uint8_t reg_pa_enb:         1;      /*!<mb<in-house>*TODO*póbPAM[^§ä R/Wn*/
        uint8_t ext_bank_sel_en:    1;      /*!<mb<in-house>*TODO*pób\ñ R/Wn*/
        uint8_t rc32k_en:           1;      /*!<mb<in-house>*TODO*póbà RC­UñH§ä R/Wn*/
        uint8_t xtal_en:            1;      /*!<mb<in-house>*TODO*pób»­UñH§ä R/Wn*/
        uint8_t reserved1:          1;      /*!<mb<in-house>*TODO*pób\ñ Rn*/
        uint8_t tcxo_en:            1;      /*!<mb<in-house>*TODO*póbTCXOüÍ§ä R/Wn*/
        uint8_t mstr_clk_en:        1;      /*!<mb<in-house>*TODO*póbWbNÌæNbN§ä R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_CLK_SET2_T;

/** @brief mType definition for @ref RADIO_PKT_CTRL1_ADR accessb@ref RADIO_PKT_CTRL1_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t pkt_format:         2;      /*!<mb<in-house>*TODO*póbpPbgtH[}bgÝè R/Wn*/
        uint8_t ieee4g_en:          1;      /*!<mb<in-house>*TODO*póbIEEE802.15.4g[hÝè R/Wn*/
        uint8_t rx_extpkt_off:      1;      /*!<mb<in-house>*TODO*póbóMpPbgg£[hItÝè(Wireless M-BusÎ) R/Wn*/
        uint8_t dat_lf_en:          1;      /*!<mb<in-house>*TODO*póbf[^ÌæoÝè R/Wn*/
        uint8_t len_lf_en:          1;      /*!<mb<in-house>*TODO*póbLengthÌæoÝè R/Wn*/
        uint8_t ext_pkt_mode:       2;      /*!<mb<in-house>*TODO*póbpPbgg£[hÝè(Wireless M-BusÎ) R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_PKT_CTRL1_T;

/** @brief mType definition for @ref RADIO_PKT_CTRL2_ADR accessb@ref RADIO_PKT_CTRL2_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t length_mode:        2;      /*!<mb<in-house>*TODO*póbLengthtB[h·Ýè R/Wn*/
        uint8_t tx_crc_en:          1;      /*!<mb<in-house>*TODO*póbMCRCÝè R/Wn*/
        uint8_t rx_crc_en:          1;      /*!<mb<in-house>*TODO*póbóMCRCÝè R/Wn*/
        uint8_t crc_len:            2;      /*!<mb<in-house>*TODO*póbCRC·Ýè R/Wn*/
        uint8_t crc_comp_off:       1;      /*!<mb<in-house>*TODO*póbCRCâoÍOFFÝè R/Wn*/
        uint8_t crc_init_sel:       1;      /*!<mb<in-house>*TODO*póbCRCZúlIðÝè R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_PKT_CTRL2_T;

/** @brief mType definition for @ref RADIO_DRATE_SET_ADR accessb@ref RADIO_DRATE_SET_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t tx_drate:           4;      /*!<mb<in-house>*TODO*póbMf[^[gÝè R/Wn*/
        uint8_t rx_drate:           4;      /*!<mb<in-house>*TODO*póbóMf[^[gÝè R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_DRATE_SET_T;

/** @brief mType definition for @ref RADIO_DATA_SET1_ADR accessb@ref RADIO_DATA_SET1_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t tx_dec_scheme:      2;      /*!<mb<in-house>*TODO*póbM»[hÝè R/Wn*/
        uint8_t rx_dec_scheme:      2;      /*!<mb<in-house>*TODO*póbóM»[hÝè R/Wn*/
        uint8_t gfsk_en:            1;      /*!<mb<in-house>*TODO*póbKEVAtB^Ýè R/Wn*/
        uint8_t rx_fsk_pol:         1;      /*!<mb<in-house>*TODO*póbóMf[^É«Ýè R/Wn*/
        uint8_t tx_fsk_pol:         1;      /*!<mb<in-house>*TODO*póbMf[^É«Ýè R/Wn*/
        uint8_t pb_pat:             1;      /*!<mb<in-house>*TODO*póbóMÉ«Ýè R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_DATA_SET1_T;

/** @brief mType definition for @ref RADIO_DATA_SET2_ADR accessb@ref RADIO_DATA_SET2_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t wht_set:            1;      /*!<mb<in-house>*TODO*póbWhiteningÝè R/Wn*/
        uint8_t man_pol:            1;      /*!<mb<in-house>*TODO*pób}`FX^É«Ýè R/Wn*/
        uint8_t two_pb_det_en:      1;      /*!<mb<in-house>*TODO*póbóMvAu2ÊÒ¿Ýè R/Wn*/
        uint8_t two_sw_det_en:      1;      /*!<mb<in-house>*TODO*póbSyncWord2ÊÒ¿Ýè R/Wn*/
        uint8_t syncword_sel:       1;      /*!<mb<in-house>*TODO*pób¯ú[hp^[IðÝè R/Wn*/
        uint8_t fsk_sel:            1;      /*!<mb<in-house>*TODO*póbFSK½l»Ýè R/Wn*/
        uint8_t ext_pkt_mode2:      2;      /*!<mb<in-house>*TODO*póbpPbgg£[hÝè2(Wireless M-Bus2013Î) R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_DATA_SET2_T;

/** @brief mType definition for @ref RADIO_CH_SET_ADR accessb@ref RADIO_CH_SET_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t rf_ch:              8;      /*!<mb<in-house>*TODO*póbóM`lÝè R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_CH_SET_T;

/** @brief mType definition for @ref RADIO_RF_STATUS_CTRL_ADR accessb@ref RADIO_RF_STATUS_CTRL_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t txdone_mode:        2;      /*!<mb<in-house>*TODO*póbpPbgM®¹ãÌRFóÔÝè R/Wn*/
        uint8_t rxdone_mode:        2;      /*!<mb<in-house>*TODO*póbpPbgóM®¹ãÌRFóÔÝè R/Wn*/
        uint8_t auto_tx_en:         1;      /*!<mb<in-house>*TODO*pób©®MÝè R/Wn*/
        uint8_t fast_tx_en:         1;      /*!<mb<in-house>*TODO*póbFAST_TX[hÝè R/Wn*/
        uint8_t auto_data_req:      1;      /*!<mb<in-house>*TODO*pób©®MvÝè R/Wn*/
        uint8_t infinite_tx:        1;      /*!<mb<in-house>*TODO*póbJèÔµM[hÝè R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_RF_STATUS_CTRL_T;

/** @brief mType definition for @ref RADIO_RF_STATUS_ADR accessb@ref RADIO_RF_STATUS_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t set_trx:            4;      /*!<mb<in-house>*TODO*póbRF®ìóÔÝè R/Wn*/
        uint8_t get_trx:            4;      /*!<mb<in-house>*TODO*póbRF®ìóÔ\¦ Rn*/
    }bits;
    uint8_t byte;
}RADIO_RF_STATUS_T;

/** @brief mType definition for @ref RADIO_DIO_SET_ADR accessb@ref RADIO_DIO_SET_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t dio_start:          1;      /*!<mb<in-house>*TODO*póbDIOóMf[^oÍJnÝè R/Wn*/
        uint8_t dio_iodir_set_en:   1;      /*!<mb<in-house>*TODO*póbDIOÌIOüoÍûüÝèCl[u R/Wn*/
        uint8_t dio_rx_complete:    1;      /*!<mb<in-house>*TODO*póbDIOóM®¹Ýè R/Wn*/
        uint8_t dio_iodir_set:      1;      /*!<mb<in-house>*TODO*póbDIOÌIOüoÍûüÝè R/Wn*/
        uint8_t txdio_ctrl:         2;      /*!<mb<in-house>*TODO*póbMDIO[hÝè R/Wn*/
        uint8_t rxdio_ctrl:         2;      /*!<mb<in-house>*TODO*póbóMDIO[hÝè R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_DIO_SET_T;


/** @brief mType definition for @ref RADIO_INT_SOURCE_GRP1_ADR accessb@ref RADIO_INT_SOURCE_GRP1_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t clk_done:           1;      /*!<mb<in-house>*TODO*póbNbNÀè»®¹Ý R/W n*/
        uint8_t vco_cal_cmp:        1;      /*!<mb<in-house>*TODO*póbVCO Lu[V®¹Ý R/W n*/
        uint8_t pll_ld:             1;      /*!<mb<in-house>*TODO*póbPLL bNOêÝ R/W n*/
        uint8_t rf_state_cmp:       1;      /*!<mb<in-house>*TODO*póbRF óÔJÚ®¹Ý R/W n*/
        uint8_t fifo_empty:         1;      /*!<mb<in-house>*TODO*póbFIFO-Empty Ý R/W n*/
        uint8_t fifo_full:          1;      /*!<mb<in-house>*TODO*póbFIFO-Full Ý R/W n*/
        uint8_t wakeup:             1;      /*!<mb<in-house>*TODO*póbEFCNAbvÝ R/W n*/
        uint8_t clk_cal:            1;      /*!<mb<in-house>*TODO*póbNbNLu[V®¹Ý R/W n*/
    }bits;
    uint8_t byte;
}RADIO_INT_SOURCE_GRP1_T;

/** @brief mType definition for @ref RADIO_INT_SOURCE_GRP2_ADR accessb@ref RADIO_INT_SOURCE_GRP2_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t rx_cmp:             1;      /*!<mb<in-house>*TODO*póbóM®¹Ý  R/W n*/
        uint8_t crc_err:            1;      /*!<mb<in-house>*TODO*póbCRC G[Ý R/W n*/
        uint8_t diversity_cmp:      1;      /*!<mb<in-house>*TODO*pób_Co[VeBT[`®¹Ý R/W n*/
        uint8_t rx_len_err:         1;      /*!<mb<in-house>*TODO*póbóM Length G[Ý R/W n*/
        uint8_t rx_fifo_err:        1;      /*!<mb<in-house>*TODO*póbóM FIFO ANZXG[Ý R/W n*/
        uint8_t sync_word:          1;      /*!<mb<in-house>*TODO*póbSyncWord oÝ R/W n*/
        uint8_t cma_field:          1;      /*!<mb<in-house>*TODO*póbField `FbNÝ R/W n*/
        uint8_t sync_err:           1;      /*!<mb<in-house>*TODO*póbSync G[Ý R/W n*/
    }bits;
    uint8_t byte;
}RADIO_INT_SOURCE_GRP2_T;

/** @brief mType definition for @ref RADIO_INT_SOURCE_GRP3_ADR accessb@ref RADIO_INT_SOURCE_GRP3_ADR WX^ANZXp ^è`n*/
typedef union{
    struct{
        uint8_t tx_cmp:             1;      /*!<mb<in-house>*TODO*póbM®¹Ý  R/W n*/
        uint8_t tx_fifo_w_cmp:      1;      /*!<mb<in-house>*TODO*póbf[^Mvót®¹Ý R/W n*/
        uint8_t cca_cmp:            1;      /*!<mb<in-house>*TODO*póbCCA ®¹Ý R/W n*/
        uint8_t tx_len_err:         1;      /*!<mb<in-house>*TODO*póbM Length G[Ý R/W n*/
        uint8_t tx_firo_err:        1;      /*!<mb<in-house>*TODO*póbM FIFO ANZXG[Ý R/W n*/
        uint8_t ch_srch_err:        1;      /*!<mb<in-house>*TODO*pób`lT[`G[Ý R/W n*/
        uint8_t gt1:                1;      /*!<mb<in-house>*TODO*póbÄp^C}1Ý R/W n*/
        uint8_t gt2:                1;      /*!<mb<in-house>*TODO*póbÄp^C}2Ý R/W n*/
    }bits;
    uint8_t byte;
}RADIO_INT_SOURCE_GRP3_T;

/**
 *  @brief mType definition for @ref RADIO_INT_SOURCE_GRP1_ADR , @ref RADIO_INT_SOURCE_GRP2_ADR , @ref RADIO_INT_SOURCE_GRP3_ADR accessb
 *          @ref RADIO_INT_SOURCE_GRP1_ADR , @ref RADIO_INT_SOURCE_GRP2_ADR , @ref RADIO_INT_SOURCE_GRP3_ADR WX^ANZXp ^è` n 
*/
typedef struct{
    RADIO_INT_SOURCE_GRP1_T grp1;           /*!<mb<in-house>*TODO*póbÝ\¦  n*/
    RADIO_INT_SOURCE_GRP2_T grp2;           /*!<mb<in-house>*TODO*póbÝ\¦(óMÖA) n*/
    RADIO_INT_SOURCE_GRP3_T grp3;           /*!<mb<in-house>*TODO*póbÝ\¦(MÖA) n*/
}RADIO_INT_SOURCE_ALL_T;

/** @brief mType definition for @ref RADIO_INT_EN_GRP1_ADR accessb@ref RADIO_INT_EN_GRP1_ADR WX^ANZXp ^è`n*/
typedef union{
    struct{
        uint8_t clk_done_en:        1;      /*!<mb<in-house>*TODO*póbNbNÀè»®¹ÝÂÝè R/W n*/
        uint8_t vco_cal_cmp_en:     1;      /*!<mb<in-house>*TODO*póbVCO Lu[V®¹ÝÂÝè R/W n*/
        uint8_t pll_ld_en:          1;      /*!<mb<in-house>*TODO*póbPLL bNOêÝÂÝè R/W n*/
        uint8_t rf_state_cmp_en:    1;      /*!<mb<in-house>*TODO*póbRF óÔJÚ®¹ÝÂÝè R/W n*/
        uint8_t fifo_empty_en:      1;      /*!<mb<in-house>*TODO*póbFIFO-Empty ÝÂÝè R/W n*/
        uint8_t fifo_full_en:       1;      /*!<mb<in-house>*TODO*póbFIFO-Full ÝÂÝè R/W n*/
        uint8_t wakeup_en:          1;      /*!<mb<in-house>*TODO*póbEFCNAbvÝÂÝè R/W n*/
        uint8_t clk_cal_en:         1;      /*!<mb<in-house>*TODO*póbNbNLu[V®¹ÝÂÝè R/W n*/
    }bits;
    uint8_t byte;
}RADIO_INT_EN_GRP1_T;

/** @brief mType definition for @ref RADIO_INT_EN_GRP2_ADR accessb@ref RADIO_INT_EN_GRP2_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t rx_cmp_en:          1;      /*!<mb<in-house>*TODO*póbóM®¹ÝÂÝè  R/W n*/
        uint8_t crc_err_en:         1;      /*!<mb<in-house>*TODO*póbCRC G[ÝÂÝè R/W n*/
        uint8_t diversity_cmp_en:   1;      /*!<mb<in-house>*TODO*pób_Co[VeBT[`®¹ÝÂÝè R/W n*/
        uint8_t rx_len_err_en:      1;      /*!<mb<in-house>*TODO*póbóM Length G[ÝÂÝè R/W n*/
        uint8_t rx_fifo_err_en:     1;      /*!<mb<in-house>*TODO*póbóM FIFO ANZXG[ÝÂÝè R/W n*/
        uint8_t sync_word_en:       1;      /*!<mb<in-house>*TODO*póbSyncWord oÝÂÝè R/W n*/
        uint8_t cma_field_en:       1;      /*!<mb<in-house>*TODO*póbField `FbNÝÂÝè R/W n*/
        uint8_t sync_err_en:        1;      /*!<mb<in-house>*TODO*póbSync G[ÝÂÝè R/W n*/
    }bits;
    uint8_t byte;
}RADIO_INT_EN_GRP2_T;

/** @brief mType definition for @ref RADIO_INT_EN_GRP3_ADR accessb@ref RADIO_INT_EN_GRP3_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t tx_cmp_en:          1;      /*!<mb<in-house>*TODO*póbM®¹ÝÂÝè R/W n*/
        uint8_t tx_fifo_w_cmp_en:   1;      /*!<mb<in-house>*TODO*póbf[^Mvót®¹ÝÂÝè R/W n*/
        uint8_t cca_cmp_en:         1;      /*!<mb<in-house>*TODO*póbCCA ®¹ÝÂÝè R/W n*/
        uint8_t tx_len_err_en:      1;      /*!<mb<in-house>*TODO*póbM Length G[ÝÂÝè R/W n*/
        uint8_t tx_firo_err_en:     1;      /*!<mb<in-house>*TODO*póbM FIFO ANZXG[ÝÂÝè R/W n*/
        uint8_t ch_srch_err_en:     1;      /*!<mb<in-house>*TODO*pób`lT[`G[èÝÂÝè R/W n*/
        uint8_t gt1_en:             1;      /*!<mb<in-house>*TODO*póbÄp^C}1ÝÂÝè R/W n*/
        uint8_t gt2_en:             1;      /*!<mb<in-house>*TODO*póbÄp^C}2ÝÂÝè R/W n*/
    }bits;
    uint8_t byte;
}RADIO_INT_EN_GRP3_T;

/** @brief mType definition for @ref RADIO_CRC_ERR_H_ADR accessb@ref RADIO_CRC_ERR_H_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t crc_error_h:        1;      /*!<mb<in-house>*TODO*pób17th CRCG[\¦ Rn*/
        uint8_t reserved0:          3;      /*!<mb<in-house>*TODO*pób\ñ Rn*/
        uint8_t crc_int_set:        1;      /*!<mb<in-house>*TODO*póbCRC`FbNÝIðÝè R/Wn*/
        uint8_t crc_len2:           2;      /*!<mb<in-house>*TODO*póbCRC·Ýè2 R/Wn*/
        uint8_t crc_len2_en:        1;      /*!<mb<in-house>*TODO*póbCRC·Ýè2Cl[u R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_CRC_ERR_H_T;

/** @brief mType definition for @ref RADIO_CRC_ERR_M_ADR accessb@ref RADIO_CRC_ERR_M_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t crc_error_m:        8;      /*!<mb<in-house>*TODO*pób9~16th CRCG[\¦ Rn*/
    }bits;
    uint8_t byte;
}RADIO_CRC_ERR_M_T;

/** @brief mType definition for @ref RADIO_CRC_ERR_L_ADR accessb@ref RADIO_CRC_ERR_L_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t crc_error_l:        8;      /*!<mb<in-house>*TODO*pób1~8th CRCG[\¦ Rn*/
    }bits;
    uint8_t byte;
}RADIO_CRC_ERR_L_T;

/** @brief mType definition for @ref RADIO_STATE_CLR_ADR accessb@ref RADIO_STATE_CLR_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t state_clr_0:        1;      /*!<mb<in-house>*TODO*póbMFIFO|C^NA R/Wn*/
        uint8_t state_clr_1:        1;      /*!<mb<in-house>*TODO*póbóMFIFO|C^NA R/Wn*/
        uint8_t state_clr_2:        1;      /*!<mb<in-house>*TODO*póbPHYXe[gNA R/Wn*/
        uint8_t state_clr_3:        1;      /*!<mb<in-house>*TODO*pób_Co[VeBXe[gNA R/Wn*/
        uint8_t state_clr_4:        1;      /*!<mb<in-house>*TODO*póbAhX`FbNJE^NA R/Wn*/
        uint8_t state_clr_5:        1;      /*!<mb<in-house>*TODO*pób`lT[`Xe[gNA R/Wn*/
        uint8_t reserved0:          1;      /*!<mb<in-house>*TODO*pób\ñ R/Wn*/
        uint8_t state_clr_en:       1;      /*!<mb<in-house>*TODO*póbXe[gNACl[uÝè R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_STATE_CLR_T;

/** @brief mType definition for @ref RADIO_TXFIFO_THRH_ADR accessb@ref RADIO_TXFIFO_THRH_ADR WX^ANZXp ^è`n*/
/** @note mb<in-house>*TODO*póbML7421ÅÍ{WX^ðrbgANZXµÈ¢±Æn */
typedef union{
    struct {
        uint8_t txfifo_thrh:        6;      /*!<mb<in-house>*TODO*póbMFIFOÌFullxÝè R/Wn*/
        uint8_t reserved0:          1;      /*!<mb<in-house>*TODO*pób\ñ R/Wn*/
        uint8_t txfifo_thrh_en:     1;      /*!<mb<in-house>*TODO*póbMFIFOÌFullxCl[u R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_TXFIFO_THRH_T;

/** @brief mType definition for @ref RADIO_TXFIFO_THRL_ADR accessb@ref RADIO_TXFIFO_THRL_ADR WX^ANZXp ^è`n*/
/** @note mb<in-house>*TODO*póbML7421ÅÍ{WX^ðrbgANZXµÈ¢±Æn */
typedef union{
    struct {
        uint8_t txfifo_thrl:        6;      /*!<mb<in-house>*TODO*póbMFIFOÌEmptyxÝè¨æÑFAST_TX[hÌMgKxÝè R/Wn*/
        uint8_t reserved0:          1;      /*!<mb<in-house>*TODO*pób\ñ R/Wn*/
        uint8_t txfifo_thrl_en:     1;      /*!<mb<in-house>*TODO*póbMFIFOÌEmptyxCl[u R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_TXFIFO_THRL_T;

/** @brief mType definition for @ref RADIO_RXFIFO_THRH_ADR accessb@ref RADIO_RXFIFO_THRH_ADR WX^ANZXp ^è`n*/
/** @note mb<in-house>*TODO*póbML7421ÅÍ{WX^ðrbgANZXµÈ¢±Æn */
typedef union{
    struct {
        uint8_t rxfifo_thrh:        6;      /*!<mb<in-house>*TODO*póbóMFIFOÌFullxÝè R/Wn*/
        uint8_t reserved0:          1;      /*!<mb<in-house>*TODO*pób\ñ R/Wn*/
        uint8_t rxfifo_thrh_en:     1;      /*!<mb<in-house>*TODO*póbóMFIFOÌFullxCl[u R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_RXFIFO_THRH_T;

/** @brief mType definition for @ref RADIO_RXFIFO_THRL_ADR accessb@ref RADIO_RXFIFO_THRL_ADR WX^ANZXp ^è`n*/
/** @note mb<in-house>*TODO*póbML7421ÅÍ{WX^ðrbgANZXµÈ¢±Æn */
typedef union{
    struct {
        uint8_t rxfifo_thrl:        6;      /*!<mb<in-house>*TODO*póbóMFIFOÌEmptyxÝè R/Wn*/
        uint8_t reserved0:          1;      /*!<mb<in-house>*TODO*pób\ñ R/Wn*/
        uint8_t rxfifo_thrl_en:     1;      /*!<mb<in-house>*TODO*póbóMFIFOÌEmptyxCl[u R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_RXFIFO_THRL_T;

/** @brief mType definition for @ref RADIO_C_CHECK_CTRL_B0_ADR accessb@ref RADIO_C_CHECK_CTRL_B0_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t c_field_en:         5;      /*!<mb<in-house>*TODO*póbRg[tB[hp^[1~5`FbNCl[u R/Wn*/
        uint8_t reserved0:          1;      /*!<mb<in-house>*TODO*pób\ñ Rn*/
        uint8_t ca_int_ctrl:        1;      /*!<mb<in-house>*TODO*póbField`FbNÝÝè R/Wn*/
        uint8_t ca_rxd_clr:         1;      /*!<mb<in-house>*TODO*póbFieldsêvÌóMf[^Ýè R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_C_CHECK_CTRL_B0_T;

/** @brief mType definition for @ref RADIO_M_CHECK_CTRL_B0_ADR accessb@ref RADIO_M_CHECK_CTRL_B0_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t m_field_code1_en:   1;      /*!<mb<in-house>*TODO*pób}jt@N`[IDtB[hp^[1`FbNCl[u R/Wn*/
        uint8_t m_field_code2_en:   1;      /*!<mb<in-house>*TODO*pób}jt@N`[IDtB[hp^[2`FbNCl[u R/Wn*/
        uint8_t m_field_code3_en:   1;      /*!<mb<in-house>*TODO*pób}jt@N`[IDtB[hp^[3`FbNCl[u R/Wn*/
        uint8_t m_field_code4_en:   1;      /*!<mb<in-house>*TODO*pób}jt@N`[IDtB[hp^[4`FbNCl[u R/Wn*/
        uint8_t rcv_cont_sel:       2;      /*!<mb<in-house>*TODO*pób®ìp±^C}¹ÌóMp±ðÝè R/Wn*/
        uint8_t reserved0:          2;      /*!<mb<in-house>*TODO*pób\ñ Rn*/
    }bits;
    uint8_t byte;
}RADIO_M_CHECK_CTRL_B0_T;

/** @brief mType definition for @ref RADIO_A_CHECK_CTRL_B0_ADR accessb@ref RADIO_A_CHECK_CTRL_B0_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t a_field_code1_en:   1;      /*!<mb<in-house>*TODO*póbAhXtB[hp^[1`FbNCl[u R/Wn*/
        uint8_t a_field_code2_en:   1;      /*!<mb<in-house>*TODO*póbAhXtB[hp^[2`FbNCl[u R/Wn*/
        uint8_t a_field_code3_en:   1;      /*!<mb<in-house>*TODO*póbAhXtB[hp^[3`FbNCl[u R/Wn*/
        uint8_t a_field_code4_en:   1;      /*!<mb<in-house>*TODO*póbAhXtB[hp^[4`FbNCl[u R/Wn*/
        uint8_t a_field_code5_en:   1;      /*!<mb<in-house>*TODO*póbAhXtB[hp^[5`FbNCl[u R/Wn*/
        uint8_t a_field_code6_en:   1;      /*!<mb<in-house>*TODO*póbAhXtB[hp^[6`FbNCl[u R/Wn*/
        uint8_t reserved0:          2;      /*!<mb<in-house>*TODO*pób\ñ R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_A_CHECK_CTRL_B0_T;

/** @brief mType definition for @ref RADIO_C_FIELD_CODE1_B0_ADR accessb@ref RADIO_C_FIELD_CODE1_B0_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t c_field_code1:      8;      /*!<mb<in-house>*TODO*póbC-field Ýè R[h#1 R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_C_FIELD_CODE1_B0_T;

/** @brief mType definition for @ref RADIO_C_FIELD_CODE2_B0_ADR accessb@ref RADIO_C_FIELD_CODE2_B0_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t c_field_code2:      8;      /*!<mb<in-house>*TODO*póbC-field Ýè R[h#2 R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_C_FIELD_CODE2_B0_T;

/** @brief mType definition for @ref RADIO_C_FIELD_CODE3_B0_ADR accessb@ref RADIO_C_FIELD_CODE3_B0_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t c_field_code3:      8;      /*!<mb<in-house>*TODO*póbC-field Ýè R[h#3 R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_C_FIELD_CODE3_B0_T;

/** @brief mType definition for @ref RADIO_C_FIELD_CODE4_B0_ADR accessb@ref RADIO_C_FIELD_CODE4_B0_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t c_field_code4:      8;      /*!<mb<in-house>*TODO*póbC-fieldÝè R[h#4 R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_C_FIELD_CODE4_B0_T;

/** @brief mType definition for @ref RADIO_C_FIELD_CODE5_B0_ADR accessb@ref RADIO_C_FIELD_CODE5_B0_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t c_field_code5:      8;      /*!<mb<in-house>*TODO*póbC-fieldÝè R[h#5 R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_C_FIELD_CODE5_B0_T;

/** @brief mType definition for @ref RADIO_M_FIELD_CODE1_B0_ADR accessb@ref RADIO_M_FIELD_CODE1_B0_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t m_field_code1:      8;      /*!<mb<in-house>*TODO*póbM-field 1stoCgÝè R[h#1 R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_M_FIELD_CODE1_B0_T;

/** @brief mType definition for @ref RADIO_M_FIELD_CODE2_B0_ADR accessb@ref RADIO_M_FIELD_CODE2_B0_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t m_field_code2:      8;      /*!<mb<in-house>*TODO*póbM-field 1stoCgÝè R[h#2 R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_M_FIELD_CODE2_B0_T;

/** @brief mType definition for @ref RADIO_M_FIELD_CODE3_B0_ADR accessb@ref RADIO_M_FIELD_CODE3_B0_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t m_field_code3:      8;      /*!<mb<in-house>*TODO*póbM-field 2ndoCgÝè R[h#1 R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_M_FIELD_CODE3_B0_T;

/** @brief mType definition for @ref RADIO_M_FIELD_CODE4_B0_ADR accessb@ref RADIO_M_FIELD_CODE4_B0_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t m_field_code4:      8;      /*!<mb<in-house>*TODO*póbM-field 2ndoCgÝè R[h#2 R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_M_FIELD_CODE4_B0_T;

/** @brief mType definition for @ref RADIO_A_FIELD_CODE1_B0_ADR accessb@ref RADIO_A_FIELD_CODE1_B0_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t a_field_code1:      8;      /*!<mb<in-house>*TODO*póbA-fieldÝè(1oCgÚ) R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_A_FIELD_CODE1_B0_T;

/** @brief mType definition for @ref RADIO_A_FIELD_CODE2_B0_ADR accessb@ref RADIO_A_FIELD_CODE2_B0_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t a_field_code2:      8;      /*!<mb<in-house>*TODO*póbA-fieldÝè(2oCgÚ) R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_A_FIELD_CODE2_B0_T;

/** @brief mType definition for @ref RADIO_A_FIELD_CODE3_B0_ADR accessb@ref RADIO_A_FIELD_CODE3_B0_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t a_field_code3:      8;      /*!<mb<in-house>*TODO*póbA-fieldÝè(3oCgÚ) R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_A_FIELD_CODE3_B0_T;

/** @brief mType definition for @ref RADIO_A_FIELD_CODE4_B0_ADR accessb@ref RADIO_A_FIELD_CODE4_B0_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t a_field_code4:      8;      /*!<mb<in-house>*TODO*póbA-fieldÝè(4oCgÚ) R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_A_FIELD_CODE4_B0_T;

/** @brief mType definition for @ref RADIO_A_FIELD_CODE5_B0_ADR accessb@ref RADIO_A_FIELD_CODE5_B0_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t a_field_code5:      8;      /*!<mb<in-house>*TODO*póbA-fieldÝè(5oCgÚ) R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_A_FIELD_CODE5_B0_T;

/** @brief mType definition for @ref RADIO_A_FIELD_CODE6_B0_ADR accessb@ref RADIO_A_FIELD_CODE6_B0_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t a_field_code6:      8;      /*!<mb<in-house>*TODO*póbA-fieldÝè(6oCgÚ) R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_A_FIELD_CODE6_B0_T;

/** @brief mType definition for @ref RADIO_SLEEP_WU_SET_ADR accessb@ref RADIO_SLEEP_WU_SET_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t sleep_en:           1;      /*!<mb<in-house>*TODO*póbSLEEP[h§ä R/Wn*/
        uint8_t pdn_en:             1;      /*!<mb<in-house>*TODO*póbSLEEPÌd¹§äCl[u R/Wn*/
        uint8_t wut_clk_source:     1;      /*!<mb<in-house>*TODO*póbEFCNAbv^C}pNbN\[XÝè R/Wn*/
        uint8_t rcosc_mode:         1;      /*!<mb<in-house>*TODO*póbRC­UñH®ì[hÝè R/Wn*/
        uint8_t wakeup_en:          1;      /*!<mb<in-house>*TODO*póbEFCNAbvCl[u R/Wn*/
        uint8_t wu_duration_en:     1;      /*!<mb<in-house>*TODO*póbEFCNAbvãÌ®ìp±^C}Cl[uÝè R/Wn*/
        uint8_t wakeup_mode:        1;      /*!<mb<in-house>*TODO*póbEFCNAbvãÌ®ìÝè R/Wn*/
        uint8_t wut_1shot_mode:     1;      /*!<mb<in-house>*TODO*póbEFCNAbv^C}®ì[hÝè R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_SLEEP_WU_SET_T;

/** @brief mType definition for @ref RADIO_WUT_CLK_SET_ADR accessb@ref RADIO_WUT_CLK_SET_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t wut_clk_set:        4;      /*!<mb<in-house>*TODO*póbEFCNAbv^C}ªüÝè R/Wn*/
        uint8_t wud_clk_set:        4;      /*!<mb<in-house>*TODO*pób®ìp±^C}ªüÝè R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_WUT_CLK_SET_T;

/** @brief mType definition for @ref RADIO_WUT_INTERVAL_H_ADR accessb@ref RADIO_WUT_INTERVAL_H_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t timer_interval_h:   8;      /*!<mb<in-house>*TODO*póbEFCNAbv^C}ÔuÝè(ãÊoCg) R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_WUT_INTERVAL_H_T;

/** @brief mType definition for @ref RADIO_WUT_INTERVAL_L_ADR accessb@ref RADIO_WUT_INTERVAL_L_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t timer_interval_l:   8;      /*!<mb<in-house>*TODO*póbEFCNAbv^C}ÔuÝè(ºÊoCg) R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_WUT_INTERVAL_L_T;

/** @brief mType definition for @ref RADIO_WU_DURATION_ADR accessb@ref RADIO_WU_DURATION_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t wu_duration:        8;      /*!<mb<in-house>*TODO*póbEFCNAbvãÌ®ìp±^C}Ýè R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_WU_DURATION_T;

/** @brief mType definition for @ref RADIO_GT_SET_ADR accessb@ref RADIO_GT_SET_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t gt1_start:          1;      /*!<mb<in-house>*TODO*póbÄp^C}1ÀsÝè R/Wn*/
        uint8_t gt1_clk_source:     1;      /*!<mb<in-house>*TODO*póbÄp^C}1NbN\[XÝè R/Wn*/
        uint8_t reserved0:          2;      /*!<mb<in-house>*TODO*pób\ñ Rn*/
        uint8_t gt2_start:          1;      /*!<mb<in-house>*TODO*póbÄp^C}2ÀsÝè R/Wn*/
        uint8_t gt2_clk_source:     1;      /*!<mb<in-house>*TODO*póbÄp^C}2NbN\[XÝè R/Wn*/
        uint8_t reserved1:          2;      /*!<mb<in-house>*TODO*pób\ñ Rn*/
    }bits;
    uint8_t byte;
}RADIO_GT_SET_T;

/** @brief mType definition for @ref RADIO_GT_CLK_SET_ADR accessb@ref RADIO_GT_CLK_SET_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t gt1_clk_set:        4;      /*!<mb<in-house>*TODO*póbÄp^C}pNbN1ªüÝè R/Wn*/
        uint8_t gt2_clk_set:        4;      /*!<mb<in-house>*TODO*póbÄp^C}pNbN2ªüÝè R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_GT_CLK_SET_T;

/** @brief mType definition for @ref RADIO_GT1_TIMER_ADR accessb@ref RADIO_GT1_TIMER_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t gt1_interval:       8;      /*!<mb<in-house>*TODO*póbÄp^C}1ÔuÝè R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_GT1_TIMER_T;

/** @brief mType definition for @ref RADIO_GT2_TIMER_ADR accessb@ref RADIO_GT2_TIMER_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t gt2_interval:       8;      /*!<mb<in-house>*TODO*póbÄp^C}2ÔuÝè R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_GT2_TIMER_T;

/** @brief mType definition for @ref RADIO_CCA_IGNORE_LVL_ADR accessb@ref RADIO_CCA_IGNORE_LVL_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t cca_th_h:           8;      /*!<mb<in-house>*TODO*póbCCAÌÚ®½Ï»è©çO·éEDxÝè R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_CCA_IGNORE_LVL_T;

/** @brief mType definition for @ref RADIO_CCA_LVL_ADR accessb@ref RADIO_CCA_LVL_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t cca_th:             8;      /*!<mb<in-house>*TODO*póbCCAèlxÝè R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_CCA_LVL_T;

/** @brief mType definition for @ref RADIO_CCA_ABORT_ADR accessb@ref RADIO_CCA_ABORT_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t cca_abort:          8;      /*!<mb<in-house>*TODO*póbCCA­§I¹ÔÝè R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_CCA_ABORT_T;

/** @brief mType definition for @ref RADIO_CCA_CTRL_ADR accessb@ref RADIO_CCA_CTRL_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t cca_rslt:           2;      /*!<mb<in-house>*TODO*póbCCAÊ Rn*/
        uint8_t cca_abort_en:       1;      /*!<mb<in-house>*TODO*póbCCA­§I¹Ýè R/Wn*/
        uint8_t fast_det_mode_en:   1;      /*!<mb<in-house>*TODO*pób¬dg`FbN[hÝè R/Wn*/
        uint8_t cca_en:             1;      /*!<mb<in-house>*TODO*póbCCAÀs½ß R/Wn*/
        uint8_t cca_cpu_en:         1;      /*!<mb<in-house>*TODO*póbCCA³ÀÀs[hÝè R/Wn*/
        uint8_t cca_idle_en:        1;      /*!<mb<in-house>*TODO*póbCCAACho[hÝè R/Wn*/
        uint8_t cca_stop:           1;      /*!<mb<in-house>*TODO*póbCCA³ÀÀsI¹Ýè(1Åâ~µÜ·) R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_CCA_CTRL_T;

/** @brief mType definition for @ref RADIO_ED_RSLT_ADR accessb@ref RADIO_ED_RSLT_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t ed_value:           8;      /*!<mb<in-house>*TODO*póbEDl\¦ Rn*/
    }bits;
    uint8_t byte;
}RADIO_ED_RSLT_T;

/** @brief mType definition for @ref RADIO_IDLE_WAIT_H_ADR accessb@ref RADIO_IDLE_WAIT_H_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t cca_idle_cnt_i_h:   2;      /*!<mb<in-house>*TODO*póbIDLE»èÌÅåÒ¿ÔÝè(ãÊoCg) R/Wn*/
        uint8_t reserved0:          6;      /*!<mb<in-house>*TODO*pób\ñ Rn*/
    }bits;
    uint8_t byte;
}RADIO_IDLE_WAIT_H_T;

/** @brief mType definition for @ref RADIO_IDLE_WAIT_L_ADR accessb@ref RADIO_IDLE_WAIT_L_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t cca_idle_cnt_i_l:   8;      /*!<mb<in-house>*TODO*póbIDLE»èÌÅåÒ¿ÔÝè(ºÊoCg) R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_IDLE_WAIT_L_T;

/** @brief mType definition for @ref RADIO_CCA_PROG_H_ADR accessb@ref RADIO_CCA_PROG_H_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t cca_idle_cnt_h:     2;      /*!<mb<in-house>*TODO*póbCCAÌIDLE»èoßÔ\¦(ãÊoCg) Rn*/
        uint8_t reserved0:          6;      /*!<mb<in-house>*TODO*pób\ñ Rn*/
    }bits;
    uint8_t byte;
}RADIO_CCA_PROG_H_T;

/** @brief mType definition for @ref RADIO_CCA_PROG_L_ADR accessb@ref RADIO_CCA_PROG_L_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t cca_idle_cnt_l:     8;      /*!<mb<in-house>*TODO*póbCCAÌIDLE»èoßÔ\¦(ºÊoCg) Rn*/
    }bits;
    uint8_t byte;
}RADIO_CCA_PROG_L_T;

/** @brief mType definition for @ref RADIO_PREAMBLE_SET_ADR accessb@ref RADIO_PREAMBLE_SET_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t pr_pat:             4;      /*!<mb<in-house>*TODO*póbvAup^[Ýè R/Wn*/
        uint8_t reserved0:          2;      /*!<mb<in-house>*TODO*pób\ñ R/Wn*/
        uint8_t cca_int_sel:        2;      /*!<mb<in-house>*TODO*póbCCAèÝIðÝè R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_PREAMBLE_SET_T;

/** @brief mType definition for @ref RADIO_VCO_VTRSLT_ADR accessb@ref RADIO_VCO_VTRSLT_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t vtune_comp_l:       1;      /*!<mb<in-house>*TODO*póbVCO²®d³ºÀèlärÊ\¦ Rn*/
        uint8_t vtune_comp_h:       1;      /*!<mb<in-house>*TODO*póbVCO²®d³ãÀèlärÊ\¦ Rn*/
        uint8_t vtune_int_enb:      1;      /*!<mb<in-house>*TODO*póbVCO²®d³ÍÍOoÝÊmÝè R/Wn*/
        uint8_t reserved0:          5;      /*!<mb<in-house>*TODO*pób\ñ R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_VCO_VTRSLT_T;

/** @brief mType definition for @ref RADIO_ED_CTRL_ADR accessb@ref RADIO_ED_CTRL_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t ed_avg:             3;      /*!<mb<in-house>*TODO*póbEDlZoÌ½ÏñÝè R/Wn*/
        uint8_t ed_sel:             1;      /*!<mb<in-house>*TODO*póbED\¦Ýè R/Wn*/
        uint8_t ed_done:         1;      /*!<mb<in-house>*TODO*póbEDlZo®¹tO Rn*/
        uint8_t cca_ed_sel:         1;      /*!<mb<in-house>*TODO*pób¬dg`FbNÌEDlZoMIðÝè R/Wn*/
        uint8_t ccadone_mode:       1;      /*!<mb<in-house>*TODO*pób¬dg`FbNÌRFóÔÝè R/Wn*/
        uint8_t ed_calc_en:         1;      /*!<mb<in-house>*TODO*póbEDlZoCl[uÝè R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_ED_CTRL_T;

/** @brief mType definition for @ref RADIO_TXPR_LEN_H_ADR accessb@ref RADIO_TXPR_LEN_H_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t txpr_len_h:         8;      /*!<mb<in-house>*TODO*póbMvAu·Ýè(ãÊoCg) R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_TXPR_LEN_H_T;

/** @brief mType definition for @ref RADIO_TXPR_LEN_L_ADR accessb@ref RADIO_TXPR_LEN_L_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t txpr_len_l:         8;      /*!<mb<in-house>*TODO*póbMvAu·Ýè(ºÊoCg) R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_TXPR_LEN_L_T;

/** @brief mType definition for @ref RADIO_POSTAMBLE_SET_ADR accessb@ref RADIO_POSTAMBLE_SET_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t postamble_en:       1;      /*!<mb<in-house>*TODO*pób|XgAuCl[u R/Wn*/
        uint8_t postamble_pat:      3;      /*!<mb<in-house>*TODO*pób|XgAup^[Ýè R/Wn*/
        uint8_t postamble_len:      3;      /*!<mb<in-house>*TODO*pób|XgAu·Ýè R/Wn*/
        uint8_t reserved1:          1;      /*!<mb<in-house>*TODO*pób\ñ Rn*/
    }bits;
    uint8_t byte;
}RADIO_POSTAMBLE_SET_T;

/** @brief mType definition for @ref RADIO_SYNC_CONDITION1_ADR accessb@ref RADIO_SYNC_CONDITION1_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t rxpr_len:           6;      /*!<mb<in-house>*TODO*póbóMÌvAuär·Ýè(ÝèÍÍ:0`32APÊ:rbg) R/Wn*/
        uint8_t reserved0:          1;      /*!<mb<in-house>*TODO*pób\ñ Rn*/
        uint8_t sync_ed_en:         1;      /*!<mb<in-house>*TODO*póbEDlðgpµ½¯ú»èÌCl[u R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_SYNC_CONDITION1_T;

/** @brief mType definition for @ref RADIO_SYNC_CONDITION2_ADR accessb@ref RADIO_SYNC_CONDITION2_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t sync_ed_th:         8;      /*!<mb<in-house>*TODO*pób¯ú»èÌEDèlÝè R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_SYNC_CONDITION2_T;

/** @brief mType definition for @ref RADIO_SYNC_CONDITION3_ADR accessb@ref RADIO_SYNC_CONDITION3_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t pb_rcv:             4;      /*!<mb<in-house>*TODO*póbSyncWordoÌëèerbgÝè(ÝèÍÍ0`15) R/Wn*/
        uint8_t sw_rcv:             4;      /*!<mb<in-house>*TODO*póbvAuoÌëèerbgÝè(ÝèÍÍ0`15) R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_SYNC_CONDITION3_T;

/** @brief mType definition for @ref RADIO_2DIV_CTRL_ADR accessb@ref RADIO_2DIV_CTRL_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t two_div_en:         1;      /*!<mb<in-house>*TODO*póbAei_Co[VeBÝè R/Wn*/
        uint8_t two_port_sw:        1;      /*!<mb<in-house>*TODO*póbAeiXCb`Ýè R/Wn*/
        uint8_t inv_trx_sw:         1;      /*!<mb<in-house>*TODO*póbTRX_SWÉ«Ýè R/Wn*/
        uint8_t inv_ant_sw:         1;      /*!<mb<in-house>*TODO*póbANT_SWÉ«Ýè R/Wn*/
        uint8_t ant_ctrl0:          1;      /*!<mb<in-house>*TODO*póbANT§ärbg0 R/Wn*/
        uint8_t ant_ctrl1:          1;      /*!<mb<in-house>*TODO*póbANT§ärbg1 R/Wn*/
        uint8_t reserved0:          2;      /*!<mb<in-house>*TODO*pób\ñ Rn*/
    }bits;
    uint8_t byte;
}RADIO_2DIV_CTRL_T;

/** @brief mType definition for @ref RADIO_2DIV_RSLT_ADR accessb@ref RADIO_2DIV_RSLT_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t two_div_rslt:       2;      /*!<mb<in-house>*TODO*póbAei_Co[VeBÊ\¦ Rn*/
        uint8_t reserved0:          5;      /*!<mb<in-house>*TODO*pób Rn*/
        uint8_t two_div_done:       1;      /*!<mb<in-house>*TODO*pób Rn*/
    }bits;
    uint8_t byte;
}RADIO_2DIV_RSLT_T;

/** @brief mType definition for @ref RADIO_ANT1_ED_ADR accessb@ref RADIO_ANT1_ED_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t ant1_ed:            8;      /*!<mb<in-house>*TODO*póbAei1Ìæ¾EDl Rn*/
    }bits;
    uint8_t byte;
}RADIO_ANT1_ED_T;

/** @brief mType definition for @ref RADIO_ANT2_ED_ADR accessb@ref RADIO_ANT2_ED_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t ant2_ed:            8;      /*!<mb<in-house>*TODO*póbAei2Ìæ¾EDl Rn*/
    }bits;
    uint8_t byte;
}RADIO_ANT2_ED_T;

/** @brief mType definition for @ref RADIO_ANT_CTRL_ADR accessb@ref RADIO_ANT_CTRL_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t tx_ant_en:          1;      /*!<mb<in-house>*TODO*póbMÌAeiÝèCl[u R/Wn*/
        uint8_t tx_ant:             1;      /*!<mb<in-house>*TODO*póbMÌAeiÝè R/Wn*/
        uint8_t reserved0:          2;      /*!<mb<in-house>*TODO*pób\ñ Rn*/
        uint8_t rx_ant_en:          1;      /*!<mb<in-house>*TODO*póbóMÌAeiÝèCl[u R/Wn*/
        uint8_t rx_ant:             1;      /*!<mb<in-house>*TODO*póbóMÌAeiÝè R/Wn*/
        uint8_t reserved1:          2;      /*!<mb<in-house>*TODO*pób\ñ Rn*/
    }bits;
    uint8_t byte;
}RADIO_ANT_CTRL_T;

/** @brief mType definition for @ref RADIO_MON_CTRL_ADR accessb@ref RADIO_MON_CTRL_ADR WX^ANZXp  ^è`n*/
typedef union{
    struct {
        uint8_t dmon_set:           4;      /*!<mb<in-house>*TODO*póbfW^j^oÍMIðÝè R/Wn*/
        uint8_t dmon_set2:          2;      /*!<mb<in-house>*TODO*póbfW^j^oÍMIðÝè R/Wn*/
        uint8_t fifomode_mon:       1;      /*!<mb<in-house>*TODO*póbFIFO[hj^Ýè R/Wn*/
        uint8_t ber_mode:           1;      /*!<mb<in-house>*TODO*póbBERªè[hÝè R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_MON_CTRL_T;

/** @brief mType definition for @ref RADIO_GPIO0_CTRL_ADR accessb@ref RADIO_GPIO0_CTRL_ADR WX^ANZXp  ^è`n*/
typedef union{
    struct {
        uint8_t gpio0_ctrl:         4;      /*!<mb<in-house>*TODO*póbGPIO0üoÍMIðÝè R/Wn*/
        uint8_t gpio0_fout_en:      1;      /*!<mb<in-house>*TODO*póbGPIO0­§oÍCl[u R/Wn*/
        uint8_t gpio0_fout:         1;      /*!<mb<in-house>*TODO*póbGPIO0­§oÍÝè R/Wn*/
        uint8_t gpio0_od:           1;      /*!<mb<in-house>*TODO*póbGPIO0 oÍOpenDrainÝè R/Wn*/
        uint8_t gpio0_inv:          1;      /*!<mb<in-house>*TODO*póbGPIO0 oÍMÉ«Ýè R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_GPIO0_CTRL_T;

/** @brief mType definition for @ref RADIO_GPIO1_CTRL_ADR accessb@ref RADIO_GPIO1_CTRL_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t gpio1_ctrl:         4;      /*!<mb<in-house>*TODO*póbGPIO1üoÍMIðÝè R/Wn*/
        uint8_t gpio1_fout_en:      1;      /*!<mb<in-house>*TODO*póbGPIO1­§oÍCl[u R/Wn*/
        uint8_t gpio1_fout:         1;      /*!<mb<in-house>*TODO*póbGPIO1­§oÍÝè R/Wn*/
        uint8_t gpio1_od:           1;      /*!<mb<in-house>*TODO*póbGPIO1 oÍOpenDrainÝè R/Wn*/
        uint8_t gpio1_inv:          1;      /*!<mb<in-house>*TODO*póbGPIO1 oÍMÉ«Ýè R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_GPIO1_CTRL_T;

/** @brief mType definition for @ref RADIO_GPIO2_CTRL_ADR accessb@ref RADIO_GPIO2_CTRL_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t gpio2_ctrl:         4;      /*!<mb<in-house>*TODO*póbGPIO2üoÍMIðÝè R/Wn*/
        uint8_t gpio2_fout_en:      1;      /*!<mb<in-house>*TODO*póbGPIO2­§oÍCl[u R/Wn*/
        uint8_t gpio2_fout:         1;      /*!<mb<in-house>*TODO*póbGPIO2­§oÍÝè R/Wn*/
        uint8_t gpio2_od:           1;      /*!<mb<in-house>*TODO*póbGPIO2 oÍOpenDrainÝè R/Wn*/
        uint8_t gpio2_inv:          1;      /*!<mb<in-house>*TODO*póbGPIO2 oÍMÉ«Ýè R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_GPIO2_CTRL_T;

/** @brief mType definition for @ref RADIO_GPIO3_CTRL_ADR accessb@ref RADIO_GPIO3_CTRL_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t gpio3_ctrl:         4;      /*!<mb<in-house>*TODO*póbGPIO3 oÍMÉ«Ýè R/Wn*/
        uint8_t gpio3_fout_en:      1;      /*!<mb<in-house>*TODO*póbGPIO3 oÍOpenDrainÝè R/Wn*/
        uint8_t gpio3_fout:         1;      /*!<mb<in-house>*TODO*póbGPIO3­§oÍÝè R/Wn*/
        uint8_t gpio3_od:           1;      /*!<mb<in-house>*TODO*póbGPIO3­§oÍCl[u R/Wn*/
        uint8_t gpio3_inv:          1;      /*!<mb<in-house>*TODO*póbGPIO3üoÍMIðÝè R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_GPIO3_CTRL_T;

/** @brief mType definition for @ref RADIO_EXTCLK_CTRL_ADR accessb@ref RADIO_EXTCLK_CTRL_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t extclk_ctrl:        4;      /*!<mb<in-house>*TODO*póbEXT_CLKüoÍMIðÝè R/Wn*/
        uint8_t extclk_fout_en:     1;      /*!<mb<in-house>*TODO*póbEXT_CLK­§oÍCl[u R/Wn*/
        uint8_t extclk_fout:        1;      /*!<mb<in-house>*TODO*póbEXT_CLK­§oÍlÝè R/Wn*/
        uint8_t extclk_od:          1;      /*!<mb<in-house>*TODO*póbEXT_CLKoÍOpenDrainÝè R/Wn*/
        uint8_t extclk_inv:         1;      /*!<mb<in-house>*TODO*póbEXT_CLKoÍMÉ«Ýè R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_EXTCLK_CTRL_T;

/** @brief mType definition for @ref RADIO_GPIO4_CTRL_ADR accessb@ref RADIO_GPIO4_CTRL_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t gpio4_ctrl:         4;      /*!<mb<in-house>*TODO*póbGPIO4üoÍMIðÝè R/Wn*/
        uint8_t gpio4_fout_en:      1;      /*!<mb<in-house>*TODO*póbGPIO4­§oÍCl[u R/Wn*/
        uint8_t gpio4_fout:         1;      /*!<mb<in-house>*TODO*póbGPIO4­§oÍlÝè R/Wn*/
        uint8_t gpio4_od:           1;      /*!<mb<in-house>*TODO*póbGPIO4oÍOpenDrainÝè R/Wn*/
        uint8_t gpio4_inv:          1;      /*!<mb<in-house>*TODO*póbGPIO4oÍMÉ«Ýè R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_GPIO4_CTRL_T;

/** @brief mType definition for @ref RADIO_SPI_EXT_PA_CTRL_ADR accessb@ref RADIO_SPI_EXT_PA_CTRL_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t ext_pa_en:          1;      /*!<mb<in-house>*TODO*póbOPA§äMÌ§äÝèCl[u R/Wn*/
        uint8_t ext_pa_cnt:         1;      /*!<mb<in-house>*TODO*póbOPA§äMÌ§ä^C~OÝè R/Wn*/
        uint8_t reserved0:          2;      /*!<mb<in-house>*TODO*pób\ñ Rn*/
        uint8_t sdi_cfg:            1;      /*!<mb<in-house>*TODO*póbSDI[q(s#15)ÌüoÍMIðÝè R/Wn*/
        uint8_t sdo_cfg:            1;      /*!<mb<in-house>*TODO*póbSDO[q(s#12)ÌüoÍMIðÝè R/Wn*/
        uint8_t reserved1:          1;      /*!<mb<in-house>*TODO*pób\ñ Rn*/
        uint8_t sdo_od:             1;      /*!<mb<in-house>*TODO*póbSDOoÍOpenDrainÝè R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_SPI_EXT_PA_CTRL_T;

/** @brief mType definition for @ref RADIO_CHFIL_BW_ADR accessb@ref RADIO_CHFIL_BW_ADR WX^ANZXp ^è`n*/
/** @note mb<in-house>*TODO*póbML7421ÅÍ{WX^ðrbgANZXµÈ¢±Æn */
typedef union{
    struct {
        uint8_t chfil_bw:           7;      /*!<mb<in-house>*TODO*pób`ltB^Ñæ²®Ýè R/Wn*/
        uint8_t chfil_wide_set:     1;      /*!<mb<in-house>*TODO*pób`ltB^LÑæÝè R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_CHFIL_BW_T;

/** @brief mType definition for @ref RADIO_DC_I_ADJ_H_ADR accessb@ref RADIO_DC_I_ADJ_H_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t dc_i_adj_h:         6;      /*!<mb<in-house>*TODO*póbIDCItZbg²®Ýè R/Wn*/
        uint8_t dc_adj_hold:        1;      /*!<mb<in-house>*TODO*póbDCItZbgâ³z[hÝè R/Wn*/
        uint8_t dc_adj_set:         1;      /*!<mb<in-house>*TODO*póbDCItZbgâ³Ýè R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_DC_I_ADJ_H_T;

/** @brief mType definition for @ref RADIO_DC_I_ADJ_L_ADR accessb@ref RADIO_DC_I_ADJ_L_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t dc_i_adj_l:         8;      /*!<mb<in-house>*TODO*póbIDCItZbg²®Ýè R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_DC_I_ADJ_L_T;

/** @brief mType definition for @ref RADIO_DC_Q_ADJ_H_ADR accessb@ref RADIO_DC_Q_ADJ_H_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t dc_q_adj_h:         6;      /*!<mb<in-house>*TODO*póbQDCItZbg²®Ýè R/Wn*/
        uint8_t reserved0:          2;      /*!<mb<in-house>*TODO*pób Rn*/
    }bits;
    uint8_t byte;
}RADIO_DC_Q_ADJ_H_T;

/** @brief mType definition for @ref RADIO_DC_Q_ADJ_L_ADR accessb@ref RADIO_DC_Q_ADJ_L_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t dc_q_adj_l:         8;      /*!<mb<in-house>*TODO*póbQDCItZbg²®Ýè R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_DC_Q_ADJ_L_T;

/** @brief mType definition for @ref RADIO_DC_FIL_ADJ_ADR accessb@ref RADIO_DC_FIL_ADJ_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t dc_fil_sel:         3;      /*!<mb<in-house>*TODO*póbDCItZbg²®ptB^Ýè R/Wn*/
        uint8_t reserved0:          1;      /*!<mb<in-house>*TODO*pób\ñ Rn*/
        uint8_t dc_fil_on:          1;      /*!<mb<in-house>*TODO*póbDCItZbg²®tB^Cl[uÝè R/Wn*/
        uint8_t dc_fil_mode:        1;      /*!<mb<in-house>*TODO*póbDCItZbg²®tB^[hÝè R/Wn*/
        uint8_t dc_fil_adj2:        2;      /*!<mb<in-house>*TODO*póbDCItZbg²®ptB^Ýè2 R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_DC_FIL_ADJ_T;

/** @brief mType definition for @ref RADIO_IQ_MAG_ADJ_H_ADR accessb@ref RADIO_IQ_MAG_ADJ_H_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t iq_mag_adj_h:       4;      /*!<mb<in-house>*TODO*póbIQMÌU²®Ýè(ãÊ4rbg) R/Wn*/
        uint8_t iq_adj_start:       1;      /*!<mb<in-house>*TODO*póbIQ©®²®Às R/Wn*/
        uint8_t local_sel:          1;      /*!<mb<in-house>*TODO*póbóM[JügÝè R/Wn*/
        uint8_t iq_adj_rslt:        1;      /*!<mb<in-house>*TODO*póbIQ©®²®Xe[^X\¦ Rn*/
        uint8_t iq_adj_done:        1;      /*!<mb<in-house>*TODO*póbIQ©®²®®¹\¦ Rn*/
    }bits;
    uint8_t byte;
}RADIO_IQ_MAG_ADJ_H_T;

/** @brief mType definition for @ref RADIO_IQ_MAG_ADJ_L_ADR accessb@ref RADIO_IQ_MAG_ADJ_L_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t iq_mag_adj_l:       8;      /*!<mb<in-house>*TODO*póbIQMÌU²®Ýè(ºÊoCg) R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_IQ_MAG_ADJ_L_T;

/** @brief mType definition for @ref RADIO_IQ_PHASE_ADJ_H_ADR accessb@ref RADIO_IQ_PHASE_ADJ_H_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t iq_phase_adj_h:     3;      /*!<mb<in-house>*TODO*póbIQMÌÊ²®Ýè(ãÊ3rbg) R/Wn*/
        uint8_t reserved0:          1;      /*!<mb<in-house>*TODO*pób\ñ Rn*/
        uint8_t iq_phase_sign:      1;      /*!<mb<in-house>*TODO*póbIQMÌÊ²®rbg R/Wn*/
        uint8_t reserved1:          3;      /*!<mb<in-house>*TODO*pób\ñ Rn*/
    }bits;
    uint8_t byte;
}RADIO_IQ_PHASE_ADJ_H_T;

/** @brief mType definition for @ref RADIO_IQ_PHASE_ADJ_L_ADR accessb@ref RADIO_IQ_PHASE_ADJ_L_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t iq_phase_adj_l:     8;      /*!<mb<in-house>*TODO*póbIQMÌÊ²®Ýè(ºÊoCg) R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_IQ_PHASE_ADJ_L_T;

/** @brief mType definition for @ref RADIO_IQ_ADJ_WAIT_ADR accessb@ref RADIO_IQ_ADJ_WAIT_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t iq_adj_wait:        2;      /*!<mb<in-house>*TODO*póbIQ©®²®pRSSIæ¾EFCgÔÝè R/Wn*/
        uint8_t reserved0:          2;      /*!<mb<in-house>*TODO*pób\ñ Rn*/
        uint8_t iq_adj_mode:        1;      /*!<mb<in-house>*TODO*póbIQ©®²®[hÝè R/Wn*/
        uint8_t reserved1:          3;      /*!<mb<in-house>*TODO*pób\ñ Rn*/
    }bits;
    uint8_t byte;
}RADIO_IQ_ADJ_WAIT_T;

/** @brief mType definition for @ref RADIO_IQ_ADJ_TARGET_ADR accessb@ref RADIO_IQ_ADJ_TARGET_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t iq_adj_target:      8;      /*!<mb<in-house>*TODO*póbIQ©®²®pRSSI»èèl R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_IQ_ADJ_TARGET_T;

/** @brief mType definition for @ref RADIO_DEC_GAIN_ADR accessb@ref RADIO_DEC_GAIN_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t dec_gain:           5;      /*!<mb<in-house>*TODO*póbfV[VQCÝè R/Wn*/
        uint8_t reserved0:          3;      /*!<mb<in-house>*TODO*pób\ñ Rn*/
    }bits;
    uint8_t byte;
}RADIO_DEC_GAIN_T;

/** @brief mType definition for @ref RADIO_IF_FREQ_ADR accessb@ref RADIO_IF_FREQ_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t if_freq:            4;      /*!<mb<in-house>*TODO*póbIFügIð R/Wn*/
        uint8_t if_freq_cca:        4;      /*!<mb<in-house>*TODO*póbCCAÌIFügIð R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_IF_FREQ_T;

/** @brief mType definition for @ref RADIO_OSC_ADJ1_ADR accessb@ref RADIO_OSC_ADJ1_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t osc_adj_corse_xi:   4;      /*!<mb<in-house>*TODO*póbXIeÊ×e²® ñ0.7pF/step R/Wn*/
        uint8_t osc_adj_corse_xo:   4;      /*!<mb<in-house>*TODO*póbXOeÊ×e²® R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_OSC_ADJ1_T;

/** @brief mType definition for @ref RADIO_OSC_ADJ2_ADR accessb@ref RADIO_OSC_ADJ2_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t osc_adj_fine:       8;      /*!<mb<in-house>*TODO*póbeÊ×÷²® ñ0.02pF/step (²®ÍÍ 0x00`0xFF) R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_OSC_ADJ2_T;

/** @brief mType definition for @ref RADIO_FIELD_CHECK_RSLT_ADR accessb@ref RADIO_FIELD_CHECK_RSLT_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t field_check_rslt1:  1;      /*!<mb<in-house>*TODO*póbtB[h`FbNÊ(p^[ 1)\¦ Rn*/
        uint8_t field_check_rslt2:  1;      /*!<mb<in-house>*TODO*póbtB[h`FbNÊ(p^[ 2)\¦ Rn*/
        uint8_t field_check_rslt3:  1;      /*!<mb<in-house>*TODO*póbtB[h`FbNÊ(p^[ 3)\¦ Rn*/
        uint8_t ack_req_det:        1;      /*!<mb<in-house>*TODO*póbIEEE802.15.4g pPbgóMÌ ACK vrbgo\¦ Rn*/
        uint8_t reserved:           4;      /*!<mb<in-house>*TODO*pób\ñ Rn*/
    }bits;
    uint8_t byte;
}RADIO_FIELD_CHECK_RSLT_T;

/** @brief mType definition for @ref RADIO_OSC_ADJ4_ADR accessb@ref RADIO_OSC_ADJ4_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t reserved0:          5;      /*!<mb<in-house>*TODO*pób\ñ R/Wn*/
        uint8_t osc_start_set:      1;      /*!<mb<in-house>*TODO*póbOSCN®[hÝè R/Wn*/
        uint8_t reserved1:          2;      /*!<mb<in-house>*TODO*pób\ñ Rn*/
    }bits;
    uint8_t byte;
}RADIO_OSC_ADJ4_T;

/** @brief mType definition for @ref RADIO_RSSI_ADJ_ADR accessb@ref RADIO_RSSI_ADJ_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t rssi_adj:           6;      /*!<mb<in-house>*TODO*póbRSSIâ³lÝè R/Wn*/
        uint8_t reserved0:          1;      /*!<mb<in-house>*TODO*pób\ñ R/Wn*/
        uint8_t rssi_add:           1;      /*!<mb<in-house>*TODO*póbRSSI²® R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_RSSI_ADJ_T;

/** @brief mType definition for @ref RADIO_PA_REG_ADJ_H_ADR accessb@ref RADIO_PA_REG_ADJ_H_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t pa_reg_adj_h:       1;      /*!<mb<in-house>*TODO*póbPAM[^ÌoÍd³²®Ýè R/Wn*/
        uint8_t reserved0:          3;      /*!<mb<in-house>*TODO*pób\ñ Rn*/
        uint8_t pa_sel:             1;      /*!<mb<in-house>*TODO*póbPAoÍIðÝè R/Wn*/
        uint8_t pa_vdd:             1;      /*!<mb<in-house>*TODO*póbPApd¹¹IðÝè R/Wn*/
        uint8_t reserved1:          1;      /*!<mb<in-house>*TODO*pób\ñ Rn*/
        uint8_t pareg_adj_sel:      1;      /*!<mb<in-house>*TODO*póbPAM[^ÌoÍd³²®Cl[uÝè R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_PA_REG_ADJ_H_T;

/** @brief mType definition for @ref RADIO_PA_MODE_ADR accessb@ref RADIO_PA_MODE_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t pa_reg:             4;      /*!<mb<in-house>*TODO*póbPAM[^ÌoÍd³²® R/Wn*/
        uint8_t pa_mode:            2;      /*!<mb<in-house>*TODO*póbPA[hÝè Rn*/
        uint8_t pa_ramp_sel:        1;      /*!<mb<in-house>*TODO*póbPAv§äIðÝè R/Wn*/
        uint8_t reserved0:          1;      /*!<mb<in-house>*TODO*pób\ñ Rn*/
    }bits;
    uint8_t byte;
}RADIO_PA_MODE_T;

typedef union{
    RADIO_PA_REG_ADJ_H_T radio_pa_reg_adj_h;
    RADIO_PA_MODE_T radio_pa_mode;
}RADIO_B0_ADR67_T;

/** @brief mType definition for @ref RADIO_PA_REG_FINE_ADJ_L_ADR accessb@ref RADIO_PA_REG_FINE_ADJ_L_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t pa_reg_fine_adj:    5;      /*!<mb<in-house>*TODO*póbPAM[^ÌoÍd³²®Ýè R/Wn*/
        uint8_t reserved0:          3;      /*!<mb<in-house>*TODO*pób\ñ R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_PA_REG_FINE_ADJ_L_T;

/** @brief mType definition for @ref RADIO_PA_REG_ADJ_L_ADR accessb@ref RADIO_PA_REG_ADJ_L_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t pa_reg_adj_l:       8;      /*!<mb<in-house>*TODO*póbPAM[^ÌoÍd³²®Ýè R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_PA_REG_ADJ_L_T;

typedef union{
    RADIO_PA_REG_ADJ_L_T radio_pa_reg_adj_l;
    RADIO_PA_REG_FINE_ADJ_L_T radio_pa_reg_fine_adj_l;
}RADIO_B0_ADR68_T;

/** @brief mType definition for @ref RADIO_PA_ADJ_ADR accessb@ref RADIO_PA_ADJ_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t pa_adj:             4;      /*!<mb<in-house>*TODO*póbPAoÍAvQC²® R/Wn*/
        uint8_t pa_adj4:            1;      /*!<mb<in-house>*TODO*póbPAoÍAvQC²® R/Wn*/
        uint8_t reserved0:          3;      /*!<mb<in-house>*TODO*pób\ñ R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_PA_ADJ_T;

/** @brief mType definition for @ref RADIO_CHFIL_BW_CCA_ADR accessb@ref RADIO_CHFIL_BW_CCA_ADR WX^ANZXp ^è`n*/
/** @note mb<in-house>*TODO*póbML7421ÅÍ{WX^ðrbgANZXµÈ¢±Æn */
typedef union{
    struct {
        uint8_t chfil_bw_adj_cca:   7;      /*!<mb<in-house>*TODO*póbCCA`ltB^Ñæ²®Ýè R/Wn*/
        uint8_t chfil_wide_en_cca:  1;      /*!<mb<in-house>*TODO*póbCCA `ltB^LÑæÝè R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_CHFIL_BW_CCA_T;

/** @brief mType definition for @ref RADIO_CHFIL_BW_OPTION_ADR accessb@ref RADIO_CHFIL_BW_OPTION_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t chfil_bw_option:    3;      /*!<mb<in-house>*TODO*pób`ltB^ÑæIvVÝè R/Wn*/
        uint8_t reserved0:          1;      /*!<mb<in-house>*TODO*pób\ñ Rn*/
        uint8_t chfil_bw:           2;      /*!<mb<in-house>*TODO*pób`ltB^Ñæ²®Ýè(ãÊ2rbg) R/Wn*/
        uint8_t chfil_bw_cca:       2;      /*!<mb<in-house>*TODO*póbCCA`ltB^Ñæ²®Ýè(ãÊ2rbg) R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_CHFIL_BW_OPTION_T;

/** @brief mType definition for @ref RADIO_DC_FIL_ADJ2_ADR accessb@ref RADIO_DC_FIL_ADJ2_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t dc_fil_sel_2st:     3;      /*!<mb<in-house>*TODO*póbDCItZbgøÝptB^Ýè R/Wn*/
        uint8_t reserved0:          5;      /*!<mb<in-house>*TODO*pób\ñ Rn*/
    }bits;
    uint8_t byte;
}RADIO_DC_FIL_ADJ2_T;

/** @brief mType definition for @ref RADIO_DEC_GAIN_CCA_ADR accessb@ref RADIO_DEC_GAIN_CCA_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t dec_gain_cca:       5;      /*!<mb<in-house>*TODO*póbCCAfV[VQCÝè R/Wn*/
        uint8_t reserved0:          3;      /*!<mb<in-house>*TODO*pób\ñ Rn*/
    }bits;
    uint8_t byte;
}RADIO_DEC_GAIN_CCA_T;

/** @brief mType definition for @ref RADIO_VCO_CAL_ADR accessb@ref RADIO_VCO_CAL_ADR WX^ANZXp ^è`n*/
/** @note mb<in-house>*TODO*póbML7421ÅÍ{WX^ðrbgANZXµÈ¢±Æn */
typedef union{
    struct {
        uint8_t vco_cal:            7;      /*!<mb<in-house>*TODO*pób»ÝÌVCOügLu[Vl R/Wn*/
        uint8_t cal_wr_en:          1;      /*!<mb<in-house>*TODO*póbVCOLu[V[hÝè R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_VCO_CAL_T;

/** @brief mType definition for @ref RADIO_VCO_CAL_START_ADR accessb@ref RADIO_VCO_CAL_START_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t vco_cal_start:      1;      /*!<mb<in-house>*TODO*póbVCOLu[VÀs R/Wn*/
        uint8_t vco_acal_en:        1;      /*!<mb<in-house>*TODO*póbVCOULu[VÝè R/Wn*/
        uint8_t vco_fcal_en:        1;      /*!<mb<in-house>*TODO*póbVCOügLu[VÝè R/Wn*/
        uint8_t auto_vco_cal_chchg_en:1;    /*!<mb<in-house>*TODO*pób*TODO*TBD R/Wn*/
        uint8_t auto_vco_cal_en:     1;     /*!<mb<in-house>*TODO*pób©®VCOLu[VÀsÝè R/Wn*/
        uint8_t ondemand_fcal_mode:  1;     /*!mb<in-house>*TODO*pób<If}hVCOügLu[V[hÝè R/Wn*/
        uint8_t auto_vco_fcal_en:   1;      /*!mb<in-house>*TODO*pób<©®VCOügLu[VÝè R/Wn*/
        uint8_t cal_wr_en:          1;      /*!<mb<in-house>*TODO*póbVCOügLu[V[hÝè R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_VCO_CAL_START_T;

/** @brief mType definition for @ref RADIO_CLK_CAL_SET_ADR accessb@ref RADIO_CLK_CAL_SET_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t clk_cal_start:      1;      /*!<mb<in-house>*TODO*póbá¬NbNLu[VÀs R/Wn*/
        uint8_t reserved0:          3;      /*!<mb<in-house>*TODO*pób\ñ Rn*/
        uint8_t clk_cal_div:        4;      /*!<mb<in-house>*TODO*póbLu[VpNbNªüÝè R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_CLK_CAL_SET_T;

/** @brief mType definition for @ref RADIO_CLK_CAL_TIME_ADR accessb@ref RADIO_CLK_CAL_TIME_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t clk_cal_time:       6;      /*!<mb<in-house>*TODO*póbNbNLu[VÔÝè R/Wn*/
        uint8_t reserved0:          2;      /*!<mb<in-house>*TODO*pób\ñ Rn*/
    }bits;
    uint8_t byte;
}RADIO_CLK_CAL_TIME_T;

/** @brief mType definition for @ref RADIO_CLK_CAL_H_ADR accessb@ref RADIO_CLK_CAL_H_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t clk_cal_h:          8;      /*!<mb<in-house>*TODO*póbNbNLu[V(ãÊoCg) Rn*/
    }bits;
    uint8_t byte;
}RADIO_CLK_CAL_H_T;

/** @brief mType definition for @ref RADIO_CLK_CAL_L_ADR accessb@ref RADIO_CLK_CAL_L_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t clk_cal_l:          8;      /*!<mb<in-house>*TODO*póbNbNLu[V(ºÊoCg) Rn*/
    }bits;
    uint8_t byte;
}RADIO_CLK_CAL_L_T;

/** @brief mType definition for @ref RADIO_FEC_CTRL_ADR accessb@ref RADIO_FEC_CTRL_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t fec_en:             1;      /*!<mb<in-house>*TODO*póbFECÝè R/Wn*/
        uint8_t fec_scheme:         1;      /*!<mb<in-house>*TODO*póbFECû®Ýè R/Wn*/
        uint8_t intlv_en:           1;      /*!<mb<in-house>*TODO*póbC^[[uÝè R/Wn*/
        uint8_t reserved0:          5;      /*!<mb<in-house>*TODO*pób\ñ Rn*/
    }bits;
    uint8_t byte;
}RADIO_FEC_CTRL_T;

/** @brief mType definition for @ref RADIO_SLEEP_INT_CLR_ADR accessb@ref RADIO_SLEEP_INT_CLR_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t sleep_int_clr:      1;      /*!<mb<in-house>*TODO*póbSLEEPÝNAÝè R/Wn*/
        uint8_t auto_sleep_int_clr: 1;      /*!<mb<in-house>*TODO*pób©®SLEEPèÝNAÝè R/Wn*/
        uint8_t reserved0:          2;      /*!<mb<in-house>*TODO*pób\ñ Rn*/
        uint8_t mstr_clk_sel3:      3;      /*!<mb<in-house>*TODO*póbFREFIðÝè3 */
        uint8_t reserved1:          1;      /*!<mb<in-house>*TODO*pób\ñ Rn*/
    }bits;
    uint8_t byte;
}RADIO_SLEEP_INT_CLR_T;

/** @brief mType definition for @ref RADIO_RF_TEST_MODE_ADR accessb@ref RADIO_RF_TEST_MODE_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t test_en0:           1;      /*!<mb<in-house>*TODO*póbeXg[hCl[u§ä R/Wn*/
        uint8_t test_en1:           1;      /*!<mb<in-house>*TODO*póbPN9oÍÝè R/Wn*/
        uint8_t test_en2:           1;      /*!<mb<in-house>*TODO*póbALLh1hoÍÝè R/Wn*/
        uint8_t test_en3:           1;      /*!<mb<in-house>*TODO*póbALLh0hoÍÝè R/Wn*/
        uint8_t test_en4:           1;      /*!<mb<in-house>*TODO*póbg01hp^[oÍÝè R/Wn*/
        uint8_t test_en5:           1;      /*!<mb<in-house>*TODO*póbCWoÍÝè R/Wn*/
        uint8_t reserved0:          2;      /*!<mb<in-house>*TODO*pób\ñ R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_RF_TEST_MODE_T;

/** @brief mType definition for @ref RADIO_STM_STATE_ADR accessb@ref RADIO_STM_STATE_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t phy_state:          5;      /*!<mb<in-house>*TODO*póbXe[g}VóÔ\¦ Rn*/
        uint8_t sw_det_rslt:        1;      /*!<mb<in-house>*TODO*póbSyncWordoóÔ\¦ Rn*/
        uint8_t sync_state:         1;      /*!<mb<in-house>*TODO*póbóM¯úoóÔ\¦ Rn*/
        uint8_t mode_det_rslt:      1;      /*!<mb<in-house>*TODO*póbMode T/CóMÊ\¦ Rn*/
    }bits;
    uint8_t byte;
}RADIO_STM_STATE_T;

/** @brief mType definition for @ref RADIO_FIFO_SET_ADR accessb@ref RADIO_FIFO_SET_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t txfifo_read_en:     1;      /*!<mb<in-house>*TODO*póbFIFO[hÝè R/Wn*/
        uint8_t fast_cca_lc:        1;      /*!<mb<in-house>*TODO*pób¬dg`FbNÌáÁïdÍ[hÝè R/Wn*/
        uint8_t clkinit_trx_en:     1;      /*!<mb<in-house>*TODO*póbNbNÀèã RF óÔÝèCl[u R/Wn*/
        uint8_t clkinit_trx_set:    1;      /*!<mb<in-house>*TODO*póbNbNÀèã RF óÔÝè R/Wn*/
        uint8_t wht_calc_sel:       1;      /*!<mb<in-house>*TODO*póbWhitening KpÍÍIðÝè R/Wn*/
        uint8_t crc_calc_sel:       1;      /*!<mb<in-house>*TODO*póbCRC ZÍÍIðÝè R/Wn*/
        uint8_t length_sel:         1;      /*!<mb<in-house>*TODO*póbLength ÍÍIðÝè R/Wn*/
        uint8_t wht_lf_en:          1;      /*!<mb<in-house>*TODO*póbWhitening Z LSB/MSB IðÝè R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_FIFO_SET_T;

/** @brief mType definition for @ref RADIO_RX_FIFO_LAST_ADR accessb@ref RADIO_RX_FIFO_LAST_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t rx_ram_last:        8;      /*!<mb<in-house>*TODO*póbóMFIFOf[^gpÊ\¦(\¦ÍÍ0`255) Rn*/
    }bits;
    uint8_t byte;
}RADIO_RX_FIFO_LAST_T;

/** @brief mType definition for @ref RADIO_TX_PKT_LEN_H_ADR accessb@ref RADIO_TX_PKT_LEN_H_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t tx_pkt_len_h:       8;      /*!<mb<in-house>*TODO*póbMpPbgLengthlÝè(ãÊoCg) R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_TX_PKT_LEN_H_T;

/** @brief mType definition for @ref RADIO_TX_PKT_LEN_L_ADR accessb@ref RADIO_TX_PKT_LEN_L_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t tx_pkt_len_l:       8;      /*!<mb<in-house>*TODO*póbÝèpPbgLengthlÝè(ºÊoCg) R/Wn*/
    }bits;
    uint8_t byte;
}RADIO_TX_PKT_LEN_L_T;

/** @brief mType definition for @ref RADIO_WR_TX_FIFO_ADR accessb@ref RADIO_WR_TX_FIFO_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t tx_fifo:            8;      /*!<mb<in-house>*TODO*póbMFIFO Wn*/
    }bits;
    uint8_t byte;
}RADIO_WR_TX_FIFO_T;

/** @brief mType definition for @ref RADIO_RX_PKT_LEN_H_ADR accessb@ref RADIO_RX_PKT_LEN_H_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t rx_pkt_len_h:       8;      /*!<mb<in-house>*TODO*póbóMpPbgLengthlÝè/\¦(ãÊoCg) Rn*/
    }bits;
    uint8_t byte;
}RADIO_RX_PKT_LEN_H_T;

/** @brief mType definition for @ref RADIO_RX_PKT_LEN_L_ADR accessb@ref RADIO_RX_PKT_LEN_L_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t rx_pkt_len_l:       8;      /*!<mb<in-house>*TODO*póbóMpPbgLengthlÝè/\¦(ºÊoCg) Rn*/
    }bits;
    uint8_t byte;
}RADIO_RX_PKT_LEN_L_T;

/** @brief mType definition for @ref RADIO_RD_FIFO_ADR accessb@ref RADIO_RD_FIFO_ADR WX^ANZXp ^è`n*/
typedef union{
    struct {
        uint8_t rd_fifo:            8;      /*!<mb<in-house>*TODO*póbFIFO[h Rn*/
    }bits;
    uint8_t byte;
}RADIO_RD_FIFO_T;

/** \} */ /* End of group RF_REGISTER_BANK0 */

#endif
