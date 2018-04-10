// Namespaced Header

#ifndef __NS_SYMBOL
// We need to have multiple levels of macros here so that __NAMESPACE_PREFIX_ is
// properly replaced by the time we concatenate the namespace prefix.
#define __NS_REWRITE(ns, symbol) ns ## _ ## symbol
#define __NS_BRIDGE(ns, symbol) __NS_REWRITE(ns, symbol)
#define __NS_SYMBOL(symbol) __NS_BRIDGE(SCV_, symbol)
#endif


// Classes
#ifndef SCFAutoPurgeCache
#define SCFAutoPurgeCache __NS_SYMBOL(SCFAutoPurgeCache)
#endif

#ifndef SCFSDImageCache
#define SCFSDImageCache __NS_SYMBOL(SCFSDImageCache)
#endif

#ifndef SCFSDWebImageCombinedOperation
#define SCFSDWebImageCombinedOperation __NS_SYMBOL(SCFSDWebImageCombinedOperation)
#endif

#ifndef SCFSDWebImageDownloader
#define SCFSDWebImageDownloader __NS_SYMBOL(SCFSDWebImageDownloader)
#endif

#ifndef SCFSDWebImageDownloaderOperation
#define SCFSDWebImageDownloaderOperation __NS_SYMBOL(SCFSDWebImageDownloaderOperation)
#endif

#ifndef SCFSDWebImageManager
#define SCFSDWebImageManager __NS_SYMBOL(SCFSDWebImageManager)
#endif

#ifndef SCFSDWebImagePrefetcher
#define SCFSDWebImagePrefetcher __NS_SYMBOL(SCFSDWebImagePrefetcher)
#endif

#ifndef SLKInputAccessoryView
#define SLKInputAccessoryView __NS_SYMBOL(SLKInputAccessoryView)
#endif

#ifndef SLKTextInputbar
#define SLKTextInputbar __NS_SYMBOL(SLKTextInputbar)
#endif

#ifndef SLKTextView
#define SLKTextView __NS_SYMBOL(SLKTextView)
#endif

#ifndef SLKTextViewController
#define SLKTextViewController __NS_SYMBOL(SLKTextViewController)
#endif

#ifndef SLKTypingIndicatorView
#define SLKTypingIndicatorView __NS_SYMBOL(SLKTypingIndicatorView)
#endif

// Functions
#ifndef ImageDataHasPNGPreffix
#define ImageDataHasPNGPreffix __NS_SYMBOL(ImageDataHasPNGPreffix)
#endif

#ifndef NSStringFromSLKPastableMediaType
#define NSStringFromSLKPastableMediaType __NS_SYMBOL(NSStringFromSLKPastableMediaType)
#endif

#ifndef SDScaledImageForKey
#define SDScaledImageForKey __NS_SYMBOL(SDScaledImageForKey)
#endif

#ifndef SLKPastableMediaTypeFromNSString
#define SLKPastableMediaTypeFromNSString __NS_SYMBOL(SLKPastableMediaTypeFromNSString)
#endif

#ifndef ImageDataHasPNGPreffix
#define ImageDataHasPNGPreffix __NS_SYMBOL(ImageDataHasPNGPreffix)
#endif

#ifndef NSStringFromSLKPastableMediaType
#define NSStringFromSLKPastableMediaType __NS_SYMBOL(NSStringFromSLKPastableMediaType)
#endif

#ifndef SDScaledImageForKey
#define SDScaledImageForKey __NS_SYMBOL(SDScaledImageForKey)
#endif

#ifndef SLKPastableMediaTypeFromNSString
#define SLKPastableMediaTypeFromNSString __NS_SYMBOL(SLKPastableMediaTypeFromNSString)
#endif

// Externs
#ifndef SDWebImageDownloadFinishNotification
#define SDWebImageDownloadFinishNotification __NS_SYMBOL(SDWebImageDownloadFinishNotification)
#endif

#ifndef SDWebImageDownloadReceiveResponseNotification
#define SDWebImageDownloadReceiveResponseNotification __NS_SYMBOL(SDWebImageDownloadReceiveResponseNotification)
#endif

#ifndef SDWebImageDownloadStartNotification
#define SDWebImageDownloadStartNotification __NS_SYMBOL(SDWebImageDownloadStartNotification)
#endif

#ifndef SDWebImageDownloadStopNotification
#define SDWebImageDownloadStopNotification __NS_SYMBOL(SDWebImageDownloadStopNotification)
#endif

#ifndef SDWebImageErrorDomain
#define SDWebImageErrorDomain __NS_SYMBOL(SDWebImageErrorDomain)
#endif

#ifndef SLKAutoCompletionViewDefaultHeight
#define SLKAutoCompletionViewDefaultHeight __NS_SYMBOL(SLKAutoCompletionViewDefaultHeight)
#endif

#ifndef SLKKeyboardDidHideNotification
#define SLKKeyboardDidHideNotification __NS_SYMBOL(SLKKeyboardDidHideNotification)
#endif

#ifndef SLKKeyboardDidShowNotification
#define SLKKeyboardDidShowNotification __NS_SYMBOL(SLKKeyboardDidShowNotification)
#endif

#ifndef SLKKeyboardWillHideNotification
#define SLKKeyboardWillHideNotification __NS_SYMBOL(SLKKeyboardWillHideNotification)
#endif

