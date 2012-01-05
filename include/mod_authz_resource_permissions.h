#ifndef APACHE_MOD_AUTHZ_RESOURCE_PERMISSIONS_H
#define APACHE_MOD_AUTHZ_RESOURCE_PERMISSIONS_H

#include "apr_pools.h"
#include "apr_hash.h"
#include "apr_tables.h"
#include "httpd.h"

#ifdef __cplusplus
extern "C" {
#endif

#define AUTHZ_RESOURCE_PERMISSIONS_PROVIDER_GROUP "resource_permissions_provider"
#define	AUTHZ_RESOURCE_PERMISSIONS_DEFAULT_PROVIDER	"file";

typedef struct resource_permissions_t resource_permissions_t;

struct resource_permissions_t {
	char *uri;
	char *owner;
	char *group;
	apr_table_t *ownerPerms;
	apr_table_t *groupPerms;
	apr_table_t *worldPerms;
};

typedef struct {
	apr_status_t (*get_permissions_by_uri)(request_rec *r, char *uri, resource_permissions_t ** out);
} authz_resource_permissions_provider;



#ifdef __cplusplus
}
#endif

#endif
