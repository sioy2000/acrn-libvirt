/* virhostdev.h: hostdev management
 *
 * Copyright (C) 2014 SUSE LINUX Products GmbH, Nuernberg, Germany.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library.  If not, see
 * <http://www.gnu.org/licenses/>.
 *
 * Author: Chunyan Liu <cyliu@suse.com>
 */

#ifndef __VIR_HOSTDEV_H__
# define __VIR_HOSTDEV_H__

# include "internal.h"

# include "virpci.h"
# include "virusb.h"
# include "virscsi.h"

typedef struct _virHostdevManager virHostdevManager;
typedef virHostdevManager *virHostdevManagerPtr;
struct _virHostdevManager {
    char *stateDir;

    virPCIDeviceListPtr activePciHostdevs;
    virPCIDeviceListPtr inactivePciHostdevs;
    virUSBDeviceListPtr activeUsbHostdevs;
    virSCSIDeviceListPtr activeScsiHostdevs;
};

virHostdevManagerPtr virHostdevManagerGetDefault(void);

#endif /* __VIR_HOSTDEV_H__ */