#ifndef SLKKeyboardWillShowNotification
#define SLKKeyboardWillShowNotification __NS_SYMBOL(SLKKeyboardWillShowNotification)
#endif

#ifndef SLKTextInputbarDidMoveNotification
#define SLKTextInputbarDidMoveNotification __NS_SYMBOL(SLKTextInputbarDidMoveNotification)
#endif

#ifndef SLKTextViewContentSizeDidChangeNotification
#define SLKTextViewContentSizeDidChangeNotification __NS_SYMBOL(SLKTextViewContentSizeDidChangeNotification)
#endif

#ifndef SLKTextViewDidPasteItemNotification
#define SLKTextViewDidPasteItemNotification __NS_SYMBOL(SLKTextViewDidPasteItemNotification)
#endif

#ifndef SLKTextViewDidShakeNotification
#define SLKTextViewDidShakeNotification __NS_SYMBOL(SLKTextViewDidShakeNotification)
#endif

#ifndef SLKTextViewPastedItemContentType
#define SLKTextViewPastedItemContentType __NS_SYMBOL(SLKTextViewPastedItemContentType)
#endif

#ifndef SLKTextViewPastedItemData
#define SLKTextViewPastedItemData __NS_SYMBOL(SLKTextViewPastedItemData)
#endif

#ifndef SLKTextViewPastedItemMediaType
#define SLKTextViewPastedItemMediaType __NS_SYMBOL(SLKTextViewPastedItemMediaType)
#endif

#ifndef SLKTextViewSelectedRangeDidChangeNotification
#define SLKTextViewSelectedRangeDidChangeNotification __NS_SYMBOL(SLKTextViewSelectedRangeDidChangeNotification)
#endif

#ifndef SLKTextViewTextWillChangeNotification
#define SLKTextViewTextWillChangeNotification __NS_SYMBOL(SLKTextViewTextWillChangeNotification)
#endif

#ifndef SDWebImageDownloadFinishNotification
#define SDWebImageDownloadFinishNotification __NS_SYMBOL(SDWebImageDownloadFinishNotification)
#endif

#ifndef SDWebImageDownloadReceiveResponseNotification
#define SDWebImageDownloadReceiveResponseNotification __NS_SYMBOL(SDWebImageDownloadReceiveResponseNotification)
#endif

#ifndef SDWebImageDownloadStartNotification
#define SDWebImageDownloadStartNotification __NS_SYMBOL(SDWebImageDownloadStartNotification)
#endif

#ifndef SDWebImageDownloadStopNotification
#define SDWebImageDownloadStopNotification __NS_SYMBOL(SDWebImageDownloadStopNotification)
#endif

#ifndef SDWebImageErrorDomain
#define SDWebImageErrorDomain __NS_SYMBOL(SDWebImageErrorDomain)
#endif

#ifndef SLKAutoCompletionViewDefaultHeight
#define SLKAutoCompletionViewDefaultHeight __NS_SYMBOL(SLKAutoCompletionViewDefaultHeight)
#endif

#ifndef SLKKeyboardDidHideNotification
#define SLKKeyboardDidHideNotification __NS_SYMBOL(SLKKeyboardDidHideNotification)
#endif

#ifndef SLKKeyboardDidShowNotification
#define SLKKeyboardDidShowNotification __NS_SYMBOL(SLKKeyboardDidShowNotification)
#endif

#ifndef SLKKeyboardWillHideNotification
#define SLKKeyboardWillHideNotification __NS_SYMBOL(SLKKeyboardWillHideNotification)
#endif

#ifndef SLKKeyboardWillShowNotification
#define SLKKeyboardWillShowNotification __NS_SYMBOL(SLKKeyboardWillShowNotification)
#endif

#ifndef SLKTextInputbarDidMoveNotification
#define SLKTextInputbarDidMoveNotification __NS_SYMBOL(SLKTextInputbarDidMoveNotification)
#endif

#ifndef SLKTextViewContentSizeDidChangeNotification
#define SLKTextViewContentSizeDidChangeNotification __NS_SYMBOL(SLKTextViewContentSizeDidChangeNotification)
#endif

#ifndef SLKTextViewDidPasteItemNotification
#define SLKTextViewDidPasteItemNotification __NS_SYMBOL(SLKTextViewDidPasteItemNotification)
#endif

#ifndef SLKTextViewDidShakeNotification
#define SLKTextViewDidShakeNotification __NS_SYMBOL(SLKTextViewDidShakeNotification)
#endif

#ifndef SLKTextViewPastedItemContentType
#define SLKTextViewPastedItemContentType __NS_SYMBOL(SLKTextViewPastedItemContentType)
#endif

#ifndef SLKTextViewPastedItemData
#define SLKTextViewPastedItemData __NS_SYMBOL(SLKTextViewPastedItemData)
#endif

#ifndef SLKTextViewPastedItemMediaType
#define SLKTextViewPastedItemMediaType __NS_SYMBOL(SLKTextViewPastedItemMediaType)
#endif

#ifndef SLKTextViewSelectedRangeDidChangeNotification
#define SLKTextViewSelectedRangeDidChangeNotification __NS_SYMBOL(SLKTextViewSelectedRangeDidChangeNotification)
#endif

#ifndef SLKTextViewTextWillChangeNotification
#define SLKTextViewTextWillChangeNotification __NS_SYMBOL(SLKTextViewTextWillChangeNotification)
#endif
