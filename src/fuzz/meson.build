# SPDX-License-Identifier: LGPL-2.1+
# Copyright 2018 Jonathan Rudenberg

fuzzers += [
        [['src/fuzz/fuzz-dns-packet.c',
          dns_type_headers],
         [libsystemd_resolve_core,
          libshared],
         [libgcrypt,
          libgpg_error,
          libm]],

        [['src/fuzz/fuzz-dhcp-server.c'],
         [libsystemd_network,
          libshared],
         []],

        [['src/fuzz/fuzz-unit-file.c'],
         [libcore,
          libshared],
         [libmount]],
]
