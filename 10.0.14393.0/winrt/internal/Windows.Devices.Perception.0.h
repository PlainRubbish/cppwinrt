// C++ for the Windows Runtime v1.0.170303.6
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace ABI::Windows::Devices::Perception {

struct IKnownCameraIntrinsicsPropertiesStatics;
struct IKnownPerceptionColorFrameSourcePropertiesStatics;
struct IKnownPerceptionDepthFrameSourcePropertiesStatics;
struct IKnownPerceptionFrameSourcePropertiesStatics;
struct IKnownPerceptionFrameSourcePropertiesStatics2;
struct IKnownPerceptionInfraredFrameSourcePropertiesStatics;
struct IKnownPerceptionVideoFrameSourcePropertiesStatics;
struct IKnownPerceptionVideoProfilePropertiesStatics;
struct IPerceptionColorFrame;
struct IPerceptionColorFrameArrivedEventArgs;
struct IPerceptionColorFrameReader;
struct IPerceptionColorFrameSource;
struct IPerceptionColorFrameSource2;
struct IPerceptionColorFrameSourceAddedEventArgs;
struct IPerceptionColorFrameSourceRemovedEventArgs;
struct IPerceptionColorFrameSourceStatics;
struct IPerceptionColorFrameSourceWatcher;
struct IPerceptionControlSession;
struct IPerceptionDepthCorrelatedCameraIntrinsics;
struct IPerceptionDepthCorrelatedCoordinateMapper;
struct IPerceptionDepthFrame;
struct IPerceptionDepthFrameArrivedEventArgs;
struct IPerceptionDepthFrameReader;
struct IPerceptionDepthFrameSource;
struct IPerceptionDepthFrameSource2;
struct IPerceptionDepthFrameSourceAddedEventArgs;
struct IPerceptionDepthFrameSourceRemovedEventArgs;
struct IPerceptionDepthFrameSourceStatics;
struct IPerceptionDepthFrameSourceWatcher;
struct IPerceptionFrameSourcePropertiesChangedEventArgs;
struct IPerceptionFrameSourcePropertyChangeResult;
struct IPerceptionInfraredFrame;
struct IPerceptionInfraredFrameArrivedEventArgs;
struct IPerceptionInfraredFrameReader;
struct IPerceptionInfraredFrameSource;
struct IPerceptionInfraredFrameSource2;
struct IPerceptionInfraredFrameSourceAddedEventArgs;
struct IPerceptionInfraredFrameSourceRemovedEventArgs;
struct IPerceptionInfraredFrameSourceStatics;
struct IPerceptionInfraredFrameSourceWatcher;
struct IPerceptionVideoProfile;
struct PerceptionColorFrame;
struct PerceptionColorFrameArrivedEventArgs;
struct PerceptionColorFrameReader;
struct PerceptionColorFrameSource;
struct PerceptionColorFrameSourceAddedEventArgs;
struct PerceptionColorFrameSourceRemovedEventArgs;
struct PerceptionColorFrameSourceWatcher;
struct PerceptionControlSession;
struct PerceptionDepthCorrelatedCameraIntrinsics;
struct PerceptionDepthCorrelatedCoordinateMapper;
struct PerceptionDepthFrame;
struct PerceptionDepthFrameArrivedEventArgs;
struct PerceptionDepthFrameReader;
struct PerceptionDepthFrameSource;
struct PerceptionDepthFrameSourceAddedEventArgs;
struct PerceptionDepthFrameSourceRemovedEventArgs;
struct PerceptionDepthFrameSourceWatcher;
struct PerceptionFrameSourcePropertiesChangedEventArgs;
struct PerceptionFrameSourcePropertyChangeResult;
struct PerceptionInfraredFrame;
struct PerceptionInfraredFrameArrivedEventArgs;
struct PerceptionInfraredFrameReader;
struct PerceptionInfraredFrameSource;
struct PerceptionInfraredFrameSourceAddedEventArgs;
struct PerceptionInfraredFrameSourceRemovedEventArgs;
struct PerceptionInfraredFrameSourceWatcher;
struct PerceptionVideoProfile;

}

