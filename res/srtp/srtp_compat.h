#ifndef AST_SRTP_COMPAT_H
#define AST_SRTP_COMPAT_H

/* Compatibility for libsrtp 2.x */

#define crypto_policy_t srtp_crypto_policy_t

#if defined(SRTP_AES_ICM_128)
#define AES_128_ICM SRTP_AES_ICM_128
#else
#define AES_128_ICM SRTP_AES_ICM
#endif
#define HMAC_SHA1 SRTP_HMAC_SHA1

#define err_status_t srtp_err_status_t
#define err_status_ok srtp_err_status_ok
#define err_status_fail srtp_err_status_fail
#define err_status_bad_param srtp_err_status_bad_param
#define err_status_alloc_fail srtp_err_status_alloc_fail
#define err_status_dealloc_fail srtp_err_status_dealloc_fail
#define err_status_init_fail srtp_err_status_init_fail
#define err_status_terminus srtp_err_status_terminus
#define err_status_auth_fail srtp_err_status_auth_fail
#define err_status_cipher_fail srtp_err_status_cipher_fail
#define err_status_replay_fail srtp_err_status_replay_fail
#define err_status_replay_old srtp_err_status_replay_old
#define err_status_algo_fail srtp_err_status_algo_fail
#define err_status_no_such_op srtp_err_status_no_such_op
#define err_status_no_ctx srtp_err_status_no_ctx
#define err_status_cant_check srtp_err_status_cant_check
#define err_status_key_expired srtp_err_status_key_expired

#endif /* AST_SRTP_COMPAT_H */
