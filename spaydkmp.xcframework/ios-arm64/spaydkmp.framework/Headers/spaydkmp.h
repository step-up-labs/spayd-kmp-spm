#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class Spaydkmp__SkieTypeExportsKt, Spaydkmp__SkieSuspendWrappersKt, SpaydkmpValidationException, SpaydkmpUShort, SpaydkmpULong, SpaydkmpUInt, SpaydkmpUByte, SpaydkmpTransformer, SpaydkmpSpaydCompanion, SpaydkmpSpayd, SpaydkmpSkie_SuspendResultSuccess, SpaydkmpSkie_SuspendResultError, SpaydkmpSkie_SuspendResultCanceled, SpaydkmpSkie_SuspendResult, SpaydkmpSkie_SuspendHandler, SpaydkmpSkie_CancellationHandler, SpaydkmpSkieKotlinStateFlow<T>, SpaydkmpSkieKotlinSharedFlow<T>, SpaydkmpSkieKotlinOptionalStateFlow<T>, SpaydkmpSkieKotlinOptionalSharedFlow<T>, SpaydkmpSkieKotlinOptionalMutableStateFlow<T>, SpaydkmpSkieKotlinOptionalMutableSharedFlow<T>, SpaydkmpSkieKotlinOptionalFlow<T>, SpaydkmpSkieKotlinMutableStateFlow<T>, SpaydkmpSkieKotlinMutableSharedFlow<T>, SpaydkmpSkieKotlinFlow<T>, SpaydkmpSkieColdFlowIterator<E>, SpaydkmpShort, SpaydkmpParserStateMachineCompanion, SpaydkmpParserStateMachine, SpaydkmpNumber, SpaydkmpNotificationType, SpaydkmpMutableSet<ObjectType>, SpaydkmpMutableDictionary<KeyType, ObjectType>, SpaydkmpLong, SpaydkmpKotlinx_serialization_coreStructureKindOBJECT, SpaydkmpKotlinx_serialization_coreStructureKindMAP, SpaydkmpKotlinx_serialization_coreStructureKindLIST, SpaydkmpKotlinx_serialization_coreStructureKindCLASS, SpaydkmpKotlinx_serialization_coreStructureKind, SpaydkmpKotlinx_serialization_coreSerializersModule, SpaydkmpKotlinx_serialization_coreSerialKindENUM, SpaydkmpKotlinx_serialization_coreSerialKindCONTEXTUAL, SpaydkmpKotlinx_serialization_coreSerialKind, SpaydkmpKotlinx_serialization_corePrimitiveKindSTRING, SpaydkmpKotlinx_serialization_corePrimitiveKindSHORT, SpaydkmpKotlinx_serialization_corePrimitiveKindLONG, SpaydkmpKotlinx_serialization_corePrimitiveKindINT, SpaydkmpKotlinx_serialization_corePrimitiveKindFLOAT, SpaydkmpKotlinx_serialization_corePrimitiveKindDOUBLE, SpaydkmpKotlinx_serialization_corePrimitiveKindCHAR, SpaydkmpKotlinx_serialization_corePrimitiveKindBYTE, SpaydkmpKotlinx_serialization_corePrimitiveKindBOOLEAN, SpaydkmpKotlinx_serialization_corePrimitiveKind, SpaydkmpKotlinx_serialization_corePolymorphicKindSEALED, SpaydkmpKotlinx_serialization_corePolymorphicKindOPEN, SpaydkmpKotlinx_serialization_corePolymorphicKind, SpaydkmpKotlinx_datetimePadding, SpaydkmpKotlinx_datetimeMonthNamesCompanion, SpaydkmpKotlinx_datetimeMonthNames, SpaydkmpKotlinx_datetimeMonth, SpaydkmpKotlinx_datetimeLocalDateCompanion, SpaydkmpKotlinx_datetimeLocalDate, SpaydkmpKotlinx_datetimeDayOfWeekNamesCompanion, SpaydkmpKotlinx_datetimeDayOfWeekNames, SpaydkmpKotlinx_datetimeDayOfWeek, SpaydkmpKotlinThrowable, SpaydkmpKotlinRuntimeException, SpaydkmpKotlinPair<A, B>, SpaydkmpKotlinNothing, SpaydkmpKotlinIllegalStateException, SpaydkmpKotlinException, SpaydkmpKotlinEnumCompanion, SpaydkmpKotlinEnum<E>, SpaydkmpKotlinCharIterator, SpaydkmpKotlinCharArray, SpaydkmpKotlinCancellationException, SpaydkmpKotlinArray<T>, SpaydkmpKey, SpaydkmpInt, SpaydkmpIBAN, SpaydkmpFormatterCompanion, SpaydkmpFormatter, SpaydkmpFormatTokenCompanion, SpaydkmpFormatToken, SpaydkmpFloat, SpaydkmpDouble, SpaydkmpCharArrayBuffer, SpaydkmpByte, SpaydkmpBufferCompanion, SpaydkmpBuffer, SpaydkmpBoolean, SpaydkmpBase, SpaydkmpAccountList, SpaydkmpAccount, NSString, NSSet<ObjectType>, NSObject, NSNumber, NSMutableSet<ObjectType>, NSMutableDictionary<KeyType, ObjectType>, NSMutableArray<ObjectType>, NSError, NSDictionary<KeyType, ObjectType>, NSArray<ObjectType>;

@protocol SpaydkmpSkie_DispatcherDelegate, SpaydkmpKotlinx_serialization_coreSerializersModuleCollector, SpaydkmpKotlinx_serialization_coreSerializationStrategy, SpaydkmpKotlinx_serialization_coreSerialDescriptor, SpaydkmpKotlinx_serialization_coreKSerializer, SpaydkmpKotlinx_serialization_coreEncoder, SpaydkmpKotlinx_serialization_coreDeserializationStrategy, SpaydkmpKotlinx_serialization_coreDecoder, SpaydkmpKotlinx_serialization_coreCompositeEncoder, SpaydkmpKotlinx_serialization_coreCompositeDecoder, SpaydkmpKotlinx_datetimeDateTimeFormatBuilderWithUtcOffset, SpaydkmpKotlinx_datetimeDateTimeFormatBuilderWithTime, SpaydkmpKotlinx_datetimeDateTimeFormatBuilderWithDateTimeComponents, SpaydkmpKotlinx_datetimeDateTimeFormatBuilderWithDateTime, SpaydkmpKotlinx_datetimeDateTimeFormatBuilderWithDate, SpaydkmpKotlinx_datetimeDateTimeFormatBuilder, SpaydkmpKotlinx_datetimeDateTimeFormat, SpaydkmpKotlinx_coroutines_coreStateFlow, SpaydkmpKotlinx_coroutines_coreSharedFlow, SpaydkmpKotlinx_coroutines_coreRunnable, SpaydkmpKotlinx_coroutines_coreMutableStateFlow, SpaydkmpKotlinx_coroutines_coreMutableSharedFlow, SpaydkmpKotlinx_coroutines_coreFlowCollector, SpaydkmpKotlinx_coroutines_coreFlow, SpaydkmpKotlinKDeclarationContainer, SpaydkmpKotlinKClassifier, SpaydkmpKotlinKClass, SpaydkmpKotlinKAnnotatedElement, SpaydkmpKotlinIterator, SpaydkmpKotlinComparable, SpaydkmpKotlinAppendable, SpaydkmpKotlinAnnotation, NSCopying;

