// Copyright 2024 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include <functional>

namespace mosys {

    class MoSysAuth
    {
    public:
        typedef std::function<bool(int, const char*)> AuthCallback;

        static MoSysAuth& instance();
        ~MoSysAuth();

        // auth server
        void isAuthAvailable(AuthCallback callback);
        void getAccessToken(const char* username, const char* password, AuthCallback callback);
        void getRefreshToken(const char* oldToken, AuthCallback callback);
        void getUserDetails(const char* accessToken, AuthCallback callback);
        void seenMotd(const char* accessToken, AuthCallback callback);
        void reserveLicense(const char* accessToken, const char* product, const char* permission,
            const char* machineName, const char* osId, AuthCallback callback);
        void releaseLicense(const char* accessToken, const char* product, const char* permission,
            const char* machineName, const char* osId, AuthCallback callback);

        const char* getRootURL();
        const char* getClientIDForURL(const char* URL);
        const char* getClientSecretForURL(const char* URL);

        // decryptedSize is the expected size of the decrypted ID. decrypted should be allocated to this size + 1 for the null termination. key must be 16 bytes
        bool decryptId(const unsigned char* encrypted, const size_t encryptedSize, const char* key, char* decrypted, const size_t decryptedSize);
        // key must be 16 bytes
        bool encryptId(const char* id, const char* key, unsigned char* encryptedData, size_t& encryptedSize);

        // any mo-sys server
        /// \todo should these be in their respective service rest instances (CCSRest + LensRest etc)?
        void convertAccessToken(const char* mosysServiceURL, const char* token, AuthCallback callback);
        void isServiceAvailable(const char* mosysServiceURL, AuthCallback callback);

    private:
        class Rest& rest;
        void licenseHelper(const char* endpoint, const char* accessToken, const char* product,
            const char* permission, const char* machineName, const char* osId, AuthCallback callback, bool sendVersion = false);

        const char* AUTH_URL;
        const char* AUTH_CLIENT_ID;
        const char* AUTH_CLIENT_SECRET;
        const char* NTR_ID;
        const char* NTR_SECRET;
        const char* LENS_ID;
        const char* LENS_SECRET;

    // ensure that only 1 object of this class can exist
    private:
        MoSysAuth();

    public:
        MoSysAuth(MoSysAuth const &) = delete;
        MoSysAuth(MoSysAuth &&) = delete;
        MoSysAuth& operator=(MoSysAuth const &) = delete;
        MoSysAuth& operator=(MoSysAuth &&) = delete;
    };
};
