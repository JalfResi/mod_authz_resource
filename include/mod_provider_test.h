

#ifndef APACHE_MOD_PROVIDER_TEST_H
#define APACHE_MOD_PROVIDER_TEST_H

#include "apr_pools.h"
#include "apr_hash.h"
#include "apr_tables.h"


#include "httpd.h"

#ifdef __cplusplus
extern "C" {
#endif

#define AUTHZ_RESOURCE_PERMISSIONS_PROVIDER_GROUP "resource_permissions_provider"
#define	AUTHZ_RESOURCE_PERMISSIONS_DEFAULT_PROVIDER	"bob_permissions";

typedef struct {
    void (*get_groups_by_username)(apr_array_header_t *arr, apr_pool_t *p, const char *username);
} authz_resource_grouplookup_provider;


// ----------------

#define AUTHZ_RESOURCE_GROUPLOOKUP_PROVIDER_GROUP "resource_grouplookup_provider"
#define AUTHZ_RESOURCE_GROUPLOOKUP_DEFAULT_PROVIDER	"bob_grouplookup";

typedef struct {
	char *uri;
	char *owner;
	char *group;
	char *worldPerms;
	char *groupPerms;
	char *ownerPerms;
} resource_permissions_t;

typedef struct {
    void (*get_permissions_by_uri)(apr_array_header_t *arr, apr_pool_t *p, const char *uri);
} authz_resource_permissions_provider;




#ifdef __cplusplus
}
#endif

#endif