namespace Windows::Devices::Perception {

struct IKnownCameraIntrinsicsPropertiesStatics;
struct IKnownPerceptionColorFrameSourcePropertiesStatics;
struct IKnownPerceptionDepthFrameSourcePropertiesStatics;
struct IKnownPerceptionFrameSourcePropertiesStatics;
struct IKnownPerceptionFrameSourcePropertiesStatics2;
struct IKnownPerceptionInfraredFrameSourcePropertiesStatics;
struct IKnownPerceptionVideoFrameSourcePropertiesStatics;
struct IKnownPerceptionVideoProfilePropertiesStatics;
struct IPerceptionColorFrame;
struct IPerceptionColorFrameArrivedEventArgs;
struct IPerceptionColorFrameReader;
struct IPerceptionColorFrameSource;
struct IPerceptionColorFrameSource2;
struct IPerceptionColorFrameSourceAddedEventArgs;
struct IPerceptionColorFrameSourceRemovedEventArgs;
struct IPerceptionColorFrameSourceStatics;
struct IPerceptionColorFrameSourceWatcher;
struct IPerceptionControlSession;
struct IPerceptionDepthCorrelatedCameraIntrinsics;
struct IPerceptionDepthCorrelatedCoordinateMapper;
struct IPerceptionDepthFrame;
struct IPerceptionDepthFrameArrivedEventArgs;
struct IPerceptionDepthFrameReader;
struct IPerceptionDepthFrameSource;
struct IPerceptionDepthFrameSource2;
struct IPerceptionDepthFrameSourceAddedEventArgs;
struct IPerceptionDepthFrameSourceRemovedEventArgs;
struct IPerceptionDepthFrameSourceStatics;
struct IPerceptionDepthFrameSourceWatcher;
struct IPerceptionFrameSourcePropertiesChangedEventArgs;
struct IPerceptionFrameSourcePropertyChangeResult;
struct IPerceptionInfraredFrame;
struct IPerceptionInfraredFrameArrivedEventArgs;
struct IPerceptionInfraredFrameReader;
struct IPerceptionInfraredFrameSource;
struct IPerceptionInfraredFrameSource2;
struct IPerceptionInfraredFrameSourceAddedEventArgs;
struct IPerceptionInfraredFrameSourceRemovedEventArgs;
struct IPerceptionInfraredFrameSourceStatics;
struct IPerceptionInfraredFrameSourceWatcher;
struct IPerceptionVideoProfile;
struct KnownCameraIntrinsicsProperties;
struct KnownPerceptionColorFrameSourceProperties;
struct KnownPerceptionDepthFrameSourceProperties;
struct KnownPerceptionFrameSourceProperties;
struct KnownPerceptionInfraredFrameSourceProperties;
struct KnownPerceptionVideoFrameSourceProperties;
struct KnownPerceptionVideoProfileProperties;
struct PerceptionColorFrame;
struct PerceptionColorFrameArrivedEventArgs;
struct PerceptionColorFrameReader;
struct PerceptionColorFrameSource;
struct PerceptionColorFrameSourceAddedEventArgs;
struct PerceptionColorFrameSourceRemovedEventArgs;
struct PerceptionColorFrameSourceWatcher;
struct PerceptionControlSession;
struct PerceptionDepthCorrelatedCameraIntrinsics;
struct PerceptionDepthCorrelatedCoordinateMapper;
struct PerceptionDepthFrame;
struct PerceptionDepthFrameArrivedEventArgs;
struct PerceptionDepthFrameReader;
struct PerceptionDepthFrameSource;
struct PerceptionDepthFrameSourceAddedEventArgs;
struct PerceptionDepthFrameSourceRemovedEventArgs;
struct PerceptionDepthFrameSourceWatcher;
struct PerceptionFrameSourcePropertiesChangedEventArgs;
struct PerceptionFrameSourcePropertyChangeResult;
struct PerceptionInfraredFrame;
struct PerceptionInfraredFrameArrivedEventArgs;
struct PerceptionInfraredFrameReader;
struct PerceptionInfraredFrameSource;
struct PerceptionInfraredFrameSourceAddedEventArgs;
struct PerceptionInfraredFrameSourceRemovedEventArgs;
struct PerceptionInfraredFrameSourceWatcher;
struct PerceptionVideoProfile;

}