// Due to an Obj-C/Swift interop limitation, SKIE cannot generate Swift types with a lambda type argument.
// Example of such type is: A<() -> Unit> where A<T> is a generic class.
// To avoid compilation errors SKIE replaces these type arguments with __SkieLambdaErrorType, resulting in A<__SkieLambdaErrorType>.
// Generated declarations that reference __SkieLambdaErrorType cannot be called in any way and the __SkieLambdaErrorType class cannot be used.
// The original declarations can still be used in the same way as other declarations hidden by SKIE (and with the same limitations as without SKIE).
@interface __SkieLambdaErrorType : NSObject
- (instancetype _Nonnull)init __attribute__((unavailable));
+ (instancetype _Nonnull)new __attribute__((unavailable));
@end

// Due to an Obj-C/Swift interop limitation, SKIE cannot generate Swift code that uses external Obj-C types for which SKIE doesn't know a fully qualified name.
// This problem occurs when custom Cinterop bindings are used because those do not contain the name of the Framework that provides implementation for those binding.
// The name can be configured manually using the SKIE Gradle configuration key 'ClassInterop.CInteropFrameworkName' in the same way as other SKIE features.
// To avoid compilation errors SKIE replaces types with unknown Framework name with __SkieUnknownCInteropFrameworkErrorType.
// Generated declarations that reference __SkieUnknownCInteropFrameworkErrorType cannot be called in any way and the __SkieUnknownCInteropFrameworkErrorType class cannot be used.
@interface __SkieUnknownCInteropFrameworkErrorType : NSObject
- (instancetype _Nonnull)init __attribute__((unavailable));
+ (instancetype _Nonnull)new __attribute__((unavailable));
@end


NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface SpaydkmpBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface SpaydkmpBase (SpaydkmpBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface SpaydkmpMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface SpaydkmpMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorSpaydkmpKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface SpaydkmpNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface SpaydkmpByte : SpaydkmpNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface SpaydkmpUByte : SpaydkmpNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface SpaydkmpShort : SpaydkmpNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface SpaydkmpUShort : SpaydkmpNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface SpaydkmpInt : SpaydkmpNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface SpaydkmpUInt : SpaydkmpNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface SpaydkmpLong : SpaydkmpNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface SpaydkmpULong : SpaydkmpNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface SpaydkmpFloat : SpaydkmpNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface SpaydkmpDouble : SpaydkmpNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface SpaydkmpBoolean : SpaydkmpNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieColdFlowIterator")))
@interface SpaydkmpSkieColdFlowIterator<E> : SpaydkmpBase
- (instancetype)initWithFlow:(id<SpaydkmpKotlinx_coroutines_coreFlow>)flow __attribute__((swift_name("init(flow:)"))) __attribute__((objc_designated_initializer));
- (void)cancel __attribute__((swift_name("cancel()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)hasNextWithCompletionHandler:(void (^)(SpaydkmpBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("hasNext(completionHandler:)")));
- (E _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol SpaydkmpKotlinx_coroutines_coreFlow
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SpaydkmpKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinFlow")))
@interface SpaydkmpSkieKotlinFlow<__covariant T> : SpaydkmpBase <SpaydkmpKotlinx_coroutines_coreFlow>
- (instancetype)initWithDelegate:(id<SpaydkmpKotlinx_coroutines_coreFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SpaydkmpKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSharedFlow")))
@protocol SpaydkmpKotlinx_coroutines_coreSharedFlow <SpaydkmpKotlinx_coroutines_coreFlow>
@required
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol SpaydkmpKotlinx_coroutines_coreFlowCollector
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreMutableSharedFlow")))
@protocol SpaydkmpKotlinx_coroutines_coreMutableSharedFlow <SpaydkmpKotlinx_coroutines_coreSharedFlow, SpaydkmpKotlinx_coroutines_coreFlowCollector>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(id _Nullable)value __attribute__((swift_name("tryEmit(value:)")));
@property (readonly) id<SpaydkmpKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinMutableSharedFlow")))
@interface SpaydkmpSkieKotlinMutableSharedFlow<T> : SpaydkmpBase <SpaydkmpKotlinx_coroutines_coreMutableSharedFlow>
@property (readonly) NSArray<T> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) id<SpaydkmpKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
- (instancetype)initWithDelegate:(id<SpaydkmpKotlinx_coroutines_coreMutableSharedFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SpaydkmpKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(T)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(T)value __attribute__((swift_name("tryEmit(value:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreStateFlow")))
@protocol SpaydkmpKotlinx_coroutines_coreStateFlow <SpaydkmpKotlinx_coroutines_coreSharedFlow>
@required
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreMutableStateFlow")))
@protocol SpaydkmpKotlinx_coroutines_coreMutableStateFlow <SpaydkmpKotlinx_coroutines_coreStateFlow, SpaydkmpKotlinx_coroutines_coreMutableSharedFlow>
@required
- (void)setValue:(id _Nullable)value __attribute__((swift_name("setValue(_:)")));
- (BOOL)compareAndSetExpect:(id _Nullable)expect update:(id _Nullable)update __attribute__((swift_name("compareAndSet(expect:update:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinMutableStateFlow")))
@interface SpaydkmpSkieKotlinMutableStateFlow<T> : SpaydkmpBase <SpaydkmpKotlinx_coroutines_coreMutableStateFlow>
@property (readonly) NSArray<T> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) id<SpaydkmpKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
@property T value __attribute__((swift_name("value")));
- (instancetype)initWithDelegate:(id<SpaydkmpKotlinx_coroutines_coreMutableStateFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SpaydkmpKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
- (BOOL)compareAndSetExpect:(T)expect update:(T)update __attribute__((swift_name("compareAndSet(expect:update:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(T)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(T)value __attribute__((swift_name("tryEmit(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinOptionalFlow")))
@interface SpaydkmpSkieKotlinOptionalFlow<__covariant T> : SpaydkmpBase <SpaydkmpKotlinx_coroutines_coreFlow>
- (instancetype)initWithDelegate:(id<SpaydkmpKotlinx_coroutines_coreFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SpaydkmpKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinOptionalMutableSharedFlow")))
@interface SpaydkmpSkieKotlinOptionalMutableSharedFlow<T> : SpaydkmpBase <SpaydkmpKotlinx_coroutines_coreMutableSharedFlow>
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) id<SpaydkmpKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
- (instancetype)initWithDelegate:(id<SpaydkmpKotlinx_coroutines_coreMutableSharedFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SpaydkmpKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(T _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(T _Nullable)value __attribute__((swift_name("tryEmit(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinOptionalMutableStateFlow")))
@interface SpaydkmpSkieKotlinOptionalMutableStateFlow<T> : SpaydkmpBase <SpaydkmpKotlinx_coroutines_coreMutableStateFlow>
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) id<SpaydkmpKotlinx_coroutines_coreStateFlow> subscriptionCount __attribute__((swift_name("subscriptionCount")));
@property T _Nullable value __attribute__((swift_name("value")));
- (instancetype)initWithDelegate:(id<SpaydkmpKotlinx_coroutines_coreMutableStateFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SpaydkmpKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
- (BOOL)compareAndSetExpect:(T _Nullable)expect update:(T _Nullable)update __attribute__((swift_name("compareAndSet(expect:update:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(T _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (void)resetReplayCache __attribute__((swift_name("resetReplayCache()")));
- (BOOL)tryEmitValue:(T _Nullable)value __attribute__((swift_name("tryEmit(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinOptionalSharedFlow")))
@interface SpaydkmpSkieKotlinOptionalSharedFlow<__covariant T> : SpaydkmpBase <SpaydkmpKotlinx_coroutines_coreSharedFlow>
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
- (instancetype)initWithDelegate:(id<SpaydkmpKotlinx_coroutines_coreSharedFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SpaydkmpKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinOptionalStateFlow")))
@interface SpaydkmpSkieKotlinOptionalStateFlow<__covariant T> : SpaydkmpBase <SpaydkmpKotlinx_coroutines_coreStateFlow>
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) T _Nullable value __attribute__((swift_name("value")));
- (instancetype)initWithDelegate:(id<SpaydkmpKotlinx_coroutines_coreStateFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SpaydkmpKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinSharedFlow")))
@interface SpaydkmpSkieKotlinSharedFlow<__covariant T> : SpaydkmpBase <SpaydkmpKotlinx_coroutines_coreSharedFlow>
@property (readonly) NSArray<T> *replayCache __attribute__((swift_name("replayCache")));
- (instancetype)initWithDelegate:(id<SpaydkmpKotlinx_coroutines_coreSharedFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SpaydkmpKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SkieKotlinStateFlow")))
@interface SpaydkmpSkieKotlinStateFlow<__covariant T> : SpaydkmpBase <SpaydkmpKotlinx_coroutines_coreStateFlow>
@property (readonly) NSArray<T> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) T value __attribute__((swift_name("value")));
- (instancetype)initWithDelegate:(id<SpaydkmpKotlinx_coroutines_coreStateFlow>)delegate __attribute__((swift_name("init(_:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SpaydkmpKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Skie_CancellationHandler")))
@interface SpaydkmpSkie_CancellationHandler : SpaydkmpBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)cancel __attribute__((swift_name("cancel()")));
@end

__attribute__((swift_name("Skie_DispatcherDelegate")))
@protocol SpaydkmpSkie_DispatcherDelegate
@required
- (void)dispatchBlock:(id<SpaydkmpKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(block:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Skie_SuspendHandler")))
@interface SpaydkmpSkie_SuspendHandler : SpaydkmpBase
- (instancetype)initWithCancellationHandler:(SpaydkmpSkie_CancellationHandler *)cancellationHandler dispatcherDelegate:(id<SpaydkmpSkie_DispatcherDelegate>)dispatcherDelegate onResult:(void (^)(SpaydkmpSkie_SuspendResult *))onResult __attribute__((swift_name("init(cancellationHandler:dispatcherDelegate:onResult:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Skie_SuspendResult")))
@interface SpaydkmpSkie_SuspendResult : SpaydkmpBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Skie_SuspendResult.Canceled")))
@interface SpaydkmpSkie_SuspendResultCanceled : SpaydkmpSkie_SuspendResult
@property (class, readonly, getter=shared) SpaydkmpSkie_SuspendResultCanceled *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)canceled __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Skie_SuspendResult.Error")))
@interface SpaydkmpSkie_SuspendResultError : SpaydkmpSkie_SuspendResult
@property (readonly) NSError *error __attribute__((swift_name("error")));
- (instancetype)initWithError:(NSError *)error __attribute__((swift_name("init(error:)"))) __attribute__((objc_designated_initializer));
- (SpaydkmpSkie_SuspendResultError *)doCopyError:(NSError *)error __attribute__((swift_name("doCopy(error:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Skie_SuspendResult.Success")))
@interface SpaydkmpSkie_SuspendResultSuccess : SpaydkmpSkie_SuspendResult
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
- (instancetype)initWithValue:(id _Nullable)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (SpaydkmpSkie_SuspendResultSuccess *)doCopyValue:(id _Nullable)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Spayd")))
@interface SpaydkmpSpayd : SpaydkmpBase
@property (class, readonly, getter=companion) SpaydkmpSpaydCompanion *companion __attribute__((swift_name("companion")));
- (instancetype)initWithParameters:(SpaydkmpKotlinArray<SpaydkmpKotlinPair<SpaydkmpKey *, id> *> *)parameters __attribute__((swift_name("init(parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithParameters_:(NSDictionary<SpaydkmpKey *, id> *)parameters __attribute__((swift_name("init(parameters_:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithAccount:(SpaydkmpAccount *)account alternateAccounts:(SpaydkmpAccountList * _Nullable)alternateAccounts currency:(NSString * _Nullable)currency amount:(SpaydkmpDouble * _Nullable)amount date:(SpaydkmpKotlinx_datetimeLocalDate * _Nullable)date senderReference:(SpaydkmpInt * _Nullable)senderReference recipientName:(NSString * _Nullable)recipientName paymentType:(NSString * _Nullable)paymentType message:(NSString * _Nullable)message notificationType:(SpaydkmpNotificationType * _Nullable)notificationType notificationAddress:(NSString * _Nullable)notificationAddress repeat:(SpaydkmpInt * _Nullable)repeat variableSymbol:(SpaydkmpLong * _Nullable)variableSymbol specificSymbol:(SpaydkmpLong * _Nullable)specificSymbol constantSymbol:(SpaydkmpLong * _Nullable)constantSymbol identifier:(NSString * _Nullable)identifier url:(NSString * _Nullable)url __attribute__((swift_name("init(account:alternateAccounts:currency:amount:date:senderReference:recipientName:paymentType:message:notificationType:notificationAddress:repeat:variableSymbol:specificSymbol:constantSymbol:identifier:url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Spayd.Companion")))
@interface SpaydkmpSpaydCompanion : SpaydkmpBase
@property (class, readonly, getter=shared) SpaydkmpSpaydCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *FILE_EXTENSION __attribute__((swift_name("FILE_EXTENSION")));
@property (readonly) NSString *MIME_TYPE __attribute__((swift_name("MIME_TYPE")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Account")))
@interface SpaydkmpAccount : SpaydkmpBase
@property (readonly) NSString * _Nullable bic __attribute__((swift_name("bic")));
@property (readonly) NSString *iban __attribute__((swift_name("iban")));
- (instancetype)initWithIban:(NSString *)iban bic:(NSString * _Nullable)bic __attribute__((swift_name("init(iban:bic:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPrefix:(SpaydkmpLong * _Nullable)prefix account:(int64_t)account bank:(int64_t)bank __attribute__((swift_name("init(prefix:account:bank:)"))) __attribute__((objc_designated_initializer));
- (SpaydkmpAccount *)doCopyIban:(NSString *)iban bic:(NSString * _Nullable)bic __attribute__((swift_name("doCopy(iban:bic:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccountList")))
@interface SpaydkmpAccountList : SpaydkmpBase
@property (readonly) NSArray<SpaydkmpAccount *> *accounts __attribute__((swift_name("accounts")));
- (instancetype)initWithAccounts:(NSArray<SpaydkmpAccount *> *)accounts __attribute__((swift_name("init(accounts:)"))) __attribute__((objc_designated_initializer));
- (SpaydkmpAccountList *)doCopyAccounts:(NSArray<SpaydkmpAccount *> *)accounts __attribute__((swift_name("doCopy(accounts:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IBAN")))
@interface SpaydkmpIBAN : SpaydkmpBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of ValidationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (NSString * _Nullable)createForCzechAccountPrefix:(SpaydkmpLong * _Nullable)prefix account:(int64_t)account bank:(int64_t)bank error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("createForCzechAccount(prefix:account:bank:)")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol SpaydkmpKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface SpaydkmpKotlinEnum<E> : SpaydkmpBase <SpaydkmpKotlinComparable>
@property (class, readonly, getter=companion) SpaydkmpKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Key")))
@interface SpaydkmpKey : SpaydkmpKotlinEnum<SpaydkmpKey *>
@property (class, readonly) SpaydkmpKey *date __attribute__((swift_name("date")));
@property (class, readonly) SpaydkmpKey *currency __attribute__((swift_name("currency")));
@property (class, readonly) SpaydkmpKey *amount __attribute__((swift_name("amount")));
@property (class, readonly) SpaydkmpKey *account __attribute__((swift_name("account")));
@property (class, readonly) SpaydkmpKey *alternateAccounts __attribute__((swift_name("alternateAccounts")));
@property (class, readonly) SpaydkmpKey *senderReference __attribute__((swift_name("senderReference")));
@property (class, readonly) SpaydkmpKey *recipientName __attribute__((swift_name("recipientName")));
@property (class, readonly) SpaydkmpKey *paymentType __attribute__((swift_name("paymentType")));
@property (class, readonly) SpaydkmpKey *message __attribute__((swift_name("message")));
@property (class, readonly) SpaydkmpKey *notifyType __attribute__((swift_name("notifyType")));
@property (class, readonly) SpaydkmpKey *notifyAddress __attribute__((swift_name("notifyAddress")));
@property (class, readonly) SpaydkmpKey *repeat __attribute__((swift_name("repeat")));
@property (class, readonly) SpaydkmpKey *variableSymbol __attribute__((swift_name("variableSymbol")));
@property (class, readonly) SpaydkmpKey *specificSymbol __attribute__((swift_name("specificSymbol")));
@property (class, readonly) SpaydkmpKey *constantSymbol __attribute__((swift_name("constantSymbol")));
@property (class, readonly) SpaydkmpKey *identifier __attribute__((swift_name("identifier")));
@property (class, readonly) SpaydkmpKey *url __attribute__((swift_name("url")));
@property (class, readonly) NSArray<SpaydkmpKey *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *key __attribute__((swift_name("key")));
@property (readonly) SpaydkmpInt * _Nullable maxLength __attribute__((swift_name("maxLength")));
@property (readonly) SpaydkmpDouble * _Nullable maxValue __attribute__((swift_name("maxValue")));
@property (readonly) SpaydkmpInt * _Nullable minLength __attribute__((swift_name("minLength")));
@property (readonly) SpaydkmpDouble * _Nullable minValue __attribute__((swift_name("minValue")));
@property (readonly) id<SpaydkmpKotlinKClass> type __attribute__((swift_name("type")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (SpaydkmpKotlinArray<SpaydkmpKey *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NotificationType")))
@interface SpaydkmpNotificationType : SpaydkmpKotlinEnum<SpaydkmpNotificationType *>
@property (class, readonly) SpaydkmpNotificationType *email __attribute__((swift_name("email")));
@property (class, readonly) SpaydkmpNotificationType *phone __attribute__((swift_name("phone")));
@property (class, readonly) NSArray<SpaydkmpNotificationType *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *key __attribute__((swift_name("key")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (SpaydkmpKotlinArray<SpaydkmpNotificationType *> *)values __attribute__((swift_name("values()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface SpaydkmpKotlinThrowable : SpaydkmpBase
@property (readonly) SpaydkmpKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SpaydkmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SpaydkmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (SpaydkmpKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface SpaydkmpKotlinException : SpaydkmpKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SpaydkmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SpaydkmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ValidationException")))
@interface SpaydkmpValidationException : SpaydkmpKotlinException
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithCause:(SpaydkmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SpaydkmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((swift_name("Buffer")))
@interface SpaydkmpBuffer : SpaydkmpBase
@property (class, readonly, getter=companion) SpaydkmpBufferCompanion *companion __attribute__((swift_name("companion")));
@property (readonly, getter=capacity_) int32_t capacity __attribute__((swift_name("capacity")));
@property (getter=limit_) int32_t limit __attribute__((swift_name("limit")));
@property int32_t mark __attribute__((swift_name("mark")));
@property (getter=position_) int32_t position __attribute__((swift_name("position")));
- (int32_t)capacity __attribute__((swift_name("capacity()")));
- (BOOL)hasRemaining __attribute__((swift_name("hasRemaining()")));
- (int32_t)limit __attribute__((swift_name("limit()")));
- (SpaydkmpBuffer *)limitNewLimit:(int32_t)newLimit __attribute__((swift_name("limit(newLimit:)")));
- (int32_t)position __attribute__((swift_name("position()")));
- (SpaydkmpBuffer *)positionNewPosition:(int32_t)newPosition __attribute__((swift_name("position(newPosition:)")));
- (int32_t)remaining __attribute__((swift_name("remaining()")));
- (SpaydkmpBuffer *)rewind __attribute__((swift_name("rewind()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Buffer.Companion")))
@interface SpaydkmpBufferCompanion : SpaydkmpBase
@property (class, readonly, getter=shared) SpaydkmpBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t UNSET_MARK __attribute__((swift_name("UNSET_MARK")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CharArrayBuffer")))
@interface SpaydkmpCharArrayBuffer : SpaydkmpBuffer
- (instancetype)initWithArray:(SpaydkmpKotlinCharArray *)array __attribute__((swift_name("init(array:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCapacity:(int32_t)capacity backingArray:(SpaydkmpKotlinCharArray *)backingArray offset:(int32_t)offset __attribute__((swift_name("init(capacity:backingArray:offset:)"))) __attribute__((objc_designated_initializer));
- (unichar)get __attribute__((swift_name("get()")));
- (unichar)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (SpaydkmpCharArrayBuffer *)getDest:(SpaydkmpKotlinCharArray *)dest off:(int32_t)off len:(int32_t)len __attribute__((swift_name("get(dest:off:len:)")));
- (SpaydkmpCharArrayBuffer *)subSequenceStart:(int32_t)start end:(int32_t)end __attribute__((swift_name("subSequence(start:end:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FormatToken")))
@interface SpaydkmpFormatToken : SpaydkmpBase
@property (class, readonly, getter=companion) SpaydkmpFormatTokenCompanion *companion __attribute__((swift_name("companion")));
@property int32_t argIndex __attribute__((swift_name("argIndex")));
@property unichar conversionType __attribute__((swift_name("conversionType")));
@property unichar dateSuffix __attribute__((swift_name("dateSuffix")));
@property int32_t flags __attribute__((swift_name("flags")));
@property int32_t formatStringStartIndex __attribute__((swift_name("formatStringStartIndex")));
@property (readonly) BOOL isPrecisionSet __attribute__((swift_name("isPrecisionSet")));
@property (readonly) BOOL isWidthSet __attribute__((swift_name("isWidthSet")));
@property NSString * _Nullable plainText __attribute__((swift_name("plainText")));
@property int32_t precision __attribute__((swift_name("precision")));
@property int32_t width __attribute__((swift_name("width")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)getStrFlags __attribute__((swift_name("getStrFlags()")));
- (BOOL)isFlagSetFlag:(int32_t)flag __attribute__((swift_name("isFlagSet(flag:)")));
- (BOOL)requireArgument __attribute__((swift_name("requireArgument()")));
- (BOOL)setFlagC:(unichar)c __attribute__((swift_name("setFlag(c:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FormatToken.Companion")))
@interface SpaydkmpFormatTokenCompanion : SpaydkmpBase
@property (class, readonly, getter=shared) SpaydkmpFormatTokenCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) int32_t FLAGS_UNSET __attribute__((swift_name("FLAGS_UNSET")));
@property (readonly) int32_t FLAG_ADD __attribute__((swift_name("FLAG_ADD")));
@property (readonly) int32_t FLAG_COMMA __attribute__((swift_name("FLAG_COMMA")));
@property (readonly) int32_t FLAG_MINUS __attribute__((swift_name("FLAG_MINUS")));
@property (readonly) int32_t FLAG_PARENTHESIS __attribute__((swift_name("FLAG_PARENTHESIS")));
@property (readonly) int32_t FLAG_SHARP __attribute__((swift_name("FLAG_SHARP")));
@property (readonly) int32_t FLAG_SPACE __attribute__((swift_name("FLAG_SPACE")));
@property (readonly) int32_t FLAG_ZERO __attribute__((swift_name("FLAG_ZERO")));
@property (readonly) int32_t LAST_ARGUMENT_INDEX __attribute__((swift_name("LAST_ARGUMENT_INDEX")));
@property (readonly) int32_t UNSET __attribute__((swift_name("UNSET")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Formatter")))
@interface SpaydkmpFormatter : SpaydkmpBase
@property (class, readonly, getter=companion) SpaydkmpFormatterCompanion *companion __attribute__((swift_name("companion")));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SpaydkmpFormatter *)formatFormat:(NSString *)format args:(SpaydkmpKotlinArray<id> *)args __attribute__((swift_name("format(format:args:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Formatter.Companion")))
@interface SpaydkmpFormatterCompanion : SpaydkmpBase
@property (class, readonly, getter=shared) SpaydkmpFormatterCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (NSString *)formatFormat:(NSString *)format args:(SpaydkmpKotlinArray<id> *)args __attribute__((swift_name("format(format:args:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParserStateMachine")))
@interface SpaydkmpParserStateMachine : SpaydkmpBase
@property (class, readonly, getter=companion) SpaydkmpParserStateMachineCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) SpaydkmpFormatToken *nextFormatToken __attribute__((swift_name("nextFormatToken")));
- (instancetype)initWithFormat:(SpaydkmpCharArrayBuffer *)format __attribute__((swift_name("init(format:)"))) __attribute__((objc_designated_initializer));
- (void)reset __attribute__((swift_name("reset()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParserStateMachine.Companion")))
@interface SpaydkmpParserStateMachineCompanion : SpaydkmpBase
@property (class, readonly, getter=shared) SpaydkmpParserStateMachineCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Transformer")))
@interface SpaydkmpTransformer : SpaydkmpBase
- (NSString *)transformToken:(SpaydkmpFormatToken *)token argument:(id _Nullable)argument __attribute__((swift_name("transform(token:argument:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("__SkieSuspendWrappersKt")))
@interface Spaydkmp__SkieSuspendWrappersKt : SpaydkmpBase
+ (void)Skie_Suspend__0__hasNextDispatchReceiver:(SpaydkmpSkieColdFlowIterator<id> *)dispatchReceiver suspendHandler:(SpaydkmpSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__0__hasNext(dispatchReceiver:suspendHandler:)")));
+ (void)Skie_Suspend__1__collectDispatchReceiver:(id<SpaydkmpKotlinx_coroutines_coreFlow>)dispatchReceiver collector:(id<SpaydkmpKotlinx_coroutines_coreFlowCollector>)collector suspendHandler:(SpaydkmpSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__1__collect(dispatchReceiver:collector:suspendHandler:)")));
+ (void)Skie_Suspend__2__emitDispatchReceiver:(id<SpaydkmpKotlinx_coroutines_coreFlowCollector>)dispatchReceiver value:(id _Nullable)value suspendHandler:(SpaydkmpSkie_SuspendHandler *)suspendHandler __attribute__((swift_name("Skie_Suspend__2__emit(dispatchReceiver:value:suspendHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("__SkieTypeExportsKt")))
@interface Spaydkmp__SkieTypeExportsKt : SpaydkmpBase
+ (void)skieTypeExports_0P0:(id<SpaydkmpKotlinx_datetimeDateTimeFormatBuilderWithDateTime>)p0 p1:(id<SpaydkmpKotlinx_datetimeDateTimeFormatBuilderWithDateTimeComponents>)p1 p2:(id<SpaydkmpKotlinx_datetimeDateTimeFormatBuilderWithTime>)p2 p3:(id<SpaydkmpKotlinx_datetimeDateTimeFormatBuilderWithUtcOffset>)p3 p4:(SpaydkmpKotlinx_serialization_corePolymorphicKind *)p4 p5:(SpaydkmpKotlinx_serialization_corePolymorphicKindOPEN *)p5 p6:(SpaydkmpKotlinx_serialization_corePolymorphicKindSEALED *)p6 p7:(SpaydkmpKotlinx_serialization_corePrimitiveKind *)p7 p8:(SpaydkmpKotlinx_serialization_corePrimitiveKindBOOLEAN *)p8 p9:(SpaydkmpKotlinx_serialization_corePrimitiveKindBYTE *)p9 p10:(SpaydkmpKotlinx_serialization_corePrimitiveKindCHAR *)p10 p11:(SpaydkmpKotlinx_serialization_corePrimitiveKindDOUBLE *)p11 p12:(SpaydkmpKotlinx_serialization_corePrimitiveKindFLOAT *)p12 p13:(SpaydkmpKotlinx_serialization_corePrimitiveKindINT *)p13 p14:(SpaydkmpKotlinx_serialization_corePrimitiveKindLONG *)p14 p15:(SpaydkmpKotlinx_serialization_corePrimitiveKindSHORT *)p15 p16:(SpaydkmpKotlinx_serialization_corePrimitiveKindSTRING *)p16 p17:(SpaydkmpKotlinx_serialization_coreSerialKindCONTEXTUAL *)p17 p18:(SpaydkmpKotlinx_serialization_coreSerialKindENUM *)p18 p19:(SpaydkmpKotlinx_serialization_coreStructureKind *)p19 p20:(SpaydkmpKotlinx_serialization_coreStructureKindCLASS *)p20 p21:(SpaydkmpKotlinx_serialization_coreStructureKindLIST *)p21 p22:(SpaydkmpKotlinx_serialization_coreStructureKindMAP *)p22 p23:(SpaydkmpKotlinx_serialization_coreStructureKindOBJECT *)p23 __attribute__((swift_name("skieTypeExports_0(p0:p1:p2:p3:p4:p5:p6:p7:p8:p9:p10:p11:p12:p13:p14:p15:p16:p17:p18:p19:p20:p21:p22:p23:)")));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface SpaydkmpKotlinRuntimeException : SpaydkmpKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SpaydkmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SpaydkmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface SpaydkmpKotlinIllegalStateException : SpaydkmpKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SpaydkmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SpaydkmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface SpaydkmpKotlinCancellationException : SpaydkmpKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SpaydkmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SpaydkmpKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol SpaydkmpKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface SpaydkmpKotlinPair<__covariant A, __covariant B> : SpaydkmpBase
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (SpaydkmpKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SpaydkmpKotlinArray<T> : SpaydkmpBase
@property (readonly) int32_t size __attribute__((swift_name("size")));
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(SpaydkmpInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SpaydkmpKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/datetime/serializers/LocalDateIso8601Serializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeLocalDate")))
@interface SpaydkmpKotlinx_datetimeLocalDate : SpaydkmpBase <SpaydkmpKotlinComparable>
@property (class, readonly, getter=companion) SpaydkmpKotlinx_datetimeLocalDateCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) SpaydkmpKotlinx_datetimeDayOfWeek *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) SpaydkmpKotlinx_datetimeMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t monthNumber __attribute__((swift_name("monthNumber")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
- (instancetype)initWithYear:(int32_t)year monthNumber:(int32_t)monthNumber dayOfMonth:(int32_t)dayOfMonth __attribute__((swift_name("init(year:monthNumber:dayOfMonth:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithYear:(int32_t)year month:(SpaydkmpKotlinx_datetimeMonth *)month dayOfMonth:(int32_t)dayOfMonth __attribute__((swift_name("init(year:month:dayOfMonth:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(SpaydkmpKotlinx_datetimeLocalDate *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (int32_t)toEpochDays __attribute__((swift_name("toEpochDays()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface SpaydkmpKotlinEnumCompanion : SpaydkmpBase
@property (class, readonly, getter=shared) SpaydkmpKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol SpaydkmpKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol SpaydkmpKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol SpaydkmpKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol SpaydkmpKotlinKClass <SpaydkmpKotlinKDeclarationContainer, SpaydkmpKotlinKAnnotatedElement, SpaydkmpKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinCharArray")))
@interface SpaydkmpKotlinCharArray : SpaydkmpBase
@property (readonly) int32_t size __attribute__((swift_name("size")));
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(id (^)(SpaydkmpInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (unichar)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (SpaydkmpKotlinCharIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(unichar)value __attribute__((swift_name("set(index:value:)")));
@end

__attribute__((swift_name("Kotlinx_datetimeDateTimeFormatBuilder")))
@protocol SpaydkmpKotlinx_datetimeDateTimeFormatBuilder
@required
- (void)charsValue:(NSString *)value __attribute__((swift_name("chars(value:)")));
@end

__attribute__((swift_name("Kotlinx_datetimeDateTimeFormatBuilderWithDate")))
@protocol SpaydkmpKotlinx_datetimeDateTimeFormatBuilderWithDate <SpaydkmpKotlinx_datetimeDateTimeFormatBuilder>
@required
- (void)dateFormat:(id<SpaydkmpKotlinx_datetimeDateTimeFormat>)format __attribute__((swift_name("date(format:)")));
- (void)dayOfMonthPadding:(SpaydkmpKotlinx_datetimePadding *)padding __attribute__((swift_name("dayOfMonth(padding:)")));
- (void)dayOfWeekNames:(SpaydkmpKotlinx_datetimeDayOfWeekNames *)names __attribute__((swift_name("dayOfWeek(names:)")));
- (void)monthNameNames:(SpaydkmpKotlinx_datetimeMonthNames *)names __attribute__((swift_name("monthName(names:)")));
- (void)monthNumberPadding:(SpaydkmpKotlinx_datetimePadding *)padding __attribute__((swift_name("monthNumber(padding:)")));
- (void)yearPadding:(SpaydkmpKotlinx_datetimePadding *)padding __attribute__((swift_name("year(padding:)")));
- (void)yearTwoDigitsBaseYear:(int32_t)baseYear __attribute__((swift_name("yearTwoDigits(baseYear:)")));
@end

__attribute__((swift_name("Kotlinx_datetimeDateTimeFormatBuilderWithTime")))
@protocol SpaydkmpKotlinx_datetimeDateTimeFormatBuilderWithTime <SpaydkmpKotlinx_datetimeDateTimeFormatBuilder>
@required
- (void)amPmHourPadding:(SpaydkmpKotlinx_datetimePadding *)padding __attribute__((swift_name("amPmHour(padding:)")));
- (void)amPmMarkerAm:(NSString *)am pm:(NSString *)pm __attribute__((swift_name("amPmMarker(am:pm:)")));
- (void)hourPadding:(SpaydkmpKotlinx_datetimePadding *)padding __attribute__((swift_name("hour(padding:)")));
- (void)minutePadding:(SpaydkmpKotlinx_datetimePadding *)padding __attribute__((swift_name("minute(padding:)")));
- (void)secondPadding:(SpaydkmpKotlinx_datetimePadding *)padding __attribute__((swift_name("second(padding:)")));
- (void)secondFractionFixedLength:(int32_t)fixedLength __attribute__((swift_name("secondFraction(fixedLength:)")));
- (void)secondFractionMinLength:(int32_t)minLength maxLength:(int32_t)maxLength __attribute__((swift_name("secondFraction(minLength:maxLength:)")));
- (void)timeFormat:(id<SpaydkmpKotlinx_datetimeDateTimeFormat>)format __attribute__((swift_name("time(format:)")));
@end

__attribute__((swift_name("Kotlinx_datetimeDateTimeFormatBuilderWithDateTime")))
@protocol SpaydkmpKotlinx_datetimeDateTimeFormatBuilderWithDateTime <SpaydkmpKotlinx_datetimeDateTimeFormatBuilderWithDate, SpaydkmpKotlinx_datetimeDateTimeFormatBuilderWithTime>
@required
- (void)dateTimeFormat:(id<SpaydkmpKotlinx_datetimeDateTimeFormat>)format __attribute__((swift_name("dateTime(format:)")));
@end

__attribute__((swift_name("Kotlinx_datetimeDateTimeFormatBuilderWithUtcOffset")))
@protocol SpaydkmpKotlinx_datetimeDateTimeFormatBuilderWithUtcOffset <SpaydkmpKotlinx_datetimeDateTimeFormatBuilder>
@required
- (void)offsetFormat:(id<SpaydkmpKotlinx_datetimeDateTimeFormat>)format __attribute__((swift_name("offset(format:)")));
- (void)offsetHoursPadding:(SpaydkmpKotlinx_datetimePadding *)padding __attribute__((swift_name("offsetHours(padding:)")));
- (void)offsetMinutesOfHourPadding:(SpaydkmpKotlinx_datetimePadding *)padding __attribute__((swift_name("offsetMinutesOfHour(padding:)")));
- (void)offsetSecondsOfMinutePadding:(SpaydkmpKotlinx_datetimePadding *)padding __attribute__((swift_name("offsetSecondsOfMinute(padding:)")));
@end

__attribute__((swift_name("Kotlinx_datetimeDateTimeFormatBuilderWithDateTimeComponents")))
@protocol SpaydkmpKotlinx_datetimeDateTimeFormatBuilderWithDateTimeComponents <SpaydkmpKotlinx_datetimeDateTimeFormatBuilderWithDateTime, SpaydkmpKotlinx_datetimeDateTimeFormatBuilderWithUtcOffset>
@required
- (void)dateTimeComponentsFormat:(id<SpaydkmpKotlinx_datetimeDateTimeFormat>)format __attribute__((swift_name("dateTimeComponents(format:)")));
- (void)timeZoneId __attribute__((swift_name("timeZoneId()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface SpaydkmpKotlinx_serialization_coreSerialKind : SpaydkmpBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_corePolymorphicKind")))
@interface SpaydkmpKotlinx_serialization_corePolymorphicKind : SpaydkmpKotlinx_serialization_coreSerialKind
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePolymorphicKind.OPEN")))
@interface SpaydkmpKotlinx_serialization_corePolymorphicKindOPEN : SpaydkmpKotlinx_serialization_corePolymorphicKind
@property (class, readonly, getter=shared) SpaydkmpKotlinx_serialization_corePolymorphicKindOPEN *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oPEN __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePolymorphicKind.SEALED")))
@interface SpaydkmpKotlinx_serialization_corePolymorphicKindSEALED : SpaydkmpKotlinx_serialization_corePolymorphicKind
@property (class, readonly, getter=shared) SpaydkmpKotlinx_serialization_corePolymorphicKindSEALED *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sEALED __attribute__((swift_name("init()")));
@end

__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind")))
@interface SpaydkmpKotlinx_serialization_corePrimitiveKind : SpaydkmpKotlinx_serialization_coreSerialKind
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.BOOLEAN")))
@interface SpaydkmpKotlinx_serialization_corePrimitiveKindBOOLEAN : SpaydkmpKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) SpaydkmpKotlinx_serialization_corePrimitiveKindBOOLEAN *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bOOLEAN __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.BYTE")))
@interface SpaydkmpKotlinx_serialization_corePrimitiveKindBYTE : SpaydkmpKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) SpaydkmpKotlinx_serialization_corePrimitiveKindBYTE *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)bYTE __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.CHAR")))
@interface SpaydkmpKotlinx_serialization_corePrimitiveKindCHAR : SpaydkmpKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) SpaydkmpKotlinx_serialization_corePrimitiveKindCHAR *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cHAR __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.DOUBLE")))
@interface SpaydkmpKotlinx_serialization_corePrimitiveKindDOUBLE : SpaydkmpKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) SpaydkmpKotlinx_serialization_corePrimitiveKindDOUBLE *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)dOUBLE __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.FLOAT")))
@interface SpaydkmpKotlinx_serialization_corePrimitiveKindFLOAT : SpaydkmpKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) SpaydkmpKotlinx_serialization_corePrimitiveKindFLOAT *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fLOAT __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.INT")))
@interface SpaydkmpKotlinx_serialization_corePrimitiveKindINT : SpaydkmpKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) SpaydkmpKotlinx_serialization_corePrimitiveKindINT *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)iNT __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.LONG")))
@interface SpaydkmpKotlinx_serialization_corePrimitiveKindLONG : SpaydkmpKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) SpaydkmpKotlinx_serialization_corePrimitiveKindLONG *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)lONG __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.SHORT")))
@interface SpaydkmpKotlinx_serialization_corePrimitiveKindSHORT : SpaydkmpKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) SpaydkmpKotlinx_serialization_corePrimitiveKindSHORT *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sHORT __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_corePrimitiveKind.STRING")))
@interface SpaydkmpKotlinx_serialization_corePrimitiveKindSTRING : SpaydkmpKotlinx_serialization_corePrimitiveKind
@property (class, readonly, getter=shared) SpaydkmpKotlinx_serialization_corePrimitiveKindSTRING *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)sTRING __attribute__((swift_name("init()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind.CONTEXTUAL")))
@interface SpaydkmpKotlinx_serialization_coreSerialKindCONTEXTUAL : SpaydkmpKotlinx_serialization_coreSerialKind
@property (class, readonly, getter=shared) SpaydkmpKotlinx_serialization_coreSerialKindCONTEXTUAL *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cONTEXTUAL __attribute__((swift_name("init()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind.ENUM")))
@interface SpaydkmpKotlinx_serialization_coreSerialKindENUM : SpaydkmpKotlinx_serialization_coreSerialKind
@property (class, readonly, getter=shared) SpaydkmpKotlinx_serialization_coreSerialKindENUM *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)eNUM __attribute__((swift_name("init()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreStructureKind")))
@interface SpaydkmpKotlinx_serialization_coreStructureKind : SpaydkmpKotlinx_serialization_coreSerialKind
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreStructureKind.CLASS")))
@interface SpaydkmpKotlinx_serialization_coreStructureKindCLASS : SpaydkmpKotlinx_serialization_coreStructureKind
@property (class, readonly, getter=shared) SpaydkmpKotlinx_serialization_coreStructureKindCLASS *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)cLASS __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreStructureKind.LIST")))
@interface SpaydkmpKotlinx_serialization_coreStructureKindLIST : SpaydkmpKotlinx_serialization_coreStructureKind
@property (class, readonly, getter=shared) SpaydkmpKotlinx_serialization_coreStructureKindLIST *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)lIST __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreStructureKind.MAP")))
@interface SpaydkmpKotlinx_serialization_coreStructureKindMAP : SpaydkmpKotlinx_serialization_coreStructureKind
@property (class, readonly, getter=shared) SpaydkmpKotlinx_serialization_coreStructureKindMAP *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)mAP __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreStructureKind.OBJECT")))
@interface SpaydkmpKotlinx_serialization_coreStructureKindOBJECT : SpaydkmpKotlinx_serialization_coreStructureKind
@property (class, readonly, getter=shared) SpaydkmpKotlinx_serialization_coreStructureKindOBJECT *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)oBJECT __attribute__((swift_name("init()")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol SpaydkmpKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeMonth")))
@interface SpaydkmpKotlinx_datetimeMonth : SpaydkmpKotlinEnum<SpaydkmpKotlinx_datetimeMonth *>
@property (class, readonly) SpaydkmpKotlinx_datetimeMonth *january __attribute__((swift_name("january")));
@property (class, readonly) SpaydkmpKotlinx_datetimeMonth *february __attribute__((swift_name("february")));
@property (class, readonly) SpaydkmpKotlinx_datetimeMonth *march __attribute__((swift_name("march")));
@property (class, readonly) SpaydkmpKotlinx_datetimeMonth *april __attribute__((swift_name("april")));
@property (class, readonly) SpaydkmpKotlinx_datetimeMonth *may __attribute__((swift_name("may")));
@property (class, readonly) SpaydkmpKotlinx_datetimeMonth *june __attribute__((swift_name("june")));
@property (class, readonly) SpaydkmpKotlinx_datetimeMonth *july __attribute__((swift_name("july")));
@property (class, readonly) SpaydkmpKotlinx_datetimeMonth *august __attribute__((swift_name("august")));
@property (class, readonly) SpaydkmpKotlinx_datetimeMonth *september __attribute__((swift_name("september")));
@property (class, readonly) SpaydkmpKotlinx_datetimeMonth *october __attribute__((swift_name("october")));
@property (class, readonly) SpaydkmpKotlinx_datetimeMonth *november __attribute__((swift_name("november")));
@property (class, readonly) SpaydkmpKotlinx_datetimeMonth *december __attribute__((swift_name("december")));
@property (class, readonly) NSArray<SpaydkmpKotlinx_datetimeMonth *> *entries __attribute__((swift_name("entries")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (SpaydkmpKotlinArray<SpaydkmpKotlinx_datetimeMonth *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeLocalDate.Companion")))
@interface SpaydkmpKotlinx_datetimeLocalDateCompanion : SpaydkmpBase
@property (class, readonly, getter=shared) SpaydkmpKotlinx_datetimeLocalDateCompanion *shared __attribute__((swift_name("shared")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SpaydkmpKotlinx_datetimeDateTimeFormat>)FormatBlock:(void (^)(id<SpaydkmpKotlinx_datetimeDateTimeFormatBuilderWithDate>))block __attribute__((swift_name("Format(block:)")));
- (SpaydkmpKotlinx_datetimeLocalDate *)fromEpochDaysEpochDays:(int32_t)epochDays __attribute__((swift_name("fromEpochDays(epochDays:)")));
- (SpaydkmpKotlinx_datetimeLocalDate *)parseInput:(id)input format:(id<SpaydkmpKotlinx_datetimeDateTimeFormat>)format __attribute__((swift_name("parse(input:format:)")));
- (id<SpaydkmpKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeDayOfWeek")))
@interface SpaydkmpKotlinx_datetimeDayOfWeek : SpaydkmpKotlinEnum<SpaydkmpKotlinx_datetimeDayOfWeek *>
@property (class, readonly) SpaydkmpKotlinx_datetimeDayOfWeek *monday __attribute__((swift_name("monday")));
@property (class, readonly) SpaydkmpKotlinx_datetimeDayOfWeek *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) SpaydkmpKotlinx_datetimeDayOfWeek *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) SpaydkmpKotlinx_datetimeDayOfWeek *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) SpaydkmpKotlinx_datetimeDayOfWeek *friday __attribute__((swift_name("friday")));
@property (class, readonly) SpaydkmpKotlinx_datetimeDayOfWeek *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) SpaydkmpKotlinx_datetimeDayOfWeek *sunday __attribute__((swift_name("sunday")));
@property (class, readonly) NSArray<SpaydkmpKotlinx_datetimeDayOfWeek *> *entries __attribute__((swift_name("entries")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (SpaydkmpKotlinArray<SpaydkmpKotlinx_datetimeDayOfWeek *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((swift_name("KotlinCharIterator")))
@interface SpaydkmpKotlinCharIterator : SpaydkmpBase <SpaydkmpKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id)next __attribute__((swift_name("next()")));
- (unichar)nextChar __attribute__((swift_name("nextChar()")));
@end

__attribute__((swift_name("Kotlinx_datetimeDateTimeFormat")))
@protocol SpaydkmpKotlinx_datetimeDateTimeFormat
@required
- (NSString *)formatValue:(id _Nullable)value __attribute__((swift_name("format(value:)")));
- (id<SpaydkmpKotlinAppendable>)formatToAppendable:(id<SpaydkmpKotlinAppendable>)appendable value:(id _Nullable)value __attribute__((swift_name("formatTo(appendable:value:)")));
- (id _Nullable)parseInput:(id)input __attribute__((swift_name("parse(input:)")));
- (id _Nullable)parseOrNullInput:(id)input __attribute__((swift_name("parseOrNull(input:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimePadding")))
@interface SpaydkmpKotlinx_datetimePadding : SpaydkmpKotlinEnum<SpaydkmpKotlinx_datetimePadding *>
@property (class, readonly) SpaydkmpKotlinx_datetimePadding *none __attribute__((swift_name("none")));
@property (class, readonly) SpaydkmpKotlinx_datetimePadding *zero __attribute__((swift_name("zero")));
@property (class, readonly) SpaydkmpKotlinx_datetimePadding *space __attribute__((swift_name("space")));
@property (class, readonly) NSArray<SpaydkmpKotlinx_datetimePadding *> *entries __attribute__((swift_name("entries")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (SpaydkmpKotlinArray<SpaydkmpKotlinx_datetimePadding *> *)values __attribute__((swift_name("values()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeDayOfWeekNames")))
@interface SpaydkmpKotlinx_datetimeDayOfWeekNames : SpaydkmpBase
@property (class, readonly, getter=companion) SpaydkmpKotlinx_datetimeDayOfWeekNamesCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSArray<NSString *> *names __attribute__((swift_name("names")));
- (instancetype)initWithNames:(NSArray<NSString *> *)names __attribute__((swift_name("init(names:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMonday:(NSString *)monday tuesday:(NSString *)tuesday wednesday:(NSString *)wednesday thursday:(NSString *)thursday friday:(NSString *)friday saturday:(NSString *)saturday sunday:(NSString *)sunday __attribute__((swift_name("init(monday:tuesday:wednesday:thursday:friday:saturday:sunday:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeMonthNames")))
@interface SpaydkmpKotlinx_datetimeMonthNames : SpaydkmpBase
@property (class, readonly, getter=companion) SpaydkmpKotlinx_datetimeMonthNamesCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSArray<NSString *> *names __attribute__((swift_name("names")));
- (instancetype)initWithNames:(NSArray<NSString *> *)names __attribute__((swift_name("init(names:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithJanuary:(NSString *)january february:(NSString *)february march:(NSString *)march april:(NSString *)april may:(NSString *)may june:(NSString *)june july:(NSString *)july august:(NSString *)august september:(NSString *)september october:(NSString *)october november:(NSString *)november december:(NSString *)december __attribute__((swift_name("init(january:february:march:april:may:june:july:august:september:october:november:december:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol SpaydkmpKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<SpaydkmpKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<SpaydkmpKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol SpaydkmpKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<SpaydkmpKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<SpaydkmpKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol SpaydkmpKotlinx_serialization_coreKSerializer <SpaydkmpKotlinx_serialization_coreSerializationStrategy, SpaydkmpKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((swift_name("KotlinAppendable")))
@protocol SpaydkmpKotlinAppendable
@required
- (id<SpaydkmpKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<SpaydkmpKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<SpaydkmpKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeDayOfWeekNames.Companion")))
@interface SpaydkmpKotlinx_datetimeDayOfWeekNamesCompanion : SpaydkmpBase
@property (class, readonly, getter=shared) SpaydkmpKotlinx_datetimeDayOfWeekNamesCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SpaydkmpKotlinx_datetimeDayOfWeekNames *ENGLISH_ABBREVIATED __attribute__((swift_name("ENGLISH_ABBREVIATED")));
@property (readonly) SpaydkmpKotlinx_datetimeDayOfWeekNames *ENGLISH_FULL __attribute__((swift_name("ENGLISH_FULL")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeMonthNames.Companion")))
@interface SpaydkmpKotlinx_datetimeMonthNamesCompanion : SpaydkmpBase
@property (class, readonly, getter=shared) SpaydkmpKotlinx_datetimeMonthNamesCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SpaydkmpKotlinx_datetimeMonthNames *ENGLISH_ABBREVIATED __attribute__((swift_name("ENGLISH_ABBREVIATED")));
@property (readonly) SpaydkmpKotlinx_datetimeMonthNames *ENGLISH_FULL __attribute__((swift_name("ENGLISH_FULL")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol SpaydkmpKotlinx_serialization_coreEncoder
@required
- (id<SpaydkmpKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<SpaydkmpKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<SpaydkmpKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<SpaydkmpKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<SpaydkmpKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<SpaydkmpKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<SpaydkmpKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<SpaydkmpKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<SpaydkmpKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) SpaydkmpKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol SpaydkmpKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<SpaydkmpKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SpaydkmpKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<SpaydkmpKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) SpaydkmpKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol SpaydkmpKotlinx_serialization_coreDecoder
@required
- (id<SpaydkmpKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<SpaydkmpKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<SpaydkmpKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<SpaydkmpKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<SpaydkmpKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (SpaydkmpKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<SpaydkmpKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<SpaydkmpKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) SpaydkmpKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol SpaydkmpKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<SpaydkmpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<SpaydkmpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<SpaydkmpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<SpaydkmpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<SpaydkmpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<SpaydkmpKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<SpaydkmpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<SpaydkmpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<SpaydkmpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<SpaydkmpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<SpaydkmpKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<SpaydkmpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<SpaydkmpKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<SpaydkmpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<SpaydkmpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<SpaydkmpKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<SpaydkmpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) SpaydkmpKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface SpaydkmpKotlinx_serialization_coreSerializersModule : SpaydkmpBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<SpaydkmpKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SpaydkmpKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<SpaydkmpKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<SpaydkmpKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SpaydkmpKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<SpaydkmpKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SpaydkmpKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<SpaydkmpKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol SpaydkmpKotlinAnnotation
@required
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol SpaydkmpKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<SpaydkmpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<SpaydkmpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<SpaydkmpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<SpaydkmpKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<SpaydkmpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<SpaydkmpKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<SpaydkmpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<SpaydkmpKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<SpaydkmpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<SpaydkmpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<SpaydkmpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<SpaydkmpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SpaydkmpKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<SpaydkmpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SpaydkmpKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<SpaydkmpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<SpaydkmpKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<SpaydkmpKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) SpaydkmpKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface SpaydkmpKotlinNothing : SpaydkmpBase
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol SpaydkmpKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<SpaydkmpKotlinKClass>)kClass provider:(id<SpaydkmpKotlinx_serialization_coreKSerializer> (^)(NSArray<id<SpaydkmpKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<SpaydkmpKotlinKClass>)kClass serializer:(id<SpaydkmpKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<SpaydkmpKotlinKClass>)baseClass actualClass:(id<SpaydkmpKotlinKClass>)actualClass actualSerializer:(id<SpaydkmpKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<SpaydkmpKotlinKClass>)baseClass defaultDeserializerProvider:(id<SpaydkmpKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<SpaydkmpKotlinKClass>)baseClass defaultDeserializerProvider:(id<SpaydkmpKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<SpaydkmpKotlinKClass>)baseClass defaultSerializerProvider:(id<SpaydkmpKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END