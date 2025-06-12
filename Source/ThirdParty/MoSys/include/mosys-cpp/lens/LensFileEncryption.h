// Copyright 2024 Mo-Sys Engineering Ltd. All Rights Reserved.

#pragma once

#include <string>
#include <vector>

/** IMPORTANT NOTE - this is not intended for generic encryption. It is for lens files only and
 *  is vulnerable to:
 *  - Cases where attacker can choose the plaintext.
 *  - Cases where algorithm is known, and some fields of the key are known.
 *  - Cases where need to know if file is corrupted.
 *  - Many other cases we are ignorant of
 *
 *  In the future this may also split into....
 *  - A public key encryption part.... includes version IV and encrypted data.
 *  - A private key part... generate AES key, and if necessary include asymetric enrypted data to support.
 *
 *  Here's a suggestion from stack exchange for file encryption:
 *    https://crypto.stackexchange.com/questions/66387/what-is-a-good-aes-mode-to-use-on-file-encryption
 **/

namespace mosys {

/**
 * Lens files can be encrypted for use on one of a list of user's StarTracker to prevent the
 * lens file that was purchased from being used on other StarTrackers or by other users in
 * the Lens Tweaker tool.
 */
class LensFileEncryption
{
public:
    /**
     * Encrypt a lens file with a StarTracker Hardware ID and user PIN
     */
    static bool encrypt(const char* lensFile, std::string hardwareId,
        std::string pin, std::string& encrypted);

    /**
     * Encrypt a lens file with a list of StarTracker Hardware IDs and user PIN
     */
    static bool encrypt(const char* lensFile, std::vector<std::string> hardwareIds,
        std::string pin, std::string &encrypted, bool multithread = true);

    /**
     * Decrypt a lens file with a StarTracker Hardware IDs and user PIN
     */
    static bool decrypt(const char* encrypted, size_t encryptedSize, std::string hardwareId, std::string pin,
        std::string &lensFile, bool multithread = true);
};

} // namespace mosys
