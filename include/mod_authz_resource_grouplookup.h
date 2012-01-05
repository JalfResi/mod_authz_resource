#ifndef APACHE_MOD_AUTHZ_RESOURCE_GROUPLOOKUP_H
#define APACHE_MOD_AUTHZ_RESOURCE_GROUPLOOKUP_H

#include "apr_pools.h"
#include "apr_hash.h"
#include "apr_tables.h"
#include "httpd.h"

#ifdef __cplusplus
extern "C" {
#endif

#define AUTHZ_RESOURCE_GROUPLOOKUP_PROVIDER_GROUP "resource_grouplookup_provider"
#define AUTHZ_RESOURCE_GROUPLOOKUP_DEFAULT_PROVIDER	"file";

typedef struct {
    apr_status_t (*get_groups_by_username)(request_rec *r, apr_table_t ** out);
} authz_resource_grouplookup_provider;

#ifdef __cplusplus
}
#endif

#endif
