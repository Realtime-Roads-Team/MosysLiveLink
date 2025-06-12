// Copyright 2024 Mo-Sys Engineering Ltd. All Rights Reserved.
#pragma once

#include <cstdlib>

namespace mosys
{
    namespace lens
    {
        // Decrypt a lensfile. Will malloc lensFile to the correct length and return the new size by reference
        bool DecryptLensFile(const char* encryptedData, size_t encryptedDataSize, const char* hardwareId, const char* pin, char* decryptedData, size_t decryptedBufferSize, size_t& decryptedDataSize);
    }
};
