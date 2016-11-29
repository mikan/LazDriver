/* phy_lazurite.h - 
 *
 * Copyright (c) 2015  LAPIS Semiconductor Co.,Ltd.
 * All rights reserved.
 *
 * This program is free software: you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation, either version 3 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this program.  If not, see
 * <http://www.gnu.org/licenses/>.
 */

#ifndef _PHY_H_
#define _PHY_H_

typedef struct {
	uint8_t id;
	uint16_t buf_size;
	uint8_t *in;
	uint8_t *out;
} PHY_PARAM;

extern int	phy_init(PHY_PARAM *param);									// 
extern int	phy_start(void);											// rxon
extern int	phy_stop(void);												// rxoff
extern int	phy_xmit_sync(BUFFER buff);									// tx
//extern int	phy_xmit_async(BUFFER buff);								// for linux. does not support
extern int	phy_ed(uint8_t *level);
extern int	phy_set_channel(uint8_t page,uint8_t ch);
extern int	phy_set_hw_addr_filt(struct ieee802154_hw_addr_filt *filt,unsigned long changed);
extern int	phy_set_txpower(uint32_t mbm);
//extern int	phy_set_lbt(struct ieee802154_hw *hw, bool on);				// does not support
extern int	phy_ch_scan(uint32_t duration);				// add 
extern int	phy_set_cca_mode(const struct wpan_phy_cca *cca);
extern int	phy_set_cca_ed_level(uint32_t mbm);
extern int	phy_set_csma_params(uint8_t min_be, uint8_t max_be, uint8_t retries);
extern int	phy_set_frame_retries(int8_t retries);
extern int	phy_set_promiscuous_mode(const bool on);
extern int	phy_rx_irq(BUFFER *rx);

extern int	phy_sleep(bool on);
extern int	get_mac_addr(uint8_t *macaddr);

enum ieee802154_hw_addr_filt_flags {
	IEEE802154_AFILT_SADDR_CHANGED		= BIT(0),
	IEEE802154_AFILT_IEEEADDR_CHANGED	= BIT(1),
	IEEE802154_AFILT_PANID_CHANGED		= BIT(2),
	IEEE802154_AFILT_PANC_CHANGED		= BIT(3),
};
struct ieee802154_hw_addr_filt {
	//	__le16	pan_id;					//  for linux
	//	__le16	short_addr;				// for linux
	//	__le64	ieee_addr;				// for linux
	uint16_t	pan_id;					// for lazurite
	uint16_t	short_addr;				// for lazurite
	uint8_t		ieee_addr[8];			// for lazurite
	bool		pan_coord;				// common
};
/**
 * enum nl802154_cca_modes - cca modes
 *
 * @__NL802154_CCA_INVALID: cca mode number 0 is reserved
 * @NL802154_CCA_ENERGY: Energy above threshold
 * @NL802154_CCA_CARRIER: Carrier sense only
 * @NL802154_CCA_ENERGY_CARRIER: Carrier sense with energy above threshold
 * @NL802154_CCA_ALOHA: CCA shall always report an idle medium
 * @NL802154_CCA_UWB_SHR: UWB preamble sense based on the SHR of a frame
 * @NL802154_CCA_UWB_MULTIPLEXED: UWB preamble sense based on the packet with
 *      the multiplexed preamble
 * @__NL802154_CCA_ATTR_AFTER_LAST: Internal
 * @NL802154_CCA_ATTR_MAX: Maximum CCA attribute number
 */
enum nl802154_cca_modes {
	__NL802154_CCA_INVALID,
	NL802154_CCA_ENERGY,
	NL802154_CCA_CARRIER,
	NL802154_CCA_ENERGY_CARRIER,
	NL802154_CCA_ALOHA,
	NL802154_CCA_UWB_SHR,
	NL802154_CCA_UWB_MULTIPLEXED,

	/* keep last */
	__NL802154_CCA_ATTR_AFTER_LAST,
	NL802154_CCA_ATTR_MAX = __NL802154_CCA_ATTR_AFTER_LAST - 1
};

/**
 * enum nl802154_cca_opts - additional options for cca modes
 *
 * @NL802154_CCA_OPT_ENERGY_CARRIER_OR: NL802154_CCA_ENERGY_CARRIER with OR
 * @NL802154_CCA_OPT_ENERGY_CARRIER_AND: NL802154_CCA_ENERGY_CARRIER with AND
 */
enum nl802154_cca_opts {
	NL802154_CCA_OPT_ENERGY_CARRIER_AND,
	NL802154_CCA_OPT_ENERGY_CARRIER_OR,

	/* keep last */
	__NL802154_CCA_OPT_ATTR_AFTER_LAST,
	NL802154_CCA_OPT_ATTR_MAX = __NL802154_CCA_OPT_ATTR_AFTER_LAST - 1
};
struct wpan_phy_cca {
	enum nl802154_cca_modes mode;
	enum nl802154_cca_opts opt;
};

#endif