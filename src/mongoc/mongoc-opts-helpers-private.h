#include <bson.h>
#include "mongoc-client-session-private.h"
#include "mongoc-collection-private.h"
#include "mongoc-write-command-private.h"

#ifndef LIBMONGOC_MONGOC_OPTS_HELPERS_H
#define LIBMONGOC_MONGOC_OPTS_HELPERS_H

#define _mongoc_convert_session_id _mongoc_client_session_from_iter

bool
_mongoc_convert_document (mongoc_client_t *client,
                          const bson_iter_t *iter,
                          bson_t *doc,
                          bson_error_t *error);

bool
_mongoc_convert_array (mongoc_client_t *client,
                       const bson_iter_t *iter,
                       bson_t *doc,
                       bson_error_t *error);

bool
_mongoc_convert_int64_positive (mongoc_client_t *client,
                                const bson_iter_t *iter,
                                int64_t *num,
                                bson_error_t *error);

bool
_mongoc_convert_int32_t (mongoc_client_t *client,
                         const bson_iter_t *iter,
                         int32_t *num,
                         bson_error_t *error);

bool
_mongoc_convert_bool (mongoc_client_t *client,
                      const bson_iter_t *iter,
                      bool *flag,
                      bson_error_t *error);

bool
_mongoc_convert_bson_value_t (mongoc_client_t *client,
                              const bson_iter_t *iter,
                              bson_value_t *value,
                              bson_error_t *error);

bool
_mongoc_convert_utf8 (mongoc_client_t *client,
                      const bson_iter_t *iter,
                      const char **comment,
                      bson_error_t *error);

bool
_mongoc_convert_validate_flags (mongoc_client_t *client,
                                const bson_iter_t *iter,
                                bson_validate_flags_t *flags,
                                bson_error_t *error);

bool
_mongoc_convert_mongoc_write_bypass_document_validation_t (
   mongoc_client_t *client,
   const bson_iter_t *iter,
   mongoc_write_bypass_document_validation_t *bdv,
   bson_error_t *error);

bool
_mongoc_convert_write_concern (mongoc_client_t *client,
                               const bson_iter_t *iter,
                               mongoc_write_concern_t **wc,
                               bson_error_t *error);

bool
_mongoc_convert_server_id (mongoc_client_t *client,
                           const bson_iter_t *iter,
                           uint32_t *server_id,
                           bson_error_t *error);

#endif
