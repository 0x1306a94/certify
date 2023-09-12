#ifndef BOOST_CERTIFY_DETAIL_KEYSTORE_ANDROID
#define BOOST_CERTIFY_DETAIL_KEYSTORE_ANDROID

#include <jni.h>
#include <openssl/x509_vfy.h>
#include <string>

namespace boost
{
namespace certify
{
namespace detail
{

BOOST_CERTIFY_DECL bool
android_verify_certificate_callback(::X509_STORE_CTX* ctx);
BOOST_CERTIFY_DECL bool
verify_certificate_chain(::X509_STORE_CTX* ctx)
{
    return android_verify_certificate_callback(ctx);
}

} // namespace detail
} // namespace certify
} // namespace boost

#endif // BOOST_CERTIFY_DETAIL_KEYSTORE_ANDROID
