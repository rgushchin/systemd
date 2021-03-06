/* SPDX-License-Identifier: LGPL-2.1+ */
#pragma once

/***
  This file is part of systemd.

  Copyright 2016 Daniel Mack
***/

#include "in-addr-util.h"
#include "list.h"

typedef struct IPAddressAccessItem IPAddressAccessItem;

struct IPAddressAccessItem {
        int family;
        unsigned char prefixlen;
        union in_addr_union address;
        LIST_FIELDS(IPAddressAccessItem, items);
};

int config_parse_ip_address_access(const char *unit, const char *filename, unsigned line, const char *section, unsigned section_line, const char *lvalue, int ltype, const char *rvalue, void *data, void *userdata);

IPAddressAccessItem* ip_address_access_free_all(IPAddressAccessItem *first);

IPAddressAccessItem* ip_address_access_reduce(IPAddressAccessItem *first);