namespace Windows::Devices::Perception {

template <typename T> struct impl_IKnownCameraIntrinsicsPropertiesStatics;
template <typename T> struct impl_IKnownPerceptionColorFrameSourcePropertiesStatics;
template <typename T> struct impl_IKnownPerceptionDepthFrameSourcePropertiesStatics;
template <typename T> struct impl_IKnownPerceptionFrameSourcePropertiesStatics;
template <typename T> struct impl_IKnownPerceptionFrameSourcePropertiesStatics2;
template <typename T> struct impl_IKnownPerceptionInfraredFrameSourcePropertiesStatics;
template <typename T> struct impl_IKnownPerceptionVideoFrameSourcePropertiesStatics;
template <typename T> struct impl_IKnownPerceptionVideoProfilePropertiesStatics;
template <typename T> struct impl_IPerceptionColorFrame;
template <typename T> struct impl_IPerceptionColorFrameArrivedEventArgs;
template <typename T> struct impl_IPerceptionColorFrameReader;
template <typename T> struct impl_IPerceptionColorFrameSource;
template <typename T> struct impl_IPerceptionColorFrameSource2;
template <typename T> struct impl_IPerceptionColorFrameSourceAddedEventArgs;
template <typename T> struct impl_IPerceptionColorFrameSourceRemovedEventArgs;
template <typename T> struct impl_IPerceptionColorFrameSourceStatics;
template <typename T> struct impl_IPerceptionColorFrameSourceWatcher;
template <typename T> struct impl_IPerceptionControlSession;
template <typename T> struct impl_IPerceptionDepthCorrelatedCameraIntrinsics;
template <typename T> struct impl_IPerceptionDepthCorrelatedCoordinateMapper;
template <typename T> struct impl_IPerceptionDepthFrame;
template <typename T> struct impl_IPerceptionDepthFrameArrivedEventArgs;
template <typename T> struct impl_IPerceptionDepthFrameReader;
template <typename T> struct impl_IPerceptionDepthFrameSource;
template <typename T> struct impl_IPerceptionDepthFrameSource2;
template <typename T> struct impl_IPerceptionDepthFrameSourceAddedEventArgs;
template <typename T> struct impl_IPerceptionDepthFrameSourceRemovedEventArgs;
template <typename T> struct impl_IPerceptionDepthFrameSourceStatics;
template <typename T> struct impl_IPerceptionDepthFrameSourceWatcher;
template <typename T> struct impl_IPerceptionFrameSourcePropertiesChangedEventArgs;
template <typename T> struct impl_IPerceptionFrameSourcePropertyChangeResult;
template <typename T> struct impl_IPerceptionInfraredFrame;
template <typename T> struct impl_IPerceptionInfraredFrameArrivedEventArgs;
template <typename T> struct impl_IPerceptionInfraredFrameReader;
template <typename T> struct impl_IPerceptionInfraredFrameSource;
template <typename T> struct impl_IPerceptionInfraredFrameSource2;
template <typename T> struct impl_IPerceptionInfraredFrameSourceAddedEventArgs;
template <typename T> struct impl_IPerceptionInfraredFrameSourceRemovedEventArgs;
template <typename T> struct impl_IPerceptionInfraredFrameSourceStatics;
template <typename T> struct impl_IPerceptionInfraredFrameSourceWatcher;
template <typename T> struct impl_IPerceptionVideoProfile;

}

namespace Windows::Devices::Perception {

enum class PerceptionFrameSourceAccessStatus
{
    Unspecified = 0,
    Allowed = 1,
    DeniedByUser = 2,
    DeniedBySystem = 3,
};

enum class PerceptionFrameSourcePropertyChangeStatus
{
    Unknown = 0,
    Accepted = 1,
    LostControl = 2,
    PropertyNotSupported = 3,
    PropertyReadOnly = 4,
    ValueOutOfRange = 5,
};

}

}
