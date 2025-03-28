#pragma once

#include <Geode/DefaultInclude.hpp>
#include <jni.h>

namespace geode::utils::BluetoothLE {
    void GEODE_DLL setOnScanResultCallback(std::function<void(jobject)> callback);
    void GEODE_DLL setOnConnectionStateChangeCallback(std::function<void(jobject, jint, jint)> callback);
    void GEODE_DLL setOnServicesDiscoveredCallback(std::function<void(jobject, jint)> callback);
    void GEODE_DLL setOnCharacteristicReadCallback(std::function<void(jobject, jobject, jbyteArray, jint)> callback);
    void GEODE_DLL setOnCharacteristicChangedCallback(std::function<void(jobject, jobject, jbyteArray)> callback);
}
