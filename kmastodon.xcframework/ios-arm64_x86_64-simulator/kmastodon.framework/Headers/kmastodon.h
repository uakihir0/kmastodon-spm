#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class KmastodonCoreAccessToken, KmastodonCoreAccessTokenCompanion, KmastodonCoreAccount, KmastodonCoreAccountCompanion, KmastodonCoreAccountList, KmastodonCoreAccountListCompanion, KmastodonCoreAccountSource, KmastodonCoreAccountSourceCompanion, KmastodonCoreAccountsAccountRequest, KmastodonCoreAccountsBlockRequest, KmastodonCoreAccountsFollowRequest, KmastodonCoreAccountsFollowersRequest, KmastodonCoreAccountsFollowingRequest, KmastodonCoreAccountsMuteRequest, KmastodonCoreAccountsRelationshipsRequest, KmastodonCoreAccountsSearchRequest, KmastodonCoreAccountsStatusesRequest, KmastodonCoreAccountsUnblockRequest, KmastodonCoreAccountsUnfollowRequest, KmastodonCoreAccountsUnmuteRequest, KmastodonCoreAccountsUpdateCredentialsRequest, KmastodonCoreAlert, KmastodonCoreAlertCompanion, KmastodonCoreApplication, KmastodonCoreApplicationCompanion, KmastodonCoreAppsRegisterApplicationRequest, KmastodonCoreAttachment, KmastodonCoreAttachmentCompanion, KmastodonCoreBlocksBlocksRequest, KmastodonCoreBookmarksBookmarkRequest, KmastodonCoreBookmarksGetBookmarksRequest, KmastodonCoreBookmarksUnbookmarkRequest, KmastodonCoreCard, KmastodonCoreCardCompanion, KmastodonCoreClientCredential, KmastodonCoreClientCredentialCompanion, KmastodonCoreContext, KmastodonCoreContextCompanion, KmastodonCoreConversation, KmastodonCoreConversationCompanion, KmastodonCoreDomainBlocksBlockDomainRequest, KmastodonCoreDomainBlocksGetDomainBlocksRequest, KmastodonCoreDomainBlocksUnblockDomainRequest, KmastodonCoreEmoji, KmastodonCoreEmojiCompanion, KmastodonCoreFavouritesFavouritesRequest, KmastodonCoreField, KmastodonCoreFieldCompanion, KmastodonCoreFilter, KmastodonCoreFilterCompanion, KmastodonCoreFilterKeyword, KmastodonCoreFilterKeywordCompanion, KmastodonCoreFilterStatus, KmastodonCoreFilterStatusCompanion, KmastodonCoreFollowRequestsAuthorizeFollowRequestRequest, KmastodonCoreFollowRequestsRejectFollowRequestRequest, KmastodonCoreFollowsRemoteFollowRequest, KmastodonCoreHistory, KmastodonCoreHistoryCompanion, KmastodonCoreInstanceV1, KmastodonCoreInstanceV1Companion, KmastodonCoreInstanceV1Configuration, KmastodonCoreInstanceV1ConfigurationCompanion, KmastodonCoreInstanceV1MediaAttachments, KmastodonCoreInstanceV1MediaAttachmentsCompanion, KmastodonCoreInstanceV1Polls, KmastodonCoreInstanceV1PollsCompanion, KmastodonCoreInstanceV1Rules, KmastodonCoreInstanceV1RulesCompanion, KmastodonCoreInstanceV1Stats, KmastodonCoreInstanceV1StatsCompanion, KmastodonCoreInstanceV1Statuses, KmastodonCoreInstanceV1StatusesCompanion, KmastodonCoreInstanceV1Urls, KmastodonCoreInstanceV1UrlsCompanion, KmastodonCoreInstanceV2, KmastodonCoreInstanceV2Accounts, KmastodonCoreInstanceV2AccountsCompanion, KmastodonCoreInstanceV2Companion, KmastodonCoreInstanceV2Configuration, KmastodonCoreInstanceV2ConfigurationCompanion, KmastodonCoreInstanceV2Contact, KmastodonCoreInstanceV2ContactCompanion, KmastodonCoreInstanceV2MediaAttachments, KmastodonCoreInstanceV2MediaAttachmentsCompanion, KmastodonCoreInstanceV2Polls, KmastodonCoreInstanceV2PollsCompanion, KmastodonCoreInstanceV2Registrations, KmastodonCoreInstanceV2RegistrationsCompanion, KmastodonCoreInstanceV2Rules, KmastodonCoreInstanceV2RulesCompanion, KmastodonCoreInstanceV2Statuses, KmastodonCoreInstanceV2StatusesCompanion, KmastodonCoreInstanceV2Thumbnail, KmastodonCoreInstanceV2ThumbnailCompanion, KmastodonCoreInstanceV2Translation, KmastodonCoreInstanceV2TranslationCompanion, KmastodonCoreInstanceV2Urls, KmastodonCoreInstanceV2UrlsCompanion, KmastodonCoreInstanceV2Usage, KmastodonCoreInstanceV2UsageCompanion, KmastodonCoreInstanceV2Users, KmastodonCoreInstanceV2UsersCompanion, KmastodonCoreInstanceV2Vapid, KmastodonCoreInstanceV2VapidCompanion, KmastodonCoreInstanceV2Versions, KmastodonCoreInstanceV2VersionsCompanion, KmastodonCoreLink, KmastodonCoreLinkCompanion, KmastodonCoreListsAddAccountsToListRequest, KmastodonCoreListsCreateListRequest, KmastodonCoreListsDeleteAccountsToListRequest, KmastodonCoreListsDeleteListRequest, KmastodonCoreListsListAccountsRequest, KmastodonCoreListsListRequest, KmastodonCoreListsListsRequest, KmastodonCoreListsUpdateListRequest, KmastodonCoreMediasPostMediaRequest, KmastodonCoreMention, KmastodonCoreMentionCompanion, KmastodonCoreMeta, KmastodonCoreMetaCompanion, KmastodonCoreMetaFocus, KmastodonCoreMetaFocusCompanion, KmastodonCoreMetaOriginal, KmastodonCoreMetaOriginalCompanion, KmastodonCoreNode, KmastodonCoreNodeCompanion, KmastodonCoreNodeSoftware, KmastodonCoreNodeSoftwareCompanion, KmastodonCoreNotification, KmastodonCoreNotificationCompanion, KmastodonCoreNotificationsEditSubscriptionRequest, KmastodonCoreNotificationsNotificationRequest, KmastodonCoreNotificationsNotificationsRequest, KmastodonCoreNotificationsPostSubscriptionRequest, KmastodonCoreOAuthAuthorizationUrlRequest, KmastodonCoreOAuthIssueAccessTokenWithAuthorizationCodeRequest, KmastodonCoreOAuthIssueAccessTokenWithCredentialsRequest, KmastodonCoreOAuthRefreshAccessTokenRequest, KmastodonCorePage, KmastodonCorePleromaAccount, KmastodonCorePleromaAccountCompanion, KmastodonCorePleromaContent, KmastodonCorePleromaContentCompanion, KmastodonCorePleromaReaction, KmastodonCorePleromaReactionCompanion, KmastodonCorePleromaStatus, KmastodonCorePleromaStatusCompanion, KmastodonCorePoll, KmastodonCorePollCompanion, KmastodonCorePollOption, KmastodonCorePollOptionCompanion, KmastodonCorePollsVotePollRequest, KmastodonCoreRange, KmastodonCoreRateLimit, KmastodonCoreRateLimitCompanion, KmastodonCoreRelationship, KmastodonCoreRelationshipCompanion, KmastodonCoreReport, KmastodonCoreReportCompanion, KmastodonCoreReportsPostReportRequest, KmastodonCoreResponse<T>, KmastodonCoreResponseUnit, KmastodonCoreResults, KmastodonCoreResultsCompanion, KmastodonCoreRole, KmastodonCoreRoleCompanion, KmastodonCoreScheduledStatus, KmastodonCoreScheduledStatusCompanion, KmastodonCoreScheduledStatusParams, KmastodonCoreScheduledStatusParamsCompanion, KmastodonCoreScheduledStatusesGetScheduledStatusesRequest, KmastodonCoreScheduledStatusesPatchScheduledStatusRequest, KmastodonCoreScheduledStatusesScheduledStatusRequest, KmastodonCoreSearchSearchRequest, KmastodonCoreService, KmastodonCoreServiceCompanion, KmastodonCoreStatus, KmastodonCoreStatusCompanion, KmastodonCoreStatusesCardRequest, KmastodonCoreStatusesContextRequest, KmastodonCoreStatusesDeleteStatusRequest, KmastodonCoreStatusesEditStatusRequest, KmastodonCoreStatusesFavouriteRequest, KmastodonCoreStatusesFavouritedByRequest, KmastodonCoreStatusesPinRequest, KmastodonCoreStatusesPostStatusRequest, KmastodonCoreStatusesReblogRequest, KmastodonCoreStatusesRebloggedByRequest, KmastodonCoreStatusesStatusRequest, KmastodonCoreStatusesUnfavouriteRequest, KmastodonCoreStatusesUnpinRequest, KmastodonCoreStatusesUnreblogRequest, KmastodonCoreSubscription, KmastodonCoreSubscriptionCompanion, KmastodonCoreTag, KmastodonCoreTagCompanion, KmastodonCoreTimelinesConversationsRequest, KmastodonCoreTimelinesHashTagTimelineRequest, KmastodonCoreTimelinesHomeTimelineRequest, KmastodonCoreTimelinesListTimelineRequest, KmastodonCoreTimelinesPublicTimelineRequest, KmastodonCoreTrend, KmastodonCoreTrendCompanion, KmastodonCoreTrendsTrendsRequest, KmastodonKhttpclientHttpResponse, KmastodonKhttpclientHttpResponseCompanion, KmastodonKmastodonFactory, KmastodonKotlinAbstractCoroutineContextElement, KmastodonKotlinAbstractCoroutineContextKey<B, E>, KmastodonKotlinArray<T>, KmastodonKotlinByteArray, KmastodonKotlinByteIterator, KmastodonKotlinCancellationException, KmastodonKotlinEnum<E>, KmastodonKotlinEnumCompanion, KmastodonKotlinException, KmastodonKotlinIllegalStateException, KmastodonKotlinInstant, KmastodonKotlinInstantCompanion, KmastodonKotlinKTypeProjection, KmastodonKotlinKTypeProjectionCompanion, KmastodonKotlinKVariance, KmastodonKotlinNothing, KmastodonKotlinRuntimeException, KmastodonKotlinThrowable, KmastodonKotlinUnit, KmastodonKotlinx_coroutines_coreCoroutineDispatcher, KmastodonKotlinx_coroutines_coreCoroutineDispatcherKey, KmastodonKotlinx_io_coreBuffer, KmastodonKotlinx_serialization_coreSerialKind, KmastodonKotlinx_serialization_coreSerializersModule, KmastodonKotlinx_serialization_jsonClassDiscriminatorMode, KmastodonKotlinx_serialization_jsonJson, KmastodonKotlinx_serialization_jsonJsonConfiguration, KmastodonKotlinx_serialization_jsonJsonDefault, KmastodonKotlinx_serialization_jsonJsonElement, KmastodonKotlinx_serialization_jsonJsonElementCompanion, KmastodonKtor_client_coreHttpClient, KmastodonKtor_client_coreHttpClientCall, KmastodonKtor_client_coreHttpClientCallCompanion, KmastodonKtor_client_coreHttpClientConfig<T>, KmastodonKtor_client_coreHttpClientEngineConfig, KmastodonKtor_client_coreHttpReceivePipeline, KmastodonKtor_client_coreHttpReceivePipelinePhases, KmastodonKtor_client_coreHttpRequestBuilder, KmastodonKtor_client_coreHttpRequestBuilderCompanion, KmastodonKtor_client_coreHttpRequestData, KmastodonKtor_client_coreHttpRequestPipeline, KmastodonKtor_client_coreHttpRequestPipelinePhases, KmastodonKtor_client_coreHttpResponse, KmastodonKtor_client_coreHttpResponseContainer, KmastodonKtor_client_coreHttpResponseData, KmastodonKtor_client_coreHttpResponsePipeline, KmastodonKtor_client_coreHttpResponsePipelinePhases, KmastodonKtor_client_coreHttpSendPipeline, KmastodonKtor_client_coreHttpSendPipelinePhases, KmastodonKtor_client_coreProxyConfig, KmastodonKtor_eventsEventDefinition<T>, KmastodonKtor_eventsEvents, KmastodonKtor_httpContentType, KmastodonKtor_httpContentTypeCompanion, KmastodonKtor_httpHeaderValueParam, KmastodonKtor_httpHeaderValueWithParameters, KmastodonKtor_httpHeaderValueWithParametersCompanion, KmastodonKtor_httpHeadersBuilder, KmastodonKtor_httpHttpMethod, KmastodonKtor_httpHttpMethodCompanion, KmastodonKtor_httpHttpProtocolVersion, KmastodonKtor_httpHttpProtocolVersionCompanion, KmastodonKtor_httpHttpStatusCode, KmastodonKtor_httpHttpStatusCodeCompanion, KmastodonKtor_httpOutgoingContent, KmastodonKtor_httpURLBuilder, KmastodonKtor_httpURLBuilderCompanion, KmastodonKtor_httpURLProtocol, KmastodonKtor_httpURLProtocolCompanion, KmastodonKtor_httpUrl, KmastodonKtor_httpUrlCompanion, KmastodonKtor_utilsAttributeKey<T>, KmastodonKtor_utilsGMTDate, KmastodonKtor_utilsGMTDateCompanion, KmastodonKtor_utilsMonth, KmastodonKtor_utilsMonthCompanion, KmastodonKtor_utilsPipeline<TSubject, TContext>, KmastodonKtor_utilsPipelinePhase, KmastodonKtor_utilsStringValuesBuilderImpl, KmastodonKtor_utilsTypeInfo, KmastodonKtor_utilsWeekDay, KmastodonKtor_utilsWeekDayCompanion;

@protocol KmastodonCoreAccountsResource, KmastodonCoreAppsResource, KmastodonCoreBlocksResource, KmastodonCoreBookmarksResource, KmastodonCoreDomainBlocksResource, KmastodonCoreEmojisResource, KmastodonCoreFavouritesResource, KmastodonCoreFollowRequestsResource, KmastodonCoreFollowsResource, KmastodonCoreInstancesResource, KmastodonCoreListsResource, KmastodonCoreMastodon, KmastodonCoreMediasResource, KmastodonCoreMutesResource, KmastodonCoreNodesResource, KmastodonCoreNotificationsResource, KmastodonCoreOAuthResource, KmastodonCorePollsResource, KmastodonCoreReportsResource, KmastodonCoreScheduledStatusesResource, KmastodonCoreSearchResource, KmastodonCoreStatusesResource, KmastodonCoreTimelinesResource, KmastodonCoreTrendsResource, KmastodonKotlinAnnotation, KmastodonKotlinAutoCloseable, KmastodonKotlinComparable, KmastodonKotlinContinuation, KmastodonKotlinContinuationInterceptor, KmastodonKotlinCoroutineContext, KmastodonKotlinCoroutineContextElement, KmastodonKotlinCoroutineContextKey, KmastodonKotlinFunction, KmastodonKotlinIterator, KmastodonKotlinKAnnotatedElement, KmastodonKotlinKClass, KmastodonKotlinKClassifier, KmastodonKotlinKDeclarationContainer, KmastodonKotlinKType, KmastodonKotlinMapEntry, KmastodonKotlinSequence, KmastodonKotlinSuspendFunction2, KmastodonKotlinx_coroutines_coreChildHandle, KmastodonKotlinx_coroutines_coreChildJob, KmastodonKotlinx_coroutines_coreCoroutineScope, KmastodonKotlinx_coroutines_coreDisposableHandle, KmastodonKotlinx_coroutines_coreJob, KmastodonKotlinx_coroutines_coreParentJob, KmastodonKotlinx_coroutines_coreRunnable, KmastodonKotlinx_coroutines_coreSelectClause, KmastodonKotlinx_coroutines_coreSelectClause0, KmastodonKotlinx_coroutines_coreSelectInstance, KmastodonKotlinx_io_coreRawSink, KmastodonKotlinx_io_coreRawSource, KmastodonKotlinx_io_coreSink, KmastodonKotlinx_io_coreSource, KmastodonKotlinx_serialization_coreCompositeDecoder, KmastodonKotlinx_serialization_coreCompositeEncoder, KmastodonKotlinx_serialization_coreDecoder, KmastodonKotlinx_serialization_coreDeserializationStrategy, KmastodonKotlinx_serialization_coreEncoder, KmastodonKotlinx_serialization_coreKSerializer, KmastodonKotlinx_serialization_coreSerialDescriptor, KmastodonKotlinx_serialization_coreSerialFormat, KmastodonKotlinx_serialization_coreSerializationStrategy, KmastodonKotlinx_serialization_coreSerializersModuleCollector, KmastodonKotlinx_serialization_coreStringFormat, KmastodonKotlinx_serialization_jsonJsonNamingStrategy, KmastodonKtor_client_coreHttpClientEngine, KmastodonKtor_client_coreHttpClientEngineCapability, KmastodonKtor_client_coreHttpClientPlugin, KmastodonKtor_client_coreHttpRequest, KmastodonKtor_httpHeaders, KmastodonKtor_httpHttpMessage, KmastodonKtor_httpHttpMessageBuilder, KmastodonKtor_httpParameters, KmastodonKtor_httpParametersBuilder, KmastodonKtor_ioByteReadChannel, KmastodonKtor_ioCloseable, KmastodonKtor_ioJvmSerializable, KmastodonKtor_utilsAttributes, KmastodonKtor_utilsStringValues, KmastodonKtor_utilsStringValuesBuilder;

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
@interface KmastodonBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface KmastodonBase (KmastodonBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface KmastodonMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface KmastodonMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorKmastodonKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface KmastodonNumber : NSNumber
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
@interface KmastodonByte : KmastodonNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface KmastodonUByte : KmastodonNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface KmastodonShort : KmastodonNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface KmastodonUShort : KmastodonNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface KmastodonInt : KmastodonNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface KmastodonUInt : KmastodonNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface KmastodonLong : KmastodonNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface KmastodonULong : KmastodonNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface KmastodonFloat : KmastodonNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface KmastodonDouble : KmastodonNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface KmastodonBoolean : KmastodonNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KmastodonFactory")))
@interface KmastodonKmastodonFactory : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)kmastodonFactory __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonKmastodonFactory *shared __attribute__((swift_name("shared")));
- (id<KmastodonCoreMastodon>)instanceUri:(NSString *)uri userAccessToken:(NSString *)userAccessToken service:(KmastodonCoreService *)service __attribute__((swift_name("instance(uri:userAccessToken:service:)")));
@end

__attribute__((swift_name("CoreMastodon")))
@protocol KmastodonCoreMastodon
@required
- (NSString *)accessToken __attribute__((swift_name("accessToken()")));
- (id<KmastodonCoreAccountsResource>)accounts __attribute__((swift_name("accounts()")));
- (id<KmastodonCoreAppsResource>)apps __attribute__((swift_name("apps()")));
- (id<KmastodonCoreBlocksResource>)blocks __attribute__((swift_name("blocks()")));
- (id<KmastodonCoreBookmarksResource>)bookmarks __attribute__((swift_name("bookmarks()")));
- (id<KmastodonCoreDomainBlocksResource>)domainBlocks __attribute__((swift_name("domainBlocks()")));
- (id<KmastodonCoreEmojisResource>)emojis __attribute__((swift_name("emojis()")));
- (id<KmastodonCoreFavouritesResource>)favourites __attribute__((swift_name("favourites()")));
- (id<KmastodonCoreFollowRequestsResource>)followRequests __attribute__((swift_name("followRequests()")));
- (id<KmastodonCoreFollowsResource>)follows __attribute__((swift_name("follows()")));
- (id<KmastodonCoreInstancesResource>)instances __attribute__((swift_name("instances()")));
- (id<KmastodonCoreListsResource>)lists __attribute__((swift_name("lists()")));
- (id<KmastodonCoreMediasResource>)medias __attribute__((swift_name("medias()")));
- (id<KmastodonCoreMutesResource>)mutes __attribute__((swift_name("mutes()")));
- (id<KmastodonCoreNodesResource>)nodes __attribute__((swift_name("nodes()")));
- (id<KmastodonCoreNotificationsResource>)notifications __attribute__((swift_name("notifications()")));
- (id<KmastodonCoreOAuthResource>)oauth __attribute__((swift_name("oauth()")));
- (id<KmastodonCorePollsResource>)polls __attribute__((swift_name("polls()")));
- (id<KmastodonCoreReportsResource>)reports __attribute__((swift_name("reports()")));
- (id<KmastodonCoreScheduledStatusesResource>)scheduledStatuses __attribute__((swift_name("scheduledStatuses()")));
- (id<KmastodonCoreSearchResource>)search __attribute__((swift_name("search()")));

/** Get kind of service  */
- (KmastodonCoreService *)service __attribute__((swift_name("service()")));
- (id<KmastodonCoreStatusesResource>)statuses __attribute__((swift_name("statuses()")));
- (id<KmastodonCoreTimelinesResource>)timelines __attribute__((swift_name("timelines()")));
- (id<KmastodonCoreTrendsResource>)trends __attribute__((swift_name("trends()")));
- (NSString *)uri __attribute__((swift_name("uri()")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol KmastodonKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface KmastodonKotlinEnum<E> : KmastodonBase <KmastodonKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmastodonKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreService")))
@interface KmastodonCoreService : KmastodonKotlinEnum<KmastodonCoreService *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmastodonCoreServiceCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KmastodonCoreService *mastodon __attribute__((swift_name("mastodon")));
@property (class, readonly) KmastodonCoreService *pixelfed __attribute__((swift_name("pixelfed")));
@property (class, readonly) KmastodonCoreService *pleroma __attribute__((swift_name("pleroma")));
+ (KmastodonKotlinArray<KmastodonCoreService *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<KmastodonCoreService *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("CoreAccountsResource")))
@protocol KmastodonCoreAccountsResource
@required

/**
 * Fetching an account.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)accountRequest:(KmastodonCoreAccountsAccountRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonCoreAccount *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("account(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonCoreAccount *> *)accountBlockingRequest:(KmastodonCoreAccountsAccountRequest *)request __attribute__((swift_name("accountBlocking(request:)")));

/**
 * Blocking an account.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)blockRequest:(KmastodonCoreAccountsBlockRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonCoreRelationship *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("block(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonCoreRelationship *> *)blockBlockingRequest:(KmastodonCoreAccountsBlockRequest *)request __attribute__((swift_name("blockBlocking(request:)")));

/**
 * Following an account.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)followRequest:(KmastodonCoreAccountsFollowRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonCoreRelationship *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("follow(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonCoreRelationship *> *)followBlockingRequest:(KmastodonCoreAccountsFollowRequest *)request __attribute__((swift_name("followBlocking(request:)")));

/**
 * Getting an account's followers.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)followersRequest:(KmastodonCoreAccountsFollowersRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreAccount *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("followers(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreAccount *> *> *)followersBlockingRequest:(KmastodonCoreAccountsFollowersRequest *)request __attribute__((swift_name("followersBlocking(request:)")));

/**
 * Getting who account is following.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)followingRequest:(KmastodonCoreAccountsFollowingRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreAccount *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("following(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreAccount *> *> *)followingBlockingRequest:(KmastodonCoreAccountsFollowingRequest *)request __attribute__((swift_name("followingBlocking(request:)")));

/**
 * Muting an account.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)muteRequest:(KmastodonCoreAccountsMuteRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonCoreRelationship *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("mute(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonCoreRelationship *> *)muteBlockingRequest:(KmastodonCoreAccountsMuteRequest *)request __attribute__((swift_name("muteBlocking(request:)")));

/**
 * Getting an account's relationships.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)relationshipsRequest:(KmastodonCoreAccountsRelationshipsRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreRelationship *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("relationships(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreRelationship *> *> *)relationshipsBlockingRequest:(KmastodonCoreAccountsRelationshipsRequest *)request __attribute__((swift_name("relationshipsBlocking(request:)")));

/**
 * Searching for accounts.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)searchRequest:(KmastodonCoreAccountsSearchRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreAccount *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("search(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreAccount *> *> *)searchBlockingRequest:(KmastodonCoreAccountsSearchRequest *)request __attribute__((swift_name("searchBlocking(request:)")));

/**
 * Getting an account's statuses.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)statusesRequest:(KmastodonCoreAccountsStatusesRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreStatus *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("statuses(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreStatus *> *> *)statusesBlockingRequest:(KmastodonCoreAccountsStatusesRequest *)request __attribute__((swift_name("statusesBlocking(request:)")));

/**
 * Unblocking an account.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)unblockRequest:(KmastodonCoreAccountsUnblockRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonCoreRelationship *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("unblock(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonCoreRelationship *> *)unblockBlockingRequest:(KmastodonCoreAccountsUnblockRequest *)request __attribute__((swift_name("unblockBlocking(request:)")));

/**
 * Unfollowing an account.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)unfollowRequest:(KmastodonCoreAccountsUnfollowRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonCoreRelationship *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("unfollow(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonCoreRelationship *> *)unfollowBlockingRequest:(KmastodonCoreAccountsUnfollowRequest *)request __attribute__((swift_name("unfollowBlocking(request:)")));

/**
 * Unmuting an account.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)unmuteRequest:(KmastodonCoreAccountsUnmuteRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonCoreRelationship *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("unmute(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonCoreRelationship *> *)unmuteBlockingRequest:(KmastodonCoreAccountsUnmuteRequest *)request __attribute__((swift_name("unmuteBlocking(request:)")));

/**
 * Updating the current user.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateCredentialsRequest:(KmastodonCoreAccountsUpdateCredentialsRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonCoreAccount *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateCredentials(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonCoreAccount *> *)updateCredentialsBlockingRequest:(KmastodonCoreAccountsUpdateCredentialsRequest *)request __attribute__((swift_name("updateCredentialsBlocking(request:)")));

/**
 * Getting the current user.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)verifyCredentialsWithCompletionHandler:(void (^)(KmastodonCoreResponse<KmastodonCoreAccount *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("verifyCredentials(completionHandler:)")));
- (KmastodonCoreResponse<KmastodonCoreAccount *> *)verifyCredentialsBlocking __attribute__((swift_name("verifyCredentialsBlocking()")));
@end

__attribute__((swift_name("CoreAppsResource")))
@protocol KmastodonCoreAppsResource
@required

/**
 * Registering an application.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)registerApplicationRequest:(KmastodonCoreAppsRegisterApplicationRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonCoreClientCredential *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("registerApplication(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonCoreClientCredential *> *)registerApplicationBlockingRequest:(KmastodonCoreAppsRegisterApplicationRequest *)request __attribute__((swift_name("registerApplicationBlocking(request:)")));
@end

__attribute__((swift_name("CoreBlocksResource")))
@protocol KmastodonCoreBlocksResource
@required

/**
 * Fetching a user's blocks.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)blocksRequest:(KmastodonCoreBlocksBlocksRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreAccount *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("blocks(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreAccount *> *> *)blocksBlockingRequest:(KmastodonCoreBlocksBlocksRequest *)request __attribute__((swift_name("blocksBlocking(request:)")));
@end

__attribute__((swift_name("CoreBookmarksResource")))
@protocol KmastodonCoreBookmarksResource
@required

/**
 * Adding a bookmark.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bookmarkRequest:(KmastodonCoreBookmarksBookmarkRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonCoreStatus *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("bookmark(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonCoreStatus *> *)bookmarkBlockingRequest:(KmastodonCoreBookmarksBookmarkRequest *)request __attribute__((swift_name("bookmarkBlocking(request:)")));

/**
 * Getting bookmarks.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bookmarksRequest:(KmastodonCoreBookmarksGetBookmarksRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreStatus *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("bookmarks(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreStatus *> *> *)bookmarksBlockingRequest:(KmastodonCoreBookmarksGetBookmarksRequest *)request __attribute__((swift_name("bookmarksBlocking(request:)")));

/**
 * Removing a bookmark.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)unbookmarkRequest:(KmastodonCoreBookmarksUnbookmarkRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonCoreStatus *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("unbookmark(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonCoreStatus *> *)unbookmarkBlockingRequest:(KmastodonCoreBookmarksUnbookmarkRequest *)request __attribute__((swift_name("unbookmarkBlocking(request:)")));
@end

__attribute__((swift_name("CoreDomainBlocksResource")))
@protocol KmastodonCoreDomainBlocksResource
@required

/**
 * Blocking a domain.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)blockDomainRequest:(KmastodonCoreDomainBlocksBlockDomainRequest *)request completionHandler:(void (^)(KmastodonCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("blockDomain(request:completionHandler:)")));
- (KmastodonCoreResponseUnit *)blockDomainBlockingRequest:(KmastodonCoreDomainBlocksBlockDomainRequest *)request __attribute__((swift_name("blockDomainBlocking(request:)")));

/**
 * Getting domain blocks.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)domainBlocksRequest:(KmastodonCoreDomainBlocksGetDomainBlocksRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonKotlinArray<NSString *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("domainBlocks(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonKotlinArray<NSString *> *> *)domainBlocksBlockingRequest:(KmastodonCoreDomainBlocksGetDomainBlocksRequest *)request __attribute__((swift_name("domainBlocksBlocking(request:)")));

/**
 * Unblocking a domain.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)unblockDomainRequest:(KmastodonCoreDomainBlocksUnblockDomainRequest *)request completionHandler:(void (^)(KmastodonCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("unblockDomain(request:completionHandler:)")));
- (KmastodonCoreResponseUnit *)unblockDomainBlockingRequest:(KmastodonCoreDomainBlocksUnblockDomainRequest *)request __attribute__((swift_name("unblockDomainBlocking(request:)")));
@end

__attribute__((swift_name("CoreEmojisResource")))
@protocol KmastodonCoreEmojisResource
@required

/**
 * Get custom emojis.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)customEmojisWithCompletionHandler:(void (^)(KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreEmoji *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("customEmojis(completionHandler:)")));
- (KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreEmoji *> *> *)customEmojisBlocking __attribute__((swift_name("customEmojisBlocking()")));
@end

__attribute__((swift_name("CoreFavouritesResource")))
@protocol KmastodonCoreFavouritesResource
@required

/**
 * Fetching a user's favourites.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)favouritesRequest:(KmastodonCoreFavouritesFavouritesRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreStatus *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("favourites(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreStatus *> *> *)favouritesBlockingRequest:(KmastodonCoreFavouritesFavouritesRequest *)request __attribute__((swift_name("favouritesBlocking(request:)")));
@end

__attribute__((swift_name("CoreFollowRequestsResource")))
@protocol KmastodonCoreFollowRequestsResource
@required

/**
 * Authorizing follow requests.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)authorizeFollowRequestRequest:(KmastodonCoreFollowRequestsAuthorizeFollowRequestRequest *)request completionHandler:(void (^)(KmastodonCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("authorizeFollowRequest(request:completionHandler:)")));
- (KmastodonCoreResponseUnit *)authorizeFollowRequestBlockingRequest:(KmastodonCoreFollowRequestsAuthorizeFollowRequestRequest *)request __attribute__((swift_name("authorizeFollowRequestBlocking(request:)")));

/**
 * Fetching a list of follow requests.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)followRequestsWithCompletionHandler:(void (^)(KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreAccount *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("followRequests(completionHandler:)")));
- (KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreAccount *> *> *)followRequestsBlocking __attribute__((swift_name("followRequestsBlocking()")));

/**
 * Rejecting follow requests.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)rejectFollowRequestRequest:(KmastodonCoreFollowRequestsRejectFollowRequestRequest *)request completionHandler:(void (^)(KmastodonCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("rejectFollowRequest(request:completionHandler:)")));
- (KmastodonCoreResponseUnit *)rejectFollowRequestBlockingRequest:(KmastodonCoreFollowRequestsRejectFollowRequestRequest *)request __attribute__((swift_name("rejectFollowRequestBlocking(request:)")));
@end

__attribute__((swift_name("CoreFollowsResource")))
@protocol KmastodonCoreFollowsResource
@required

/**
 * Following a remote user.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)remoteFollowRequest:(KmastodonCoreFollowsRemoteFollowRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonCoreAccount *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("remoteFollow(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonCoreAccount *> *)remoteFollowBlockingRequest:(KmastodonCoreFollowsRemoteFollowRequest *)request __attribute__((swift_name("remoteFollowBlocking(request:)")));
@end

__attribute__((swift_name("CoreInstancesResource")))
@protocol KmastodonCoreInstancesResource
@required

/**
 * Getting instance information.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)instanceV1WithCompletionHandler:(void (^)(KmastodonCoreResponse<KmastodonCoreInstanceV1 *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("instanceV1(completionHandler:)")));
- (KmastodonCoreResponse<KmastodonCoreInstanceV1 *> *)instanceV1Blocking __attribute__((swift_name("instanceV1Blocking()")));

/**
 * Getting instance information.
 * Since v4.0.0
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)instanceV2WithCompletionHandler:(void (^)(KmastodonCoreResponse<KmastodonCoreInstanceV2 *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("instanceV2(completionHandler:)")));
- (KmastodonCoreResponse<KmastodonCoreInstanceV2 *> *)instanceV2Blocking __attribute__((swift_name("instanceV2Blocking()")));
@end

__attribute__((swift_name("CoreListsResource")))
@protocol KmastodonCoreListsResource
@required

/**
 * Add account to list.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)addAccountsToListRequest:(KmastodonCoreListsAddAccountsToListRequest *)request completionHandler:(void (^)(KmastodonCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("addAccountsToList(request:completionHandler:)")));
- (KmastodonCoreResponseUnit *)addAccountsToListBlockingRequest:(KmastodonCoreListsAddAccountsToListRequest *)request __attribute__((swift_name("addAccountsToListBlocking(request:)")));

/**
 * Create list.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)createListRequest:(KmastodonCoreListsCreateListRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonCoreAccountList *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("createList(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonCoreAccountList *> *)createListBlockingRequest:(KmastodonCoreListsCreateListRequest *)request __attribute__((swift_name("createListBlocking(request:)")));

/**
 * Delete account to list.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteAccountsToListRequest:(KmastodonCoreListsDeleteAccountsToListRequest *)request completionHandler:(void (^)(KmastodonCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("deleteAccountsToList(request:completionHandler:)")));
- (KmastodonCoreResponseUnit *)deleteAccountsToListBlockingRequest:(KmastodonCoreListsDeleteAccountsToListRequest *)request __attribute__((swift_name("deleteAccountsToListBlocking(request:)")));

/**
 * Delete list.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteListRequest:(KmastodonCoreListsDeleteListRequest *)request completionHandler:(void (^)(KmastodonCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("deleteList(request:completionHandler:)")));
- (KmastodonCoreResponseUnit *)deleteListBlockingRequest:(KmastodonCoreListsDeleteListRequest *)request __attribute__((swift_name("deleteListBlocking(request:)")));

/**
 * Fetching list.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)listRequest:(KmastodonCoreListsListRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonCoreAccountList *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("list(request:completionHandler:)")));

/**
 * Fetching accounts that are in a given list.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)listAccountsRequest:(KmastodonCoreListsListAccountsRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreAccount *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("listAccounts(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreAccount *> *> *)listAccountsBlockingRequest:(KmastodonCoreListsListAccountsRequest *)request __attribute__((swift_name("listAccountsBlocking(request:)")));
- (KmastodonCoreResponse<KmastodonCoreAccountList *> *)listBlockingRequest:(KmastodonCoreListsListRequest *)request __attribute__((swift_name("listBlocking(request:)")));

/**
 * Fetching the user's lists that a given account is part of.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)listsRequest:(KmastodonCoreListsListsRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreAccountList *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("lists(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreAccountList *> *> *)listsBlockingRequest:(KmastodonCoreListsListsRequest *)request __attribute__((swift_name("listsBlocking(request:)")));

/**
 * Fetching the authenticated user's lists.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)ownedListsWithCompletionHandler:(void (^)(KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreAccountList *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("ownedLists(completionHandler:)")));
- (KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreAccountList *> *> *)ownedListsBlocking __attribute__((swift_name("ownedListsBlocking()")));

/**
 * Update list.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateListRequest:(KmastodonCoreListsUpdateListRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonCoreAccountList *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateList(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonCoreAccountList *> *)updateListBlockingRequest:(KmastodonCoreListsUpdateListRequest *)request __attribute__((swift_name("updateListBlocking(request:)")));
@end

__attribute__((swift_name("CoreMediasResource")))
@protocol KmastodonCoreMediasResource
@required

/**
 * Uploading a media attachment.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postMediaRequest:(KmastodonCoreMediasPostMediaRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonCoreAttachment *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postMedia(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonCoreAttachment *> *)postMediaBlockingRequest:(KmastodonCoreMediasPostMediaRequest *)request __attribute__((swift_name("postMediaBlocking(request:)")));
@end

__attribute__((swift_name("CoreMutesResource")))
@protocol KmastodonCoreMutesResource
@required

/**
 * Fetching a user's mutes.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)mutesWithCompletionHandler:(void (^)(KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreAccount *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("mutes(completionHandler:)")));
- (KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreAccount *> *> *)mutesBlocking __attribute__((swift_name("mutesBlocking()")));
@end

__attribute__((swift_name("CoreNodesResource")))
@protocol KmastodonCoreNodesResource
@required

/**
 * Getting node information.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)nodeInfoWithCompletionHandler:(void (^)(KmastodonCoreResponse<KmastodonCoreNode *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("nodeInfo(completionHandler:)")));
- (KmastodonCoreResponse<KmastodonCoreNode *> *)nodeInfoBlocking __attribute__((swift_name("nodeInfoBlocking()")));
@end

__attribute__((swift_name("CoreNotificationsResource")))
@protocol KmastodonCoreNotificationsResource
@required

/**
 * Clearing notifications. Deletes all notifications
 * from the Mastodon server for the authenticated user.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearNotificationsWithCompletionHandler:(void (^)(KmastodonCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("clearNotifications(completionHandler:)")));
- (KmastodonCoreResponseUnit *)clearNotificationsBlocking __attribute__((swift_name("clearNotificationsBlocking()")));

/**
 * Change types of notifications
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)editSubscriptionRequest:(KmastodonCoreNotificationsEditSubscriptionRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonCoreNotification *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("editSubscription(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonCoreNotification *> *)editSubscriptionBlockingRequest:(KmastodonCoreNotificationsEditSubscriptionRequest *)request __attribute__((swift_name("editSubscriptionBlocking(request:)")));

/**
 * Getting a single notification.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)notificationRequest:(KmastodonCoreNotificationsNotificationRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonCoreNotification *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("notification(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonCoreNotification *> *)notificationBlockingRequest:(KmastodonCoreNotificationsNotificationRequest *)request __attribute__((swift_name("notificationBlocking(request:)")));

/**
 * Fetching a user's notifications.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)notificationsRequest:(KmastodonCoreNotificationsNotificationsRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreNotification *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("notifications(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreNotification *> *> *)notificationsBlockingRequest:(KmastodonCoreNotificationsNotificationsRequest *)request __attribute__((swift_name("notificationsBlocking(request:)")));

/**
 * Subscribe to push notifications.
 * Register service worker endpoint.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)pushSubscriptionRequest:(KmastodonCoreNotificationsPostSubscriptionRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonCoreNotification *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("pushSubscription(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonCoreNotification *> *)pushSubscriptionBlockingRequest:(KmastodonCoreNotificationsPostSubscriptionRequest *)request __attribute__((swift_name("pushSubscriptionBlocking(request:)")));

/**
 * Get current subscription.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)subscriptionWithCompletionHandler:(void (^)(KmastodonCoreResponse<KmastodonCoreSubscription *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("subscription(completionHandler:)")));
- (KmastodonCoreResponse<KmastodonCoreSubscription *> *)subscriptionBlocking __attribute__((swift_name("subscriptionBlocking()")));
@end

__attribute__((swift_name("CoreOAuthResource")))
@protocol KmastodonCoreOAuthResource
@required

/**
 * Get Authorization URL
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)authorizationUrlRequest:(KmastodonCoreOAuthAuthorizationUrlRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("authorizationUrl(request:completionHandler:)")));
- (KmastodonCoreResponse<NSString *> *)authorizationUrlBlockingRequest:(KmastodonCoreOAuthAuthorizationUrlRequest *)request __attribute__((swift_name("authorizationUrlBlocking(request:)")));

/**
 * Attempt to log in with authorization code,
 * and then retrieve the access token for the current user.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)issueAccessTokenWithAuthorizationCodeRequest:(KmastodonCoreOAuthIssueAccessTokenWithAuthorizationCodeRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonCoreAccessToken *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("issueAccessTokenWithAuthorizationCode(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonCoreAccessToken *> *)issueAccessTokenWithAuthorizationCodeBlockingRequest:(KmastodonCoreOAuthIssueAccessTokenWithAuthorizationCodeRequest *)request __attribute__((swift_name("issueAccessTokenWithAuthorizationCodeBlocking(request:)")));

/**
 * Attempt to log in with the given credentials,
 * and then retrieve the access token for the current user.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)issueAccessTokenWithCredentialsRequest:(KmastodonCoreOAuthIssueAccessTokenWithCredentialsRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonCoreAccessToken *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("issueAccessTokenWithCredentials(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonCoreAccessToken *> *)issueAccessTokenWithCredentialsBlockingRequest:(KmastodonCoreOAuthIssueAccessTokenWithCredentialsRequest *)request __attribute__((swift_name("issueAccessTokenWithCredentialsBlocking(request:)")));

/**
 * Attempt to renew access token with refresh token,
 * and then retrieve new access token for the current user.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)refreshAccessTokenRequest:(KmastodonCoreOAuthRefreshAccessTokenRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonCoreAccessToken *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("refreshAccessToken(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonCoreAccessToken *> *)refreshAccessTokenBlockingRequest:(KmastodonCoreOAuthRefreshAccessTokenRequest *)request __attribute__((swift_name("refreshAccessTokenBlocking(request:)")));
@end

__attribute__((swift_name("CorePollsResource")))
@protocol KmastodonCorePollsResource
@required

/**
 * Vote on a poll.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)votePollRequest:(KmastodonCorePollsVotePollRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonCorePoll *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("votePoll(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonCorePoll *> *)votePollBlockingRequest:(KmastodonCorePollsVotePollRequest *)request __attribute__((swift_name("votePollBlocking(request:)")));
@end

__attribute__((swift_name("CoreReportsResource")))
@protocol KmastodonCoreReportsResource
@required

/**
 * Reporting a user.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postReportRequest:(KmastodonCoreReportsPostReportRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonCoreReport *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postReport(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonCoreReport *> *)postReportBlockingRequest:(KmastodonCoreReportsPostReportRequest *)request __attribute__((swift_name("postReportBlocking(request:)")));

/**
 * Fetching a user's reports.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)reportsWithCompletionHandler:(void (^)(KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreReport *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("reports(completionHandler:)")));
- (KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreReport *> *> *)reportsBlocking __attribute__((swift_name("reportsBlocking()")));
@end

__attribute__((swift_name("CoreScheduledStatusesResource")))
@protocol KmastodonCoreScheduledStatusesResource
@required

/**
 * Deleting a scheduled status.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteScheduledStatusRequest:(KmastodonCoreScheduledStatusesScheduledStatusRequest *)request completionHandler:(void (^)(KmastodonCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("deleteScheduledStatus(request:completionHandler:)")));
- (KmastodonCoreResponseUnit *)deleteScheduledStatusBlockingRequest:(KmastodonCoreScheduledStatusesScheduledStatusRequest *)request __attribute__((swift_name("deleteScheduledStatusBlocking(request:)")));

/**
 * Updating a single scheduled status.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)patchScheduledStatusRequest:(KmastodonCoreScheduledStatusesPatchScheduledStatusRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonCoreScheduledStatus *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("patchScheduledStatus(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonCoreScheduledStatus *> *)patchScheduledStatusBlockingRequest:(KmastodonCoreScheduledStatusesPatchScheduledStatusRequest *)request __attribute__((swift_name("patchScheduledStatusBlocking(request:)")));

/**
 * Getting a single scheduled status.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)scheduledStatusRequest:(KmastodonCoreScheduledStatusesScheduledStatusRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonCoreScheduledStatus *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("scheduledStatus(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonCoreScheduledStatus *> *)scheduledStatusBlockingRequest:(KmastodonCoreScheduledStatusesScheduledStatusRequest *)request __attribute__((swift_name("scheduledStatusBlocking(request:)")));

/**
 * Getting scheduled statuses.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)scheduledStatusesRequest:(KmastodonCoreScheduledStatusesGetScheduledStatusesRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreScheduledStatus *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("scheduledStatuses(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreScheduledStatus *> *> *)scheduledStatusesBlockingRequest:(KmastodonCoreScheduledStatusesGetScheduledStatusesRequest *)request __attribute__((swift_name("scheduledStatusesBlocking(request:)")));
@end

__attribute__((swift_name("CoreSearchResource")))
@protocol KmastodonCoreSearchResource
@required

/**
 * Searching for content.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)searchRequest:(KmastodonCoreSearchSearchRequest *)request completionHandler_:(void (^)(KmastodonCoreResponse<KmastodonCoreResults *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("search(request:completionHandler_:)")));
- (KmastodonCoreResponse<KmastodonCoreResults *> *)searchBlockingRequest_:(KmastodonCoreSearchSearchRequest *)request __attribute__((swift_name("searchBlocking(request_:)")));
@end

__attribute__((swift_name("CoreStatusesResource")))
@protocol KmastodonCoreStatusesResource
@required

/**
 * Getting a card associated with a status.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)cardRequest:(KmastodonCoreStatusesCardRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonCoreCard *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("card(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonCoreCard *> *)cardBlockingRequest:(KmastodonCoreStatusesCardRequest *)request __attribute__((swift_name("cardBlocking(request:)")));

/**
 * Getting status context.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)contextRequest:(KmastodonCoreStatusesContextRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonCoreContext *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("context(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonCoreContext *> *)contextBlockingRequest:(KmastodonCoreStatusesContextRequest *)request __attribute__((swift_name("contextBlocking(request:)")));

/**
 * Deleting a status.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteStatusRequest:(KmastodonCoreStatusesDeleteStatusRequest *)request completionHandler:(void (^)(KmastodonCoreResponseUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("deleteStatus(request:completionHandler:)")));
- (KmastodonCoreResponseUnit *)deleteStatusBlockingRequest:(KmastodonCoreStatusesDeleteStatusRequest *)request __attribute__((swift_name("deleteStatusBlocking(request:)")));

/**
 * Editing an existing status.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)editStatusRequest:(KmastodonCoreStatusesEditStatusRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonCoreStatus *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("editStatus(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonCoreStatus *> *)editStatusBlockingRequest:(KmastodonCoreStatusesEditStatusRequest *)request __attribute__((swift_name("editStatusBlocking(request:)")));

/**
 * Favouriting a status.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)favouriteRequest:(KmastodonCoreStatusesFavouriteRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonCoreStatus *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("favourite(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonCoreStatus *> *)favouriteBlockingRequest:(KmastodonCoreStatusesFavouriteRequest *)request __attribute__((swift_name("favouriteBlocking(request:)")));

/**
 * Getting who favourited a status.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)favouritedByRequest:(KmastodonCoreStatusesFavouritedByRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreAccount *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("favouritedBy(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreAccount *> *> *)favouritedByBlockingRequest:(KmastodonCoreStatusesFavouritedByRequest *)request __attribute__((swift_name("favouritedByBlocking(request:)")));

/**
 * Pinning a status.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)pinRequest:(KmastodonCoreStatusesPinRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonCoreStatus *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("pin(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonCoreStatus *> *)pinBlockingRequest:(KmastodonCoreStatusesPinRequest *)request __attribute__((swift_name("pinBlocking(request:)")));

/**
 * Posting a new status.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postStatusRequest:(KmastodonCoreStatusesPostStatusRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonCoreStatus *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("postStatus(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonCoreStatus *> *)postStatusBlockingRequest:(KmastodonCoreStatusesPostStatusRequest *)request __attribute__((swift_name("postStatusBlocking(request:)")));

/**
 * Reblogging a status.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)reblogRequest:(KmastodonCoreStatusesReblogRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonCoreStatus *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("reblog(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonCoreStatus *> *)reblogBlockingRequest:(KmastodonCoreStatusesReblogRequest *)request __attribute__((swift_name("reblogBlocking(request:)")));

/**
 * Getting who reblogged a status.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)rebloggedByRequest:(KmastodonCoreStatusesRebloggedByRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreAccount *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("rebloggedBy(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreAccount *> *> *)rebloggedByBlockingRequest:(KmastodonCoreStatusesRebloggedByRequest *)request __attribute__((swift_name("rebloggedByBlocking(request:)")));

/**
 * Fetching a status.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)statusRequest:(KmastodonCoreStatusesStatusRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonCoreStatus *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("status(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonCoreStatus *> *)statusBlockingRequest:(KmastodonCoreStatusesStatusRequest *)request __attribute__((swift_name("statusBlocking(request:)")));

/**
 * Unfavouriting a status.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)unfavouriteRequest:(KmastodonCoreStatusesUnfavouriteRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonCoreStatus *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("unfavourite(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonCoreStatus *> *)unfavouriteBlockingRequest:(KmastodonCoreStatusesUnfavouriteRequest *)request __attribute__((swift_name("unfavouriteBlocking(request:)")));

/**
 * Unpinning a status.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)unpinRequest:(KmastodonCoreStatusesUnpinRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonCoreStatus *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("unpin(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonCoreStatus *> *)unpinBlockingRequest:(KmastodonCoreStatusesUnpinRequest *)request __attribute__((swift_name("unpinBlocking(request:)")));

/**
 * Unreblogging a status.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)unreblogRequest:(KmastodonCoreStatusesUnreblogRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonCoreStatus *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("unreblog(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonCoreStatus *> *)unreblogBlockingRequest:(KmastodonCoreStatusesUnreblogRequest *)request __attribute__((swift_name("unreblogBlocking(request:)")));
@end

__attribute__((swift_name("CoreTimelinesResource")))
@protocol KmastodonCoreTimelinesResource
@required

/**
 * Retrieving a conversations.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)conversationsRequest:(KmastodonCoreTimelinesConversationsRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreConversation *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("conversations(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreConversation *> *> *)conversationsBlockingRequest:(KmastodonCoreTimelinesConversationsRequest *)request __attribute__((swift_name("conversationsBlocking(request:)")));

/**
 * Retrieving a tag timeline.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)hashtagTimelineRequest:(KmastodonCoreTimelinesHashTagTimelineRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreStatus *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("hashtagTimeline(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreStatus *> *> *)hashtagTimelineBlockingRequest:(KmastodonCoreTimelinesHashTagTimelineRequest *)request __attribute__((swift_name("hashtagTimelineBlocking(request:)")));

/**
 * Retrieving a home timeline.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)homeTimelineRequest:(KmastodonCoreTimelinesHomeTimelineRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreStatus *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("homeTimeline(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreStatus *> *> *)homeTimelineBlockingRequest:(KmastodonCoreTimelinesHomeTimelineRequest *)request __attribute__((swift_name("homeTimelineBlocking(request:)")));

/**
 * Retrieving a list timeline.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)listTimelineRequest:(KmastodonCoreTimelinesListTimelineRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreStatus *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("listTimeline(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreStatus *> *> *)listTimelineBlockingRequest:(KmastodonCoreTimelinesListTimelineRequest *)request __attribute__((swift_name("listTimelineBlocking(request:)")));

/**
 * Retrieving a public timeline.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)publicTimelineRequest:(KmastodonCoreTimelinesPublicTimelineRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreStatus *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("publicTimeline(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreStatus *> *> *)publicTimelineBlockingRequest:(KmastodonCoreTimelinesPublicTimelineRequest *)request __attribute__((swift_name("publicTimelineBlocking(request:)")));
@end

__attribute__((swift_name("CoreTrendsResource")))
@protocol KmastodonCoreTrendsResource
@required

/**
 * Retrieving trends.
 * (Since v3.0.0)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)trendsRequest:(KmastodonCoreTrendsTrendsRequest *)request completionHandler:(void (^)(KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreTrend *> *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("trends(request:completionHandler:)")));
- (KmastodonCoreResponse<KmastodonKotlinArray<KmastodonCoreTrend *> *> *)trendsBlockingRequest:(KmastodonCoreTrendsTrendsRequest *)request __attribute__((swift_name("trendsBlocking(request:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface KmastodonKotlinEnumCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreService.Companion")))
@interface KmastodonCoreServiceCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreServiceCompanion *shared __attribute__((swift_name("shared")));
- (KmastodonCoreService *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface KmastodonKotlinArray<T> : KmastodonBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(KmastodonInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<KmastodonKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface KmastodonKotlinThrowable : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KmastodonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KmastodonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (KmastodonKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KmastodonKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface KmastodonKotlinException : KmastodonKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KmastodonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KmastodonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface KmastodonKotlinRuntimeException : KmastodonKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KmastodonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KmastodonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface KmastodonKotlinIllegalStateException : KmastodonKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KmastodonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KmastodonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface KmastodonKotlinCancellationException : KmastodonKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KmastodonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KmastodonKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAccountsAccountRequest")))
@interface KmastodonCoreAccountsAccountRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end


/**
 * https://docs.joinmastodon.org/entities/Account/
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAccount")))
@interface KmastodonCoreAccount : KmastodonBase

/**
 * https://docs.joinmastodon.org/entities/Account/
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * https://docs.joinmastodon.org/entities/Account/
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreAccountCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="acct")
*/
@property NSString *account __attribute__((swift_name("account")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="avatar")
*/
@property NSString *avatar __attribute__((swift_name("avatar")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="avatar_static")
*/
@property NSString * _Nullable avatarStatic __attribute__((swift_name("avatarStatic")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="created_at")
*/
@property NSString *createdAt __attribute__((swift_name("createdAt")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="display_name")
*/
@property NSString *displayName __attribute__((swift_name("displayName")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="emojis")
*/
@property KmastodonKotlinArray<KmastodonCoreEmoji *> *emojis __attribute__((swift_name("emojis")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="fields")
*/
@property KmastodonKotlinArray<KmastodonCoreField *> *fields __attribute__((swift_name("fields")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="followers_count")
*/
@property int32_t followersCount __attribute__((swift_name("followersCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="following_count")
*/
@property int32_t followingCount __attribute__((swift_name("followingCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="header")
*/
@property NSString *header __attribute__((swift_name("header")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="header_static")
*/
@property NSString * _Nullable headerStatic __attribute__((swift_name("headerStatic")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
*/
@property NSString *id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="bot")
*/
@property BOOL isBot __attribute__((swift_name("isBot")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="discoverable")
*/
@property KmastodonBoolean * _Nullable isDiscoverable __attribute__((swift_name("isDiscoverable")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="group")
*/
@property BOOL isGroup __attribute__((swift_name("isGroup")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="limited")
*/
@property BOOL isLimited __attribute__((swift_name("isLimited")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="locked")
*/
@property BOOL isLocked __attribute__((swift_name("isLocked")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="noindex")
*/
@property KmastodonBoolean * _Nullable isNoindex __attribute__((swift_name("isNoindex")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="suspended")
*/
@property BOOL isSuspended __attribute__((swift_name("isSuspended")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="last_status_at")
*/
@property NSString * _Nullable lastStatusAt __attribute__((swift_name("lastStatusAt")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="moved")
*/
@property KmastodonCoreAccount * _Nullable moved __attribute__((swift_name("moved")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="note")
*/
@property NSString *note __attribute__((swift_name("note")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pleroma")
*/
@property KmastodonCorePleromaAccount * _Nullable pleroma __attribute__((swift_name("pleroma")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="role")
*/
@property KmastodonCoreRole * _Nullable role __attribute__((swift_name("role")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="source")
*/
@property KmastodonCoreAccountSource * _Nullable source __attribute__((swift_name("source")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="statuses_count")
*/
@property int32_t statusesCount __attribute__((swift_name("statusesCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="url")
*/
@property NSString *url __attribute__((swift_name("url")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="username")
*/
@property NSString *userName __attribute__((swift_name("userName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreResponse")))
@interface KmastodonCoreResponse<T> : KmastodonBase
- (instancetype)initWithData:(T _Nullable)data __attribute__((swift_name("init(data:)"))) __attribute__((objc_designated_initializer));
@property T _Nullable data __attribute__((swift_name("data")));
@property NSString * _Nullable json __attribute__((swift_name("json")));
@property KmastodonCoreRateLimit * _Nullable limit __attribute__((swift_name("limit")));
@property KmastodonCoreLink * _Nullable link __attribute__((swift_name("link")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAccountsBlockRequest")))
@interface KmastodonCoreAccountsBlockRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRelationship")))
@interface KmastodonCoreRelationship : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreRelationshipCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
*/
@property NSString * _Nullable id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="blocking")
*/
@property BOOL isBlocking __attribute__((swift_name("isBlocking")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="followedBy")
*/
@property BOOL isFollowedBy __attribute__((swift_name("isFollowedBy")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="following")
*/
@property BOOL isFollowing __attribute__((swift_name("isFollowing")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="muting")
*/
@property BOOL isMuting __attribute__((swift_name("isMuting")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="requested")
*/
@property BOOL isRequested __attribute__((swift_name("isRequested")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAccountsFollowRequest")))
@interface KmastodonCoreAccountsFollowRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAccountsFollowersRequest")))
@interface KmastodonCoreAccountsFollowersRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property KmastodonCoreRange * _Nullable range __attribute__((swift_name("range")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAccountsFollowingRequest")))
@interface KmastodonCoreAccountsFollowingRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property KmastodonCoreRange * _Nullable range __attribute__((swift_name("range")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAccountsMuteRequest")))
@interface KmastodonCoreAccountsMuteRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAccountsRelationshipsRequest")))
@interface KmastodonCoreAccountsRelationshipsRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addIdId:(NSString *)id __attribute__((swift_name("addId(id:)")));
@property KmastodonKotlinArray<NSString *> *ids __attribute__((swift_name("ids")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAccountsSearchRequest")))
@interface KmastodonCoreAccountsSearchRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property KmastodonInt * _Nullable limit __attribute__((swift_name("limit")));
@property NSString * _Nullable query __attribute__((swift_name("query")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAccountsStatusesRequest")))
@interface KmastodonCoreAccountsStatusesRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property KmastodonBoolean * _Nullable excludeReblogs __attribute__((swift_name("excludeReblogs")));
@property KmastodonBoolean * _Nullable excludeReplies __attribute__((swift_name("excludeReplies")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property KmastodonBoolean * _Nullable onlyMedia __attribute__((swift_name("onlyMedia")));
@property KmastodonBoolean * _Nullable onlyPinned __attribute__((swift_name("onlyPinned")));
@property KmastodonCoreRange * _Nullable range __attribute__((swift_name("range")));
@end


/**
 * https://docs.joinmastodon.org/entities/Status/
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreStatus")))
@interface KmastodonCoreStatus : KmastodonBase

/**
 * https://docs.joinmastodon.org/entities/Status/
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * https://docs.joinmastodon.org/entities/Status/
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreStatusCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="account")
*/
@property KmastodonCoreAccount *account __attribute__((swift_name("account")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="application")
*/
@property KmastodonCoreApplication * _Nullable application __attribute__((swift_name("application")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="card")
*/
@property KmastodonCoreCard * _Nullable card __attribute__((swift_name("card")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="content")
*/
@property NSString *content __attribute__((swift_name("content")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="created_at")
*/
@property NSString *createdAt __attribute__((swift_name("createdAt")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="edited_at")
*/
@property NSString * _Nullable editedAt __attribute__((swift_name("editedAt")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="emojis")
*/
@property KmastodonKotlinArray<KmastodonCoreEmoji *> *emojis __attribute__((swift_name("emojis")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="favourites_count")
*/
@property int32_t favouritesCount __attribute__((swift_name("favouritesCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="filtered")
*/
@property KmastodonKotlinArray<KmastodonCoreFilter *> *filtered __attribute__((swift_name("filtered")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
*/
@property NSString *id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="in_reply_to_account_id")
*/
@property NSString * _Nullable inReplyToAccountId __attribute__((swift_name("inReplyToAccountId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="in_reply_to_id")
*/
@property NSString * _Nullable inReplyToId __attribute__((swift_name("inReplyToId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="bookmarked")
*/
@property BOOL isBookmarked __attribute__((swift_name("isBookmarked")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="favourited")
*/
@property BOOL isFavourited __attribute__((swift_name("isFavourited")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="muted")
*/
@property BOOL isMuted __attribute__((swift_name("isMuted")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pinned")
*/
@property BOOL isPinned __attribute__((swift_name("isPinned")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogged")
*/
@property BOOL isReblogged __attribute__((swift_name("isReblogged")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sensitive")
*/
@property BOOL isSensitive __attribute__((swift_name("isSensitive")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="language")
*/
@property NSString * _Nullable language __attribute__((swift_name("language")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="media_attachments")
*/
@property KmastodonKotlinArray<KmastodonCoreAttachment *> *mediaAttachments __attribute__((swift_name("mediaAttachments")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="mentions")
*/
@property KmastodonKotlinArray<KmastodonCoreMention *> *mentions __attribute__((swift_name("mentions")));

/** Pleroma
 *
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pleroma")
*/
@property KmastodonCorePleromaStatus * _Nullable pleroma __attribute__((swift_name("pleroma")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="poll")
*/
@property KmastodonCorePoll * _Nullable poll __attribute__((swift_name("poll")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblog")
*/
@property KmastodonCoreStatus * _Nullable reblog __attribute__((swift_name("reblog")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="reblogs_count")
*/
@property int32_t reblogsCount __attribute__((swift_name("reblogsCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="replies_count")
*/
@property int32_t repliesCount __attribute__((swift_name("repliesCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="spoiler_text")
*/
@property NSString *spoilerText __attribute__((swift_name("spoilerText")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="tags")
*/
@property KmastodonKotlinArray<KmastodonCoreTag *> *tags __attribute__((swift_name("tags")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="text")
*/
@property NSString * _Nullable text __attribute__((swift_name("text")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="uri")
*/
@property NSString *uri __attribute__((swift_name("uri")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="url")
*/
@property NSString * _Nullable url __attribute__((swift_name("url")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="visibility")
*/
@property NSString *visibility __attribute__((swift_name("visibility")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAccountsUnblockRequest")))
@interface KmastodonCoreAccountsUnblockRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAccountsUnfollowRequest")))
@interface KmastodonCoreAccountsUnfollowRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAccountsUnmuteRequest")))
@interface KmastodonCoreAccountsUnmuteRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAccountsUpdateCredentialsRequest")))
@interface KmastodonCoreAccountsUpdateCredentialsRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property KmastodonKotlinByteArray * _Nullable avatar __attribute__((swift_name("avatar")));
@property NSString * _Nullable avatarName __attribute__((swift_name("avatarName")));
@property NSString * _Nullable displayName __attribute__((swift_name("displayName")));
@property KmastodonKotlinByteArray * _Nullable header __attribute__((swift_name("header")));
@property NSString * _Nullable headerName __attribute__((swift_name("headerName")));
@property NSString * _Nullable note __attribute__((swift_name("note")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAppsRegisterApplicationRequest")))
@interface KmastodonCoreAppsRegisterApplicationRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property NSString * _Nullable redirectUris __attribute__((swift_name("redirectUris")));
@property NSString * _Nullable scopes __attribute__((swift_name("scopes")));
@property NSString * _Nullable website __attribute__((swift_name("website")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreClientCredential")))
@interface KmastodonCoreClientCredential : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreClientCredentialCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="client_id")
*/
@property NSString * _Nullable clientId __attribute__((swift_name("clientId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="client_secret")
*/
@property NSString * _Nullable clientSecret __attribute__((swift_name("clientSecret")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
*/
@property NSString * _Nullable id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="redirect_uri")
*/
@property NSString * _Nullable redirectUri __attribute__((swift_name("redirectUri")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBlocksBlocksRequest")))
@interface KmastodonCoreBlocksBlocksRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property KmastodonCoreRange * _Nullable range __attribute__((swift_name("range")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBookmarksBookmarkRequest")))
@interface KmastodonCoreBookmarksBookmarkRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBookmarksGetBookmarksRequest")))
@interface KmastodonCoreBookmarksGetBookmarksRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property KmastodonCoreRange * _Nullable range __attribute__((swift_name("range")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreBookmarksUnbookmarkRequest")))
@interface KmastodonCoreBookmarksUnbookmarkRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDomainBlocksBlockDomainRequest")))
@interface KmastodonCoreDomainBlocksBlockDomainRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable domain __attribute__((swift_name("domain")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreResponseUnit")))
@interface KmastodonCoreResponseUnit : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property KmastodonCoreRateLimit * _Nullable limit __attribute__((swift_name("limit")));
@property KmastodonCoreLink * _Nullable link __attribute__((swift_name("link")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDomainBlocksGetDomainBlocksRequest")))
@interface KmastodonCoreDomainBlocksGetDomainBlocksRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property KmastodonCoreRange * _Nullable range __attribute__((swift_name("range")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreDomainBlocksUnblockDomainRequest")))
@interface KmastodonCoreDomainBlocksUnblockDomainRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable domain __attribute__((swift_name("domain")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmoji")))
@interface KmastodonCoreEmoji : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreEmojiCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="category")
*/
@property NSString * _Nullable category __attribute__((swift_name("category")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="shortcode")
*/
@property NSString * _Nullable shortcode __attribute__((swift_name("shortcode")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="static_url")
*/
@property NSString * _Nullable staticUrl __attribute__((swift_name("staticUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="url")
*/
@property NSString * _Nullable url __attribute__((swift_name("url")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="visible_in_picker")
*/
@property KmastodonBoolean * _Nullable visibleInPicker __attribute__((swift_name("visibleInPicker")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFavouritesFavouritesRequest")))
@interface KmastodonCoreFavouritesFavouritesRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property KmastodonCoreRange * _Nullable range __attribute__((swift_name("range")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFollowRequestsAuthorizeFollowRequestRequest")))
@interface KmastodonCoreFollowRequestsAuthorizeFollowRequestRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFollowRequestsRejectFollowRequestRequest")))
@interface KmastodonCoreFollowRequestsRejectFollowRequestRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFollowsRemoteFollowRequest")))
@interface KmastodonCoreFollowsRemoteFollowRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable uri __attribute__((swift_name("uri")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV1")))
@interface KmastodonCoreInstanceV1 : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreInstanceV1Companion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="approval_required")
*/
@property KmastodonBoolean * _Nullable approvalRequired __attribute__((swift_name("approvalRequired")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="configuration")
*/
@property KmastodonCoreInstanceV1Configuration * _Nullable configuration __attribute__((swift_name("configuration")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="contact_account")
*/
@property KmastodonCoreAccount * _Nullable contactAccount __attribute__((swift_name("contactAccount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="description")
*/
@property (setter=setDescription:) NSString *description_ __attribute__((swift_name("description_")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="email")
*/
@property NSString *email __attribute__((swift_name("email")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="invites_enabled")
*/
@property KmastodonBoolean * _Nullable invitesEnabled __attribute__((swift_name("invitesEnabled")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="languages")
*/
@property KmastodonKotlinArray<NSString *> * _Nullable languages __attribute__((swift_name("languages")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="registrations")
*/
@property KmastodonBoolean * _Nullable registrations __attribute__((swift_name("registrations")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="rules")
*/
@property KmastodonKotlinArray<KmastodonCoreInstanceV1Rules *> * _Nullable rules __attribute__((swift_name("rules")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="short_description")
*/
@property NSString * _Nullable shortDescription __attribute__((swift_name("shortDescription")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="stats")
*/
@property KmastodonCoreInstanceV1Stats *stats __attribute__((swift_name("stats")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumbnail")
*/
@property NSString * _Nullable thumbnail __attribute__((swift_name("thumbnail")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="title")
*/
@property NSString *title __attribute__((swift_name("title")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="uri")
*/
@property NSString *uri __attribute__((swift_name("uri")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="urls")
*/
@property KmastodonCoreInstanceV1Urls *urls __attribute__((swift_name("urls")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="version")
*/
@property NSString *version __attribute__((swift_name("version")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2")))
@interface KmastodonCoreInstanceV2 : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreInstanceV2Companion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="configuration")
*/
@property KmastodonCoreInstanceV2Configuration *configuration __attribute__((swift_name("configuration")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="contact")
*/
@property KmastodonCoreInstanceV2Contact *contact __attribute__((swift_name("contact")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="description")
*/
@property (setter=setDescription:) NSString *description_ __attribute__((swift_name("description_")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="domain")
*/
@property NSString *domain __attribute__((swift_name("domain")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="languages")
*/
@property KmastodonKotlinArray<NSString *> *languages __attribute__((swift_name("languages")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="registrations")
*/
@property KmastodonCoreInstanceV2Registrations *registrations __attribute__((swift_name("registrations")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="rules")
*/
@property KmastodonKotlinArray<KmastodonCoreInstanceV2Rules *> *rules __attribute__((swift_name("rules")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="source_url")
*/
@property NSString *sourceUrl __attribute__((swift_name("sourceUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thumbnail")
*/
@property KmastodonCoreInstanceV2Thumbnail *thumbnail __attribute__((swift_name("thumbnail")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="title")
*/
@property NSString *title __attribute__((swift_name("title")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="usage")
*/
@property KmastodonCoreInstanceV2Usage *usage __attribute__((swift_name("usage")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="version")
*/
@property NSString *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreListsAddAccountsToListRequest")))
@interface KmastodonCoreListsAddAccountsToListRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addAccountIdAccountId:(NSString *)accountId __attribute__((swift_name("addAccountId(accountId:)")));
@property KmastodonKotlinArray<NSString *> *accountIds __attribute__((swift_name("accountIds")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreListsCreateListRequest")))
@interface KmastodonCoreListsCreateListRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable title __attribute__((swift_name("title")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAccountList")))
@interface KmastodonCoreAccountList : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreAccountListCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property NSString * _Nullable title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreListsDeleteAccountsToListRequest")))
@interface KmastodonCoreListsDeleteAccountsToListRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addAccountIdAccountId:(NSString *)accountId __attribute__((swift_name("addAccountId(accountId:)")));
@property KmastodonKotlinArray<NSString *> *accountIds __attribute__((swift_name("accountIds")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreListsDeleteListRequest")))
@interface KmastodonCoreListsDeleteListRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreListsListRequest")))
@interface KmastodonCoreListsListRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreListsListAccountsRequest")))
@interface KmastodonCoreListsListAccountsRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property KmastodonInt * _Nullable limit __attribute__((swift_name("limit")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreListsListsRequest")))
@interface KmastodonCoreListsListsRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreListsUpdateListRequest")))
@interface KmastodonCoreListsUpdateListRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property NSString * _Nullable title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMediasPostMediaRequest")))
@interface KmastodonCoreMediasPostMediaRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property KmastodonKotlinByteArray * _Nullable bytes __attribute__((swift_name("bytes")));
@property (setter=setDescription:) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAttachment")))
@interface KmastodonCoreAttachment : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreAttachmentCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="blurhash")
*/
@property NSString * _Nullable blurhash __attribute__((swift_name("blurhash")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="description")
*/
@property (setter=setDescription:) NSString * _Nullable description_ __attribute__((swift_name("description_")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
*/
@property NSString * _Nullable id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="meta")
*/
@property KmastodonCoreMeta * _Nullable meta __attribute__((swift_name("meta")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="optimized_url")
*/
@property NSString * _Nullable optimizedUrl __attribute__((swift_name("optimizedUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="orientation")
*/
@property NSString * _Nullable orientation __attribute__((swift_name("orientation")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="preview_url")
*/
@property NSString * _Nullable previewUrl __attribute__((swift_name("previewUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="remote_url")
*/
@property NSString * _Nullable remoteUrl __attribute__((swift_name("remoteUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="text_url")
*/
@property NSString * _Nullable textUrl __attribute__((swift_name("textUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
*/
@property NSString * _Nullable type __attribute__((swift_name("type")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="url")
*/
@property NSString * _Nullable url __attribute__((swift_name("url")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNode")))
@interface KmastodonCoreNode : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreNodeCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="openRegistrations")
*/
@property KmastodonBoolean * _Nullable openRegistrations __attribute__((swift_name("openRegistrations")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="protocols")
*/
@property KmastodonKotlinArray<NSString *> * _Nullable protocols __attribute__((swift_name("protocols")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="software")
*/
@property KmastodonCoreNodeSoftware * _Nullable software __attribute__((swift_name("software")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="version")
*/
@property NSString * _Nullable version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotificationsEditSubscriptionRequest")))
@interface KmastodonCoreNotificationsEditSubscriptionRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property KmastodonCoreAlert * _Nullable alert __attribute__((swift_name("alert")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotification")))
@interface KmastodonCoreNotification : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreNotificationCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="account")
*/
@property KmastodonCoreAccount * _Nullable account __attribute__((swift_name("account")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="created_at")
*/
@property NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
*/
@property NSString * _Nullable id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="status")
*/
@property KmastodonCoreStatus * _Nullable status __attribute__((swift_name("status")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="type")
*/
@property NSString * _Nullable type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotificationsNotificationRequest")))
@interface KmastodonCoreNotificationsNotificationRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotificationsNotificationsRequest")))
@interface KmastodonCoreNotificationsNotificationsRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property KmastodonKotlinArray<NSString *> * _Nullable excludeTypes __attribute__((swift_name("excludeTypes")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property KmastodonCoreRange * _Nullable range __attribute__((swift_name("range")));
@property KmastodonKotlinArray<NSString *> * _Nullable types __attribute__((swift_name("types")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotificationsPostSubscriptionRequest")))
@interface KmastodonCoreNotificationsPostSubscriptionRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property KmastodonCoreAlert * _Nullable alert __attribute__((swift_name("alert")));
@property NSString * _Nullable auth __attribute__((swift_name("auth")));
@property NSString * _Nullable endpoint __attribute__((swift_name("endpoint")));
@property NSString * _Nullable p256dh __attribute__((swift_name("p256dh")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSubscription")))
@interface KmastodonCoreSubscription : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreSubscriptionCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="alerts")
*/
@property KmastodonCoreAlert * _Nullable alerts __attribute__((swift_name("alerts")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="endpoint")
*/
@property NSString * _Nullable endpoint __attribute__((swift_name("endpoint")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
*/
@property KmastodonInt * _Nullable id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="server_key")
*/
@property NSString * _Nullable serverKey __attribute__((swift_name("serverKey")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreOAuthAuthorizationUrlRequest")))
@interface KmastodonCoreOAuthAuthorizationUrlRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable clientId __attribute__((swift_name("clientId")));
@property NSString * _Nullable redirectUri __attribute__((swift_name("redirectUri")));
@property NSString * _Nullable scopes __attribute__((swift_name("scopes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreOAuthIssueAccessTokenWithAuthorizationCodeRequest")))
@interface KmastodonCoreOAuthIssueAccessTokenWithAuthorizationCodeRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable clientId __attribute__((swift_name("clientId")));
@property NSString * _Nullable clientSecret __attribute__((swift_name("clientSecret")));
@property NSString * _Nullable code __attribute__((swift_name("code")));
@property NSString * _Nullable redirectUri __attribute__((swift_name("redirectUri")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAccessToken")))
@interface KmastodonCoreAccessToken : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreAccessTokenCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="access_token")
*/
@property NSString * _Nullable accessToken __attribute__((swift_name("accessToken")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="created_at")
*/
@property int32_t createdAt __attribute__((swift_name("createdAt")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="expires_in")
*/
@property KmastodonInt * _Nullable expiresIn __attribute__((swift_name("expiresIn")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="refresh_token")
*/
@property NSString * _Nullable refreshToken __attribute__((swift_name("refreshToken")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="scope")
*/
@property NSString * _Nullable scope __attribute__((swift_name("scope")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="token_type")
*/
@property NSString * _Nullable tokenType __attribute__((swift_name("tokenType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreOAuthIssueAccessTokenWithCredentialsRequest")))
@interface KmastodonCoreOAuthIssueAccessTokenWithCredentialsRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable clientId __attribute__((swift_name("clientId")));
@property NSString * _Nullable clientSecret __attribute__((swift_name("clientSecret")));
@property NSString * _Nullable emailAddress __attribute__((swift_name("emailAddress")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSString * _Nullable scopes __attribute__((swift_name("scopes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreOAuthRefreshAccessTokenRequest")))
@interface KmastodonCoreOAuthRefreshAccessTokenRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable clientId __attribute__((swift_name("clientId")));
@property NSString * _Nullable clientSecret __attribute__((swift_name("clientSecret")));
@property NSString * _Nullable refreshToken __attribute__((swift_name("refreshToken")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePollsVotePollRequest")))
@interface KmastodonCorePollsVotePollRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property KmastodonKotlinArray<KmastodonInt *> * _Nullable choices __attribute__((swift_name("choices")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePoll")))
@interface KmastodonCorePoll : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCorePollCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="emojis")
*/
@property KmastodonKotlinArray<KmastodonCoreEmoji *> * _Nullable emojis __attribute__((swift_name("emojis")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="expires_at")
*/
@property NSString * _Nullable expiresAt __attribute__((swift_name("expiresAt")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
*/
@property NSString * _Nullable id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="expired")
*/
@property BOOL isExpired __attribute__((swift_name("isExpired")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="multiple")
*/
@property BOOL isMultiple __attribute__((swift_name("isMultiple")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="voted")
*/
@property BOOL isVoted __attribute__((swift_name("isVoted")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="options")
*/
@property KmastodonKotlinArray<KmastodonCorePollOption *> * _Nullable options __attribute__((swift_name("options")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="own_votes")
*/
@property KmastodonKotlinArray<KmastodonInt *> * _Nullable ownVotes __attribute__((swift_name("ownVotes")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="voters_count")
*/
@property KmastodonInt * _Nullable votersCount __attribute__((swift_name("votersCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="votes_count")
*/
@property KmastodonInt * _Nullable votesCount __attribute__((swift_name("votesCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreReportsPostReportRequest")))
@interface KmastodonCoreReportsPostReportRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable accountId __attribute__((swift_name("accountId")));
@property NSString * _Nullable comment __attribute__((swift_name("comment")));
@property KmastodonKotlinArray<NSString *> * _Nullable statusIds __attribute__((swift_name("statusIds")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreReport")))
@interface KmastodonCoreReport : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreReportCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="actionTaken")
*/
@property NSString * _Nullable actionTaken __attribute__((swift_name("actionTaken")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
*/
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreScheduledStatusesScheduledStatusRequest")))
@interface KmastodonCoreScheduledStatusesScheduledStatusRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreScheduledStatusesPatchScheduledStatusRequest")))
@interface KmastodonCoreScheduledStatusesPatchScheduledStatusRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property NSString * _Nullable scheduledAt __attribute__((swift_name("scheduledAt")));
@end


/**
 * https://docs.joinmastodon.org/entities/ScheduledStatus/
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreScheduledStatus")))
@interface KmastodonCoreScheduledStatus : KmastodonBase

/**
 * https://docs.joinmastodon.org/entities/ScheduledStatus/
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * https://docs.joinmastodon.org/entities/ScheduledStatus/
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreScheduledStatusCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
*/
@property NSString *id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="media_attachments")
*/
@property KmastodonKotlinArray<KmastodonCoreAttachment *> * _Nullable mediaAttachments __attribute__((swift_name("mediaAttachments")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="params")
*/
@property KmastodonCoreScheduledStatusParams * _Nullable params __attribute__((swift_name("params")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="scheduled_at")
*/
@property NSString *scheduledAt __attribute__((swift_name("scheduledAt")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreScheduledStatusesGetScheduledStatusesRequest")))
@interface KmastodonCoreScheduledStatusesGetScheduledStatusesRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property KmastodonCoreRange * _Nullable range __attribute__((swift_name("range")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSearchSearchRequest")))
@interface KmastodonCoreSearchSearchRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property KmastodonBoolean * _Nullable onlyFollowing __attribute__((swift_name("onlyFollowing")));
@property KmastodonCorePage * _Nullable page __attribute__((swift_name("page")));
@property NSString * _Nullable query __attribute__((swift_name("query")));
@property KmastodonBoolean * _Nullable resolve __attribute__((swift_name("resolve")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreResults")))
@interface KmastodonCoreResults : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreResultsCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="accounts")
*/
@property KmastodonKotlinArray<KmastodonCoreAccount *> * _Nullable accounts __attribute__((swift_name("accounts")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hashtags")
*/
@property KmastodonKotlinArray<KmastodonCoreTag *> * _Nullable hashtags __attribute__((swift_name("hashtags")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="statuses")
*/
@property KmastodonKotlinArray<KmastodonCoreStatus *> * _Nullable statuses __attribute__((swift_name("statuses")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreStatusesCardRequest")))
@interface KmastodonCoreStatusesCardRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCard")))
@interface KmastodonCoreCard : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreCardCompanion *companion __attribute__((swift_name("companion")));
@property (setter=setDescription:) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property NSString * _Nullable image __attribute__((swift_name("image")));
@property NSString * _Nullable title __attribute__((swift_name("title")));
@property NSString * _Nullable url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreStatusesContextRequest")))
@interface KmastodonCoreStatusesContextRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreContext")))
@interface KmastodonCoreContext : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreContextCompanion *companion __attribute__((swift_name("companion")));
@property KmastodonKotlinArray<KmastodonCoreStatus *> * _Nullable ancestors __attribute__((swift_name("ancestors")));
@property KmastodonKotlinArray<KmastodonCoreStatus *> * _Nullable descendants __attribute__((swift_name("descendants")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreStatusesDeleteStatusRequest")))
@interface KmastodonCoreStatusesDeleteStatusRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreStatusesEditStatusRequest")))
@interface KmastodonCoreStatusesEditStatusRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString *id __attribute__((swift_name("id")));
@property NSString * _Nullable language __attribute__((swift_name("language")));
@property KmastodonKotlinArray<NSString *> * _Nullable mediaIds __attribute__((swift_name("mediaIds")));
@property KmastodonInt * _Nullable pollExpiresIn __attribute__((swift_name("pollExpiresIn")));
@property KmastodonBoolean * _Nullable pollHideTotals __attribute__((swift_name("pollHideTotals")));
@property KmastodonBoolean * _Nullable pollMultiple __attribute__((swift_name("pollMultiple")));
@property KmastodonKotlinArray<NSString *> * _Nullable pollOptions __attribute__((swift_name("pollOptions")));
@property KmastodonBoolean * _Nullable sensitive __attribute__((swift_name("sensitive")));
@property NSString * _Nullable spoilerText __attribute__((swift_name("spoilerText")));
@property NSString * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreStatusesFavouriteRequest")))
@interface KmastodonCoreStatusesFavouriteRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreStatusesFavouritedByRequest")))
@interface KmastodonCoreStatusesFavouritedByRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property KmastodonCoreRange * _Nullable range __attribute__((swift_name("range")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreStatusesPinRequest")))
@interface KmastodonCoreStatusesPinRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreStatusesPostStatusRequest")))
@interface KmastodonCoreStatusesPostStatusRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable content __attribute__((swift_name("content")));
@property NSString * _Nullable inReplyToId __attribute__((swift_name("inReplyToId")));
@property KmastodonKotlinArray<NSString *> * _Nullable mediaIds __attribute__((swift_name("mediaIds")));
@property KmastodonInt * _Nullable pollExpiresIn __attribute__((swift_name("pollExpiresIn")));
@property KmastodonBoolean * _Nullable pollHideTotals __attribute__((swift_name("pollHideTotals")));
@property KmastodonBoolean * _Nullable pollMultiple __attribute__((swift_name("pollMultiple")));
@property KmastodonKotlinArray<NSString *> * _Nullable pollOptions __attribute__((swift_name("pollOptions")));

/** ISO-8601 datetime to schedule the status; must be at least 5 minutes in the future. */
@property NSString * _Nullable scheduledAt __attribute__((swift_name("scheduledAt")));
@property KmastodonBoolean * _Nullable sensitive __attribute__((swift_name("sensitive")));
@property NSString * _Nullable spoilerText __attribute__((swift_name("spoilerText")));
@property NSString * _Nullable status __attribute__((swift_name("status")));
@property NSString * _Nullable visibility __attribute__((swift_name("visibility")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreStatusesReblogRequest")))
@interface KmastodonCoreStatusesReblogRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreStatusesRebloggedByRequest")))
@interface KmastodonCoreStatusesRebloggedByRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@property KmastodonCoreRange * _Nullable range __attribute__((swift_name("range")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreStatusesStatusRequest")))
@interface KmastodonCoreStatusesStatusRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreStatusesUnfavouriteRequest")))
@interface KmastodonCoreStatusesUnfavouriteRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreStatusesUnpinRequest")))
@interface KmastodonCoreStatusesUnpinRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreStatusesUnreblogRequest")))
@interface KmastodonCoreStatusesUnreblogRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTimelinesConversationsRequest")))
@interface KmastodonCoreTimelinesConversationsRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property KmastodonCoreRange * _Nullable range __attribute__((swift_name("range")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversation")))
@interface KmastodonCoreConversation : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreConversationCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="accounts")
*/
@property KmastodonKotlinArray<KmastodonCoreAccount *> * _Nullable accounts __attribute__((swift_name("accounts")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
*/
@property NSString * _Nullable id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="last_status")
*/
@property KmastodonCoreStatus * _Nullable lastStatus __attribute__((swift_name("lastStatus")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="unread")
*/
@property KmastodonBoolean * _Nullable unread __attribute__((swift_name("unread")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTimelinesHashTagTimelineRequest")))
@interface KmastodonCoreTimelinesHashTagTimelineRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable hashtag __attribute__((swift_name("hashtag")));
@property KmastodonBoolean * _Nullable local __attribute__((swift_name("local")));
@property KmastodonBoolean * _Nullable onlyMedia __attribute__((swift_name("onlyMedia")));
@property KmastodonCoreRange * _Nullable range __attribute__((swift_name("range")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTimelinesHomeTimelineRequest")))
@interface KmastodonCoreTimelinesHomeTimelineRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property KmastodonCoreRange * _Nullable range __attribute__((swift_name("range")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTimelinesListTimelineRequest")))
@interface KmastodonCoreTimelinesListTimelineRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property NSString * _Nullable listId __attribute__((swift_name("listId")));
@property KmastodonCoreRange * _Nullable range __attribute__((swift_name("range")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTimelinesPublicTimelineRequest")))
@interface KmastodonCoreTimelinesPublicTimelineRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property KmastodonBoolean * _Nullable local __attribute__((swift_name("local")));
@property KmastodonBoolean * _Nullable onlyMedia __attribute__((swift_name("onlyMedia")));
@property KmastodonCoreRange * _Nullable range __attribute__((swift_name("range")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTrendsTrendsRequest")))
@interface KmastodonCoreTrendsTrendsRequest : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property KmastodonInt * _Nullable limit __attribute__((swift_name("limit")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTrend")))
@interface KmastodonCoreTrend : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreTrendCompanion *companion __attribute__((swift_name("companion")));
@property KmastodonKotlinArray<KmastodonCoreHistory *> * _Nullable history __attribute__((swift_name("history")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property NSString * _Nullable url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol KmastodonKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end


/**
 * https://docs.joinmastodon.org/entities/Account/
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAccount.Companion")))
@interface KmastodonCoreAccountCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * https://docs.joinmastodon.org/entities/Account/
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreAccountCompanion *shared __attribute__((swift_name("shared")));

/**
 * https://docs.joinmastodon.org/entities/Account/
 */
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreField")))
@interface KmastodonCoreField : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreFieldCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property NSString * _Nullable value __attribute__((swift_name("value")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePleromaAccount")))
@interface KmastodonCorePleromaAccount : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCorePleromaAccountCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="ap_id")
*/
@property NSString * _Nullable apId __attribute__((swift_name("apId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="chat_token")
*/
@property NSString * _Nullable chatToken __attribute__((swift_name("chatToken")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="email")
*/
@property NSString * _Nullable email __attribute__((swift_name("email")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="accepts_chat_messages")
*/
@property BOOL isAcceptsChatMessages __attribute__((swift_name("isAcceptsChatMessages")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_admin")
*/
@property BOOL isAdmin __attribute__((swift_name("isAdmin")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="allow_following_move")
*/
@property BOOL isAllowFollowingMove __attribute__((swift_name("isAllowFollowingMove")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_confirmed")
*/
@property BOOL isConfirmed __attribute__((swift_name("isConfirmed")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hide_favorites")
*/
@property BOOL isHideFavorites __attribute__((swift_name("isHideFavorites")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hide_followers")
*/
@property BOOL isHideFollowers __attribute__((swift_name("isHideFollowers")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hide_followers_count")
*/
@property BOOL isHideFollowersCount __attribute__((swift_name("isHideFollowersCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hide_follows")
*/
@property BOOL isHideFollows __attribute__((swift_name("isHideFollows")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="hide_follows_count")
*/
@property BOOL isHideFollowsCount __attribute__((swift_name("isHideFollowsCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="is_moderator")
*/
@property BOOL isModerator __attribute__((swift_name("isModerator")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="skip_thread_containment")
*/
@property BOOL isSkipThreadContainment __attribute__((swift_name("isSkipThreadContainment")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="unread_conversation_count")
*/
@property int32_t unreadConversationCount __attribute__((swift_name("unreadConversationCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="unread_notifications_count")
*/
@property int32_t unreadNotificationsCount __attribute__((swift_name("unreadNotificationsCount")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRole")))
@interface KmastodonCoreRole : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreRoleCompanion *companion __attribute__((swift_name("companion")));
@property NSString *color __attribute__((swift_name("color")));
@property int32_t id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="highlighted")
*/
@property BOOL isHighlighted __attribute__((swift_name("isHighlighted")));
@property NSString *name __attribute__((swift_name("name")));
@property int32_t permissions __attribute__((swift_name("permissions")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAccountSource")))
@interface KmastodonCoreAccountSource : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreAccountSourceCompanion *companion __attribute__((swift_name("companion")));
@property KmastodonKotlinArray<KmastodonCoreField *> * _Nullable fields __attribute__((swift_name("fields")));
@property NSString * _Nullable language __attribute__((swift_name("language")));
@property NSString * _Nullable note __attribute__((swift_name("note")));
@property NSString * _Nullable privacy __attribute__((swift_name("privacy")));
@property KmastodonBoolean * _Nullable sensitive __attribute__((swift_name("sensitive")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRateLimit")))
@interface KmastodonCoreRateLimit : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreRateLimitCompanion *companion __attribute__((swift_name("companion")));
@property int32_t limit __attribute__((swift_name("limit")));
@property int32_t remaining __attribute__((swift_name("remaining")));
@property KmastodonKotlinInstant * _Nullable reset __attribute__((swift_name("reset")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLink")))
@interface KmastodonCoreLink : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreLinkCompanion *companion __attribute__((swift_name("companion")));
@property NSString * _Nullable nextMaxId __attribute__((swift_name("nextMaxId")));
@property NSString * _Nullable nextUrl __attribute__((swift_name("nextUrl")));
@property NSString * _Nullable prevMinId __attribute__((swift_name("prevMinId")));
@property NSString * _Nullable prevUrl __attribute__((swift_name("prevUrl")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRelationship.Companion")))
@interface KmastodonCoreRelationshipCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreRelationshipCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRange")))
@interface KmastodonCoreRange : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property KmastodonInt * _Nullable limit __attribute__((swift_name("limit")));
@property NSString * _Nullable maxId __attribute__((swift_name("maxId")));
@property NSString * _Nullable minId __attribute__((swift_name("minId")));
@property NSString * _Nullable sinceId __attribute__((swift_name("sinceId")));
@end


/**
 * https://docs.joinmastodon.org/entities/Status/
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreStatus.Companion")))
@interface KmastodonCoreStatusCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * https://docs.joinmastodon.org/entities/Status/
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreStatusCompanion *shared __attribute__((swift_name("shared")));

/**
 * https://docs.joinmastodon.org/entities/Status/
 */
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreApplication")))
@interface KmastodonCoreApplication : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreApplicationCompanion *companion __attribute__((swift_name("companion")));
@property NSString *name __attribute__((swift_name("name")));
@property NSString * _Nullable website __attribute__((swift_name("website")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilter")))
@interface KmastodonCoreFilter : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreFilterCompanion *companion __attribute__((swift_name("companion")));
@property NSString *context __attribute__((swift_name("context")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="expires_at")
*/
@property NSString * _Nullable expiresAt __attribute__((swift_name("expiresAt")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="filter_action")
*/
@property NSString * _Nullable filterAction __attribute__((swift_name("filterAction")));
@property NSString *id __attribute__((swift_name("id")));
@property KmastodonKotlinArray<KmastodonCoreFilterKeyword *> *keywords __attribute__((swift_name("keywords")));
@property KmastodonKotlinArray<KmastodonCoreFilterStatus *> *statuses __attribute__((swift_name("statuses")));
@property NSString *title __attribute__((swift_name("title")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMention")))
@interface KmastodonCoreMention : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreMentionCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="acct")
*/
@property NSString * _Nullable account __attribute__((swift_name("account")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
*/
@property NSString * _Nullable id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="url")
*/
@property NSString * _Nullable url __attribute__((swift_name("url")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="username")
*/
@property NSString * _Nullable userName __attribute__((swift_name("userName")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePleromaStatus")))
@interface KmastodonCorePleromaStatus : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCorePleromaStatusCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="content")
*/
@property KmastodonCorePleromaContent * _Nullable content __attribute__((swift_name("content")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="conversation_id")
*/
@property int32_t conversationId __attribute__((swift_name("conversationId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="direct_conversation_id")
*/
@property NSString * _Nullable directConversationId __attribute__((swift_name("directConversationId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="emoji_reactions")
*/
@property KmastodonKotlinArray<KmastodonCorePleromaReaction *> * _Nullable emojiReactions __attribute__((swift_name("emojiReactions")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="expires_at")
*/
@property NSString * _Nullable expiresAt __attribute__((swift_name("expiresAt")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="in_reply_to_account_acct")
*/
@property NSString * _Nullable inReplyToAccountAcct __attribute__((swift_name("inReplyToAccountAcct")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="local")
*/
@property BOOL isLocal __attribute__((swift_name("isLocal")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="parent_visible")
*/
@property BOOL isParentVisible __attribute__((swift_name("isParentVisible")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="thread_muted")
*/
@property BOOL isThreadMuted __attribute__((swift_name("isThreadMuted")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="pinned_at")
*/
@property NSString * _Nullable pinnedAt __attribute__((swift_name("pinnedAt")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="spoiler_text")
*/
@property KmastodonCorePleromaContent * _Nullable spoilerText __attribute__((swift_name("spoilerText")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTag")))
@interface KmastodonCoreTag : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreTagCompanion *companion __attribute__((swift_name("companion")));
@property KmastodonKotlinArray<KmastodonCoreHistory *> * _Nullable history __attribute__((swift_name("history")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property NSString * _Nullable url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface KmastodonKotlinByteArray : KmastodonBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(KmastodonByte *(^)(KmastodonInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (KmastodonKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreClientCredential.Companion")))
@interface KmastodonCoreClientCredentialCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreClientCredentialCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreEmoji.Companion")))
@interface KmastodonCoreEmojiCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreEmojiCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV1.Companion")))
@interface KmastodonCoreInstanceV1Companion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreInstanceV1Companion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV1Configuration")))
@interface KmastodonCoreInstanceV1Configuration : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreInstanceV1ConfigurationCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="media_attachments")
*/
@property KmastodonCoreInstanceV1MediaAttachments *mediaAttachments __attribute__((swift_name("mediaAttachments")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="polls")
*/
@property KmastodonCoreInstanceV1Polls *polls __attribute__((swift_name("polls")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="statuses")
*/
@property KmastodonCoreInstanceV1Statuses *statuses __attribute__((swift_name("statuses")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV1Rules")))
@interface KmastodonCoreInstanceV1Rules : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreInstanceV1RulesCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
*/
@property NSString * _Nullable id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="text")
*/
@property NSString * _Nullable text __attribute__((swift_name("text")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV1Stats")))
@interface KmastodonCoreInstanceV1Stats : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreInstanceV1StatsCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="domain_count")
*/
@property int32_t domainCount __attribute__((swift_name("domainCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="status_count")
*/
@property int32_t statusCount __attribute__((swift_name("statusCount")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="user_count")
*/
@property int32_t userCount __attribute__((swift_name("userCount")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV1Urls")))
@interface KmastodonCoreInstanceV1Urls : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreInstanceV1UrlsCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="streaming_api")
*/
@property NSString *streamingApi __attribute__((swift_name("streamingApi")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2.Companion")))
@interface KmastodonCoreInstanceV2Companion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreInstanceV2Companion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Configuration")))
@interface KmastodonCoreInstanceV2Configuration : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreInstanceV2ConfigurationCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="accounts")
*/
@property KmastodonCoreInstanceV2Accounts *accounts __attribute__((swift_name("accounts")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="media_attachments")
*/
@property KmastodonCoreInstanceV2MediaAttachments *mediaAttachments __attribute__((swift_name("mediaAttachments")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="polls")
*/
@property KmastodonCoreInstanceV2Polls *polls __attribute__((swift_name("polls")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="statuses")
*/
@property KmastodonCoreInstanceV2Statuses *statuses __attribute__((swift_name("statuses")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="translation")
*/
@property KmastodonCoreInstanceV2Translation *translation __attribute__((swift_name("translation")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="urls")
*/
@property KmastodonCoreInstanceV2Urls *urls __attribute__((swift_name("urls")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="vapid")
*/
@property KmastodonCoreInstanceV2Vapid * _Nullable vapid __attribute__((swift_name("vapid")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Contact")))
@interface KmastodonCoreInstanceV2Contact : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreInstanceV2ContactCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="account")
*/
@property KmastodonCoreAccount * _Nullable account __attribute__((swift_name("account")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="email")
*/
@property NSString *email __attribute__((swift_name("email")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Registrations")))
@interface KmastodonCoreInstanceV2Registrations : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreInstanceV2RegistrationsCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="approval_required")
*/
@property BOOL approvalRequired __attribute__((swift_name("approvalRequired")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="enabled")
*/
@property BOOL enabled __attribute__((swift_name("enabled")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="message")
*/
@property NSString * _Nullable message __attribute__((swift_name("message")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Rules")))
@interface KmastodonCoreInstanceV2Rules : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreInstanceV2RulesCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="id")
*/
@property NSString *id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="text")
*/
@property NSString *text __attribute__((swift_name("text")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Thumbnail")))
@interface KmastodonCoreInstanceV2Thumbnail : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreInstanceV2ThumbnailCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="blurhash")
*/
@property NSString * _Nullable blurhash __attribute__((swift_name("blurhash")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="url")
*/
@property NSString *url __attribute__((swift_name("url")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="versions")
*/
@property KmastodonCoreInstanceV2Versions * _Nullable versions __attribute__((swift_name("versions")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Usage")))
@interface KmastodonCoreInstanceV2Usage : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreInstanceV2UsageCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="users")
*/
@property KmastodonCoreInstanceV2Users *users __attribute__((swift_name("users")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAccountList.Companion")))
@interface KmastodonCoreAccountListCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreAccountListCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAttachment.Companion")))
@interface KmastodonCoreAttachmentCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreAttachmentCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMeta")))
@interface KmastodonCoreMeta : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreMetaCompanion *companion __attribute__((swift_name("companion")));
@property KmastodonCoreMetaFocus * _Nullable focus __attribute__((swift_name("focus")));
@property KmastodonCoreMetaOriginal * _Nullable original __attribute__((swift_name("original")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNode.Companion")))
@interface KmastodonCoreNodeCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreNodeCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNodeSoftware")))
@interface KmastodonCoreNodeSoftware : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreNodeSoftwareCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="name")
*/
@property NSString * _Nullable name __attribute__((swift_name("name")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="version")
*/
@property NSString * _Nullable version __attribute__((swift_name("version")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAlert")))
@interface KmastodonCoreAlert : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreAlertCompanion *companion __attribute__((swift_name("companion")));
@property KmastodonBoolean * _Nullable favourite __attribute__((swift_name("favourite")));
@property KmastodonBoolean * _Nullable follow __attribute__((swift_name("follow")));
@property KmastodonBoolean * _Nullable mention __attribute__((swift_name("mention")));
@property KmastodonBoolean * _Nullable poll __attribute__((swift_name("poll")));
@property KmastodonBoolean * _Nullable reblog __attribute__((swift_name("reblog")));
@property KmastodonBoolean * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNotification.Companion")))
@interface KmastodonCoreNotificationCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreNotificationCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreSubscription.Companion")))
@interface KmastodonCoreSubscriptionCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreSubscriptionCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAccessToken.Companion")))
@interface KmastodonCoreAccessTokenCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreAccessTokenCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePoll.Companion")))
@interface KmastodonCorePollCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCorePollCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePollOption")))
@interface KmastodonCorePollOption : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCorePollOptionCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="title")
*/
@property NSString * _Nullable title __attribute__((swift_name("title")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="votes_count")
*/
@property KmastodonInt * _Nullable votesCount __attribute__((swift_name("votesCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreReport.Companion")))
@interface KmastodonCoreReportCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreReportCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * https://docs.joinmastodon.org/entities/ScheduledStatus/
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreScheduledStatus.Companion")))
@interface KmastodonCoreScheduledStatusCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * https://docs.joinmastodon.org/entities/ScheduledStatus/
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreScheduledStatusCompanion *shared __attribute__((swift_name("shared")));

/**
 * https://docs.joinmastodon.org/entities/ScheduledStatus/
 */
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreScheduledStatusParams")))
@interface KmastodonCoreScheduledStatusParams : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreScheduledStatusParamsCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="application_id")
*/
@property NSString * _Nullable applicationId __attribute__((swift_name("applicationId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="idempotency")
*/
@property NSString * _Nullable idempotency __attribute__((swift_name("idempotency")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="in_reply_to_id")
*/
@property NSString * _Nullable inReplyToId __attribute__((swift_name("inReplyToId")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="language")
*/
@property NSString * _Nullable language __attribute__((swift_name("language")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="media_ids")
*/
@property KmastodonKotlinArray<NSString *> * _Nullable mediaIds __attribute__((swift_name("mediaIds")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="poll")
*/
@property KmastodonCorePoll * _Nullable poll __attribute__((swift_name("poll")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="scheduled_at")
*/
@property NSString * _Nullable scheduledAt __attribute__((swift_name("scheduledAt")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="sensitive")
*/
@property KmastodonBoolean * _Nullable sensitive __attribute__((swift_name("sensitive")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="spoiler_text")
*/
@property NSString * _Nullable spoilerText __attribute__((swift_name("spoilerText")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="text")
*/
@property NSString * _Nullable text __attribute__((swift_name("text")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="visibility")
*/
@property NSString * _Nullable visibility __attribute__((swift_name("visibility")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="with_rate_limit")
*/
@property KmastodonBoolean * _Nullable withRateLimit __attribute__((swift_name("withRateLimit")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePage")))
@interface KmastodonCorePage : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property KmastodonInt * _Nullable limit __attribute__((swift_name("limit")));
@property KmastodonInt * _Nullable offset __attribute__((swift_name("offset")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreResults.Companion")))
@interface KmastodonCoreResultsCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreResultsCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreCard.Companion")))
@interface KmastodonCoreCardCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreCardCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreContext.Companion")))
@interface KmastodonCoreContextCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreContextCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreConversation.Companion")))
@interface KmastodonCoreConversationCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreConversationCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTrend.Companion")))
@interface KmastodonCoreTrendCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreTrendCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreHistory")))
@interface KmastodonCoreHistory : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreHistoryCompanion *companion __attribute__((swift_name("companion")));
@property KmastodonInt * _Nullable accounts __attribute__((swift_name("accounts")));
@property NSString * _Nullable day __attribute__((swift_name("day")));
@property KmastodonInt * _Nullable uses __attribute__((swift_name("uses")));
@end


/**
 * Serialization strategy defines the serial form of a type [T], including its structural description,
 * declared by the [descriptor] and the actual serialization process, defined by the implementation
 * of the [serialize] method.
 *
 * [serialize] method takes an instance of [T] and transforms it into its serial form (a sequence of primitives),
 * calling the corresponding [Encoder] methods.
 *
 * A serial form of the type is a transformation of the concrete instance into a sequence of primitive values
 * and vice versa. The serial form is not required to completely mimic the structure of the class, for example,
 * a specific implementation may represent multiple integer values as a single string, omit or add some
 * values that are present in the type, but not in the instance.
 *
 * For a more detailed explanation of the serialization process, please refer to [KSerializer] documentation.
 */
__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol KmastodonKotlinx_serialization_coreSerializationStrategy
@required

/**
 * Serializes the [value] of type [T] using the format that is represented by the given [encoder].
 * [serialize] method is format-agnostic and operates with a high-level structured [Encoder] API.
 * Throws [SerializationException] if value cannot be serialized.
 *
 * Example of serialize method:
 * ```
 * class MyData(int: Int, stringList: List<String>, alwaysZero: Long)
 *
 * fun serialize(encoder: Encoder, value: MyData): Unit = encoder.encodeStructure(descriptor) {
 *     // encodeStructure encodes beginning and end of the structure
 *     // encode 'int' property as Int
 *     encodeIntElement(descriptor, index = 0, value.int)
 *     // encode 'stringList' property as List<String>
 *     encodeSerializableElement(descriptor, index = 1, serializer<List<String>>, value.stringList)
 *     // don't encode 'alwaysZero' property because we decided to do so
 * } // end of the structure
 * ```
 *
 * @throws SerializationException in case of any serialization-specific error
 * @throws IllegalArgumentException if the supplied input does not comply encoder's specification
 * @see KSerializer for additional information about general contracts and exception specifics
 */
- (void)serializeEncoder:(id<KmastodonKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));

/**
 * Describes the structure of the serializable representation of [T], produced
 * by this serializer.
 */
@property (readonly) id<KmastodonKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * Deserialization strategy defines the serial form of a type [T], including its structural description,
 * declared by the [descriptor] and the actual deserialization process, defined by the implementation
 * of the [deserialize] method.
 *
 * [deserialize] method takes an instance of [Decoder], and, knowing the serial form of the [T],
 * invokes primitive retrieval methods on the decoder and then transforms the received primitives
 * to an instance of [T].
 *
 * A serial form of the type is a transformation of the concrete instance into a sequence of primitive values
 * and vice versa. The serial form is not required to completely mimic the structure of the class, for example,
 * a specific implementation may represent multiple integer values as a single string, omit or add some
 * values that are present in the type, but not in the instance.
 *
 * For a more detailed explanation of the serialization process, please refer to [KSerializer] documentation.
 */
__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol KmastodonKotlinx_serialization_coreDeserializationStrategy
@required

/**
 * Deserializes the value of type [T] using the format that is represented by the given [decoder].
 * [deserialize] method is format-agnostic and operates with a high-level structured [Decoder] API.
 * As long as most of the formats imply an arbitrary order of properties, deserializer should be able
 * to decode these properties in an arbitrary order and in a format-agnostic way.
 * For that purposes, [CompositeDecoder.decodeElementIndex]-based loop is used: decoder firstly
 * signals property at which index it is ready to decode and then expects caller to decode
 * property with the given index.
 *
 * Throws [SerializationException] if value cannot be deserialized.
 *
 * Example of deserialize method:
 * ```
 * class MyData(int: Int, stringList: List<String>, alwaysZero: Long)
 *
 * fun deserialize(decoder: Decoder): MyData = decoder.decodeStructure(descriptor) {
 *     // decodeStructure decodes beginning and end of the structure
 *     var int: Int? = null
 *     var list: List<String>? = null
 *     loop@ while (true) {
 *         when (val index = decodeElementIndex(descriptor)) {
 *             DECODE_DONE -> break@loop
 *             0 -> {
 *                 // Decode 'int' property as Int
 *                 int = decodeIntElement(descriptor, index = 0)
 *             }
 *             1 -> {
 *                 // Decode 'stringList' property as List<String>
 *                 list = decodeSerializableElement(descriptor, index = 1, serializer<List<String>>())
 *             }
 *             else -> throw SerializationException("Unexpected index $index")
 *         }
 *      }
 *     if (int == null || list == null) throwMissingFieldException()
 *     // Always use 0 as a value for alwaysZero property because we decided to do so.
 *     return MyData(int, list, alwaysZero = 0L)
 * }
 * ```
 *
 * @throws MissingFieldException if non-optional fields were not found during deserialization
 * @throws SerializationException in case of any deserialization-specific error
 * @throws IllegalArgumentException if the decoded input is not a valid instance of [T]
 * @see KSerializer for additional information about general contracts and exception specifics
 */
- (id _Nullable)deserializeDecoder:(id<KmastodonKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));

/**
 * Describes the structure of the serializable representation of [T], that current
 * deserializer is able to deserialize.
 */
@property (readonly) id<KmastodonKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end


/**
 * KSerializer is responsible for the representation of a serial form of a type [T]
 * in terms of [encoders][Encoder] and [decoders][Decoder] and for constructing and deconstructing [T]
 * from/to a sequence of encoding primitives. For classes marked with [@Serializable][Serializable], can be
 * obtained from generated companion extension `.serializer()` or from [serializer<T>()][serializer] function.
 *
 * Serialization is decoupled from the encoding process to make it completely format-agnostic.
 * Serialization represents a type as its serial form and is abstracted from the actual
 * format (whether its JSON, ProtoBuf or a hashing) and unaware of the underlying storage
 * (whether it is a string builder, byte array or a network socket), while
 * encoding/decoding is abstracted from a particular type and its serial form and is responsible
 * for transforming primitives ("here in an int property 'foo'" call from a serializer) into a particular
 * format-specific representation ("for a given int, append a property name in quotation marks,
 * then append a colon, then append an actual value" for JSON) and how to retrieve a primitive
 * ("give me an int that is 'foo' property") from the underlying representation ("expect the next string to be 'foo',
 * parse it, then parse colon, then parse a string until the next comma as an int and return it).
 *
 * Serial form consists of a structural description, declared by the [descriptor] and
 * actual serialization and deserialization processes, defined by the corresponding
 * [serialize] and [deserialize] methods implementation.
 *
 * Structural description specifies how the [T] is represented in the serial form:
 * its [kind][SerialKind] (e.g. whether it is represented as a primitive, a list or a class),
 * its [elements][SerialDescriptor.elementNames] and their [positional names][SerialDescriptor.getElementName].
 *
 * Serialization process is defined as a sequence of calls to an [Encoder], and transforms a type [T]
 * into a stream of format-agnostic primitives that represent [T], such as "here is an int, here is a double
 * and here is another nested object". It can be demonstrated by the example:
 * ```
 * class MyData(int: Int, stringList: List<String>, alwaysZero: Long)
 *
 * // .. serialize method of a corresponding serializer
 * fun serialize(encoder: Encoder, value: MyData): Unit = encoder.encodeStructure(descriptor) {
 *     // encodeStructure encodes beginning and end of the structure
 *     // encode 'int' property as Int
 *     encodeIntElement(descriptor, index = 0, value.int)
 *     // encode 'stringList' property as List<String>
 *     encodeSerializableElement(descriptor, index = 1, serializer<List<String>>, value.stringList)
 *     // don't encode 'alwaysZero' property because we decided to do so
 * } // end of the structure
 * ```
 *
 * Deserialization process is symmetric and uses [Decoder].
 *
 * ### Exception types for `KSerializer` implementation
 *
 * Implementations of [serialize] and [deserialize] methods are allowed to throw
 * any subtype of [IllegalArgumentException] in order to indicate serialization
 * and deserialization errors.
 *
 * For serializer implementations, it is recommended to throw subclasses of [SerializationException] for
 * any serialization-specific errors related to invalid or unsupported format of the data
 * and [IllegalStateException] for errors during validation of the data.
 */
__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol KmastodonKotlinx_serialization_coreKSerializer <KmastodonKotlinx_serialization_coreSerializationStrategy, KmastodonKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreField.Companion")))
@interface KmastodonCoreFieldCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreFieldCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePleromaAccount.Companion")))
@interface KmastodonCorePleromaAccountCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCorePleromaAccountCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRole.Companion")))
@interface KmastodonCoreRoleCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreRoleCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAccountSource.Companion")))
@interface KmastodonCoreAccountSourceCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreAccountSourceCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreRateLimit.Companion")))
@interface KmastodonCoreRateLimitCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreRateLimitCompanion *shared __attribute__((swift_name("shared")));
- (KmastodonCoreRateLimit * _Nullable)ofResponse:(KmastodonKhttpclientHttpResponse *)response __attribute__((swift_name("of(response:)")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="2.3")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinInstant")))
@interface KmastodonKotlinInstant : KmastodonBase <KmastodonKotlinComparable>
@property (class, readonly, getter=companion) KmastodonKotlinInstantCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(KmastodonKotlinInstant *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (KmastodonKotlinInstant *)minusDuration:(int64_t)duration __attribute__((swift_name("minus(duration:)")));
- (int64_t)minusOther:(KmastodonKotlinInstant *)other __attribute__((swift_name("minus(other:)")));
- (KmastodonKotlinInstant *)plusDuration:(int64_t)duration __attribute__((swift_name("plus(duration:)")));
- (int64_t)toEpochMilliseconds __attribute__((swift_name("toEpochMilliseconds()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t epochSeconds __attribute__((swift_name("epochSeconds")));
@property (readonly) int32_t nanosecondsOfSecond __attribute__((swift_name("nanosecondsOfSecond")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreLink.Companion")))
@interface KmastodonCoreLinkCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreLinkCompanion *shared __attribute__((swift_name("shared")));
- (KmastodonCoreLink * _Nullable)ofResponse:(KmastodonKhttpclientHttpResponse *)response __attribute__((swift_name("of(response:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreApplication.Companion")))
@interface KmastodonCoreApplicationCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreApplicationCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilter.Companion")))
@interface KmastodonCoreFilterCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreFilterCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilterKeyword")))
@interface KmastodonCoreFilterKeyword : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreFilterKeywordCompanion *companion __attribute__((swift_name("companion")));
@property NSString *id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="whole_word")
*/
@property BOOL isWholeWord __attribute__((swift_name("isWholeWord")));
@property NSString *keyword __attribute__((swift_name("keyword")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilterStatus")))
@interface KmastodonCoreFilterStatus : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreFilterStatusCompanion *companion __attribute__((swift_name("companion")));
@property NSString *id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="status_id")
*/
@property NSString *statusId __attribute__((swift_name("statusId")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMention.Companion")))
@interface KmastodonCoreMentionCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreMentionCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePleromaStatus.Companion")))
@interface KmastodonCorePleromaStatusCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCorePleromaStatusCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePleromaContent")))
@interface KmastodonCorePleromaContent : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCorePleromaContentCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="text/plain")
*/
@property NSString * _Nullable textPlain __attribute__((swift_name("textPlain")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePleromaReaction")))
@interface KmastodonCorePleromaReaction : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCorePleromaReactionCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="count")
*/
@property int32_t count __attribute__((swift_name("count")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="me")
*/
@property BOOL isMe __attribute__((swift_name("isMe")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="name")
*/
@property NSString * _Nullable name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreTag.Companion")))
@interface KmastodonCoreTagCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreTagCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface KmastodonKotlinByteIterator : KmastodonBase <KmastodonKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KmastodonByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV1Configuration.Companion")))
@interface KmastodonCoreInstanceV1ConfigurationCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreInstanceV1ConfigurationCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV1MediaAttachments")))
@interface KmastodonCoreInstanceV1MediaAttachments : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreInstanceV1MediaAttachmentsCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="image_matrix_limit")
*/
@property int32_t imageMatrixLimit __attribute__((swift_name("imageMatrixLimit")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="image_size_limit")
*/
@property int32_t imageSizeLimit __attribute__((swift_name("imageSizeLimit")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="supported_mime_types")
*/
@property KmastodonKotlinArray<NSString *> *supportedMimeTypes __attribute__((swift_name("supportedMimeTypes")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="video_frame_rate_limit")
*/
@property int32_t videoFrameRateLimit __attribute__((swift_name("videoFrameRateLimit")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="video_matrix_limit")
*/
@property int32_t videoMatrixLimit __attribute__((swift_name("videoMatrixLimit")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="video_size_limit")
*/
@property int32_t videoSizeLimit __attribute__((swift_name("videoSizeLimit")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV1Polls")))
@interface KmastodonCoreInstanceV1Polls : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreInstanceV1PollsCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="max_characters_per_option")
*/
@property KmastodonInt * _Nullable maxCharactersPerOption __attribute__((swift_name("maxCharactersPerOption")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="max_expiration")
*/
@property KmastodonInt * _Nullable maxExpiration __attribute__((swift_name("maxExpiration")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="max_options")
*/
@property KmastodonInt * _Nullable maxOptions __attribute__((swift_name("maxOptions")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="min_expiration")
*/
@property KmastodonInt * _Nullable minExpiration __attribute__((swift_name("minExpiration")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV1Statuses")))
@interface KmastodonCoreInstanceV1Statuses : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreInstanceV1StatusesCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="characters_reserved_per_url")
*/
@property int32_t charactersReservedPerUrl __attribute__((swift_name("charactersReservedPerUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="max_characters")
*/
@property int32_t maxCharacters __attribute__((swift_name("maxCharacters")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="max_media_attachments")
*/
@property int32_t maxMediaAttachments __attribute__((swift_name("maxMediaAttachments")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV1Rules.Companion")))
@interface KmastodonCoreInstanceV1RulesCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreInstanceV1RulesCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV1Stats.Companion")))
@interface KmastodonCoreInstanceV1StatsCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreInstanceV1StatsCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV1Urls.Companion")))
@interface KmastodonCoreInstanceV1UrlsCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreInstanceV1UrlsCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Configuration.Companion")))
@interface KmastodonCoreInstanceV2ConfigurationCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreInstanceV2ConfigurationCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Accounts")))
@interface KmastodonCoreInstanceV2Accounts : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreInstanceV2AccountsCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="max_featured_tags")
*/
@property int32_t maxFeaturedTags __attribute__((swift_name("maxFeaturedTags")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="max_pinned_statuses")
*/
@property KmastodonInt * _Nullable maxPinnedStatuses __attribute__((swift_name("maxPinnedStatuses")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2MediaAttachments")))
@interface KmastodonCoreInstanceV2MediaAttachments : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreInstanceV2MediaAttachmentsCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="image_matrix_limit")
*/
@property int32_t imageMatrixLimit __attribute__((swift_name("imageMatrixLimit")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="image_size_limit")
*/
@property int32_t imageSizeLimit __attribute__((swift_name("imageSizeLimit")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="supported_mime_types")
*/
@property KmastodonKotlinArray<NSString *> *supportedMimeTypes __attribute__((swift_name("supportedMimeTypes")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="video_frame_rate_limit")
*/
@property int32_t videoFrameRateLimit __attribute__((swift_name("videoFrameRateLimit")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="video_matrix_limit")
*/
@property int32_t videoMatrixLimit __attribute__((swift_name("videoMatrixLimit")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="video_size_limit")
*/
@property int32_t videoSizeLimit __attribute__((swift_name("videoSizeLimit")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Polls")))
@interface KmastodonCoreInstanceV2Polls : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreInstanceV2PollsCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="max_characters_per_option")
*/
@property int32_t maxCharactersPerOption __attribute__((swift_name("maxCharactersPerOption")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="max_expiration")
*/
@property int32_t maxExpiration __attribute__((swift_name("maxExpiration")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="max_options")
*/
@property int32_t maxOptions __attribute__((swift_name("maxOptions")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="min_expiration")
*/
@property int32_t minExpiration __attribute__((swift_name("minExpiration")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Statuses")))
@interface KmastodonCoreInstanceV2Statuses : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreInstanceV2StatusesCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="characters_reserved_per_url")
*/
@property int32_t charactersReservedPerUrl __attribute__((swift_name("charactersReservedPerUrl")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="max_characters")
*/
@property int32_t maxCharacters __attribute__((swift_name("maxCharacters")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="max_media_attachments")
*/
@property int32_t maxMediaAttachments __attribute__((swift_name("maxMediaAttachments")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Translation")))
@interface KmastodonCoreInstanceV2Translation : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreInstanceV2TranslationCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="enabled")
*/
@property BOOL enabled __attribute__((swift_name("enabled")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Urls")))
@interface KmastodonCoreInstanceV2Urls : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreInstanceV2UrlsCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="streaming")
*/
@property NSString *streaming __attribute__((swift_name("streaming")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Vapid")))
@interface KmastodonCoreInstanceV2Vapid : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreInstanceV2VapidCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="public_key")
*/
@property NSString *publicKey __attribute__((swift_name("publicKey")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Contact.Companion")))
@interface KmastodonCoreInstanceV2ContactCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreInstanceV2ContactCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Registrations.Companion")))
@interface KmastodonCoreInstanceV2RegistrationsCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreInstanceV2RegistrationsCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Rules.Companion")))
@interface KmastodonCoreInstanceV2RulesCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreInstanceV2RulesCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Thumbnail.Companion")))
@interface KmastodonCoreInstanceV2ThumbnailCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreInstanceV2ThumbnailCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Versions")))
@interface KmastodonCoreInstanceV2Versions : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreInstanceV2VersionsCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="@1x")
*/
@property NSString * _Nullable at1x __attribute__((swift_name("at1x")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="@2x")
*/
@property NSString * _Nullable at2x __attribute__((swift_name("at2x")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Usage.Companion")))
@interface KmastodonCoreInstanceV2UsageCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreInstanceV2UsageCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Users")))
@interface KmastodonCoreInstanceV2Users : KmastodonBase
- (instancetype)initWithActiveMonth:(int32_t)activeMonth __attribute__((swift_name("init(activeMonth:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmastodonCoreInstanceV2UsersCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="active_month")
*/
@property int32_t activeMonth __attribute__((swift_name("activeMonth")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMeta.Companion")))
@interface KmastodonCoreMetaCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreMetaCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMetaFocus")))
@interface KmastodonCoreMetaFocus : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreMetaFocusCompanion *companion __attribute__((swift_name("companion")));
@property float x __attribute__((swift_name("x")));
@property float y __attribute__((swift_name("y")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMetaOriginal")))
@interface KmastodonCoreMetaOriginal : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonCoreMetaOriginalCompanion *companion __attribute__((swift_name("companion")));
@property float aspect __attribute__((swift_name("aspect")));
@property int32_t height __attribute__((swift_name("height")));
@property NSString * _Nullable size __attribute__((swift_name("size")));
@property int32_t width __attribute__((swift_name("width")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreNodeSoftware.Companion")))
@interface KmastodonCoreNodeSoftwareCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreNodeSoftwareCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreAlert.Companion")))
@interface KmastodonCoreAlertCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreAlertCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePollOption.Companion")))
@interface KmastodonCorePollOptionCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCorePollOptionCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreScheduledStatusParams.Companion")))
@interface KmastodonCoreScheduledStatusParamsCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreScheduledStatusParamsCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreHistory.Companion")))
@interface KmastodonCoreHistoryCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreHistoryCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Encoder is a core serialization primitive that encapsulates the knowledge of the underlying
 * format and its storage, exposing only structural methods to the serializer, making it completely
 * format-agnostic. Serialization process transforms a single value into the sequence of its
 * primitive elements, also called its serial form, while encoding transforms these primitive elements into an actual
 * format representation: JSON string, ProtoBuf ByteArray, in-memory map representation etc.
 *
 * Encoder provides high-level API that operates with basic primitive types, collections
 * and nested structures. Internally, encoder represents output storage and operates with its state
 * and lower level format-specific details.
 *
 * To be more specific, serialization transforms a value into a sequence of "here is an int, here is
 * a double, here a list of strings and here is another object that is a nested int", while encoding
 * transforms this sequence into a format-specific commands such as "insert opening curly bracket
 * for a nested object start, insert a name of the value, and the value separated with colon for an int etc."
 *
 * The symmetric interface for the deserialization process is [Decoder].
 *
 * ### Serialization. Primitives
 *
 * If a class is represented as a single [primitive][PrimitiveKind] value in its serialized form,
 * then one of the `encode*` methods (e.g. [encodeInt]) can be used directly.
 *
 * ### Serialization. Structured types.
 *
 * If a class is represented as a structure or has multiple values in its serialized form,
 * `encode*` methods are not that helpful, because they do not allow working with collection types or establish structure boundaries.
 * All these capabilities are delegated to the [CompositeEncoder] interface with a more specific API surface.
 * To denote a structure start, [beginStructure] should be used.
 * ```
 * // Denote the structure start,
 * val composite = encoder.beginStructure(descriptor)
 * // Encoding all elements within the structure using 'composite'
 * ...
 * // Denote the structure end
 * composite.endStructure(descriptor)
 * ```
 *
 * E.g. if the encoder belongs to JSON format, then [beginStructure] will write an opening bracket
 * (`{` or `[`, depending on the descriptor kind), returning the [CompositeEncoder] that is aware of colon separator,
 * that should be appended between each key-value pair, whilst [CompositeEncoder.endStructure] will write a closing bracket.
 *
 * ### Exception guarantees
 *
 * For the regular exceptions, such as invalid input, conflicting serial names,
 * [SerializationException] can be thrown by any encoder methods.
 * It is recommended to declare a format-specific subclass of [SerializationException] and throw it.
 *
 * ### Exception safety
 *
 * In general, catching [SerializationException] from any of `encode*` methods is not allowed and produces unspecified behaviour.
 * After thrown exception, the current encoder is left in an arbitrary state, no longer suitable for further encoding.
 *
 * ### Format encapsulation
 *
 * For example, for the following serializer:
 * ```
 * class StringHolder(val stringValue: String)
 *
 * object StringPairDeserializer : SerializationStrategy<StringHolder> {
 *    override val descriptor = ...
 *
 *    override fun serializer(encoder: Encoder, value: StringHolder) {
 *        // Denotes start of the structure, StringHolder is not a "plain" data type
 *        val composite = encoder.beginStructure(descriptor)
 *        // Encode the nested string value
 *        composite.encodeStringElement(descriptor, index = 0)
 *        // Denotes end of the structure
 *        composite.endStructure(descriptor)
 *    }
 * }
 * ```
 *
 * This serializer does not know anything about the underlying storage and will work with any properly-implemented encoder.
 * JSON, for example, writes an opening bracket `{` during the `beginStructure` call, writes `stringValue` key along
 * with its value in `encodeStringElement` and writes the closing bracket `}` during the `endStructure`.
 * XML would do roughly the same, but with different separators and structures, while ProtoBuf
 * machinery could be completely different.
 * In any case, all these parsing details are encapsulated by an encoder.
 *
 * ### Encoder implementation.
 *
 * While being strictly typed, an underlying format can transform actual types in the way it wants.
 * For example, a format can support only string types and encode/decode all primitives in a string form:
 * ```
 * StringFormatEncoder : Encoder {
 *
 *     ...
 *     override fun encodeDouble(value: Double) = encodeString(value.toString())
 *     override fun encodeInt(value: Int) = encodeString(value.toString())
 *     ...
 * }
 * ```
 *
 * ### Not stable for inheritance
 *
 * `Encoder` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 */
__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol KmastodonKotlinx_serialization_coreEncoder
@required

/**
 * Encodes the beginning of the collection with size [collectionSize] and the given serializer of its type parameters.
 * This method has to be implemented only if you need to know collection size in advance, otherwise, [beginStructure] can be used.
 */
- (id<KmastodonKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));

/**
 * Encodes the beginning of the nested structure in a serialized form
 * and returns [CompositeDecoder] responsible for encoding this very structure.
 * E.g the hierarchy:
 * ```
 * class StringHolder(val stringValue: String)
 * class Holder(val stringHolder: StringHolder)
 * ```
 *
 * with the following serialized form in JSON:
 * ```
 * {
 *   "stringHolder" : { "stringValue": "value" }
 * }
 * ```
 *
 * will be roughly represented as the following sequence of calls:
 * ```
 * // Holder serializer
 * fun serialize(encoder: Encoder, value: Holder) {
 *     val composite = encoder.beginStructure(descriptor) // the very first opening bracket '{'
 *     composite.encodeSerializableElement(descriptor, 0, value.stringHolder) // Serialize nested StringHolder
 *     composite.endStructure(descriptor) // The very last closing bracket
 * }
 *
 * // StringHolder serializer
 * fun serialize(encoder: Encoder, value: StringHolder) {
 *     val composite = encoder.beginStructure(descriptor) // One more '{' when the key "stringHolder" is already written
 *     composite.encodeStringElement(descriptor, 0, value.stringValue) // Serialize actual value
 *     composite.endStructure(descriptor) // Closing bracket
 * }
 * ```
 */
- (id<KmastodonKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));

/**
 * Encodes a boolean value.
 * Corresponding kind is [PrimitiveKind.BOOLEAN].
 */
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));

/**
 * Encodes a single byte value.
 * Corresponding kind is [PrimitiveKind.BYTE].
 */
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));

/**
 * Encodes a 16-bit unicode character value.
 * Corresponding kind is [PrimitiveKind.CHAR].
 */
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));

/**
 * Encodes a 64-bit IEEE 754 floating point value.
 * Corresponding kind is [PrimitiveKind.DOUBLE].
 */
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));

/**
 * Encodes a enum value that is stored at the [index] in [enumDescriptor] elements collection.
 * Corresponding kind is [SerialKind.ENUM].
 *
 * E.g. for the enum `enum class Letters { A, B, C, D }` and
 * serializable value "C", [encodeEnum] method should be called with `2` as am index.
 *
 * This method does not imply any restrictions on the output format,
 * the format is free to store the enum by its name, index, ordinal or any other
 */
- (void)encodeEnumEnumDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));

/**
 * Encodes a 32-bit IEEE 754 floating point value.
 * Corresponding kind is [PrimitiveKind.FLOAT].
 */
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));

/**
 * Returns [Encoder] for encoding an underlying type of a value class in an inline manner.
 * [descriptor] describes a serializable value class.
 *
 * Namely, for the `@Serializable @JvmInline value class MyInt(val my: Int)`,
 * the following sequence is used:
 * ```
 * thisEncoder.encodeInline(MyInt.serializer().descriptor).encodeInt(my)
 * ```
 *
 * Current encoder may return any other instance of [Encoder] class, depending on the provided [descriptor].
 * For example, when this function is called on Json encoder with `UInt.serializer().descriptor`, the returned encoder is able
 * to encode unsigned integers.
 *
 * Note that this function returns [Encoder] instead of the [CompositeEncoder]
 * because value classes always have the single property.
 * Calling [Encoder.beginStructure] on returned instance leads to an unspecified behavior and, in general, is prohibited.
 */
- (id<KmastodonKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));

/**
 * Encodes a 32-bit integer value.
 * Corresponding kind is [PrimitiveKind.INT].
 */
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));

/**
 * Encodes a 64-bit integer value.
 * Corresponding kind is [PrimitiveKind.LONG].
 */
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * Notifies the encoder that value of a nullable type that is
 * being serialized is not null. It should be called before writing a non-null value
 * of nullable type:
 * ```
 * // Could be String? serialize method
 * if (value != null) {
 *     encoder.encodeNotNullMark()
 *     encoder.encodeStringValue(value)
 * } else {
 *     encoder.encodeNull()
 * }
 * ```
 *
 * This method has a use in highly-performant binary formats and can
 * be safely ignore by most of the regular formats.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * Encodes `null` value.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * Encodes the nullable [value] of type [T] by delegating the encoding process to the given [serializer].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<KmastodonKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));

/**
 * Encodes the [value] of type [T] by delegating the encoding process to the given [serializer].
 * For example, `encodeInt` call is equivalent to delegating integer encoding to [Int.serializer][Int.Companion.serializer]:
 * `encodeSerializableValue(Int.serializer())`
 */
- (void)encodeSerializableValueSerializer:(id<KmastodonKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));

/**
 * Encodes a 16-bit short value.
 * Corresponding kind is [PrimitiveKind.SHORT].
 */
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));

/**
 * Encodes a string value.
 * Corresponding kind is [PrimitiveKind.STRING].
 */
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));

/**
 * Context of the current serialization process, including contextual and polymorphic serialization and,
 * potentially, a format-specific configuration.
 */
@property (readonly) KmastodonKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * Serial descriptor is an inherent property of [KSerializer] that describes the structure of the serializable type.
 * The structure of the serializable type is not only the characteristic of the type itself, but also of the serializer as well,
 * meaning that one type can have multiple descriptors that have completely different structures.
 *
 * For example, the class `class Color(val rgb: Int)` can have multiple serializable representations,
 * such as `{"rgb": 255}`, `"#0000FF"`, `[0, 0, 255]` and `{"red": 0, "green": 0, "blue": 255}`.
 * Representations are determined by serializers, and each such serializer has its own descriptor that identifies
 * each structure in a distinguishable and format-agnostic manner.
 *
 * ### Structure
 * Serial descriptor is identified by its [name][serialName] and consists of a kind, potentially empty set of
 * children elements, and additional metadata.
 *
 * * [serialName] uniquely identifies the descriptor (and the corresponding serializer) for non-generic types.
 *   For generic types, the actual type substitution is omitted from the string representation, and the name
 *   identifies the family of the serializers without type substitutions. However, type substitution is accounted for
 *   in [equals] and [hashCode] operations, meaning that descriptors of generic classes with the same name but different type
 *   arguments are not equal to each other.
 *   [serialName] is typically used to specify the type of the target class during serialization of polymorphic and sealed
 *   classes, for observability and diagnostics.
 * * [Kind][SerialKind] defines what this descriptor represents: primitive, enum, object, collection, etc.
 * * Children elements are represented as serial descriptors as well and define the structure of the type's elements.
 * * Metadata carries additional information, such as [nullability][nullable], [optionality][isElementOptional]
 *   and [serial annotations][getElementAnnotations].
 *
 * ### Usages
 * There are two general usages of the descriptors: THE serialization process and serialization introspection.
 *
 * #### Serialization
 * Serial descriptor is used as a bridge between decoders/encoders and serializers.
 * When asking for a next element, the serializer provides an expected descriptor to the decoder, and,
 * based on the descriptor content, the decoder decides how to parse its input.
 * In JSON, for example, when the encoder is asked to encode the next element and this element
 * is a subtype of [List], the encoder receives a descriptor with [StructureKind.LIST] and, based on that,
 * first writes an opening square bracket before writing the content of the list.
 *
 * Serial descriptor _encapsulates_ the structure of the data, so serializers can be free from
 * format-specific details. `ListSerializer` knows nothing about JSON and square brackets, providing
 * only the structure of the data and delegating encoding decision to the format itself.
 *
 * #### Introspection
 * Another usage of a serial descriptor is type introspection without its serialization.
 * Introspection can be used to check whether the given serializable class complies the
 * corresponding scheme and to generate JSON or ProtoBuf schema from the given class.
 *
 * ### Indices
 * Serial descriptor API operates with children indices.
 * For the fixed-size structures, such as regular classes, index is represented by a value in
 * the range from zero to [elementsCount] and represent and index of the property in this class.
 * Consequently, primitives do not have children and their element count is zero.
 *
 * For collections and maps indices do not have a fixed bound. Regular collections descriptors usually
 * have one element (`T`, maps have two, one for keys and one for values), but potentially unlimited
 * number of actual children values. Valid indices range is not known statically,
 * and implementations of such a descriptor should provide consistent and unbounded names and indices.
 *
 * In practice, for regular classes it is allowed to invoke `getElement*(index)` methods
 * with an index from `0` to [elementsCount] range and the element at the particular index corresponds to the
 * serializable property at the given position.
 * For collections and maps, index parameter for `getElement*(index)` methods is effectively bounded
 * by the maximal number of collection/map elements.
 *
 * ### Thread-safety and mutability
 * Serial descriptor implementation should be immutable and, thus, thread-safe.
 *
 * ### Equality and caching
 * Serial descriptor can be used as a unique identifier for format-specific data or schemas and
 * this implies the following restrictions on its `equals` and `hashCode`:
 *
 * An [equals] implementation should use both [serialName] and elements structure.
 * Comparing [elementDescriptors] directly is discouraged,
 * because it may cause a stack overflow error, e.g., if a serializable class `T` contains elements of type `T`.
 * To avoid it, a serial descriptor implementation should compare only descriptors
 * of class' type parameters, in a way that `serializer<Box<Int>>().descriptor != serializer<Box<String>>().descriptor`.
 * If type parameters are equal, descriptor structure should be compared by using children elements
 * descriptors' [serialName]s, which correspond to class names
 * (do not confuse with elements' own names, which correspond to properties' names); and/or other [SerialDescriptor]
 * properties, such as [kind].
 * An example of [equals] implementation:
 * ```
 * if (this === other) return true
 * if (other::class != this::class) return false
 * if (serialName != other.serialName) return false
 * if (!typeParametersAreEqual(other)) return false
 * if (this.elementDescriptors().map { it.serialName } != other.elementDescriptors().map { it.serialName }) return false
 * return true
 * ```
 *
 * [hashCode] implementation should use the same properties for computing the result.
 *
 * ### User-defined serial descriptors
 * The best way to define a custom descriptor is to use [buildClassSerialDescriptor] builder function, where
 * for each serializable property the corresponding element is declared.
 *
 * Example:
 * ```
 * // Class with custom serializer and custom serial descriptor
 * class Data(
 *     val intField: Int, // This field is ignored by custom serializer
 *     val longField: Long, // This field is written as long, but in serialized form is named as "_longField"
 *     val stringList: List<String> // This field is written as regular list of strings
 * )
 *
 * // Descriptor for such class:
 * buildClassSerialDescriptor("my.package.Data") {
 *     // intField is deliberately ignored by serializer -- not present in the descriptor as well
 *     element<Long>("_longField") // longField is named as _longField
 *     element("stringField", listSerialDescriptor<String>())
 * }
 *
 * // Example of 'serialize' function for such descriptor
 * override fun serialize(encoder: Encoder, value: Data) {
 *     encoder.encodeStructure(descriptor) {
 *         encodeLongElement(descriptor, 0, value.longField) // Will be written as "_longField" because descriptor's child at index 0 says so
 *         encodeSerializableElement(descriptor, 1, ListSerializer(String.serializer()), value.stringList)
 *     }
 * }
 * ```
 *
 * For classes that are represented as a single primitive value, [PrimitiveSerialDescriptor] builder function can be used instead.
 *
 * ### Consistency violations
 * An implementation of [SerialDescriptor] should be consistent with the implementation of the corresponding [KSerializer].
 * Yet it is not type-checked statically, thus making it possible to declare a non-consistent implementation of descriptor and serializer.
 * In such cases, the behavior of an underlying format is unspecified and may lead to both runtime errors and encoding of
 * corrupted data that is impossible to decode back.
 *
 * ### Not for implementation
 *
 * `SerialDescriptor` interface should not be implemented in 3rd party libraries, as new methods
 * might be added to this interface when kotlinx.serialization adds support for new Kotlin features.
 * This interface is safe to use and construct via [buildClassSerialDescriptor], [PrimitiveSerialDescriptor], and `SerialDescriptor` factory function.
 *
 * @note annotations
 *   kotlin.SubclassOptInRequired(markerClass=[NormalClass(value=kotlinx/serialization/SealedSerializationApi)])
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol KmastodonKotlinx_serialization_coreSerialDescriptor
@required

/**
 * Returns serial annotations of the child element at the given [index].
 * This method differs from `getElementDescriptor(index).annotations` by reporting only
 * element-specific annotations:
 * ```
 * @Serializable
 * @OnClassSerialAnnotation
 * class Nested(...)
 *
 * @Serializable
 * class Outer(@OnPropertySerialAnnotation val nested: Nested)
 *
 * val outerDescriptor = Outer.serializer().descriptor
 *
 * outerDescriptor.getElementAnnotations(0) // Returns [@OnPropertySerialAnnotation]
 * outerDescriptor.getElementDescriptor(0).annotations // Returns [@OnClassSerialAnnotation]
 * ```
 * Only annotations marked with [SerialInfo] are added to the resulting list.
 *
 * @throws IndexOutOfBoundsException for an illegal [index] values.
 * @throws IllegalStateException if the current descriptor does not support children elements (e.g. is a primitive).
 */
- (NSArray<id<KmastodonKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * Retrieves the descriptor of the child element for the given [index].
 * For the property of type `T` on the position `i`, `getElementDescriptor(i)` yields the same result
 * as for `T.serializer().descriptor`, if the serializer for this property is not explicitly overridden
 * with `@Serializable(with = ...`)`, [Polymorphic] or [Contextual].
 * This method can be used to completely introspect the type that the current descriptor describes.
 *
 * Example:
 * ```
 * @Serializable
 * @OnClassSerialAnnotation
 * class Nested(...)
 *
 * @Serializable
 * class Outer(val nested: Nested)
 *
 * val outerDescriptor = Outer.serializer().descriptor
 *
 * outerDescriptor.getElementDescriptor(0).serialName // Returns "Nested"
 * outerDescriptor.getElementDescriptor(0).annotations // Returns [@OnClassSerialAnnotation]
 * ```
 *
 * @throws IndexOutOfBoundsException for illegal [index] values.
 * @throws IllegalStateException if the current descriptor does not support children elements (e.g. is a primitive).
 */
- (id<KmastodonKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * Returns an index in the children list of the given element by its name or [CompositeDecoder.UNKNOWN_NAME]
 * if there is no such element.
 * The resulting index, if it is not [CompositeDecoder.UNKNOWN_NAME], is guaranteed to be usable with [getElementName].
 *
 * Example:
 *
 * ```
 * @Serializable
 * class User(val name: String, val alias: String?)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.getElementIndex("name") // Returns 0
 * userDescriptor.getElementIndex("alias") // Returns 1
 * userDescriptor.getElementIndex("lastName") // Returns CompositeDecoder.UNKNOWN_NAME = -3
 * ```
 */
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * Returns a positional name of the child at the given [index].
 * Positional name represents a corresponding property name in the class, associated with
 * the current descriptor.
 *
 * Do not confuse with [serialName], which returns class name:
 *
 * ```
 * package my.app
 *
 * @Serializable
 * class User(val name: String)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.serialName // Returns "my.app.User"
 * userDescriptor.getElementName(0) // Returns "name"
 * ```
 *
 * @throws IndexOutOfBoundsException for an illegal [index] values.
 * @throws IllegalStateException if the current descriptor does not support children elements (e.g. is a primitive)
 */
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * Whether the element at the given [index] is optional (can be absent in serialized form).
 * For generated descriptors, all elements that have a corresponding default parameter value are
 * marked as optional. Custom serializers can treat optional values in a serialization-specific manner
 * without a default parameters constraint.
 *
 * Example of optionality:
 * ```
 * @Serializable
 * class Holder(
 *     val a: Int, // isElementOptional(0) == false
 *     val b: Int?, // isElementOptional(1) == false
 *     val c: Int? = null, // isElementOptional(2) == true
 *     val d: List<Int>, // isElementOptional(3) == false
 *     val e: List<Int> = listOf(1), // isElementOptional(4) == true
 * )
 * ```
 * Returns `false` for valid indices of collections, maps, and enums.
 *
 * @throws IndexOutOfBoundsException for an illegal [index] values.
 * @throws IllegalStateException if the current descriptor does not support children elements (e.g. is a primitive).
 */
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * Returns serial annotations of the associated class.
 * Serial annotations can be used to specify additional metadata that may be used during serialization.
 * Only annotations marked with [SerialInfo] are added to the resulting list.
 *
 * Do not confuse with [getElementAnnotations]:
 * ```
 * @Serializable
 * @OnClassSerialAnnotation
 * class Nested(...)
 *
 * @Serializable
 * class Outer(@OnPropertySerialAnnotation val nested: Nested)
 *
 * val outerDescriptor = Outer.serializer().descriptor
 *
 * outerDescriptor.getElementAnnotations(0) // Returns [@OnPropertySerialAnnotation]
 * outerDescriptor.getElementDescriptor(0).annotations // Returns [@OnClassSerialAnnotation]
 * ```
 */
@property (readonly) NSArray<id<KmastodonKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * The number of elements this descriptor describes, besides from the class itself.
 * [elementsCount] describes the number of **semantic** elements, not the number
 * of actual fields/properties in the serialized form, even though they frequently match.
 *
 * For example, for the following class
 * `class Complex(val real: Long, val imaginary: Long)` the corresponding descriptor
 * and the serialized form both have two elements, while for `List<Int>`
 * the corresponding descriptor has a single element (`IntDescriptor`, the type of list element),
 * but from zero up to `Int.MAX_VALUE` values in the serialized form:
 *
 * ```
 * @Serializable
 * class Complex(val real: Long, val imaginary: Long)
 *
 * Complex.serializer().descriptor.elementsCount // Returns 2
 *
 * @Serializable
 * class OuterList(val list: List<Int>)
 *
 * OuterList.serializer().descriptor.getElementDescriptor(0).elementsCount // Returns 1
 * ```
 */
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));

/**
 * Returns `true` if this descriptor describes a serializable value class which underlying value
 * is serialized directly.
 *
 * This property is true for serializable `@JvmInline value` classes:
 * ```
 * @Serializable
 * class User(val name: Name)
 *
 * @Serializable
 * @JvmInline
 * value class Name(val value: String)
 *
 * User.serializer().descriptor.isInline // false
 * User.serializer().descriptor.getElementDescriptor(0).isInline // true
 * Name.serializer().descriptor.isInline // true
 * ```
 */
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * Whether the descriptor describes a nullable type.
 * Returns `true` if associated serializer can serialize/deserialize nullable elements of the described type.
 *
 * Example:
 *
 * ```
 * @Serializable
 * class User(val name: String, val alias: String?)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.isNullable // Returns false
 * userDescriptor.getElementDescriptor(0).isNullable // Returns false
 * userDescriptor.getElementDescriptor(1).isNullable // Returns true
 * ```
 */
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * The kind of the serialized form that determines **the shape** of the serialized data.
 * Formats use serial kind to add and parse serializer-agnostic metadata to the result.
 *
 * For example, JSON format wraps [classes][StructureKind.CLASS] and [StructureKind.MAP] into
 * brackets, while ProtoBuf just serialize these types in separate ways.
 *
 * Kind should be consistent with the implementation, for example, if it is a [primitive][PrimitiveKind],
 * then its element count should be zero and vice versa.
 *
 * Example of introspecting kinds:
 *
 * ```
 * @Serializable
 * class User(val name: String)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.kind // Returns StructureKind.CLASS
 * userDescriptor.getElementDescriptor(0).kind // Returns PrimitiveKind.STRING
 * ```
 */
@property (readonly) KmastodonKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * Serial name of the descriptor that identifies a pair of the associated serializer and target class.
 *
 * For generated and default serializers, the serial name is equal to the corresponding class's fully qualified name
 * or, if overridden, [SerialName].
 * Custom serializers should provide a unique serial name that identifies both the serializable class and
 * the serializer itself, ignoring type arguments if they are present, for example: `my.package.LongAsTrimmedString`.
 *
 * Do not confuse with [getElementName], which returns property name:
 *
 * ```
 * package my.app
 *
 * @Serializable
 * class User(val name: String)
 *
 * val userDescriptor = User.serializer().descriptor
 *
 * userDescriptor.serialName // Returns "my.app.User"
 * userDescriptor.getElementName(0) // Returns "name"
 * ```
 */
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end


/**
 * Decoder is a core deserialization primitive that encapsulates the knowledge of the underlying
 * format and an underlying storage, exposing only structural methods to the deserializer, making it completely
 * format-agnostic. Deserialization process takes a decoder and asks him for a sequence of primitive elements,
 * defined by a deserializer serial form, while decoder knows how to retrieve these primitive elements from an actual format
 * representations.
 *
 * Decoder provides high-level API that operates with basic primitive types, collections
 * and nested structures. Internally, the decoder represents input storage, and operates with its state
 * and lower level format-specific details.
 *
 * To be more specific, serialization asks a decoder for a sequence of "give me an int, give me
 * a double, give me a list of strings and give me another object that is a nested int", while decoding
 * transforms this sequence into a format-specific commands such as "parse the part of the string until the next quotation mark
 * as an int to retrieve an int, parse everything within the next curly braces to retrieve elements of a nested object etc."
 *
 * The symmetric interface for the serialization process is [Encoder].
 *
 * ### Deserialization. Primitives
 *
 * If a class is represented as a single [primitive][PrimitiveKind] value in its serialized form,
 * then one of the `decode*` methods (e.g. [decodeInt]) can be used directly.
 *
 * ### Deserialization. Structured types
 *
 * If a class is represented as a structure or has multiple values in its serialized form,
 * `decode*` methods are not that helpful, because format may not require a strict order of data
 * (e.g. JSON or XML), do not allow working with collection types or establish structure boundaries.
 * All these capabilities are delegated to the [CompositeDecoder] interface with a more specific API surface.
 * To denote a structure start, [beginStructure] should be used.
 * ```
 * // Denote the structure start,
 * val composite = decoder.beginStructure(descriptor)
 * // Decode all elements within the structure using 'composite'
 * ...
 * // Denote the structure end
 * composite.endStructure(descriptor)
 * ```
 *
 * E.g. if the decoder belongs to JSON format, then [beginStructure] will parse an opening bracket
 * (`{` or `[`, depending on the descriptor kind), returning the [CompositeDecoder] that is aware of colon separator,
 * that should be read after each key-value pair, whilst [CompositeDecoder.endStructure] will parse a closing bracket.
 *
 * ### Exception guarantees
 *
 * For the regular exceptions, such as invalid input, missing control symbols or attributes, and unknown symbols,
 * [SerializationException] can be thrown by any decoder methods. It is recommended to declare a format-specific
 * subclass of [SerializationException] and throw it.
 *
 * ### Exception safety
 *
 * In general, catching [SerializationException] from any of `decode*` methods is not allowed and produces unspecified behavior.
 * After thrown exception, the current decoder is left in an arbitrary state, no longer suitable for further decoding.
 *
 * ### Format encapsulation
 *
 * For example, for the following deserializer:
 * ```
 * class StringHolder(val stringValue: String)
 *
 * object StringPairDeserializer : DeserializationStrategy<StringHolder> {
 *    override val descriptor = ...
 *
 *    override fun deserializer(decoder: Decoder): StringHolder {
 *        // Denotes start of the structure, StringHolder is not a "plain" data type
 *        val composite = decoder.beginStructure(descriptor)
 *        if (composite.decodeElementIndex(descriptor) != 0)
 *            throw MissingFieldException("Field 'stringValue' is missing")
 *        // Decode the nested string value
 *        val value = composite.decodeStringElement(descriptor, index = 0)
 *        // Denotes end of the structure
 *        composite.endStructure(descriptor)
 *    }
 * }
 * ```
 *
 * This deserializer does not know anything about the underlying data and will work with any properly-implemented decoder.
 * JSON, for example, parses an opening bracket `{` during the `beginStructure` call, checks that the next key
 * after this bracket is `stringValue` (using the descriptor), returns the value after the colon as string value
 * and parses closing bracket `}` during the `endStructure`.
 * XML would do roughly the same, but with different separators and parsing structures, while ProtoBuf
 * machinery could be completely different.
 * In any case, all these parsing details are encapsulated by a decoder.
 *
 * ### Decoder implementation
 *
 * While being strictly typed, an underlying format can transform actual types in the way it wants.
 * For example, a format can support only string types and encode/decode all primitives in a string form:
 * ```
 * StringFormatDecoder : Decoder {
 *
 *     ...
 *     override fun decodeDouble(): Double = decodeString().toDouble()
 *     override fun decodeInt(): Int = decodeString().toInt()
 *     ...
 * }
 * ```
 *
 * ### Not stable for inheritance
 *
 * `Decoder` interface is not stable for inheritance in 3rd-party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 */
__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol KmastodonKotlinx_serialization_coreDecoder
@required

/**
 * Decodes the beginning of the nested structure in a serialized form
 * and returns [CompositeDecoder] responsible for decoding this very structure.
 *
 * Typically, classes, collections and maps are represented as a nested structure in a serialized form.
 * E.g. the following JSON
 * ```
 * {
 *     "a": 2,
 *     "b": { "nested": "c" }
 *     "c": [1, 2, 3],
 *     "d": null
 * }
 * ```
 * has three nested structures: the very beginning of the data, "b" value and "c" value.
 */
- (id<KmastodonKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));

/**
 * Decodes a boolean value.
 * Corresponding kind is [PrimitiveKind.BOOLEAN].
 */
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));

/**
 * Decodes a single byte value.
 * Corresponding kind is [PrimitiveKind.BYTE].
 */
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));

/**
 * Decodes a 16-bit unicode character value.
 * Corresponding kind is [PrimitiveKind.CHAR].
 */
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));

/**
 * Decodes a 64-bit IEEE 754 floating point value.
 * Corresponding kind is [PrimitiveKind.DOUBLE].
 */
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));

/**
 * Decodes a enum value and returns its index in [enumDescriptor] elements collection.
 * Corresponding kind is [SerialKind.ENUM].
 *
 * E.g. for the enum `enum class Letters { A, B, C, D }` and
 * underlying input "C", [decodeEnum] method should return `2` as a result.
 *
 * This method does not imply any restrictions on the input format,
 * the format is free to store the enum by its name, index, ordinal or any other enum representation.
 */
- (int32_t)decodeEnumEnumDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));

/**
 * Decodes a 32-bit IEEE 754 floating point value.
 * Corresponding kind is [PrimitiveKind.FLOAT].
 */
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));

/**
 * Returns [Decoder] for decoding an underlying type of a value class in an inline manner.
 * [descriptor] describes a target value class.
 *
 * Namely, for the `@Serializable @JvmInline value class MyInt(val my: Int)`, the following sequence is used:
 * ```
 * thisDecoder.decodeInline(MyInt.serializer().descriptor).decodeInt()
 * ```
 *
 * Current decoder may return any other instance of [Decoder] class, depending on the provided [descriptor].
 * For example, when this function is called on `Json` decoder with
 * `UInt.serializer().descriptor`, the returned decoder is able to decode unsigned integers.
 *
 * Note that this function returns [Decoder] instead of the [CompositeDecoder]
 * because value classes always have the single property.
 *
 * Calling [Decoder.beginStructure] on returned instance leads to an unspecified behavior and, in general, is prohibited.
 */
- (id<KmastodonKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));

/**
 * Decodes a 32-bit integer value.
 * Corresponding kind is [PrimitiveKind.INT].
 */
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));

/**
 * Decodes a 64-bit integer value.
 * Corresponding kind is [PrimitiveKind.LONG].
 */
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * Returns `true` if the current value in decoder is not null, false otherwise.
 * This method is usually used to decode potentially nullable data:
 * ```
 * // Could be String? deserialize() method
 * public fun deserialize(decoder: Decoder): String? {
 *     if (decoder.decodeNotNullMark()) {
 *         return decoder.decodeString()
 *     } else {
 *         return decoder.decodeNull()
 *     }
 * }
 * ```
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * Decodes the `null` value and returns it.
 *
 * It is expected that `decodeNotNullMark` was called
 * prior to `decodeNull` invocation and the case when it returned `true` was handled.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (KmastodonKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * Decodes the nullable value of type [T] by delegating the decoding process to the given [deserializer].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<KmastodonKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));

/**
 * Decodes the value of type [T] by delegating the decoding process to the given [deserializer].
 * For example, `decodeInt` call is equivalent to delegating integer decoding to [Int.serializer][Int.Companion.serializer]:
 * `decodeSerializableValue(Int.serializer())`
 */
- (id _Nullable)decodeSerializableValueDeserializer:(id<KmastodonKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));

/**
 * Decodes a 16-bit short value.
 * Corresponding kind is [PrimitiveKind.SHORT].
 */
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));

/**
 * Decodes a string value.
 * Corresponding kind is [PrimitiveKind.STRING].
 */
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));

/**
 * Context of the current serialization process, including contextual and polymorphic serialization and,
 * potentially, a format-specific configuration.
 */
@property (readonly) KmastodonKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KhttpclientHttpResponse")))
@interface KmastodonKhttpclientHttpResponse : KmastodonBase
- (instancetype)initWithStatus:(int32_t)status headers:(NSDictionary<NSString *, NSArray<NSString *> *> *)headers body:(KmastodonKotlinByteArray *)body __attribute__((swift_name("init(status:headers:body:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmastodonKhttpclientHttpResponseCompanion *companion __attribute__((swift_name("companion")));
- (id _Nullable)typedBodyJson:(KmastodonKotlinx_serialization_jsonJson *)json __attribute__((swift_name("typedBody(json:)")));
@property (readonly) KmastodonKotlinByteArray *body __attribute__((swift_name("body")));
@property (readonly) NSDictionary<NSString *, NSArray<NSString *> *> *headers __attribute__((swift_name("headers")));
@property (readonly) int32_t status __attribute__((swift_name("status")));
@property (readonly) NSString *stringBody __attribute__((swift_name("stringBody")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinInstant.Companion")))
@interface KmastodonKotlinInstantCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonKotlinInstantCompanion *shared __attribute__((swift_name("shared")));
- (KmastodonKotlinInstant *)fromEpochMillisecondsEpochMilliseconds:(int64_t)epochMilliseconds __attribute__((swift_name("fromEpochMilliseconds(epochMilliseconds:)")));
- (KmastodonKotlinInstant *)fromEpochSecondsEpochSeconds:(int64_t)epochSeconds nanosecondAdjustment:(int32_t)nanosecondAdjustment __attribute__((swift_name("fromEpochSeconds(epochSeconds:nanosecondAdjustment:)")));
- (KmastodonKotlinInstant *)fromEpochSecondsEpochSeconds:(int64_t)epochSeconds nanosecondAdjustment_:(int64_t)nanosecondAdjustment __attribute__((swift_name("fromEpochSeconds(epochSeconds:nanosecondAdjustment_:)")));
- (KmastodonKotlinInstant *)now __attribute__((swift_name("now()"))) __attribute__((unavailable("Use Clock.System.now() instead")));
- (KmastodonKotlinInstant *)parseInput:(id)input __attribute__((swift_name("parse(input:)")));
- (KmastodonKotlinInstant * _Nullable)parseOrNullInput:(id)input __attribute__((swift_name("parseOrNull(input:)")));
@property (readonly) KmastodonKotlinInstant *DISTANT_FUTURE __attribute__((swift_name("DISTANT_FUTURE")));
@property (readonly) KmastodonKotlinInstant *DISTANT_PAST __attribute__((swift_name("DISTANT_PAST")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilterKeyword.Companion")))
@interface KmastodonCoreFilterKeywordCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreFilterKeywordCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreFilterStatus.Companion")))
@interface KmastodonCoreFilterStatusCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreFilterStatusCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePleromaContent.Companion")))
@interface KmastodonCorePleromaContentCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCorePleromaContentCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CorePleromaReaction.Companion")))
@interface KmastodonCorePleromaReactionCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCorePleromaReactionCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV1MediaAttachments.Companion")))
@interface KmastodonCoreInstanceV1MediaAttachmentsCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreInstanceV1MediaAttachmentsCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV1Polls.Companion")))
@interface KmastodonCoreInstanceV1PollsCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreInstanceV1PollsCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV1Statuses.Companion")))
@interface KmastodonCoreInstanceV1StatusesCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreInstanceV1StatusesCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Accounts.Companion")))
@interface KmastodonCoreInstanceV2AccountsCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreInstanceV2AccountsCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2MediaAttachments.Companion")))
@interface KmastodonCoreInstanceV2MediaAttachmentsCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreInstanceV2MediaAttachmentsCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Polls.Companion")))
@interface KmastodonCoreInstanceV2PollsCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreInstanceV2PollsCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Statuses.Companion")))
@interface KmastodonCoreInstanceV2StatusesCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreInstanceV2StatusesCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Translation.Companion")))
@interface KmastodonCoreInstanceV2TranslationCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreInstanceV2TranslationCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Urls.Companion")))
@interface KmastodonCoreInstanceV2UrlsCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreInstanceV2UrlsCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Vapid.Companion")))
@interface KmastodonCoreInstanceV2VapidCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreInstanceV2VapidCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Versions.Companion")))
@interface KmastodonCoreInstanceV2VersionsCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreInstanceV2VersionsCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreInstanceV2Users.Companion")))
@interface KmastodonCoreInstanceV2UsersCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreInstanceV2UsersCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMetaFocus.Companion")))
@interface KmastodonCoreMetaFocusCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreMetaFocusCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreMetaOriginal.Companion")))
@interface KmastodonCoreMetaOriginalCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonCoreMetaOriginalCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * [CompositeEncoder] is a part of encoding process that is bound to a particular structured part of
 * the serialized form, described by the serial descriptor passed to [Encoder.beginStructure].
 *
 * All `encode*` methods have `index` and `serialDescriptor` parameters with a strict semantics and constraints:
 *   * `descriptor` is always the same as one used in [Encoder.beginStructure]. While this parameter may seem redundant,
 *      it is required for efficient serialization process to avoid excessive field spilling.
 *      If you are writing your own format, you can safely ignore this parameter and use one used in `beginStructure`
 *      for simplicity.
 *   * `index` of the element being encoded. This element at this index in the descriptor should be associated with
 *      the one being written.
 *
 * The symmetric interface for the deserialization process is [CompositeDecoder].
 *
 * ### Not stable for inheritance
 *
 * `CompositeEncoder` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 */
__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol KmastodonKotlinx_serialization_coreCompositeEncoder
@required

/**
 * Encodes a boolean [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.BOOLEAN] kind.
 */
- (void)encodeBooleanElementDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));

/**
 * Encodes a single byte [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.BYTE] kind.
 */
- (void)encodeByteElementDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));

/**
 * Encodes a 16-bit unicode character [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.CHAR] kind.
 */
- (void)encodeCharElementDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));

/**
 * Encodes a 64-bit IEEE 754 floating point [value] associated with an element
 * at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.DOUBLE] kind.
 */
- (void)encodeDoubleElementDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));

/**
 * Encodes a 32-bit IEEE 754 floating point [value] associated with an element
 * at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.FLOAT] kind.
 */
- (void)encodeFloatElementDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));

/**
 * Returns [Encoder] for decoding an underlying type of a value class in an inline manner.
 * Serializable value class is described by the [child descriptor][SerialDescriptor.getElementDescriptor]
 * of given [descriptor] at [index].
 *
 * Namely, for the `@Serializable @JvmInline value class MyInt(val my: Int)`,
 * and `@Serializable class MyData(val myInt: MyInt)` the following sequence is used:
 * ```
 * thisEncoder.encodeInlineElement(MyData.serializer.descriptor, 0).encodeInt(my)
 * ```
 *
 * This method provides an opportunity for the optimization to avoid boxing of a carried value
 * and its invocation should be equivalent to the following:
 * ```
 * thisEncoder.encodeSerializableElement(MyData.serializer.descriptor, 0, MyInt.serializer(), myInt)
 * ```
 *
 * Current encoder may return any other instance of [Encoder] class, depending on provided descriptor.
 * For example, when this function is called on Json encoder with descriptor that has
 * `UInt.serializer().descriptor` at the given [index], the returned encoder is able
 * to encode unsigned integers.
 *
 * Note that this function returns [Encoder] instead of the [CompositeEncoder]
 * because value classes always have the single property.
 * Calling [Encoder.beginStructure] on returned instance leads to an unspecified behavior and, in general, is prohibited.
 *
 * @see Encoder.encodeInline
 * @see SerialDescriptor.getElementDescriptor
 */
- (id<KmastodonKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));

/**
 * Encodes a 32-bit integer [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.INT] kind.
 */
- (void)encodeIntElementDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));

/**
 * Encodes a 64-bit integer [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.LONG] kind.
 */
- (void)encodeLongElementDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * Delegates nullable [value] encoding of the type [T] to the given [serializer].
 * [value] is associated with an element at the given [index] in [serial descriptor][descriptor].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KmastodonKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));

/**
 * Delegates [value] encoding of the type [T] to the given [serializer].
 * [value] is associated with an element at the given [index] in [serial descriptor][descriptor].
 */
- (void)encodeSerializableElementDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KmastodonKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));

/**
 * Encodes a 16-bit short [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.SHORT] kind.
 */
- (void)encodeShortElementDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));

/**
 * Encodes a string [value] associated with an element at the given [index] in [serial descriptor][descriptor].
 * The element at the given [index] should have [PrimitiveKind.STRING] kind.
 */
- (void)encodeStringElementDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));

/**
 * Denotes the end of the structure associated with current encoder.
 * For example, composite encoder of JSON format will write
 * a closing bracket in the underlying input and reduce the number of nesting for pretty printing.
 */
- (void)endStructureDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * Whether the format should encode values that are equal to the default values.
 * This method is used by plugin-generated serializers for properties with default values:
 * ```
 * @Serializable
 * class WithDefault(val int: Int = 42)
 * // serialize method
 * if (value.int != 42 || output.shouldEncodeElementDefault(serialDesc, 0)) {
 *    encoder.encodeIntElement(serialDesc, 0, value.int);
 * }
 * ```
 *
 * This method is never invoked for properties annotated with [EncodeDefault].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));

/**
 * Context of the current serialization process, including contextual and polymorphic serialization and,
 * potentially, a format-specific configuration.
 */
@property (readonly) KmastodonKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * [SerializersModule] is a collection of serializers used by [ContextualSerializer] and [PolymorphicSerializer]
 * to override or provide serializers at the runtime, whereas at the compile-time they provided by the serialization plugin.
 * It can be considered as a map where serializers can be found using their statically known KClasses.
 *
 * To enable runtime serializers resolution, one of the special annotations must be used on target types
 * ([Polymorphic] or [Contextual]), and a serial module with serializers should be used during construction of [SerialFormat].
 *
 * Serializers module can be built with `SerializersModule {}` builder function.
 * Empty module can be obtained with `EmptySerializersModule()` factory function.
 *
 * @see Contextual
 * @see Polymorphic
 */
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface KmastodonKotlinx_serialization_coreSerializersModule : KmastodonBase

/**
 * Copies contents of this module to the given [collector].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<KmastodonKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * Returns a contextual serializer associated with a given [kClass].
 * If given class has generic parameters and module has provider for [kClass],
 * [typeArgumentsSerializers] are used to create serializer.
 * This method is used in context-sensitive operations on a property marked with [Contextual] by a [ContextualSerializer].
 *
 * @see SerializersModuleBuilder.contextual
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KmastodonKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<KmastodonKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<KmastodonKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * Returns a polymorphic serializer registered for a class of the given [value] in the scope of [baseClass].
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KmastodonKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KmastodonKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * Returns a polymorphic deserializer registered for a [serializedClassName] in the scope of [baseClass]
 * or default value constructed from [serializedClassName] if a default serializer provider was registered.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<KmastodonKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KmastodonKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol KmastodonKotlinAnnotation
@required
@end


/**
 * Serial kind is an intrinsic property of [SerialDescriptor] that indicates how
 * the corresponding type is structurally represented by its serializer.
 *
 * Kind is used by serialization formats to determine how exactly the given type
 * should be serialized. For example, JSON format detects the kind of the value and,
 * depending on that, may write it as a plain value for primitive kinds, open a
 * curly brace '{' for class-like structures and square bracket '[' for list- and array- like structures.
 *
 * Kinds are used both during serialization, to serialize a value properly and statically, and
 * to introspect the type structure or build serialization schema.
 *
 * Kind should match the structure of the serialized form, not the structure of the corresponding Kotlin class.
 * Meaning that if serializable class `class IntPair(val left: Int, val right: Int)` is represented by the serializer
 * as a single `Long` value, its descriptor should have [PrimitiveKind.LONG] without nested elements even though the class itself
 * represents a structure with two primitive fields.
 */
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface KmastodonKotlinx_serialization_coreSerialKind : KmastodonBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * [CompositeDecoder] is a part of decoding process that is bound to a particular structured part of
 * the serialized form, described by the serial descriptor passed to [Decoder.beginStructure].
 *
 * Typically, for unordered data, [CompositeDecoder] is used by a serializer withing a [decodeElementIndex]-based
 * loop that decodes all the required data one-by-one in any order and then terminates by calling [endStructure].
 * Please refer to [decodeElementIndex] for example of such loop.
 *
 * All `decode*` methods have `index` and `serialDescriptor` parameters with a strict semantics and constraints:
 *   * `descriptor` argument is always the same as one used in [Decoder.beginStructure].
 *   * `index` of the element being decoded. For [sequential][decodeSequentially] decoding, it is always a monotonic
 *      sequence from `0` to `descriptor.elementsCount` and for indexing-loop it is always an index that [decodeElementIndex]
 *      has returned from the last call.
 *
 * The symmetric interface for the serialization process is [CompositeEncoder].
 *
 * ### Not stable for inheritance
 *
 * `CompositeDecoder` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 */
__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol KmastodonKotlinx_serialization_coreCompositeDecoder
@required

/**
 * Decodes a boolean value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.BOOLEAN] kind.
 */
- (BOOL)decodeBooleanElementDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));

/**
 * Decodes a single byte value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.BYTE] kind.
 */
- (int8_t)decodeByteElementDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));

/**
 * Decodes a 16-bit unicode character value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.CHAR] kind.
 */
- (unichar)decodeCharElementDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));

/**
 * Method to decode collection size that may be called before the collection decoding.
 * Collection type includes [Collection], [Map] and [Array] (including primitive arrays).
 * Method can return `-1` if the size is not known in advance, though for [sequential decoding][decodeSequentially]
 * knowing precise size is a mandatory requirement.
 */
- (int32_t)decodeCollectionSizeDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));

/**
 * Decodes a 64-bit IEEE 754 floating point value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.DOUBLE] kind.
 */
- (double)decodeDoubleElementDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));

/**
 *  Decodes the index of the next element to be decoded.
 *  Index represents a position of the current element in the serial descriptor element that can be found
 *  with [SerialDescriptor.getElementIndex].
 *
 *  If this method returns non-negative index, the caller should call one of the `decode*Element` methods
 *  with a resulting index.
 *  Apart from positive values, this method can return [DECODE_DONE] to indicate that no more elements
 *  are left or [UNKNOWN_NAME] to indicate that symbol with an unknown name was encountered.
 *
 * Example of usage:
 * ```
 * class MyPair(i: Int, d: Double)
 *
 * object MyPairSerializer : KSerializer<MyPair> {
 *     // ... other methods omitted
 *
 *    fun deserialize(decoder: Decoder): MyPair {
 *        val composite = decoder.beginStructure(descriptor)
 *        var i: Int? = null
 *        var d: Double? = null
 *        while (true) {
 *            when (val index = composite.decodeElementIndex(descriptor)) {
 *                0 -> i = composite.decodeIntElement(descriptor, 0)
 *                1 -> d = composite.decodeDoubleElement(descriptor, 1)
 *                DECODE_DONE -> break // Input is over
 *                else -> error("Unexpected index: $index)
 *            }
 *        }
 *        composite.endStructure(descriptor)
 *        require(i != null && d != null)
 *        return MyPair(i, d)
 *    }
 * }
 * ```
 * This example is a rough equivalent of what serialization plugin generates for serializable pair class.
 *
 * The need in such a loop comes from unstructured nature of most serialization formats.
 * For example, JSON for the following input `{"d": 2.0, "i": 1}`, will first read `d` key with index `1`
 * and only after `i` with the index `0`.
 *
 * A potential implementation of this method for JSON format can be the following:
 * ```
 * fun decodeElementIndex(descriptor: SerialDescriptor): Int {
 *     // Ignore arrays
 *     val nextKey: String? = myStringJsonParser.nextKey()
 *     if (nextKey == null) return DECODE_DONE
 *     return descriptor.getElementIndex(nextKey) // getElementIndex can return UNKNOWN_NAME
 * }
 * ```
 *
 * If [decodeSequentially] returns `true`, the caller might skip calling this method.
 */
- (int32_t)decodeElementIndexDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));

/**
 * Decodes a 32-bit IEEE 754 floating point value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.FLOAT] kind.
 */
- (float)decodeFloatElementDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));

/**
 * Returns [Decoder] for decoding an underlying type of a value class in an inline manner.
 * Serializable value class is described by the [child descriptor][SerialDescriptor.getElementDescriptor]
 * of given [descriptor] at [index].
 *
 * Namely, for the `@Serializable @JvmInline value class MyInt(val my: Int)`,
 * and `@Serializable class MyData(val myInt: MyInt)` the following sequence is used:
 * ```
 * thisDecoder.decodeInlineElement(MyData.serializer().descriptor, 0).decodeInt()
 * ```
 *
 * This method provides an opportunity for the optimization to avoid boxing of a carried value
 * and its invocation should be equivalent to the following:
 * ```
 * thisDecoder.decodeSerializableElement(MyData.serializer.descriptor, 0, MyInt.serializer())
 * ```
 *
 * Current decoder may return any other instance of [Decoder] class, depending on the provided descriptor.
 * For example, when this function is called on `Json` decoder with descriptor that has
 * `UInt.serializer().descriptor` at the given [index], the returned decoder is able
 * to decode unsigned integers.
 *
 * Note that this function returns [Decoder] instead of the [CompositeDecoder]
 * because value classes always have the single property.
 * Calling [Decoder.beginStructure] on returned instance leads to an unspecified behavior and, in general, is prohibited.
 *
 * @see Decoder.decodeInline
 * @see SerialDescriptor.getElementDescriptor
 */
- (id<KmastodonKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));

/**
 * Decodes a 32-bit integer value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.INT] kind.
 */
- (int32_t)decodeIntElementDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));

/**
 * Decodes a 64-bit integer value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.LONG] kind.
 */
- (int64_t)decodeLongElementDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * Decodes nullable value of the type [T] with the given [deserializer].
 *
 * If value at given [index] was already decoded with previous [decodeSerializableElement] call with the same index,
 * [previousValue] would contain a previously decoded value.
 * This parameter can be used to aggregate multiple values of the given property to the only one.
 * Implementation can safely ignore it and return a new value, efficiently using 'the last one wins' strategy,
 * or apply format-specific aggregating strategies, e.g. appending scattered Protobuf lists to a single one.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KmastodonKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * Checks whether the current decoder supports strictly ordered decoding of the data
 * without calling to [decodeElementIndex].
 * If the method returns `true`, the caller might skip [decodeElementIndex] calls
 * and start invoking `decode*Element` directly, incrementing the index of the element one by one.
 * This method can be called by serializers (either generated or user-defined) as a performance optimization,
 * but there is no guarantee that the method will be ever called. Practically, it means that implementations
 * that may benefit from sequential decoding should also support a regular [decodeElementIndex]-based decoding as well.
 *
 * Example of usage:
 * ```
 * class MyPair(i: Int, d: Double)
 *
 * object MyPairSerializer : KSerializer<MyPair> {
 *     // ... other methods omitted
 *
 *    fun deserialize(decoder: Decoder): MyPair {
 *        val composite = decoder.beginStructure(descriptor)
 *        if (composite.decodeSequentially()) {
 *            val i = composite.decodeIntElement(descriptor, index = 0) // Mind the sequential indexing
 *            val d = composite.decodeIntElement(descriptor, index = 1)
 *            composite.endStructure(descriptor)
 *            return MyPair(i, d)
 *        } else {
 *            // Fallback to `decodeElementIndex` loop, refer to its documentation for details
 *        }
 *    }
 * }
 * ```
 * This example is a rough equivalent of what serialization plugin generates for serializable pair class.
 *
 * Sequential decoding is a performance optimization for formats with strictly ordered schema,
 * usually binary ones. Regular formats such as JSON or ProtoBuf cannot use this optimization,
 * because e.g. in the latter example, the same data can be represented both as
 * `{"i": 1, "d": 1.0}` and `{"d": 1.0, "i": 1}` (thus, unordered).
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));

/**
 * Decodes value of the type [T] with the given [deserializer].
 *
 * Implementations of [CompositeDecoder] may use their format-specific deserializers
 * for particular data types, e.g. handle [ByteArray] specifically if format is binary.
 *
 * If value at given [index] was already decoded with previous [decodeSerializableElement] call with the same index,
 * [previousValue] would contain a previously decoded value.
 * This parameter can be used to aggregate multiple values of the given property to the only one.
 * Implementation can safely ignore it and return a new value, effectively using 'the last one wins' strategy,
 * or apply format-specific aggregating strategies, e.g. appending scattered Protobuf lists to a single one.
 */
- (id _Nullable)decodeSerializableElementDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KmastodonKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * Decodes a 16-bit short value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.SHORT] kind.
 */
- (int16_t)decodeShortElementDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));

/**
 * Decodes a string value from the underlying input.
 * The resulting value is associated with the [descriptor] element at the given [index].
 * The element at the given index should have [PrimitiveKind.STRING] kind.
 */
- (NSString *)decodeStringElementDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));

/**
 * Denotes the end of the structure associated with current decoder.
 * For example, composite decoder of JSON format will expect (and parse)
 * a closing bracket in the underlying input.
 */
- (void)endStructureDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * Context of the current decoding process, including contextual and polymorphic serialization and,
 * potentially, a format-specific configuration.
 */
@property (readonly) KmastodonKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface KmastodonKotlinNothing : KmastodonBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KhttpclientHttpResponse.Companion")))
@interface KmastodonKhttpclientHttpResponseCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonKhttpclientHttpResponseCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)fromResponse:(KmastodonKtor_client_coreHttpResponse *)response completionHandler:(void (^)(KmastodonKhttpclientHttpResponse * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("from(response:completionHandler:)")));
@property (readonly) KmastodonKotlinx_serialization_jsonJson *mapper __attribute__((swift_name("mapper")));
@end


/**
 * Represents an instance of a serialization format
 * that can interact with [KSerializer] and is a supertype of all entry points for a serialization.
 * It does not impose any restrictions on a serialized form or underlying storage, neither it exposes them.
 *
 * Concrete data types and API for user-interaction are responsibility of a concrete subclass or subinterface,
 * for example [StringFormat], [BinaryFormat] or `Json`.
 *
 * Typically, formats have their specific [Encoder] and [Decoder] implementations
 * as private classes and do not expose them.
 *
 * ### Exception types for `SerialFormat` implementation
 *
 * Methods responsible for format-specific encoding and decoding are allowed to throw
 * any subtype of [IllegalArgumentException] in order to indicate serialization
 * and deserialization errors. It is recommended to throw subtypes of [SerializationException]
 * for encoder and decoder specific errors and [IllegalArgumentException] for input
 * and output validation-specific errors.
 *
 * For formats
 *
 * ### Not stable for inheritance
 *
 * `SerialFormat` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 *
 * It is safe to operate with instances of `SerialFormat` and call its methods.
 */
__attribute__((swift_name("Kotlinx_serialization_coreSerialFormat")))
@protocol KmastodonKotlinx_serialization_coreSerialFormat
@required

/**
 * Contains all serializers registered by format user for [Contextual] and [Polymorphic] serialization.
 *
 * The same module should be exposed in the format's [Encoder] and [Decoder].
 */
@property (readonly) KmastodonKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * [SerialFormat] that allows conversions to and from [String] via [encodeToString] and [decodeFromString] methods.
 *
 * ### Not stable for inheritance
 *
 * `StringFormat` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 *
 * It is safe to operate with instances of `StringFormat` and call its methods.
 */
__attribute__((swift_name("Kotlinx_serialization_coreStringFormat")))
@protocol KmastodonKotlinx_serialization_coreStringFormat <KmastodonKotlinx_serialization_coreSerialFormat>
@required

/**
 * Decodes and deserializes the given [string] to the value of type [T] using the given [deserializer].
 *
 * @throws SerializationException in case of any decoding-specific error
 * @throws IllegalArgumentException if the decoded input is not a valid instance of [T]
 */
- (id _Nullable)decodeFromStringDeserializer:(id<KmastodonKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));

/**
 * Serializes and encodes the given [value] to string using the given [serializer].
 *
 * @throws SerializationException in case of any encoding-specific error
 * @throws IllegalArgumentException if the encoded input does not comply format's specification
 */
- (NSString *)encodeToStringSerializer:(id<KmastodonKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
@end


/**
 * The main entry point to work with JSON serialization.
 * It is typically used by constructing an application-specific instance, with configured JSON-specific behaviour
 * and, if necessary, registered in [SerializersModule] custom serializers.
 * `Json` instance can be configured in its `Json {}` factory function using [JsonBuilder].
 * For demonstration purposes or trivial usages, Json [companion][Json.Default] can be used instead.
 *
 * Then constructed instance can be used either as regular [SerialFormat] or [StringFormat]
 * or for converting objects to [JsonElement] back and forth.
 *
 * This is the only serial format which has the first-class [JsonElement] support.
 * Any serializable class can be serialized to or from [JsonElement] with [Json.decodeFromJsonElement] and [Json.encodeToJsonElement] respectively or
 * serialize properties of [JsonElement] type.
 *
 * Example of usage:
 * ```
 * @Serializable
 * data class Data(val id: Int, val data: String, val extensions: JsonElement)
 *
 * val json = Json { ignoreUnknownKeys = true }
 * val instance = Data(42, "some data", buildJsonObject { put("key", "value") })
 *
 * // Plain Json usage: returns '{"id": 42, "some data", "extensions": {"key": "value" } }'
 * val jsonString: String = json.encodeToString(instance)
 *
 * // JsonElement serialization, specific for JSON format
 * val jsonElement: JsonElement = json.encodeToJsonElement(instance)
 *
 * // Deserialize from string
 * val deserialized: Data = json.decodeFromString<Data>(jsonString)
 *
 * // Deserialize from json element, JSON-specific
 * val deserializedFromElement: Data = json.decodeFromJsonElement<Data>(jsonElement)
 *
 *  // Deserialize from string to JSON tree, JSON-specific
 * val deserializedElement: JsonElement = json.parseToJsonElement(jsonString)
 *
 * // Deserialize a stream of a single item from an input stream
 * val sequence = Json.decodeToSequence<Data>(ByteArrayInputStream(jsonString.encodeToByteArray()))
 * for (item in sequence) {
 *     println(item) // Prints deserialized Data value
 * }
 * ```
 *
 * Json instance also exposes its [configuration] that can be used in custom serializers
 * that rely on [JsonDecoder] and [JsonEncoder] for customizable behaviour.
 *
 * Json format configuration can be refined using the corresponding constructor:
 * ```
 * val defaultJson = Json {
 *     encodeDefaults = true
 *     ignoreUnknownKeys = true
 * }
 * // Will inherit the properties of defaultJson
 * val debugEndpointJson = Json(defaultJson) {
 *     // ignoreUnknownKeys and encodeDefaults are set to true
 *     prettyPrint = true
 * }
 * ```
 */
__attribute__((swift_name("Kotlinx_serialization_jsonJson")))
@interface KmastodonKotlinx_serialization_jsonJson : KmastodonBase <KmastodonKotlinx_serialization_coreStringFormat>
@property (class, readonly, getter=companion) KmastodonKotlinx_serialization_jsonJsonDefault *companion __attribute__((swift_name("companion")));

/**
 * Deserializes the given [element] into a value of type [T] using the given [deserializer].
 *
 * @throws [SerializationException] if the given JSON element is not a valid JSON input for the type [T]
 * @throws [IllegalArgumentException] if the decoded input cannot be represented as a valid instance of type [T]
 */
- (id _Nullable)decodeFromJsonElementDeserializer:(id<KmastodonKotlinx_serialization_coreDeserializationStrategy>)deserializer element:(KmastodonKotlinx_serialization_jsonJsonElement *)element __attribute__((swift_name("decodeFromJsonElement(deserializer:element:)")));

/**
 * Decodes and deserializes the given JSON [string] to the value of type [T] using deserializer
 * retrieved from the reified type parameter.
 * Example:
 * ```
 * @Serializable
 * data class Project(val name: String, val language: String)
 * //  Project(name=kotlinx.serialization, language=Kotlin)
 * println(Json.decodeFromString<Project>("""{"name":"kotlinx.serialization","language":"Kotlin"}"""))
 * ```
 *
 * @throws SerializationException in case of any decoding-specific error
 * @throws IllegalArgumentException if the decoded input is not a valid instance of [T]
 */
- (id _Nullable)decodeFromStringString:(NSString *)string __attribute__((swift_name("decodeFromString(string:)")));

/**
 * Deserializes the given JSON [string] into a value of type [T] using the given [deserializer].
 * Example:
 * ```
 * @Serializable
 * data class Project(val name: String, val language: String)
 * //  Project(name=kotlinx.serialization, language=Kotlin)
 * println(Json.decodeFromString(Project.serializer(), """{"name":"kotlinx.serialization","language":"Kotlin"}"""))
 * ```
 *
 * @throws [SerializationException] if the given JSON string is not a valid JSON input for the type [T]
 * @throws [IllegalArgumentException] if the decoded input cannot be represented as a valid instance of type [T]
 */
- (id _Nullable)decodeFromStringDeserializer:(id<KmastodonKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));

/**
 * Serializes the given [value] into an equivalent [JsonElement] using the given [serializer]
 *
 * @throws [SerializationException] if the given value cannot be serialized to JSON
 */
- (KmastodonKotlinx_serialization_jsonJsonElement *)encodeToJsonElementSerializer:(id<KmastodonKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToJsonElement(serializer:value:)")));

/**
 * Serializes the [value] of type [T] into an equivalent JSON using serializer
 * retrieved from the reified type parameter.
 *
 * Example of usage:
 * ```
 * @Serializable
 * class Project(val name: String, val language: String)
 *
 * val data = Project("kotlinx.serialization", "Kotlin")
 *
 * // Prints {"name":"kotlinx.serialization","language":"Kotlin"}
 * println(Json.encodeToString(data))
 * ```
 *
 * @throws [SerializationException] if the given value cannot be serialized to JSON.
 */
- (NSString *)encodeToStringValue:(id _Nullable)value __attribute__((swift_name("encodeToString(value:)")));

/**
 * Serializes the [value] into an equivalent JSON using the given [serializer].
 * This method is recommended to be used with an explicit serializer (e.g. the custom or third-party one),
 * otherwise the `encodeToString(value: T)` version might be preferred as the most concise one.
 *
 * Example of usage:
 * ```
 * @Serializable
 * class Project(val name: String, val language: String)
 *
 * val data = Project("kotlinx.serialization", "Kotlin")
 *
 * // Prints {"name":"kotlinx.serialization","language":"Kotlin"}
 * println(Json.encodeToString(Project.serializer(), data))
 * // The same as Json.encodeToString<T>(value: T) overload
 * println(Json.encodeToString(data))
 * ```
 *
 * @throws [SerializationException] if the given value cannot be serialized to JSON.
 */
- (NSString *)encodeToStringSerializer:(id<KmastodonKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));

/**
 * Deserializes the given JSON [string] into a corresponding [JsonElement] representation.
 *
 * @throws [SerializationException] if the given string is not a valid JSON
 */
- (KmastodonKotlinx_serialization_jsonJsonElement *)parseToJsonElementString:(NSString *)string __attribute__((swift_name("parseToJsonElement(string:)")));
@property (readonly) KmastodonKotlinx_serialization_jsonJsonConfiguration *configuration __attribute__((swift_name("configuration")));
@property (readonly) KmastodonKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end


/**
 * [SerializersModuleCollector] can introspect and accumulate content of any [SerializersModule] via [SerializersModule.dumpTo],
 * using a visitor-like pattern: [contextual] and [polymorphic] functions are invoked for each registered serializer.
 *
 * ### Not stable for inheritance
 *
 * `SerializersModuleCollector` interface is not stable for inheritance in 3rd party libraries, as new methods
 * might be added to this interface or contracts of the existing methods can be changed.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol KmastodonKotlinx_serialization_coreSerializersModuleCollector
@required

/**
 * Accept a provider, associated with generic [kClass] for contextual serialization.
 */
- (void)contextualKClass:(id<KmastodonKotlinKClass>)kClass provider:(id<KmastodonKotlinx_serialization_coreKSerializer> (^)(NSArray<id<KmastodonKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));

/**
 * Accept a serializer, associated with [kClass] for contextual serialization.
 */
- (void)contextualKClass:(id<KmastodonKotlinKClass>)kClass serializer:(id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));

/**
 * Accept a serializer, associated with [actualClass] for polymorphic serialization.
 */
- (void)polymorphicBaseClass:(id<KmastodonKotlinKClass>)baseClass actualClass:(id<KmastodonKotlinKClass>)actualClass actualSerializer:(id<KmastodonKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));

/**
 * Accept a default deserializer provider, associated with the [baseClass] for polymorphic deserialization.
 *
 * This function affect only deserialization process. To avoid confusion, it was deprecated and replaced with [polymorphicDefaultDeserializer].
 * To affect serialization process, use [SerializersModuleCollector.polymorphicDefaultSerializer].
 *
 * [defaultDeserializerProvider] is invoked when no polymorphic serializers associated with the `className`
 * in the scope of [baseClass] were found. `className` could be `null` for formats that support nullable class discriminators
 * (currently only `Json` with `useArrayPolymorphism` set to `false`).
 *
 * [defaultDeserializerProvider] can be stateful and lookup a serializer for the missing type dynamically.
 *
 * @see SerializersModuleCollector.polymorphicDefaultDeserializer
 * @see SerializersModuleCollector.polymorphicDefaultSerializer
 */
- (void)polymorphicDefaultBaseClass:(id<KmastodonKotlinKClass>)baseClass defaultDeserializerProvider:(id<KmastodonKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));

/**
 * Accept a default deserializer provider, associated with the [baseClass] for polymorphic deserialization.
 * [defaultDeserializerProvider] is invoked when no polymorphic serializers associated with the `className`
 * in the scope of [baseClass] were found. `className` could be `null` for formats that support nullable class discriminators
 * (currently only `Json` with `useArrayPolymorphism` set to `false`).
 *
 * Default deserializers provider affects only deserialization process. Serializers are accepted in the
 * [SerializersModuleCollector.polymorphicDefaultSerializer] method.
 *
 * [defaultDeserializerProvider] can be stateful and lookup a serializer for the missing type dynamically.
 */
- (void)polymorphicDefaultDeserializerBaseClass:(id<KmastodonKotlinKClass>)baseClass defaultDeserializerProvider:(id<KmastodonKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));

/**
 * Accept a default serializer provider, associated with the [baseClass] for polymorphic serialization.
 * [defaultSerializerProvider] is invoked when no polymorphic serializers for `value` in the scope of [baseClass] were found.
 *
 * Default serializers provider affects only serialization process. Deserializers are accepted in the
 * [SerializersModuleCollector.polymorphicDefaultDeserializer] method.
 *
 * [defaultSerializerProvider] can be stateful and lookup a serializer for the missing type dynamically.
 */
- (void)polymorphicDefaultSerializerBaseClass:(id<KmastodonKotlinKClass>)baseClass defaultSerializerProvider:(id<KmastodonKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol KmastodonKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol KmastodonKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol KmastodonKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol KmastodonKotlinKClass <KmastodonKotlinKDeclarationContainer, KmastodonKotlinKAnnotatedElement, KmastodonKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end


/**
 * A message either from the client or the server,
 * that has [headers] associated.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpMessage)
 */
__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol KmastodonKtor_httpHttpMessage
@required

/**
 * Message [Headers]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpMessage.headers)
 */
@property (readonly) id<KmastodonKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end


/**
 * A scope in which coroutines run.
 *
 * A coroutine scope allows managing the lifecycles of several coroutines simultaneously
 * and setting the execution properties with which coroutines (its "children") are launched.
 *
 * Execution properties are [CoroutineContext.Element] values that may affect the behavior of
 * `kotlinx.coroutines`—for example, which thread pool a coroutine should run on.
 * See a more detailed explanation of coroutine context elements in a separate section below.
 *
 * A set of rules called "structured concurrency" ensures that the lifecycles of children
 * are nested inside the lifecycles of their parent scopes.
 * For example, if a scope is cancelled, all coroutines in it are cancelled too, and the scope itself
 * cannot be completed until all its children are completed.
 * See a more detailed explanation of structured concurrency in a separate section below.
 *
 * ## Using coroutine scopes
 *
 * The methods of this interface are not intended to be called directly.
 * Instead, a [CoroutineScope] is passed as a receiver to the coroutine builders such as [launch] and [async]
 * and affects the execution properties and lifetimes of the created coroutines.
 *
 * ## Coroutine context elements
 *
 * A [CoroutineScope] is defined by a set of [CoroutineContext] elements, one of which is typically a [Job],
 * described in the section on structured concurrency and responsible for managing lifetimes of coroutines.
 *
 * Other coroutine context elements include, but are not limited to, the following:
 *
 * - The scheduling policy, represented by a [CoroutineDispatcher] element.
 *   Some commonly used dispatchers are provided in the [Dispatchers] object.
 * - [CoroutineExceptionHandler] that defines how to handle coroutine failures that cannot
 *   be propagated to any other coroutine.
 * - A [CoroutineName] element that can be used to name coroutines for debugging purposes.
 * - On the JVM, a `ThreadContextElement` ensures that a specific thread-local value gets set on the thread
 *   that executes the coroutine.
 *
 * ## Obtaining a coroutine scope
 *
 * Manual implementations of this interface are not recommended.
 * Instead, a [CoroutineScope] should be obtained in a way that reflects the
 * intended structured concurrency relationships.
 *
 * ### Lexical scopes
 *
 * [coroutineScope] and [supervisorScope] functions can be called in any `suspend` function to define a scope
 * lexically, ensuring that all coroutines launched in this scope complete by the time the scope-limiting
 * function exits.
 *
 * ```
 * suspend fun doSomething() = coroutineScope { // scope `A`
 *     repeat(5) { outer ->
 *         // spawn a new coroutine in the scope `A`
 *         launch {
 *             println("Coroutine $outer started")
 *             coroutineScope { // scope `B`, separate for each `outer` coroutine
 *                 repeat(5) { inner ->
 *                     // spawn a new coroutine in the scope `B`
 *                     launch {
 *                         println("Coroutine $outer.$inner started")
 *                         delay(10.milliseconds)
 *                         println("Coroutine $outer.$inner finished")
 *                     }
 *                 }
 *             }
 *             // will only exit once all `Coroutine $outer.X finished` messages are printed
 *             println("Coroutine $outer finished")
 *         }
 *     }
 * } // will only exit once all `Coroutine X finished` messages are printed
 * ```
 *
 * This is the preferred way to create a [CoroutineScope].
 *
 * ### `CoroutineScope` constructor function
 *
 * When the lifecycle of the scope is not limited lexically
 * (for example, when coroutines should outlive the function that creates them)
 * but is tied to the lifecycle of some entity, the [CoroutineScope] constructor function can be used
 * to define a personal scope for the entity. This scope should be stored as a field in the entity.
 *
 * **The key part of using a custom `CoroutineScope` is cancelling it at the end of the lifecycle.**
 * The [CoroutineScope.cancel] extension function shall be used when the entity launching coroutines
 * is no longer needed. It cancels all the coroutines that might still be running on its behalf.
 *
 * ```
 * class MyEntity(scope: CoroutineScope? = null): AutoCloseable {
 *    // careful: do not write `get() =` here by accident!
 *    private val scope = scope ?: CoroutineScope(SupervisorJob() + CoroutineExceptionHandler { _, e ->
 *        println("Error in coroutine: $e")
 *    })
 *
 *    fun doSomethingWhileEntityExists() = scope.launch {
 *        while (true) {
 *            // do some work
 *            delay(50.milliseconds)
 *            println("Doing something")
 *        }
 *    }
 *
 *    override fun close() {
 *        // cancel all computations related to this entity
 *        scope.cancel()
 *    }
 * }
 *
 * fun main() {
 *     MyEntity().use { entity ->
 *         entity.doSomethingWhileEntityExists()
 *         Thread.sleep(200)
 *     }
 * }
 * ```
 *
 * Usually, a custom [CoroutineScope] should be created with a [SupervisorJob] and
 * a [CoroutineExceptionHandler] to handle exceptions in child coroutines.
 * See the documentation for the [CoroutineScope] constructor function for more details.
 * Also note that `MyEntity` accepts the `scope` parameter that can be used to pass a custom scope for testing.
 *
 * Sometimes, coroutine-aware frameworks provide [CoroutineScope] instances like this out of the box.
 * For example, on Android, all entities with a lifecycle and all `ViewModel` instances expose a [CoroutineScope]:
 * see [the corresponding documentation](https://developer.android.com/topic/libraries/architecture/coroutines).
 *
 * ### Taking another view of an existing scope
 *
 * Occasionally, several coroutines need to be launched with the same additional [CoroutineContext] that is not
 * present in the original scope.
 * In this case, the [CoroutineScope.plus] operator can be used to create a new view of an existing scope:
 *
 * ```
 * coroutineScope {
 *     val sameScopeButInUiThread = this + Dispatchers.Main
 *     sameScopeButInUiThread.launch {
 *         println("Running on the main thread")
 *     }
 *     launch {
 *         println("This will run using the original dispatcher")
 *     }
 *     sameScopeButInUiThread.launch {
 *         println("And this will also run on the main thread")
 *     }
 * }
 * ```
 *
 * The lifecycle of the new scope is the same as the original one, but the context includes new elements.
 *
 * ### Application lifecycle scope
 *
 * [GlobalScope] is a [CoroutineScope] that has the lifetime of the whole application.
 * Although it is convenient for launching top-level coroutines that are not tied to the lifecycle of any entity,
 * it is easy to misuse it and create memory or resource leaks when a coroutine actually should be tied
 * to the lifecycle of some entity.
 *
 * ```
 * GlobalScope.launch(CoroutineExceptionHandler { _, e ->
 *     println("Error in coroutine: $e")
 * }) {
 *    while (true) {
 *        println("I will be running forever, you cannot stop me!")
 *        delay(1.seconds)
 *    }
 * }
 * ```
 *
 * ### `by`-delegation
 *
 * When the approaches listed above are not applicable and a custom [CoroutineScope] implementation is needed,
 * it is recommended to use `by`-delegation to implement the interface:
 *
 * ```
 * class MyEntity : CoroutineScope by CoroutineScope(
 *     SupervisorJob() + Dispatchers.Main + CoroutineExceptionHandler { _, e ->
 *         println("Error in coroutine: $e")
 *     }
 * )
 * ```
 *
 * ## Structured concurrency in detail
 *
 * ### Overview
 *
 * *Structured concurrency* is an approach to concurrent programming that attempts to clarify the lifecycles of
 * concurrent operations and to make them easier to reason about.
 *
 * Skim the following motivating example:
 *
 * ```
 * suspend fun downloadFile(url: String): ByteArray {
 *     return withContext(Dispatchers.IO) {
 *         // this code will execute on a thread for blocking work
 *         val file = byteArrayOf()
 *         // download the file
 *         file
 *     }
 * }
 *
 * suspend fun downloadAndCompareTwoFiles() {
 *     coroutineScope {
 *         val file1 = async {
 *             // if this fails, everything else quickly fails too
 *             downloadFile("http://example.com/file1")
 *         }
 *         val file2 = async {
 *             downloadFile("http://example.com/file2")
 *         }
 *         launch(Dispatchers.Main) {
 *             // create a separate coroutine on the UI thread
 *             if (file1.await().contentEquals(file2.await())) {
 *                 uiShow("Files are equal")
 *             } else {
 *                 uiShow("Files are not equal")
 *             }
 *         }
 *     }
 *     // this line will only run once all the coroutines created above
 *     // finish their work or get cancelled
 * }
 * ```
 *
 * In this example, two asynchronous operations are launched in parallel to download two files.
 * If one of the files fails to download, the other one is cancelled too, and the whole operation fails.
 * The `coroutineScope` function will not return until all the coroutines inside it are completed or cancelled.
 * In addition, it is possible to cancel the coroutine calling `downloadAndCompareTwoFiles`, and all the coroutines
 * inside it will be cancelled too.
 *
 * Without structured concurrency, ensuring that no resource leaks occur by the end of the operation and that
 * the operation responds promptly to failure and cancellation requests is challenging.
 * With structured concurrency, this orchestration is done automatically by the coroutine library,
 * and it is enough to specify the relationships between operations declaratively, as shown in the example,
 * without being overwhelmed by intricate inter-thread communications.
 *
 * ### Specifics
 *
 * Coroutines and [CoroutineScope] instances have an associated lifecycle.
 * A runtime representation of a lifecycle in `kotlinx.coroutines` is called a [Job].
 * [Job] instances form a hierarchy of parent-child relationships,
 * and the [Job] of every coroutine spawned in a [CoroutineScope] is a child of the [Job] of that scope.
 * This is often shortened to saying that the coroutine is the scope's child.
 *
 * See the [Job] documentation for a detailed explanation of the lifecycle stages.
 *
 * ```
 * coroutineScope {
 *     val job = coroutineContext[Job]
 *     val childJob = launch { }
 *     check(job === childJob.parent)
 * }
 * ```
 *
 * Because every coroutine has a lifecycle represented by a [Job], a [CoroutineScope] can be associated with it.
 * Most coroutine builders in `kotlinx.coroutines` expose the [CoroutineScope] of the coroutine on creation:
 *
 * ```
 * coroutineScope { // this block has a `CoroutineScope` receiver
 *     val parentScope = this
 *     var grandChildFinished = false
 *     val childJob = launch {
 *         // this block has a `CoroutineScope` receiver, too
 *         val childScope = this
 *         check(childScope.coroutineContext[Job]?.parent
 *             === parentScope.coroutineContext[Job])
 *         launch {
 *             // This block also has a `CoroutineScope` receiver!
 *             val grandChildScope = this
 *             check(grandChildScope.coroutineContext[Job]?.parent
 *                 === childScope.coroutineContext[Job])
 *             delay(100.milliseconds)
 *             grandChildFinished = true
 *         }
 *         // Because the grandchild coroutine
 *         // is a child of the child coroutine,
 *         // the child coroutine will not complete
 *         // until the grandchild coroutine does.
 *     }
 *     // Await completion of the child coroutine,
 *     // and therefore the grandchild coroutine too.
 *     childJob.join()
 *     check(grandChildFinished)
 * }
 * ```
 *
 * Such a [CoroutineScope] receiver is provided for [launch], [async], and other coroutine builders,
 * as well as for lexically scoping functions like [coroutineScope], [supervisorScope], and [withContext].
 * Each of these [CoroutineScope] instances is tied to the lifecycle of the code block it runs in.
 *
 * Like the example above shows, a coroutine does not complete until all its children are completed.
 * This means that [Job.join] on a [launch] or [async] result or [Deferred.await] on an [async] result
 * will not return until all the children of that coroutine are completed.
 * Likewise, lexically scoping functions like [coroutineScope] and [withContext] will not return
 * until all the coroutines launched in them are completed.
 *
 * #### Interactions between coroutines
 *
 * See the [Job] documentation for a detailed explanation of interactions between [Job] values.
 * Below is a summary of the most important points for structuring code in day-to-day usage.
 *
 * A coroutine cannot reach the final state until all its children have reached their final states.
 * See the example above.
 *
 * If a [CoroutineScope] is cancelled (either explicitly or because it corresponds to some coroutine that failed
 * with an exception), all its children are cancelled too:
 *
 * ```
 * val scope = CoroutineScope(
 *     SupervisorJob() + CoroutineExceptionHandler { _, e -> }
 * )
 * val job = scope.launch {
 *      // this coroutine will be cancelled
 *      awaitCancellation()
 * }
 * scope.cancel() // comment this out for the line below to hang
 * job.join() // finishes normally
 * ```
 *
 * A failure of a child coroutine causes the parent to fail with the same exception if all of the following conditions
 * are met:
 * 1. The exception is not a [CancellationException].
 * 2. The failed child coroutine was not created with lexically scoped coroutine builders
 *    like [coroutineScope] or [withContext].
 * 3. The parent coroutine's [Job] is not a [SupervisorJob].
 *
 * The same logic applies recursively to the parent of the parent, etc.
 * Example:
 *
 * ```
 * check(
 *     runCatching {
 *         coroutineScope {
 *             launch {
 *                 // This cancels the `coroutineScope` coroutine, since
 *                 // 1. The coroutine fails with a non-`CancellationException` exception,
 *                 // 2. `launch` is not a lexically scoped coroutine builder,
 *                 // 3. `coroutineScope` has a non-supervisor `Job`
 *                 throw IllegalStateException()
 *             }
 *             launch {
 *                 // this coroutine will be cancelled
 *                 // when the parent gets cancelled
 *                 awaitCancellation()
 *             }
 *         }
 *     }.exceptionOrNull()
 *     is IllegalStateException
 * )
 * // The currently running coroutine will *not* be cancelled
 * // because the failed coroutine (`coroutineScope`) is lexically scoped.
 * check(currentCoroutineContext().isActive)
 * ```
 *
 * Child jobs can lead to the failure of the parent even if the parent has already finished its work
 * and was ready to return a value:
 *
 * ```
 * val deferred = GlobalScope.async {
 *     launch {
 *         delay(100.milliseconds)
 *         throw IllegalStateException()
 *     }
 *     10 // this value will be lost!
 * }
 * check(
 *     runCatching { deferred.await() }.exceptionOrNull()
 *     is IllegalStateException
 * )
 * ```
 *
 * If several coroutines fail with non-[CancellationException] exceptions,
 * the first observed failure will be propagated, and the rest will be attached to it as
 * [suppressed exceptions][Throwable.suppressedExceptions].
 *
 * Failing with a [CancellationException] only cancels the coroutine itself and its children.
 * It does not affect the parent or sibling coroutines and is not considered a failure.
 *
 * ### How-to: stop failures of child coroutines from cancelling other coroutines
 *
 * If not affecting the [CoroutineScope] on a failure in a child coroutine is the desired behaviour,
 * then a [SupervisorJob] should be used instead of `Job()` when constructing the scope:
 *
 * ```
 * val scope = CoroutineScope(SupervisorJob() + Dispatchers.Main + CoroutineExceptionHandler { _, e ->
 *     println("Coroutine failed with exception $e")
 * })
 * val failingCoroutine = scope.launch(Dispatchers.IO) {
 *     throw IllegalStateException("This exception will not cancel the scope")
 * }
 * failingCoroutine.join()
 * scope.launch(Dispatchers.IO) {
 *     println("This coroutine is active! See: ${isActive}")
 * }
 * ```
 *
 * Likewise, [supervisorScope] can replace [coroutineScope]:
 *
 * ```
 * supervisorScope {
 *     val failingCoroutine = launch(CoroutineExceptionHandler { _, e ->
 *         println("Coroutine failed with exception $e")
 *     }) {
 *         throw IllegalStateException("This exception will not cancel the scope")
 *     }
 *     failingCoroutine.join()
 *     launch {
 *         println("This coroutine is active! See: ${isActive}")
 *     }
 * }
 * ```
 *
 * ### How-to: prevent a child coroutine from being cancelled
 *
 * Sometimes, you may want to run a coroutine even if the parent coroutine is cancelled.
 * This pattern provides a way to achieve that:
 *
 * ```
 * scope.launch(start = CoroutineStart.ATOMIC) {
 *     // Do not move `NonCancellable` to the `context` argument of `launch`!
 *     withContext(NonCancellable) {
 *         // This code will run even if the parent coroutine is cancelled
 *     }
 * }
 * ```
 *
 * [CoroutineStart.ATOMIC] ensures that the new coroutine is not cancelled until it at least started to execute.
 * [NonCancellable] in [withContext] ensures that the code inside the block is executed even if the coroutine
 * created by [launch] is cancelled.
 */
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol KmastodonKotlinx_coroutines_coreCoroutineScope
@required

/**
 * The context of this scope.
 *
 * The context represents various execution properties of the coroutines launched in this scope,
 * such as the [dispatcher][CoroutineDispatcher] or
 * the [procedure for handling exceptions without a propagation path][CoroutineExceptionHandler].
 * Except [GlobalScope], a [job][Job] instance for enforcing structured concurrency
 * must also be present in the context of every [CoroutineScope].
 * See the documentation of [CoroutineScope] for details.
 *
 * Accessing this property in general code is not recommended for any purposes
 * except accessing the [Job] instance for advanced usages.
 */
@property (readonly) id<KmastodonKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end


/**
 * An [HttpClient]'s response, a second part of [HttpClientCall].
 *
 * Learn more from [Receiving responses](https://ktor.io/docs/response.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponse)
 */
__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface KmastodonKtor_client_coreHttpResponse : KmastodonBase <KmastodonKtor_httpHttpMessage, KmastodonKotlinx_coroutines_coreCoroutineScope>

/**
 * An [HttpClient]'s response, a second part of [HttpClientCall].
 *
 * Learn more from [Receiving responses](https://ktor.io/docs/response.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponse)
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * An [HttpClient]'s response, a second part of [HttpClientCall].
 *
 * Learn more from [Receiving responses](https://ktor.io/docs/response.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponse)
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * The associated [HttpClientCall] containing both
 * the underlying [HttpClientCall.request] and [HttpClientCall.response].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponse.call)
 */
@property (readonly) KmastodonKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));

/**
 * Provides a raw [ByteReadChannel] to the response content as it is read from the network.
 * This content can be still compressed or encoded.
 *
 * This content doesn't go through any interceptors from [HttpResponsePipeline].
 *
 * If you need to read the content as decoded bytes, use the [bodyAsChannel] method instead.
 *
 * This property produces a new channel every time it's accessed.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponse.rawContent)
 */
@property (readonly) id<KmastodonKtor_ioByteReadChannel> rawContent __attribute__((swift_name("rawContent")));

/**
 * [GMTDate] of the request start.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponse.requestTime)
 */
@property (readonly) KmastodonKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));

/**
 * [GMTDate] of the response start.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponse.responseTime)
 */
@property (readonly) KmastodonKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));

/**
 * The [HttpStatusCode] returned by the server. It includes both,
 * the [HttpStatusCode.description] and the [HttpStatusCode.value] (code).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponse.status)
 */
@property (readonly) KmastodonKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));

/**
 * HTTP version. Usually [HttpProtocolVersion.HTTP_1_1] or [HttpProtocolVersion.HTTP_2_0].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponse.version)
 */
@property (readonly) KmastodonKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end


/**
 * The default instance of [Json] with default configuration.
 *
 * Example of usage:
 * ```
 * @Serializable
 * class Project(val name: String, val language: String)
 *
 * val data = Project("kotlinx.serialization", "Kotlin")
 * // Prints {"name":"kotlinx.serialization","language":"Kotlin"}
 * println(Json.encodeToString(data))
 * ```
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJson.Default")))
@interface KmastodonKotlinx_serialization_jsonJsonDefault : KmastodonKotlinx_serialization_jsonJson
+ (instancetype)alloc __attribute__((unavailable));

/**
 * The default instance of [Json] with default configuration.
 *
 * Example of usage:
 * ```
 * @Serializable
 * class Project(val name: String, val language: String)
 *
 * val data = Project("kotlinx.serialization", "Kotlin")
 * // Prints {"name":"kotlinx.serialization","language":"Kotlin"}
 * println(Json.encodeToString(data))
 * ```
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)default_ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonKotlinx_serialization_jsonJsonDefault *shared __attribute__((swift_name("shared")));
@end


/**
 * Class representing single JSON element.
 * Can be [JsonPrimitive], [JsonArray] or [JsonObject].
 *
 * [JsonElement.toString] properly prints JSON tree as valid JSON, taking into account quoted values and primitives.
 * Whole hierarchy is serializable, but only when used with [Json] as [JsonElement] is purely JSON-specific structure
 * which has a meaningful schemaless semantics only for JSON.
 *
 * The whole hierarchy is [serializable][Serializable] only by [Json] format.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonElementSerializer))
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface KmastodonKotlinx_serialization_jsonJsonElement : KmastodonBase
@property (class, readonly, getter=companion) KmastodonKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end


/**
 * Configuration of the current [Json] instance available through [Json.configuration]
 * and configured with [JsonBuilder] constructor.
 *
 * Can be used for debug purposes and for custom Json-specific serializers
 * via [JsonEncoder] and [JsonDecoder].
 *
 * Standalone configuration object is meaningless and can nor be used outside the
 * [Json], neither new [Json] instance can be created from it.
 *
 * Detailed description of each property is available in [JsonBuilder] class.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonConfiguration")))
@interface KmastodonKotlinx_serialization_jsonJsonConfiguration : KmastodonBase

/** @suppress Dokka **/
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowComments __attribute__((swift_name("allowComments")));
@property (readonly) BOOL allowSpecialFloatingPointValues __attribute__((swift_name("allowSpecialFloatingPointValues")));
@property (readonly) BOOL allowStructuredMapKeys __attribute__((swift_name("allowStructuredMapKeys")));
@property (readonly) BOOL allowTrailingComma __attribute__((swift_name("allowTrailingComma")));
@property (readonly) NSString *classDiscriminator __attribute__((swift_name("classDiscriminator")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property KmastodonKotlinx_serialization_jsonClassDiscriminatorMode *classDiscriminatorMode __attribute__((swift_name("classDiscriminatorMode")));
@property (readonly) BOOL coerceInputValues __attribute__((swift_name("coerceInputValues")));
@property (readonly) BOOL decodeEnumsCaseInsensitive __attribute__((swift_name("decodeEnumsCaseInsensitive")));
@property (readonly) BOOL encodeDefaults __attribute__((swift_name("encodeDefaults")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property BOOL exceptionsWithDebugInfo __attribute__((swift_name("exceptionsWithDebugInfo")));
@property (readonly) BOOL explicitNulls __attribute__((swift_name("explicitNulls")));
@property (readonly) BOOL ignoreUnknownKeys __attribute__((swift_name("ignoreUnknownKeys")));
@property (readonly) BOOL isLenient __attribute__((swift_name("isLenient")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) id<KmastodonKotlinx_serialization_jsonJsonNamingStrategy> _Nullable namingStrategy __attribute__((swift_name("namingStrategy")));
@property (readonly) BOOL prettyPrint __attribute__((swift_name("prettyPrint")));
@property (readonly) NSString *prettyPrintIndent __attribute__((swift_name("prettyPrintIndent")));
@property (readonly) BOOL useAlternativeNames __attribute__((swift_name("useAlternativeNames")));
@property (readonly) BOOL useArrayPolymorphism __attribute__((swift_name("useArrayPolymorphism")));
@end


/**
 * Provides data structure for associating a [String] with a [List] of Strings
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.StringValues)
 */
__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol KmastodonKtor_utilsStringValues
@required

/**
 * Checks if the given [name] exists in the map
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.StringValues.contains)
 */
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));

/**
 * Checks if the given [name] and [value] pair exists in the map
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.StringValues.contains)
 */
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));

/**
 * Gets all entries from the map
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.StringValues.entries)
 */
- (NSSet<id<KmastodonKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));

/**
 * Iterates over all entries in this map and calls [body] for each pair
 *
 * Can be optimized in implementations
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.StringValues.forEach)
 */
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));

/**
 * Gets first value from the list of values associated with a [name], or null if the name is not present
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.StringValues.get)
 */
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));

/**
 * Gets all values associated with the [name], or null if the name is not present
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.StringValues.getAll)
 */
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));

/**
 * Checks if this map is empty
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.StringValues.isEmpty)
 */
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));

/**
 * Gets all names from the map
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.StringValues.names)
 */
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));

/**
 * Specifies if map has case-sensitive or case-insensitive names
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.StringValues.caseInsensitiveName)
 */
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end


/**
 * Represents HTTP headers as a map from case-insensitive names to collection of [String] values
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.Headers)
 */
__attribute__((swift_name("Ktor_httpHeaders")))
@protocol KmastodonKtor_httpHeaders <KmastodonKtor_utilsStringValues>
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol KmastodonKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<KmastodonKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<KmastodonKotlinCoroutineContextElement> _Nullable)getKey:(id<KmastodonKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<KmastodonKotlinCoroutineContext>)minusKeyKey:(id<KmastodonKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<KmastodonKotlinCoroutineContext>)plusContext:(id<KmastodonKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end


/**
 * A pair of a [request] and [response] for a specific [HttpClient].
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.call.HttpClientCall)
 *
 * @property client the client that executed the call.
 */
__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface KmastodonKtor_client_coreHttpClientCall : KmastodonBase <KmastodonKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithClient:(KmastodonKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(KmastodonKtor_client_coreHttpClient *)client requestData:(KmastodonKtor_client_coreHttpRequestData *)requestData responseData:(KmastodonKtor_client_coreHttpResponseData *)responseData __attribute__((swift_name("init(client:requestData:responseData:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmastodonKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 * Tries to receive the payload of the [response] as a specific expected type provided in [info].
 * Returns [response] if [info] corresponds to [HttpResponse].
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.call.HttpClientCall.body)
 *
 * @throws NoTransformationFoundException If no transformation is found for the type [info].
 * @throws DoubleReceiveException If already called [body].
 * @throws NullPointerException If content is `null`.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(KmastodonKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 * Tries to receive the payload of the [response] as a specific expected type provided in [info].
 * Returns [response] if [info] corresponds to [HttpResponse].
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.call.HttpClientCall.bodyNullable)
 *
 * @throws NoTransformationFoundException If no transformation is found for the type [info].
 * @throws DoubleReceiveException If already called [body].
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyNullableInfo:(KmastodonKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("bodyNullable(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<KmastodonKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));

/**
 * Typed [Attributes] associated to this call serving as a lightweight container.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.call.HttpClientCall.attributes)
 */
@property (readonly) id<KmastodonKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) KmastodonKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<KmastodonKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));

/**
 * The [request] sent by the client.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.call.HttpClientCall.request)
 */
@property id<KmastodonKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));

/**
 * The [response] sent by the server.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.call.HttpClientCall.response)
 */
@property KmastodonKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end


/**
 * Channel for asynchronous reading of sequences of bytes.
 * This is a **single-reader channel**.
 *
 * Operations on this channel cannot be invoked concurrently.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.utils.io.ByteReadChannel)
 */
__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol KmastodonKtor_ioByteReadChannel
@required

/**
 * Suspend the channel until it has [min] bytes or gets closed. Throws exception if the channel was closed with an
 * error. If there are bytes available in the channel, this function returns immediately.
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.utils.io.ByteReadChannel.awaitContent)
 *
 * @return return `false` eof is reached, otherwise `true`.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentMin:(int32_t)min completionHandler:(void (^)(KmastodonBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(min:completionHandler:)")));
- (void)cancelCause:(KmastodonKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
@property (readonly) KmastodonKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) id<KmastodonKotlinx_io_coreSource> readBuffer __attribute__((swift_name("readBuffer")));
@end


/**
 * Date in GMT timezone
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.GMTDate)
 *
 * @property seconds: seconds from 0 to 60(last is for leap second)
 * @property minutes: minutes from 0 to 59
 * @property hours: hours from 0 to 23
 * @property dayOfWeek an instance of the corresponding day of week
 * @property dayOfMonth: day of month from 1 to 31
 * @property dayOfYear: day of year from 1 to 366
 * @property month an instance of the corresponding month
 * @property year: year in common era(CE: https://en.wikipedia.org/wiki/Common_Era)
 *
 * @property timestamp is a number of epoch milliseconds
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface KmastodonKtor_utilsGMTDate : KmastodonBase <KmastodonKotlinComparable>
- (instancetype)initWithSeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(KmastodonKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(KmastodonKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("init(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmastodonKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(KmastodonKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (KmastodonKtor_utilsGMTDate *)doCopy __attribute__((swift_name("doCopy()")));
- (KmastodonKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(KmastodonKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(KmastodonKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));

/**
 * Date in GMT timezone
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.GMTDate)
 *
 * @property seconds: seconds from 0 to 60(last is for leap second)
 * @property minutes: minutes from 0 to 59
 * @property hours: hours from 0 to 23
 * @property dayOfWeek an instance of the corresponding day of week
 * @property dayOfMonth: day of month from 1 to 31
 * @property dayOfYear: day of year from 1 to 366
 * @property month an instance of the corresponding month
 * @property year: year in common era(CE: https://en.wikipedia.org/wiki/Common_Era)
 *
 * @property timestamp is a number of epoch milliseconds
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Date in GMT timezone
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.GMTDate)
 *
 * @property seconds: seconds from 0 to 60(last is for leap second)
 * @property minutes: minutes from 0 to 59
 * @property hours: hours from 0 to 23
 * @property dayOfWeek an instance of the corresponding day of week
 * @property dayOfMonth: day of month from 1 to 31
 * @property dayOfYear: day of year from 1 to 366
 * @property month an instance of the corresponding month
 * @property year: year in common era(CE: https://en.wikipedia.org/wiki/Common_Era)
 *
 * @property timestamp is a number of epoch milliseconds
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Date in GMT timezone
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.GMTDate)
 *
 * @property seconds: seconds from 0 to 60(last is for leap second)
 * @property minutes: minutes from 0 to 59
 * @property hours: hours from 0 to 23
 * @property dayOfWeek an instance of the corresponding day of week
 * @property dayOfMonth: day of month from 1 to 31
 * @property dayOfYear: day of year from 1 to 366
 * @property month an instance of the corresponding month
 * @property year: year in common era(CE: https://en.wikipedia.org/wiki/Common_Era)
 *
 * @property timestamp is a number of epoch milliseconds
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) KmastodonKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) KmastodonKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end


/**
 * Represents an HTTP status code and description.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpStatusCode)
 *
 * @param value is a numeric code.
 * @param description is a free form description of a status.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface KmastodonKtor_httpHttpStatusCode : KmastodonBase <KmastodonKotlinComparable>
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmastodonKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(KmastodonKtor_httpHttpStatusCode *)other __attribute__((swift_name("compareTo(other:)")));
- (KmastodonKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));

/**
 * Returns a copy of `this` code with a description changed to [value].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpStatusCode.description)
 */
- (KmastodonKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end


/**
 * Represents an HTTP protocol version.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpProtocolVersion)
 *
 * @property name specifies name of the protocol, e.g. "HTTP".
 * @property major specifies protocol major version.
 * @property minor specifies protocol minor version.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface KmastodonKtor_httpHttpProtocolVersion : KmastodonBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmastodonKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (KmastodonKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));

/**
 * Represents an HTTP protocol version.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpProtocolVersion)
 *
 * @property name specifies name of the protocol, e.g. "HTTP".
 * @property major specifies protocol major version.
 * @property minor specifies protocol minor version.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Represents an HTTP protocol version.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpProtocolVersion)
 *
 * @property name specifies name of the protocol, e.g. "HTTP".
 * @property major specifies protocol major version.
 * @property minor specifies protocol minor version.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end


/**
 * Class representing single JSON element.
 * Can be [JsonPrimitive], [JsonArray] or [JsonObject].
 *
 * [JsonElement.toString] properly prints JSON tree as valid JSON, taking into account quoted values and primitives.
 * Whole hierarchy is serializable, but only when used with [Json] as [JsonElement] is purely JSON-specific structure
 * which has a meaningful schemaless semantics only for JSON.
 *
 * The whole hierarchy is [serializable][Serializable] only by [Json] format.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface KmastodonKotlinx_serialization_jsonJsonElementCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Class representing single JSON element.
 * Can be [JsonPrimitive], [JsonArray] or [JsonObject].
 *
 * [JsonElement.toString] properly prints JSON tree as valid JSON, taking into account quoted values and primitives.
 * Whole hierarchy is serializable, but only when used with [Json] as [JsonElement] is purely JSON-specific structure
 * which has a meaningful schemaless semantics only for JSON.
 *
 * The whole hierarchy is [serializable][Serializable] only by [Json] format.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));

/**
 * Class representing single JSON element.
 * Can be [JsonPrimitive], [JsonArray] or [JsonObject].
 *
 * [JsonElement.toString] properly prints JSON tree as valid JSON, taking into account quoted values and primitives.
 * Whole hierarchy is serializable, but only when used with [Json] as [JsonElement] is purely JSON-specific structure
 * which has a meaningful schemaless semantics only for JSON.
 *
 * The whole hierarchy is [serializable][Serializable] only by [Json] format.
 */
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Defines which classes and objects should have their serial name included in the json as so-called class discriminator.
 *
 * Class discriminator is a JSON field added by kotlinx.serialization that has [JsonBuilder.classDiscriminator] as a key (`type` by default),
 * and class' serial name as a value (fully qualified name by default, can be changed with [SerialName] annotation).
 *
 * Class discriminator is important for serializing and deserializing [polymorphic class hierarchies](https://github.com/Kotlin/kotlinx.serialization/blob/master/docs/polymorphism.md#sealed-classes).
 * Default [ClassDiscriminatorMode.POLYMORPHIC] mode adds discriminator only to polymorphic classes.
 * This behavior can be changed to match various JSON schemas.
 *
 * @see JsonBuilder.classDiscriminator
 * @see JsonBuilder.classDiscriminatorMode
 * @see Polymorphic
 * @see PolymorphicSerializer
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonClassDiscriminatorMode")))
@interface KmastodonKotlinx_serialization_jsonClassDiscriminatorMode : KmastodonKotlinEnum<KmastodonKotlinx_serialization_jsonClassDiscriminatorMode *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Defines which classes and objects should have their serial name included in the json as so-called class discriminator.
 *
 * Class discriminator is a JSON field added by kotlinx.serialization that has [JsonBuilder.classDiscriminator] as a key (`type` by default),
 * and class' serial name as a value (fully qualified name by default, can be changed with [SerialName] annotation).
 *
 * Class discriminator is important for serializing and deserializing [polymorphic class hierarchies](https://github.com/Kotlin/kotlinx.serialization/blob/master/docs/polymorphism.md#sealed-classes).
 * Default [ClassDiscriminatorMode.POLYMORPHIC] mode adds discriminator only to polymorphic classes.
 * This behavior can be changed to match various JSON schemas.
 *
 * @see JsonBuilder.classDiscriminator
 * @see JsonBuilder.classDiscriminatorMode
 * @see Polymorphic
 * @see PolymorphicSerializer
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KmastodonKotlinx_serialization_jsonClassDiscriminatorMode *none __attribute__((swift_name("none")));
@property (class, readonly) KmastodonKotlinx_serialization_jsonClassDiscriminatorMode *allJsonObjects __attribute__((swift_name("allJsonObjects")));
@property (class, readonly) KmastodonKotlinx_serialization_jsonClassDiscriminatorMode *polymorphic __attribute__((swift_name("polymorphic")));
+ (KmastodonKotlinArray<KmastodonKotlinx_serialization_jsonClassDiscriminatorMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<KmastodonKotlinx_serialization_jsonClassDiscriminatorMode *> *entries __attribute__((swift_name("entries")));
@end


/**
 * Represents naming strategy — a transformer for serial names in a [Json] format.
 * Transformed serial names are used for both serialization and deserialization.
 * A naming strategy is always applied globally in the Json configuration builder
 * (see [JsonBuilder.namingStrategy]).
 *
 * Actual transformation happens in the [serialNameForJson] function.
 * It is possible to apply additional filtering inside the transformer using the `descriptor` parameter in [serialNameForJson].
 *
 * Original serial names are never used after transformation, so they are ignored in a Json input.
 * If the original serial name is present in the Json input but transformed is not,
 * [MissingFieldException] still would be thrown. If one wants to preserve the original serial name for deserialization,
 * one should use the [JsonNames] annotation, as its values are not transformed.
 *
 * ### Common pitfalls in conjunction with other Json features
 *
 * * Due to the nature of kotlinx.serialization framework, naming strategy transformation is applied to all properties regardless
 * of whether their serial name was taken from the property name or provided by @[SerialName] annotation.
 * Effectively, it means one cannot avoid transformation by explicitly specifying the serial name.
 *
 * * Collision of the transformed name with any other (transformed) properties serial names or any alternative names
 * specified with [JsonNames] will lead to a deserialization exception.
 *
 * * Naming strategies do not transform serial names of the types used for the polymorphism, as they always should be specified explicitly.
 * Values from [JsonClassDiscriminator] or global [JsonBuilder.classDiscriminator] also are not altered.
 *
 * ### Controversy about using global naming strategies
 *
 * Global naming strategies have one key trait that makes them a debatable and controversial topic:
 * They are very implicit. It means that by looking only at the definition of the class,
 * it is impossible to say which names it will have in the serialized form.
 * As a consequence, naming strategies are not friendly to refactorings. Programmer renaming `myId` to `userId` may forget
 * to rename `my_id`, and vice versa. Generally, any tools one can imagine work poorly with global naming strategies:
 * Find Usages/Rename in IDE, full-text search by grep, etc. For them, the original name and the transformed are two different things;
 * changing one without the other may introduce bugs in many unexpected ways.
 * The lack of a single place of definition, the inability to use automated tools, and more error-prone code lead
 * to greater maintenance efforts for code with global naming strategies.
 * However, there are cases where usage of naming strategies is inevitable, such as interop with an existing API or migrating a large codebase.
 * Therefore, one should carefully weigh the pros and cons before considering adding global naming strategies to an application.
 *
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonNamingStrategy")))
@protocol KmastodonKotlinx_serialization_jsonJsonNamingStrategy
@required

/**
 * Accepts an original [serialName] (defined by property name in the class or [SerialName] annotation) and returns
 * a transformed serial name which should be used for serialization and deserialization.
 *
 * Besides string manipulation operations, it is also possible to implement transformations that depend on the [descriptor]
 * and its element (defined by [elementIndex]) currently being serialized.
 * It is guaranteed that `descriptor.getElementName(elementIndex) == serialName`.
 * For example, one can choose different transformations depending on [SerialInfo]
 * annotations (see [SerialDescriptor.getElementAnnotations]) or element optionality (see [SerialDescriptor.isElementOptional]).
 *
 * Note that invocations of this function are cached for performance reasons.
 * Caching strategy is an implementation detail and should not be assumed as a part of the public API contract, as it may be changed in future releases.
 * Therefore, it is essential for this function to be pure: it should not have any side effects, and it should
 * return the same String for a given [descriptor], [elementIndex], and [serialName], regardless of the number of invocations.
 */
- (NSString *)serialNameForJsonDescriptor:(id<KmastodonKotlinx_serialization_coreSerialDescriptor>)descriptor elementIndex:(int32_t)elementIndex serialName:(NSString *)serialName __attribute__((swift_name("serialNameForJson(descriptor:elementIndex:serialName:)")));
@end

__attribute__((swift_name("KotlinMapEntry")))
@protocol KmastodonKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol KmastodonKotlinCoroutineContextElement <KmastodonKotlinCoroutineContext>
@required
@property (readonly) id<KmastodonKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol KmastodonKotlinCoroutineContextKey
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="2.0")
*/
__attribute__((swift_name("KotlinAutoCloseable")))
@protocol KmastodonKotlinAutoCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol KmastodonKtor_ioCloseable <KmastodonKotlinAutoCloseable>
@required
@end


/**
 * A multiplatform asynchronous HTTP client that allows you to make requests, handle responses,
 * and extend its functionality with plugins such as authentication, JSON serialization, and more.
 *
 * # Creating client
 * To create a new client, you can call:
 * ```kotlin
 * val client = HttpClient()
 * ```
 * You can create as many clients as you need.
 *
 * If you no longer need the client, please consider closing it to release resources:
 * ```
 * client.close()
 * ```
 *
 * To learn more on how to create and configure an [HttpClient] see the tutorial page:
 * [Creating and configuring a client](https://ktor.io/docs/create-client.html).
 *
 * # Making API Requests
 * For every HTTP method (GET, POST, PUT, etc.), there is a corresponding function:
 * ```kotlin
 * val response: HttpResponse = client.get("https://ktor.io/")
 * val body = response.bodyAsText()
 * ```
 * See [Making HTTP requests](https://ktor.io/docs/client-requests.html) for more details.
 *
 * # Query Parameters
 * Add query parameters to your request using the `parameter` function:
 * ```kotlin
 * val response = client.get("https://google.com/search") {
 *     url {
 *         parameter("q", "REST API with Ktor")
 *     }
 * }
 * ```
 * For more information, refer to [Passing request parameters](https://ktor.io/docs/client-requests.html#parameters).
 *
 * # Adding Headers
 * Include headers in your request using the `headers` builder or the `header` function:
 * ```kotlin
 * val response = client.get("https://httpbin.org/bearer") {
 *     headers {
 *         append("Authorization", "Bearer your_token_here")
 *         append("Accept", "application/json")
 *     }
 * }
 * ```
 * Learn more at [Adding headers to a request](https://ktor.io/docs/client-requests.html#headers).
 *
 * # JSON Serialization
 * Add dependencies:
 * - io.ktor:ktor-client-content-negotiation:3.+
 * - io.ktor:ktor-serialization-kotlinx-json:3.+
 * Add Gradle plugin:
 * ```
 * plugins {
 *     kotlin("plugin.serialization")
 * }
 * ```
 *
 * Send and receive JSON data by installing the `ContentNegotiation` plugin with `kotlinx.serialization`:
 * ```kotlin
 * val client = HttpClient {
 *     install(ContentNegotiation) {
 *         json()
 *     }
 * }
 *
 * @Serializable
 * data class MyRequestType(val someData: String)
 *
 * @Serializable
 * data class MyResponseType(val someResponseData: String)
 *
 * val response: MyResponseType = client.post("https://api.example.com/data") {
 *     contentType(ContentType.Application.Json)
 *     setBody(MyRequestType(someData = "value"))
 * }.body()
 * ```
 * See [Serializing JSON data](https://ktor.io/docs/client-serialization.html) for maven configuration and other details.
 *
 * # Submitting Forms
 * Submit form data using `FormDataContent` or the `submitForm` function:
 * ```kotlin
 * // Using FormDataContent
 * val response = client.post("https://example.com/submit") {
 *     setBody(FormDataContent(Parameters.build {
 *         append("username", "user")
 *         append("password", "pass")
 *     }))
 * }
 *
 * // Or using submitForm
 * val response = client.submitForm(
 *     url = "https://example.com/submit",
 *     formParameters = Parameters.build {
 *         append("username", "user")
 *         append("password", "pass")
 *     }
 * )
 * ```
 * More information is available at [Submitting form parameters](https://ktor.io/docs/client-requests.html#form_parameters).
 *
 * # Handling Authentication
 * Add dependency: io.ktor:ktor-client-auth:3.+
 *
 * Use the `Auth` plugin to handle various authentication schemes like Basic or Bearer token authentication:
 * ```kotlin
 * val client = HttpClient {
 *     install(Auth) {
 *         bearer {
 *             loadTokens {
 *                 BearerTokens(accessToken = "your_access_token", refreshToken = "your_refresh_token")
 *             }
 *         }
 *     }
 * }
 *
 * val response = client.get("https://api.example.com/protected")
 * ```
 * Refer to [Client authentication](https://ktor.io/docs/client-auth.html) for more details.
 *
 * # Setting Timeouts and Retries
 * Configure timeouts and implement retry logic for your requests:
 * ```kotlin
 * val client = HttpClient {
 *     install(HttpTimeout) {
 *         requestTimeoutMillis = 10000
 *         connectTimeoutMillis = 5000
 *         socketTimeoutMillis = 15000
 *     }
 * }
 * ```
 *
 * For the request timeout:
 * ```kotlin
 * client.get("") {
 *     timeout {
 *         requestTimeoutMillis = 1000
 *     }
 * }
 * ```
 * See [Timeout](https://ktor.io/docs/client-timeout.html) for more information.
 *
 * # Handling Cookies
 *
 * Manage cookies automatically by installing the `HttpCookies` plugin:
 * ```kotlin
 * val client = HttpClient {
 *     install(HttpCookies) {
 *         storage = AcceptAllCookiesStorage()
 *     }
 * }
 *
 * // Accessing cookies
 * val cookies: List<Cookie> = client.cookies("https://example.com")
 * ```
 * Learn more at [Cookies](https://ktor.io/docs/client-cookies.html).
 *
 * # Uploading Files
 * Upload files using multipart/form-data requests:
 * ```kotlin
 * client.submitFormWithBinaryData(
 *      url = "https://example.com/upload",
 *      formData = formData {
 *          append("description", "File upload example")
 *          append("file", {
 *              File("path/to/file.txt").readChannel()
 *          })
 *      }
 *  )
 *
 * See [Uploading data](https://ktor.io/docs/client-requests.html#upload_file) for details.
 *
 * # Using WebSockets
 *
 * Communicate over WebSockets using the `webSocket` function:
 * ```kotlin
 * client.webSocket("wss://echo.websocket.org") {
 *     send(Frame.Text("Hello, WebSocket!"))
 *     val frame = incoming.receive()
 *     if (frame is Frame.Text) {
 *         println("Received: ${frame.readText()}")
 *     }
 * }
 * ```
 * Learn more at [Client WebSockets](https://ktor.io/docs/client-websockets.html).
 *
 * # Error Handling
 * Handle exceptions and HTTP error responses gracefully:
 * val client = HttpClient {
 *     HttpResponseValidator {
 *         validateResponse { response ->
 *             val statusCode = response.status.value
 *             when (statusCode) {
 *                 in 300..399 -> error("Redirects are not allowed")
 *             }
 *         }
 *     }
 * }
 * See [Error handling](https://ktor.io/docs/client-response-validation.html) for more information.
 *
 * # Configuring SSL/TLS
 *
 * Customize SSL/TLS settings for secure connections is engine-specific. Please refer to the following page for
 * the details: [Client SSL/TLS](https://ktor.io/docs/client-ssl.html).
 *
 * # Using Proxies
 * Route requests through an HTTP or SOCKS proxy:
 * ```kotlin
 * val client = HttpClient() {
 *     engine {
 *         proxy = ProxyBuilder.http("http://proxy.example.com:8080")
 *         // For a SOCKS proxy:
 *         // proxy = ProxyBuilder.socks(host = "proxy.example.com", port = 1080)
 *     }
 * }
 * ```
 * See [Using a proxy](https://ktor.io/docs/client-proxy.html) for details.
 *
 * # Streaming Data
 *
 * Stream large data efficiently without loading it entirely into memory.
 *
 * Stream request:
 * ```kotlin
 * val response = client.post("https://example.com/upload") {
 *      setBody(object: OutgoingContent.WriteChannelContent() {
 *          override suspend fun writeTo(channel: ByteWriteChannel) {
 *              repeat(1000) {
 *                  channel.writeString("Hello!")
 *              }
 *          }
 *      })
 * }
 * ```
 *
 * Stream response:
 * ```kotlin
 * client.prepareGet("https://example.com/largefile.zip").execute { response ->
 *     val channel: ByteReadChannel = response.bodyAsChannel()
 *
 *     while (!channel.exhausted()) {
 *         val chunk = channel.readBuffer()
 *         // ...
 *     }
 * }
 * ```
 * Learn more at [Streaming data](https://ktor.io/docs/client-responses.html#streaming).
 *
 * # Using SSE
 * Server-Sent Events (SSE) is a technology that allows a server to continuously push events to a client over an HTTP
 * connection. It's particularly useful in cases where the server needs to send event-based updates without requiring
 * the client to repeatedly poll the server.
 *
 * Install the plugin:
 * ```kotlin
 * val client = HttpClient(CIO) {
 *     install(SSE)
 * }
 * ```
 *
 * ```
 * client.sse(host = "0.0.0.0", port = 8080, path = "/events") {
 *     while (true) {
 *         for (event in incoming) {
 *             println("Event from server:")
 *             println(event)
 *         }
 *     }
 * }
 * ```
 *
 * Visit [Using SSE](https://ktor.io/docs/client-server-sent-events.html#install_plugin) to learn more.
 *
 * # Customizing a client with plugins
 * To extend out-of-the-box functionality, you can install plugins for a Ktor client:
 * ```kotlin
 * val client = HttpClient {
 *     install(ContentNegotiation) {
 *         json()
 *     }
 * }
 * ```
 *
 * There are many plugins available out of the box, and you can write your own. See
 * [Create custom client plugins](https://ktor.io/docs/client-custom-plugins.html) to learn more.
 *
 * # Service Loader and Default Engine
 * On JVM, calling `HttpClient()` without specifying an engine uses a service loader mechanism to
 * determine the appropriate default engine. This can introduce a performance overhead, especially on
 * slower devices, such as Android.
 *
 * **Performance Note**: If you are targeting platforms where initialization speed is critical,
 * consider explicitly specifying an engine to avoid the service loader lookup.
 *
 * Example with manual engine specification:
 * ```
 * val client = HttpClient(Apache5) // Explicitly uses Apache5 engine, bypassing service loader
 * ```
 *
 * By directly setting the engine (e.g., `Apache5`, `OkHttp`), you can optimize startup performance
 * by preventing the default service loader mechanism.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClient)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface KmastodonKtor_client_coreHttpClient : KmastodonBase <KmastodonKotlinx_coroutines_coreCoroutineScope, KmastodonKtor_ioCloseable>
- (instancetype)initWithEngine:(id<KmastodonKtor_client_coreHttpClientEngine>)engine userConfig:(KmastodonKtor_client_coreHttpClientConfig<KmastodonKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));

/**
 * Initiates the shutdown process for the `HttpClient`. This is a non-blocking call, which
 * means it returns immediately and begins the client closure in the background.
 *
 * ## Usage
 * ```
 * val client = HttpClient()
 * client.close()
 * client.coroutineContext.job.join() // Waits for complete termination if necessary
 * ```
 *
 * ## Important Notes
 * - **Non-blocking**: `close()` only starts the closing process and does not wait for it to complete.
 * - **Coroutine Context**: To wait for all client resources to be freed, use `client.coroutineContext.job.join()`
 *   or `client.coroutineContext.cancel()` to terminate ongoing tasks.
 * - **Manual Engine Management**: If a custom `engine` was manually created, it must be closed explicitly
 *   after calling `client.close()` to release all resources.
 *
 * Example with custom engine management:
 * ```
 * val engine = HttpClientEngine() // Custom engine instance
 * val client = HttpClient(engine)
 *
 * client.close()
 * engine.close() // Ensure manually created engine is also closed
 * ```
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClient.close)
 */
- (void)close __attribute__((swift_name("close()")));

/**
 * Returns a new [HttpClient] by copying this client's configuration
 * and additionally configured by the [block] parameter.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClient.config)
 */
- (KmastodonKtor_client_coreHttpClient *)configBlock:(void (^)(KmastodonKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));

/**
 * Checks if the specified [capability] is supported by this client.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClient.isSupported)
 */
- (BOOL)isSupportedCapability:(id<KmastodonKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * Typed attributes used as a lightweight container for this client.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClient.attributes)
 */
@property (readonly) id<KmastodonKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<KmastodonKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<KmastodonKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));

/**
 * Provides access to the client's engine configuration.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClient.engineConfig)
 */
@property (readonly) KmastodonKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));

/**
 * Provides access to the events of the client's lifecycle.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClient.monitor)
 */
@property (readonly) KmastodonKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));

/**
 * A pipeline used for receiving a request.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClient.receivePipeline)
 */
@property (readonly) KmastodonKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));

/**
 * A pipeline used for processing all requests sent by this client.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClient.requestPipeline)
 */
@property (readonly) KmastodonKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));

/**
 * A pipeline used for processing all responses sent by the server.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClient.responsePipeline)
 */
@property (readonly) KmastodonKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));

/**
 * A pipeline used for sending a request.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClient.sendPipeline)
 */
@property (readonly) KmastodonKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end


/**
 * Actual data of the [HttpRequest], including [url], [method], [headers], [body] and [executionContext].
 * Built by [HttpRequestBuilder].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestData)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface KmastodonKtor_client_coreHttpRequestData : KmastodonBase
- (instancetype)initWithUrl:(KmastodonKtor_httpUrl *)url method:(KmastodonKtor_httpHttpMethod *)method headers:(id<KmastodonKtor_httpHeaders>)headers body:(KmastodonKtor_httpOutgoingContent *)body executionContext:(id<KmastodonKotlinx_coroutines_coreJob>)executionContext attributes:(id<KmastodonKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));

/**
 * Retrieve extension by its key.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestData.getCapabilityOrNull)
 */
- (id _Nullable)getCapabilityOrNullKey:(id<KmastodonKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KmastodonKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) KmastodonKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<KmastodonKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<KmastodonKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) KmastodonKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) KmastodonKtor_httpUrl *url __attribute__((swift_name("url")));
@end


/**
 * Data prepared for [HttpResponse].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpResponseData)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface KmastodonKtor_client_coreHttpResponseData : KmastodonBase
- (instancetype)initWithStatusCode:(KmastodonKtor_httpHttpStatusCode *)statusCode requestTime:(KmastodonKtor_utilsGMTDate *)requestTime headers:(id<KmastodonKtor_httpHeaders>)headers version:(KmastodonKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<KmastodonKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<KmastodonKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<KmastodonKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) KmastodonKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) KmastodonKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) KmastodonKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface KmastodonKtor_client_coreHttpClientCallCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@end


/**
 * Ktor type information.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.reflect.TypeInfo)
 *
 * @property type Source KClass<*>
 * @property kotlinType Kotlin reified type with all generic type parameters.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface KmastodonKtor_utilsTypeInfo : KmastodonBase
- (instancetype)initWithType:(id<KmastodonKotlinKClass>)type kotlinType:(id<KmastodonKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithType:(id<KmastodonKotlinKClass>)type reifiedType:(id<KmastodonKotlinKType>)reifiedType kotlinType:(id<KmastodonKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use constructor without reifiedType parameter.")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KmastodonKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<KmastodonKotlinKClass> type __attribute__((swift_name("type")));
@end


/**
 * Map of attributes accessible by [AttributeKey] in a typed manner
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes)
 */
__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol KmastodonKtor_utilsAttributes
@required

/**
 * Gets a value of the attribute for the specified [key], or calls supplied [block] to compute its value
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes.computeIfAbsent)
 */
- (id)computeIfAbsentKey:(KmastodonKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));

/**
 * Checks if an attribute with the specified [key] exists
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes.contains)
 */
- (BOOL)containsKey:(KmastodonKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));

/**
 * Gets a value of the attribute for the specified [key], or throws an exception if an attribute doesn't exist
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes.get)
 */
- (id)getKey_:(KmastodonKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));

/**
 * Gets a value of the attribute for the specified [key], or return `null` if an attribute doesn't exist
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes.getOrNull)
 */
- (id _Nullable)getOrNullKey:(KmastodonKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));

/**
 * Creates or changes an attribute with the specified [key] using [value]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes.put)
 */
- (void)putKey:(KmastodonKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));

/**
 * Removes an attribute with the specified [key]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes.remove)
 */
- (void)removeKey:(KmastodonKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));

/**
 * Creates or changes an attribute with the specified [key] using [value]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes.set)
 */
- (void)setKey:(KmastodonKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("set(key:value:)")));

/**
 * Removes an attribute with the specified [key] and returns its current value, throws an exception if an attribute doesn't exist
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes.take)
 */
- (id)takeKey:(KmastodonKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));

/**
 * Removes an attribute with the specified [key] and returns its current value, returns `null` if an attribute doesn't exist
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes.takeOrNull)
 */
- (id _Nullable)takeOrNullKey:(KmastodonKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));

/**
 * Returns [List] of all [AttributeKey] instances in this map
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.Attributes.allKeys)
 */
@property (readonly) NSArray<KmastodonKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end


/**
 * A request for [HttpClient], first part of [HttpClientCall].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequest)
 */
__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol KmastodonKtor_client_coreHttpRequest <KmastodonKtor_httpHttpMessage, KmastodonKotlinx_coroutines_coreCoroutineScope>
@required

/**
 * Typed [Attributes] associated to this call serving as a lightweight container.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequest.attributes)
 */
@property (readonly) id<KmastodonKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));

/**
 * The associated [HttpClientCall] containing both
 * the underlying [HttpClientCall.request] and [HttpClientCall.response].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequest.call)
 */
@property (readonly) KmastodonKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));

/**
 * An [OutgoingContent] representing the request body
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequest.content)
 */
@property (readonly) KmastodonKtor_httpOutgoingContent *content __attribute__((swift_name("content")));

/**
 * The [HttpMethod] or HTTP VERB used for this request.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequest.method)
 */
@property (readonly) KmastodonKtor_httpHttpMethod *method __attribute__((swift_name("method")));

/**
 * The [Url] representing the endpoint and the uri for this request.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequest.url)
 */
@property (readonly) KmastodonKtor_httpUrl *url __attribute__((swift_name("url")));
@end


/**
 * Supplies a stream of bytes. RawSource is a base interface for `kotlinx-io` data suppliers.
 *
 * The interface should be implemented to read data from wherever it's located: from the network, storage,
 * or a buffer in memory. Sources may be layered to transform supplied data, such as to decompress, decrypt,
 * or remove protocol framing.
 *
 * Most applications shouldn't operate on a raw source directly, but rather on a buffered [Source] which
 * is both more efficient and more convenient. Use [buffered] to wrap any raw source with a buffer.
 *
 * Implementors should abstain from throwing exceptions other than those that are documented for RawSource methods.
 *
 * ### Thread-safety guarantees
 *
 * [RawSource] implementations are not required to be thread safe.
 * However, if an implementation provides some thread safety guarantees, it is recommended to explicitly document them.
 *
 * @sample kotlinx.io.samples.RC4SourceSample.rc4
 */
__attribute__((swift_name("Kotlinx_io_coreRawSource")))
@protocol KmastodonKotlinx_io_coreRawSource <KmastodonKotlinAutoCloseable>
@required

/**
 * Removes at least 1, and up to [byteCount] bytes from this source and appends them to [sink].
 * Returns the number of bytes read, or -1 if this source is exhausted.
 *
 * @param sink the destination to write the data from this source.
 * @param byteCount the number of bytes to read.
 *
 * @throws IllegalArgumentException when [byteCount] is negative.
 * @throws IllegalStateException when the source is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.readAtMostToSink
 */
- (int64_t)readAtMostToSink:(KmastodonKotlinx_io_coreBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readAtMostTo(sink:byteCount:)")));
@end


/**
 * A source that facilitates typed data reads and keeps a buffer internally so that callers can read chunks of data
 * without requesting it from a downstream on every call.
 *
 * [Source] is the main `kotlinx-io` interface to read data in client's code,
 * any [RawSource] could be converted into [Source] using [RawSource.buffered].
 *
 * Depending on the kind of downstream and the number of bytes read, buffering may improve the performance by hiding
 * the latency of small reads.
 *
 * The buffer is refilled on reads as necessary, but it is also possible to ensure it contains enough data
 * using [require] or [request].
 * [Sink] also allows skipping unneeded prefix of data using [skip] and
 * provides look ahead into incoming data, buffering as much as necessary, using [peek].
 *
 * Source's read* methods have different guarantees of how much data will be consumed from the source
 * and what to expect in case of error.
 *
 * ### Read methods' behavior and naming conventions
 *
 * Unless stated otherwise, all read methods consume the exact number of bytes
 * requested (or the number of bytes required to represent a value of a requested type).
 * If a source contains fewer bytes than requested, these methods will throw an exception.
 *
 * Methods reading up to requested number of bytes are named as `readAtMost`
 * in contrast to methods reading exact number of bytes, which don't have `AtMost` suffix in their names.
 * If a source contains fewer bytes than requested, these methods will not treat it as en error and will return
 * gracefully.
 *
 * Methods returning a value as a result are named `read<Type>`, like [readInt] or [readByte].
 * These methods don't consume source's content in case of an error.
 *
 * Methods reading data into a consumer supplied as one of its arguments are named `read*To`,
 * like [readTo] or [readAtMostTo]. These methods consume a source even when an error occurs.
 *
 * Methods moving all data from a source to some other sink are named `transferTo`, like [transferTo].
 *
 * It is recommended to follow the same naming convention for Source extensions.
 *
 * ### Thread-safety guarantees
 *
 * Until stated otherwise, [Source] implementations are not thread safe.
 * If a [Source] needs to be accessed from multiple threads, an additional synchronization is required.
 */
__attribute__((swift_name("Kotlinx_io_coreSource")))
@protocol KmastodonKotlinx_io_coreSource <KmastodonKotlinx_io_coreRawSource>
@required

/**
 * Returns true if there are no more bytes in this source.
 *
 * The call of this method will block until there are bytes to read or the source is definitely exhausted.
 *
 * @throws IllegalStateException when the source is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.exhausted
 */
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));

/**
 * Returns a new [Source] that can read data from this source without consuming it.
 * The returned source becomes invalid once this source is next read or closed.
 *
 * Peek could be used to lookahead and read the same data multiple times.
 *
 * If peek source needs to access more data that this [Source] has in its buffer,
 * more data will be requested from the underlying source and on success,
 * it'll be added to the buffer of this [Source].
 * If the underlying source was exhausted or some error occurred on attempt to fill the buffer,
 * a corresponding exception will be thrown.
 *
 * @throws IllegalStateException when the source is closed.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.peekSample
 */
- (id<KmastodonKotlinx_io_coreSource>)peek __attribute__((swift_name("peek()")));

/**
 * Removes up to `endIndex - startIndex` bytes from this source, copies them into [sink] subrange starting at
 * [startIndex] and ending at [endIndex], and returns the number of bytes read, or -1 if this source is exhausted.
 *
 * @param sink the array to which data will be written from this source.
 * @param startIndex the startIndex (inclusive) of the [sink] subrange to read data into, 0 by default.
 * @param endIndex the endIndex (exclusive) of the [sink] subrange to read data into, `sink.size` by default.
 *
 * @throws IndexOutOfBoundsException when [startIndex] or [endIndex] is out of range of [sink] array indices.
 * @throws IllegalArgumentException when `startIndex > endIndex`.
 * @throws IllegalStateException when the source is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.readAtMostToByteArray
 */
- (int32_t)readAtMostToSink:(KmastodonKotlinByteArray *)sink startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("readAtMostTo(sink:startIndex:endIndex:)")));

/**
 * Removes a byte from this source and returns it.
 *
 * @throws EOFException when there are no more bytes to read.
 * @throws IllegalStateException when the source is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.readByte
 */
- (int8_t)readByte __attribute__((swift_name("readByte()")));

/**
 * Removes four bytes from this source and returns an integer composed of it according to the big-endian order.
 *
 * @throws EOFException when there are not enough data to read an int value.
 * @throws IllegalStateException when the source is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.readInt
 */
- (int32_t)readInt __attribute__((swift_name("readInt()")));

/**
 * Removes eight bytes from this source and returns a long integer composed of it according to the big-endian order.
 *
 * @throws EOFException when there are not enough data to read a long value.
 * @throws IllegalStateException when the source is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.readLong
 */
- (int64_t)readLong __attribute__((swift_name("readLong()")));

/**
 * Removes two bytes from this source and returns a short integer composed of it according to the big-endian order.
 *
 * @throws EOFException when there are not enough data to read a short value.
 * @throws IllegalStateException when the source is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.readShort
 */
- (int16_t)readShort __attribute__((swift_name("readShort()")));

/**
 * Removes exactly [byteCount] bytes from this source and writes them to [sink].
 *
 * @param sink the sink to which data will be written from this source.
 * @param byteCount the number of bytes that should be written into [sink]
 *
 * @throws IllegalArgumentException when [byteCount] is negative.
 * @throws EOFException when the requested number of bytes cannot be read.
 * @throws IllegalStateException when the source or [sink] is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.readSourceToSink
 */
- (void)readToSink:(id<KmastodonKotlinx_io_coreRawSink>)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readTo(sink:byteCount:)")));

/**
 * Attempts to fill the buffer with at least [byteCount] bytes of data from the underlying source
 * and returns a value indicating if the requirement was successfully fulfilled.
 *
 * `false` value returned by this method indicates that the underlying source was exhausted before
 * filling the buffer with [byteCount] bytes of data.
 *
 * @param byteCount the number of bytes that the buffer should contain.
 *
 * @throws IllegalArgumentException when [byteCount] is negative.
 * @throws IllegalStateException when the source is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.request
 */
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));

/**
 * Attempts to fill the buffer with at least [byteCount] bytes of data from the underlying source
 * and throw [EOFException] when the source is exhausted before fulfilling the requirement.
 *
 * If the buffer already contains required number of bytes then there will be no requests to
 * the underlying source.
 *
 * @param byteCount the number of bytes that the buffer should contain.
 *
 * @throws EOFException when the source is exhausted before the required bytes count could be read.
 * @throws IllegalStateException when the source is closed.
 * @throws IllegalArgumentException when [byteCount] is negative.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.require
 */
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));

/**
 * Reads and discards [byteCount] bytes from this source.
 *
 * @param byteCount the number of bytes to be skipped.
 *
 * @throws EOFException when the source is exhausted before the requested number of bytes can be skipped.
 * @throws IllegalArgumentException when [byteCount] is negative.
 * @throws IllegalStateException when the source is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.skip
 */
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));

/**
 * Removes all bytes from this source, writes them to [sink], and returns the total number of bytes
 * written to [sink].
 *
 * Return 0 if this source is exhausted.
 *
 * @param sink the sink to which data will be written from this source.
 *
 * @throws IllegalStateException when the source or [sink] is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.transferTo
 *
 * @note annotations
 *   kotlin.IgnorableReturnValue
*/
- (int64_t)transferToSink:(id<KmastodonKotlinx_io_coreRawSink>)sink __attribute__((swift_name("transferTo(sink:)")));

/**
 * This source's internal buffer. It contains data fetched from the downstream, but not yet consumed by the upstream.
 *
 * Incorrect use of the buffer may cause data loss or unexpected data being read by the upstream.
 * Consider using alternative APIs to read data from the source, if possible:
 * - use [peek] for lookahead into a source;
 * - implement [RawSource] and wrap a downstream source into it to intercept data being read.
 *
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) KmastodonKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@end


/**
 * Day of week
 * [value] is 3 letter shortcut
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.WeekDay)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface KmastodonKtor_utilsWeekDay : KmastodonKotlinEnum<KmastodonKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Day of week
 * [value] is 3 letter shortcut
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.WeekDay)
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmastodonKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KmastodonKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) KmastodonKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) KmastodonKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) KmastodonKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) KmastodonKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) KmastodonKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) KmastodonKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (KmastodonKotlinArray<KmastodonKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<KmastodonKtor_utilsWeekDay *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end


/**
 * Month
 * [value] is 3 letter shortcut
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.Month)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface KmastodonKtor_utilsMonth : KmastodonKotlinEnum<KmastodonKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Month
 * [value] is 3 letter shortcut
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.Month)
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmastodonKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KmastodonKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) KmastodonKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) KmastodonKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) KmastodonKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) KmastodonKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) KmastodonKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) KmastodonKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) KmastodonKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) KmastodonKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) KmastodonKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) KmastodonKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) KmastodonKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (KmastodonKotlinArray<KmastodonKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<KmastodonKtor_utilsMonth *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface KmastodonKtor_utilsGMTDateCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));

/**
 * An instance of [GMTDate] corresponding to the epoch beginning
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.GMTDate.Companion.START)
 */
@property (readonly) KmastodonKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface KmastodonKtor_httpHttpStatusCodeCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));

/**
 * Creates an instance of [HttpStatusCode] with the given numeric value.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpStatusCode.Companion.fromValue)
 */
- (KmastodonKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *TooEarly __attribute__((swift_name("TooEarly")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) KmastodonKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));

/**
 * All known status codes
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpStatusCode.Companion.allStatusCodes)
 */
@property (readonly) NSArray<KmastodonKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface KmastodonKtor_httpHttpProtocolVersionCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));

/**
 * Creates an instance of [HttpProtocolVersion] from the given parameters.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpProtocolVersion.Companion.fromValue)
 */
- (KmastodonKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));

/**
 * Create an instance of [HttpProtocolVersion] from http string representation.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpProtocolVersion.Companion.parse)
 */
- (KmastodonKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));

/**
 * HTTP/1.0 version.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpProtocolVersion.Companion.HTTP_1_0)
 */
@property (readonly) KmastodonKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));

/**
 * HTTP/1.1 version.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpProtocolVersion.Companion.HTTP_1_1)
 */
@property (readonly) KmastodonKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));

/**
 * HTTP/2.0 version.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpProtocolVersion.Companion.HTTP_2_0)
 */
@property (readonly) KmastodonKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));

/**
 * HTTP/3.0 version.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpProtocolVersion.Companion.HTTP_3_0)
 */
@property (readonly) KmastodonKtor_httpHttpProtocolVersion *HTTP_3_0 __attribute__((swift_name("HTTP_3_0")));

/**
 * QUIC/1.0 version.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpProtocolVersion.Companion.QUIC)
 */
@property (readonly) KmastodonKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));

/**
 * SPDY/3.0 version.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpProtocolVersion.Companion.SPDY_3)
 */
@property (readonly) KmastodonKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end


/**
 * Serves as the base interface for an [HttpClient]'s engine.
 *
 * An `HttpClientEngine` represents the underlying network implementation that
 * performs HTTP requests and handles responses.
 * Developers can implement this interface to create custom engines for use with [HttpClient].
 *
 * This interface provides a set of properties and methods that define the
 * contract for configuring, executing, and managing HTTP requests within the engine.
 *
 * For a base implementation that handles common engine functionality, see [HttpClientEngineBase].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngine)
 */
__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol KmastodonKtor_client_coreHttpClientEngine <KmastodonKotlinx_coroutines_coreCoroutineScope, KmastodonKtor_ioCloseable>
@required

/**
 * Executes an HTTP request and produces an HTTP response.
 *
 * This function takes [HttpRequestData], which contains all details of the HTTP request,
 * and returns [HttpResponseData] with the server's response, including headers, status code, and body.
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngine.execute)
 *
 * @param data The [HttpRequestData] representing the request to be executed.
 * @return An [HttpResponseData] object containing the server's response.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(KmastodonKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(KmastodonKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));

/**
 * Installs the engine into an [HttpClient].
 *
 * This method is called when the engine is being set up within an `HttpClient`.
 * Use it to register interceptors, validate configuration, or prepare the engine
 * for use with the client.
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngine.install)
 *
 * @param client The [HttpClient] instance to which the engine is being installed.
 */
- (void)installClient:(KmastodonKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));

/**
 * Provides access to the engine's configuration via [HttpClientEngineConfig].
 *
 * The [config] object stores user-defined parameters or settings that control
 * how the engine operates. When creating a custom engine, this property
 * should return the specific configuration implementation.
 *
 * Example:
 * ```kotlin
 * override val config: HttpClientEngineConfig = CustomEngineConfig()
 * ```
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngine.config)
 */
@property (readonly) KmastodonKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));

/**
 * Specifies the [CoroutineDispatcher] for I/O operations in the engine.
 *
 * This dispatcher is used for all network-related operations, such as
 * sending requests and receiving responses.
 * By default, it should be optimized for I/O tasks.
 *
 * Example:
 * ```kotlin
 * override val dispatcher: CoroutineDispatcher = Dispatchers.IO
 * ```
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngine.dispatcher)
 */
@property (readonly) KmastodonKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));

/**
 * Specifies the set of capabilities supported by this HTTP client engine.
 *
 * Capabilities provide a mechanism for plugins and other components to
 * determine whether the engine supports specific features such as timeouts,
 * WebSocket communication, HTTP/2, HTTP/3, or other advanced networking
 * capabilities. This allows seamless integration of features based on the
 * engine's functionality.
 *
 * Each capability is represented as an instance of [HttpClientEngineCapability],
 * which can carry additional metadata or configurations for the capability.
 *
 * Example:
 * ```kotlin
 * override val supportedCapabilities: Set<HttpClientEngineCapability<*>> = setOf(
 *     WebSocketCapability,
 *     Http2Capability,
 *     TimeoutCapability
 * )
 * ```
 *
 * **Usage in Plugins**:
 * Plugins can check if the engine supports a specific capability before
 * applying behavior:
 * ```kotlin
 * if (engine.supportedCapabilities.contains(WebSocketCapability)) {
 *     // Configure WebSocket-specific settings
 * }
 * ```
 *
 * When implementing a custom engine, ensure this property accurately reflects
 * the engine's abilities to avoid unexpected plugin behavior or runtime errors.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngine.supportedCapabilities)
 */
@property (readonly) NSSet<id<KmastodonKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end


/**
 * Base configuration for [HttpClientEngine].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngineConfig)
 */
__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface KmastodonKtor_client_coreHttpClientEngineConfig : KmastodonBase

/**
 * Base configuration for [HttpClientEngine].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngineConfig)
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Base configuration for [HttpClientEngine].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngineConfig)
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * Allow specifying the coroutine dispatcher to use for IO operations.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngineConfig.dispatcher)
 */
@property KmastodonKotlinx_coroutines_coreCoroutineDispatcher * _Nullable dispatcher __attribute__((swift_name("dispatcher")));

/**
 * Enables HTTP pipelining advice.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngineConfig.pipelining)
 */
@property BOOL pipelining __attribute__((swift_name("pipelining")));

/**
 * Specifies a proxy address to use.
 * Uses a system proxy by default.
 *
 * You can learn more from [Proxy](https://ktor.io/docs/proxy.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngineConfig.proxy)
 */
@property KmastodonKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));

/**
 * Specifies network threads count advice.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngineConfig.threadsCount)
 */
@property int32_t threadsCount __attribute__((swift_name("threadsCount"))) __attribute__((unavailable("The [threadsCount] property is deprecated. Consider setting [dispatcher] instead.")));
@end


/**
 * A mutable [HttpClient] configuration used to adjust settings, install plugins and interceptors.
 *
 * This configuration can be provided as a lambda in the [HttpClient] constructor or the [HttpClient.config] builder:
 * ```kotlin
 * val client = HttpClient { // HttpClientConfig<Engine>()
 *     // Configure engine settings
 *     engine { // HttpClientEngineConfig
 *         threadsCount = 4
 *         pipelining = true
 *     }
 *
 *     // Install and configure plugins
 *     install(ContentNegotiation) {
 *         json()
 *     }
 *
 *     // Configure default request parameters
 *     defaultRequest {
 *         url("https://api.example.com")
 *         header("X-Custom-Header", "value")
 *     }
 *
 *     // Configure client-wide settings
 *     expectSuccess = true
 *     followRedirects = true
 * }
 * ```
 * ## Configuring [HttpClientEngine]
 *
 * If the engine is specified explicitly, engine-specific properties will be available in the `engine` block:
 * ```kotlin
 * val client = HttpClient(CIO) { // HttpClientConfig<CIOEngineConfig>.() -> Unit
 *     engine { // CIOEngineConfig.() -> Unit
 *         // engine specific properties
 *     }
 * }
 * ```
 *
 * Learn more about the client's configuration from
 * [Creating and configuring a client](https://ktor.io/docs/create-client.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface KmastodonKtor_client_coreHttpClientConfig<T> : KmastodonBase

/**
 * A mutable [HttpClient] configuration used to adjust settings, install plugins and interceptors.
 *
 * This configuration can be provided as a lambda in the [HttpClient] constructor or the [HttpClient.config] builder:
 * ```kotlin
 * val client = HttpClient { // HttpClientConfig<Engine>()
 *     // Configure engine settings
 *     engine { // HttpClientEngineConfig
 *         threadsCount = 4
 *         pipelining = true
 *     }
 *
 *     // Install and configure plugins
 *     install(ContentNegotiation) {
 *         json()
 *     }
 *
 *     // Configure default request parameters
 *     defaultRequest {
 *         url("https://api.example.com")
 *         header("X-Custom-Header", "value")
 *     }
 *
 *     // Configure client-wide settings
 *     expectSuccess = true
 *     followRedirects = true
 * }
 * ```
 * ## Configuring [HttpClientEngine]
 *
 * If the engine is specified explicitly, engine-specific properties will be available in the `engine` block:
 * ```kotlin
 * val client = HttpClient(CIO) { // HttpClientConfig<CIOEngineConfig>.() -> Unit
 *     engine { // CIOEngineConfig.() -> Unit
 *         // engine specific properties
 *     }
 * }
 * ```
 *
 * Learn more about the client's configuration from
 * [Creating and configuring a client](https://ktor.io/docs/create-client.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig)
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * A mutable [HttpClient] configuration used to adjust settings, install plugins and interceptors.
 *
 * This configuration can be provided as a lambda in the [HttpClient] constructor or the [HttpClient.config] builder:
 * ```kotlin
 * val client = HttpClient { // HttpClientConfig<Engine>()
 *     // Configure engine settings
 *     engine { // HttpClientEngineConfig
 *         threadsCount = 4
 *         pipelining = true
 *     }
 *
 *     // Install and configure plugins
 *     install(ContentNegotiation) {
 *         json()
 *     }
 *
 *     // Configure default request parameters
 *     defaultRequest {
 *         url("https://api.example.com")
 *         header("X-Custom-Header", "value")
 *     }
 *
 *     // Configure client-wide settings
 *     expectSuccess = true
 *     followRedirects = true
 * }
 * ```
 * ## Configuring [HttpClientEngine]
 *
 * If the engine is specified explicitly, engine-specific properties will be available in the `engine` block:
 * ```kotlin
 * val client = HttpClient(CIO) { // HttpClientConfig<CIOEngineConfig>.() -> Unit
 *     engine { // CIOEngineConfig.() -> Unit
 *         // engine specific properties
 *     }
 * }
 * ```
 *
 * Learn more about the client's configuration from
 * [Creating and configuring a client](https://ktor.io/docs/create-client.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig)
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * Clones this [HttpClientConfig] by duplicating all the [plugins] and [customInterceptors].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig.clone)
 */
- (KmastodonKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));

/**
 * A builder for configuring engine-specific settings in [HttpClientEngineConfig],
 * such as dispatcher, thread count, proxy, and more.
 *
 * ```kotlin
 * val client = HttpClient(CIO) { // HttpClientConfig<CIOEngineConfig>
 *     engine { // CIOEngineConfig.() -> Unit
 *         proxy = ProxyBuilder.http("proxy.example.com", 8080)
 *     }
 * ```
 *
 * You can learn more from [Engines](https://ktor.io/docs/http-client-engines.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig.engine)
 */
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));

/**
 * Applies all the installed [plugins] and [customInterceptors] from this configuration
 * into the specified [client].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig.install)
 */
- (void)installClient:(KmastodonKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));

/**
 * Installs the specified [plugin] and optionally configures it using the [configure] block.
 *
 * ```kotlin
 * val client = HttpClient {
 *     install(ContentNegotiation) {
 *         // configuration block
 *         json()
 *     }
 * }
 * ```
 *
 * If the plugin is already installed, the configuration block will be applied to the existing configuration class.
 *
 * Learn more from [Plugins](https://ktor.io/docs/http-client-plugins.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig.install)
 */
- (void)installPlugin:(id<KmastodonKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));

/**
 * Installs an interceptor defined by [block].
 * The [key] parameter is used as a unique name, that also prevents installing duplicated interceptors.
 *
 * If the [key] is already used, the new interceptor will replace the old one.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig.install)
 */
- (void)installKey:(NSString *)key block:(void (^)(KmastodonKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));

/**
 * Installs the specified [plugin] and optionally configures it using the [configure] block.
 * If the plugin is already installed, the configuration block will replace the existing configuration class.
 *
 * ```kotlin
 * val client = HttpClient {
 *     installOrReplace(ContentNegotiation) {
 *         // configuration block
 *         json()
 *     }
 * }
 * ```
 *
 * Learn more from [Plugins](https://ktor.io/docs/http-client-plugins.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig.installOrReplace)
 */
- (void)installOrReplacePlugin:(id<KmastodonKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("installOrReplace(plugin:configure:)")));

/**
 * Installs the plugin from the [other] client's configuration.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig.plusAssign)
 */
- (void)plusAssignOther:(KmastodonKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));

/**
 * Development mode is no longer required all functionality is enabled by default. The property is safe to remove.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig.developmentMode)
 */
@property BOOL developmentMode __attribute__((swift_name("developmentMode"))) __attribute__((deprecated("Development mode is no longer required. The property will be removed in the future.")));

/**
 * Terminates [HttpClient.receivePipeline] if the status code is not successful (>=300).
 * Learn more from [Response validation](https://ktor.io/docs/response-validation.html).
 *
 * For more details, see the [HttpCallValidator] documentation.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig.expectSuccess)
 */
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));

/**
 * Specifies whether the client redirects to URLs provided in the `Location` header.
 * You can disable redirections by setting this property to `false`.
 *
 * For an advanced redirection configuration, use the [HttpRedirect] plugin.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig.followRedirects)
 */
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));

/**
 * Enables body transformations for many common types like [String], [ByteArray], [ByteReadChannel], etc.
 * These transformations are applied to the request and response bodies.
 *
 * The transformers will be used when the response body is received with a type:
 * ```kotlin
 * val client = HttpClient()
 * val bytes = client.get("https://ktor.io")
 *                   .body<ByteArray>()
 * ```
 *
 * This flag is enabled by default.
 * You might want to disable it if you want to write your own transformers or handle body manually.
 *
 * For more details, see the [defaultTransformers] documentation.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.HttpClientConfig.useDefaultTransformers)
 */
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end


/**
 * Represents a capability that an [HttpClientEngine] can support, with [T] representing the type
 * of configuration or metadata associated with the capability.
 *
 * Capabilities are used to declare optional features or behaviors that an engine may support,
 * such as WebSocket communication, HTTP/2, or custom timeouts. They enable plugins and request
 * builders to configure engine-specific functionality by associating a capability with a
 * specific configuration.
 *
 * Capabilities can be set on a per-request basis using the `HttpRequestBuilder.setCapability` method,
 * allowing users to configure engine-specific behavior for individual requests.
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.HttpClientEngineCapability)
 *
 * @param T The type of the configuration or metadata associated with this capability.
 *
 * Example:
 * Suppose you have a custom capability for WebSocket support that requires a specific configuration:
 * ```kotlin
 * object WebSocketCapability : HttpClientEngineCapability<WebSocketConfig>
 *
 * data class WebSocketConfig(val maxFrameSize: Int, val pingIntervalMillis: Long)
 * ```
 *
 * Setting a capability in a request:
 * ```kotlin
 * client.request {
 *     setCapability(WebSocketCapability, WebSocketConfig(
 *         maxFrameSize = 65536,
 *         pingIntervalMillis = 30000
 *     ))
 * }
 * ```
 *
 * Engine Example:
 * A custom engine implementation can declare support for specific capabilities in its `supportedCapabilities` property:
 * ```kotlin
 * override val supportedCapabilities: Set<HttpClientEngineCapability<*>> = setOf(WebSocketCapability)
 * ```
 *
 * Plugin Integration Example:
 * Plugins use capabilities to interact with engine-specific features. For example:
 * ```kotlin
 * if (engine.supportedCapabilities.contains(WebSocketCapability)) {
 *     // Configure WebSocket behavior if supported by the engine
 * }
 * ```
 *
 * When creating a custom capability:
 * - Define a singleton object implementing `HttpClientEngineCapability`.
 * - Use the type parameter [T] to provide the associated configuration type or metadata.
 * - Ensure that engines supporting the capability handle the associated configuration properly.
 */
__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol KmastodonKtor_client_coreHttpClientEngineCapability
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface KmastodonKtor_eventsEvents : KmastodonBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * Raises the event specified by [definition] with the [value] and calls all handlers.
 *
 * Handlers are called in order of subscriptions.
 * If some handler throws an exception, all remaining handlers will still run. The exception will eventually be re-thrown.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.events.Events.raise)
 */
- (void)raiseDefinition:(KmastodonKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));

/**
 * Subscribe [handler] to an event specified by [definition]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.events.Events.subscribe)
 */
- (id<KmastodonKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(KmastodonKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));

/**
 * Unsubscribe [handler] from an event specified by [definition]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.events.Events.unsubscribe)
 */
- (void)unsubscribeDefinition:(KmastodonKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end


/**
 * Represents an execution pipeline for asynchronous extensible computations
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline)
 */
__attribute__((swift_name("Ktor_utilsPipeline")))
@interface KmastodonKtor_utilsPipeline<TSubject, TContext> : KmastodonBase
- (instancetype)initWithPhases:(KmastodonKotlinArray<KmastodonKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(KmastodonKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<KmastodonKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));

/**
 * Adds [phase] to the end of this pipeline
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.addPhase)
 */
- (void)addPhasePhase:(KmastodonKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));

/**
 * Invoked after an interceptor has been installed
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.afterIntercepted)
 */
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 * Executes this pipeline in the given [context] and with the given [subject]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.execute)
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));

/**
 * Inserts [phase] after the [reference] phase. If there are other phases inserted after [reference], then [phase]
 * will be inserted after them.
 * Example:
 * ```
 * val pipeline = Pipeline<String, String>(a)
 * pipeline.insertPhaseAfter(a, b)
 * pipeline.insertPhaseAfter(a, c)
 * assertEquals(listOf(a, b, c), pipeline.items)
 * ```
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.insertPhaseAfter)
 */
- (void)insertPhaseAfterReference:(KmastodonKtor_utilsPipelinePhase *)reference phase:(KmastodonKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));

/**
 * Inserts [phase] before the [reference] phase.
 * Example:
 * ```
 * val pipeline = Pipeline<String, String>(c)
 * pipeline.insertPhaseBefore(c, a)
 * pipeline.insertPhaseBefore(c, b)
 * assertEquals(listOf(a, b, c), pipeline.items)
 * ```
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.insertPhaseBefore)
 */
- (void)insertPhaseBeforeReference:(KmastodonKtor_utilsPipelinePhase *)reference phase:(KmastodonKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));

/**
 * Adds [block] to the [phase] of this pipeline
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.intercept)
 */
- (void)interceptPhase:(KmastodonKtor_utilsPipelinePhase *)phase block:(id<KmastodonKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<KmastodonKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(KmastodonKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));

/**
 * Merges another pipeline into this pipeline, maintaining relative phases order
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.merge)
 */
- (void)mergeFrom:(KmastodonKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(KmastodonKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));

/**
 * Reset current pipeline from other.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.resetFrom)
 */
- (void)resetFromFrom:(KmastodonKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * Provides common place to store pipeline attributes
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.attributes)
 */
@property (readonly) id<KmastodonKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));

/**
 * Indicated if debug mode is enabled. In debug mode users will get more details in the stacktrace.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.developmentMode)
 */
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));

/**
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.isEmpty)
 *
 * @return `true` if there are no interceptors installed regardless number of phases
 */
@property (readonly, getter=isEmpty_) BOOL isEmpty __attribute__((swift_name("isEmpty")));

/**
 * Phases of this pipeline
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.Pipeline.items)
 */
@property (readonly) NSArray<KmastodonKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end


/**
 * [HttpClient] Pipeline used for receiving [HttpResponse] without any processing.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpReceivePipeline)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface KmastodonKtor_client_coreHttpReceivePipeline : KmastodonKtor_utilsPipeline<KmastodonKtor_client_coreHttpResponse *, KmastodonKotlinUnit *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(KmastodonKotlinArray<KmastodonKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(KmastodonKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<KmastodonKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmastodonKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end


/**
 * An [HttpClient]'s pipeline used for executing [HttpRequest].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestPipeline)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface KmastodonKtor_client_coreHttpRequestPipeline : KmastodonKtor_utilsPipeline<id, KmastodonKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(KmastodonKotlinArray<KmastodonKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(KmastodonKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<KmastodonKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmastodonKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end


/**
 * [HttpClient] Pipeline used for executing [HttpResponse].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponsePipeline)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface KmastodonKtor_client_coreHttpResponsePipeline : KmastodonKtor_utilsPipeline<KmastodonKtor_client_coreHttpResponseContainer *, KmastodonKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(KmastodonKotlinArray<KmastodonKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(KmastodonKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<KmastodonKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmastodonKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end


/**
 * An [HttpClient]'s pipeline used for sending [HttpRequest] to a remote server.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpSendPipeline)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface KmastodonKtor_client_coreHttpSendPipeline : KmastodonKtor_utilsPipeline<id, KmastodonKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(KmastodonKotlinArray<KmastodonKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(KmastodonKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<KmastodonKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmastodonKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((swift_name("Ktor_ioJvmSerializable")))
@protocol KmastodonKtor_ioJvmSerializable
@required
@end


/**
 * Represents an immutable URL
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.Url)
 *
 * @property protocol
 * @property host name without port (domain)
 * @property port the specified port or protocol default port
 * @property specifiedPort port number that was specified to override protocol's default
 * @property encodedPath encoded path without query string
 * @property parameters URL query parameters
 * @property fragment URL fragment (anchor name)
 * @property user username part of URL
 * @property password password part of URL
 * @property trailingQuery keep trailing question character even if there are no query parameters
 *
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=io/ktor/http/UrlSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface KmastodonKtor_httpUrl : KmastodonBase <KmastodonKtor_ioJvmSerializable>
@property (class, readonly, getter=companion) KmastodonKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property (readonly) NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *encodedPathAndQuery __attribute__((swift_name("encodedPathAndQuery")));
@property (readonly) NSString *encodedQuery __attribute__((swift_name("encodedQuery")));
@property (readonly) NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<KmastodonKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));

/**
 * A list containing the segments of the URL path.
 *
 * This property was designed to distinguish between absolute and relative paths,
 * so it will have an empty segment at the beginning for URLs with a hostname
 * and an empty segment at the end for URLs with a trailing slash.
 *
 * ```kotlin
 * val fullUrl = Url("http://ktor.io/docs/")
 * fullUrl.pathSegments == listOf("", "docs", "")
 *
 * val absolute = Url("/docs/")
 * absolute.pathSegments == listOf("", "docs", "")
 *
 * val relative = Url("docs")
 * relative.pathSegments == listOf("docs")
 * ```
 *
 * This behaviour may not be ideal if you're working only with full URLs.
 * If you don't require the specific handling of empty segments, consider using the [segments] property instead:
 *
 * ```kotlin
 * val fullUrl = Url("http://ktor.io/docs/")
 * fullUrl.segments == listOf("docs")
 *
 * val absolute = Url("/docs/")
 * absolute.segments == listOf("docs")
 *
 * val relative = Url("docs")
 * relative.segments == listOf("docs")
 * ```
 *
 * To address this issue, the current [pathSegments] property will be renamed to [rawSegments].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.Url.pathSegments)
 */
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments"))) __attribute__((deprecated("\n        `pathSegments` is deprecated.\n\n        This property will contain an empty path segment at the beginning for URLs with a hostname,\n        and an empty path segment at the end for the URLs with a trailing slash. If you need to keep this behaviour please\n        use [rawSegments]. If you only need to access the meaningful parts of the path, consider using [segments] instead.\n             \n        Please decide if you need [rawSegments] or [segments] explicitly.\n        ")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) KmastodonKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) KmastodonKtor_httpURLProtocol * _Nullable protocolOrNull __attribute__((swift_name("protocolOrNull")));

/**
 * A list containing the segments of the URL path.
 *
 * This property is designed to distinguish between absolute and relative paths,
 * so it will have an empty segment at the beginning for URLs with a hostname
 * and an empty segment at the end for URLs with a trailing slash.
 *
 * ```kotlin
 * val fullUrl = Url("http://ktor.io/docs/")
 * fullUrl.rawSegments == listOf("", "docs", "")
 *
 * val absolute = Url("/docs/")
 * absolute.rawSegments == listOf("", "docs", "")
 *
 * val relative = Url("docs")
 * relative.rawSegments == listOf("docs")
 * ```
 *
 * This behaviour may not be ideal if you're working only with full URLs.
 * If you don't require the specific handling of empty segments, consider using the [segments] property instead:
 *
 * ```kotlin
 * val fullUrl = Url("http://ktor.io/docs/")
 * fullUrl.segments == listOf("docs")
 *
 * val absolute = Url("/docs/")
 * absolute.segments == listOf("docs")
 *
 * val relative = Url("docs")
 * relative.segments == listOf("docs")
 * ```
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.Url.rawSegments)
 */
@property (readonly) NSArray<NSString *> *rawSegments __attribute__((swift_name("rawSegments")));

/**
 * A list of path segments derived from the URL, excluding any leading
 * and trailing empty segments.
 *
 * ```kotlin
 * val fullUrl = Url("http://ktor.io/docs/")
 * fullUrl.segments == listOf("docs")
 *
 * val absolute = Url("/docs/")
 * absolute.segments == listOf("docs")
 * val relative = Url("docs")
 * relative.segments == listOf("docs")
 * ```
 *
 * If you need to check for trailing slash and relative/absolute paths, please check the [rawSegments] property.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.Url.segments)
 **/
@property (readonly) NSArray<NSString *> *segments __attribute__((swift_name("segments")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end


/**
 * Represents an HTTP method (verb)
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpMethod)
 *
 * @property value contains method name
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface KmastodonKtor_httpHttpMethod : KmastodonBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmastodonKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (KmastodonKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));

/**
 * Represents an HTTP method (verb)
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpMethod)
 *
 * @property value contains method name
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Represents an HTTP method (verb)
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpMethod)
 *
 * @property value contains method name
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end


/**
 * Information about the content to be sent to the peer, recognized by a client or server engine
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.content.OutgoingContent)
 */
__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface KmastodonKtor_httpOutgoingContent : KmastodonBase

/**
 * Gets an extension property for this content
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.content.OutgoingContent.getProperty)
 */
- (id _Nullable)getPropertyKey:(KmastodonKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));

/**
 * Sets an extension property for this content
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.content.OutgoingContent.setProperty)
 */
- (void)setPropertyKey:(KmastodonKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));

/**
 * Trailers to set when sending this content, will be ignored if request is not in HTTP2 mode
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.content.OutgoingContent.trailers)
 */
- (id<KmastodonKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));

/**
 * Specifies content length in bytes for this resource.
 *
 * If null, the resources will be sent as `Transfer-Encoding: chunked`
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.content.OutgoingContent.contentLength)
 */
@property (readonly) KmastodonLong * _Nullable contentLength __attribute__((swift_name("contentLength")));

/**
 * Specifies [ContentType] for this resource.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.content.OutgoingContent.contentType)
 */
@property (readonly) KmastodonKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));

/**
 * Headers to set when sending this content
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.content.OutgoingContent.headers)
 */
@property (readonly) id<KmastodonKtor_httpHeaders> headers __attribute__((swift_name("headers")));

/**
 * Status code to set when sending this content
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.content.OutgoingContent.status)
 */
@property (readonly) KmastodonKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end


/**
 * A background job.
 * Conceptually, a job is a cancellable thing with a lifecycle that
 * concludes in its completion.
 *
 * Jobs can be arranged into parent-child hierarchies where the cancellation
 * of a parent leads to the immediate cancellation of all its [children] recursively.
 * Failure of a child with an exception other than [CancellationException] immediately cancels its parent and,
 * consequently, all its other children.
 * This behavior can be customized using [SupervisorJob].
 *
 * The most basic instances of the `Job` interface are created like this:
 *
 * - A **coroutine job** is created with the [launch][CoroutineScope.launch] coroutine builder.
 *   It runs a specified block of code and completes upon completion of this block.
 * - **[CompletableJob]** is created with a `Job()` factory function.
 *   It is completed by calling [CompletableJob.complete].
 *
 * Conceptually, an execution of a job does not produce a result value.
 * Jobs are launched solely for their
 * side effects.
 * See the [Deferred] interface for a job that produces a result.
 *
 * ### Job states
 *
 * A job has the following states:
 *
 * | **State**                        | [isActive] | [isCompleted] | [isCancelled] |
 * | -------------------------------- | ---------- | ------------- | ------------- |
 * | _New_ (optional initial state)   | `false`    | `false`       | `false`       |
 * | _Active_ (default initial state) | `true`     | `false`       | `false`       |
 * | _Completing_ (transient state)   | `true`     | `false`       | `false`       |
 * | _Cancelling_ (transient state)   | `false`    | `false`       | `true`        |
 * | _Cancelled_ (final state)        | `false`    | `true`        | `true`        |
 * | _Completed_ (final state)        | `false`    | `true`        | `false`       |
 *
 *
 * Note that these states are mentioned in italics below to make them easier to distinguish.
 *
 * Usually, a job is created in the _active_ state (it is created and started).
 * However, coroutine builders
 * that provide an optional `start` parameter create a coroutine in the _new_ state when this parameter is set to
 * [CoroutineStart.LAZY].
 * Such a job can be made _active_ by invoking [start] or [join].
 *
 * A job is in the _active_ state while the coroutine is working or until the [CompletableJob] completes,
 * fails, or is cancelled.
 *
 * Failure of an _active_ job with an exception transitions the state to the _cancelling_ state.
 * A job can be cancelled at any time with the [cancel] function that forces it to transition to
 * the _cancelling_ state immediately.
 * The job becomes _cancelled_ when it finishes executing its work and
 * all its children complete.
 *
 * Completion of an _active_ coroutine's body or a call to [CompletableJob.complete] transitions the job to
 * the _completing_ state.
 * It waits in the _completing_ state for all its children to complete before
 * transitioning to the _completed_ state.
 * Note that _completing_ state is purely internal to the job.
 * For an outside observer, a _completing_ job is still
 * active, while internally it is waiting for its children.
 *
 * ```
 *                                       wait children
 * +-----+ start  +--------+ complete   +-------------+  finish  +-----------+
 * | New | -----> | Active | ---------> | Completing  | -------> | Completed |
 * +-----+        +--------+            +-------------+          +-----------+
 *                  |  cancel / fail       |
 *                  |     +----------------+
 *                  |     |
 *                  V     V
 *              +------------+                           finish  +-----------+
 *              | Cancelling | --------------------------------> | Cancelled |
 *              +------------+                                   +-----------+
 * ```
 *
 * A `Job` instance in the
 * [coroutineContext](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin.coroutines/coroutine-context.html)
 * represents the coroutine itself.
 *
 * ### Cancellation cause
 *
 * A coroutine job is said to _complete exceptionally_ when its body throws an exception;
 * a [CompletableJob] is completed exceptionally by calling [CompletableJob.completeExceptionally].
 * An exceptionally completed job is cancelled,
 * and the corresponding exception becomes the _cancellation cause_ of the job.
 *
 * Normal cancellation of a job is distinguished from its failure by the exception
 * that caused its cancellation.
 * A coroutine that throws a [CancellationException] is considered to be _cancelled_ normally.
 * If a different exception causes the cancellation, then the job has _failed_.
 * When a job has _failed_, its parent gets cancelled with the same type of exception,
 * thus ensuring transparency in delegating parts of the job to its children.
 *
 * Note, that the [cancel] function on a job only accepts a [CancellationException] as a cancellation cause, thus
 * calling [cancel] always results in a normal cancellation of a job, which does not lead to cancellation
 * of its parent.
 * This way, a parent can [cancel] its children (cancelling all their children recursively, too)
 * without cancelling itself.
 *
 * ### Concurrency and synchronization
 *
 * All functions on this interface and on all interfaces derived from it are **thread-safe** and can
 * be safely invoked from concurrent coroutines without external synchronization.
 *
 * @note annotations
 *   kotlin.SubclassOptInRequired(markerClass=[NormalClass(value=kotlinx/coroutines/InternalForInheritanceCoroutinesApi)])
*/
__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol KmastodonKotlinx_coroutines_coreJob <KmastodonKotlinCoroutineContextElement>
@required

/**
 * Attaches a child job so that this job becomes its parent and
 * returns a handle that should be used to detach it.
 *
 * A parent-child relation has the following effect:
 * - Cancellation of parent with [cancel] or its exceptional completion (failure)
 *   immediately cancels all its children.
 * - Parent cannot complete until all its children are complete. Parent waits for all its children to
 *   complete in _completing_ or _cancelling_ states.
 *
 * **A child must store the resulting [ChildHandle] and [dispose][DisposableHandle.dispose] the attachment
 * to its parent on its own completion.**
 *
 * Coroutine builders and job factory functions that accept `parent` [CoroutineContext] parameter
 * lookup a [Job] instance in the parent context and use this function to attach themselves as a child.
 * They also store a reference to the resulting [ChildHandle] and dispose a handle when they complete.
 *
 * @suppress This is an internal API. This method is too error-prone for public API.
 * Used in IntelliJ.
 *
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (id<KmastodonKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<KmastodonKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));

/**
 * Cancels this job with an optional cancellation [cause].
 * A cause can be used to specify an error message or to provide other details on
 * the cancellation reason for debugging purposes.
 * See [Job] documentation for full explanation of cancellation machinery.
 */
- (void)cancelCause_:(KmastodonKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));

/**
 * Returns [CancellationException] that signals the completion of this job. This function is
 * used by [cancellable][suspendCancellableCoroutine] suspending functions. They throw exception
 * returned by this function when they suspend in the context of this job and this job becomes _complete_.
 *
 * This function returns the original [cancel] cause of this job if that `cause` was an instance of
 * [CancellationException]. Otherwise (if this job was cancelled with a cause of a different type, or
 * was cancelled without a cause, or had completed normally), an instance of [CancellationException] is
 * returned. The [CancellationException.cause] of the resulting [CancellationException] references
 * the original cancellation cause that was passed to [cancel] function.
 *
 * This function throws [IllegalStateException] when invoked on a job that is still active.
 *
 * @suppress **This an internal API and should not be used from general code.**
 *
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (KmastodonKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));

/**
 * Registers handler that is **synchronously** invoked once on completion of this job.
 * When the job is already complete, then the handler is immediately invoked
 * with the job's exception or cancellation cause or `null`. Otherwise, the handler will be invoked once when this
 * job is complete.
 *
 * The meaning of `cause` that is passed to the handler:
 * - Cause is `null` when the job has completed normally.
 * - Cause is an instance of [CancellationException] when the job was cancelled _normally_.
 *   **It should not be treated as an error**. In particular, it should not be reported to error logs.
 * - Otherwise, the job had _failed_.
 *
 * The resulting [DisposableHandle] can be used to [dispose][DisposableHandle.dispose] the
 * registration of this handler and release its memory if its invocation is no longer needed.
 * There is no need to dispose the handler after completion of this job. The references to
 * all the handlers are released when this job completes.
 *
 * Installed [handler] should not throw any exceptions. If it does, they will get caught,
 * wrapped into [CompletionHandlerException], and rethrown, potentially causing crash of unrelated code.
 *
 * **Note**: Implementation of `CompletionHandler` must be fast, non-blocking, and thread-safe.
 * This handler can be invoked concurrently with the surrounding code.
 * There is no guarantee on the execution context in which the [handler] is invoked.
 */
- (id<KmastodonKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(KmastodonKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 * Kept for preserving compatibility. Shouldn't be used by anyone.
 * @suppress
 *
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (id<KmastodonKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(KmastodonKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));

/**
 * Suspends the coroutine until this job is complete. This invocation resumes normally (without exception)
 * when the job is complete for any reason and the [Job] of the invoking coroutine is still [active][isActive].
 * This function also [starts][Job.start] the corresponding coroutine if the [Job] was still in _new_ state.
 *
 * Note that the job becomes complete only when all its children are complete.
 *
 * This suspending function is cancellable and **always** checks for a cancellation of the invoking coroutine's Job.
 * If the [Job] of the invoking coroutine is cancelled or completed when this
 * suspending function is invoked or while it is suspended, this function
 * throws [CancellationException].
 *
 * In particular, it means that a parent coroutine invoking `join` on a child coroutine throws
 * [CancellationException] if the child had failed, since a failure of a child coroutine cancels parent by default,
 * unless the child was launched from within [supervisorScope].
 *
 * This function can be used in [select] invocation with [onJoin] clause.
 * Use [isCompleted] to check for a completion of this job without waiting.
 *
 * There is [cancelAndJoin] function that combines an invocation of [cancel] and `join`.
 *
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));

/**
 * @suppress **Error**: Operator '+' on two Job objects is meaningless.
 * Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts.
 * The job to the right of `+` just replaces the job the left of `+`.
 */
- (id<KmastodonKotlinx_coroutines_coreJob>)plusOther:(id<KmastodonKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));

/**
 * Starts coroutine related to this job (if any) if it was not started yet.
 * The result is `true` if this invocation actually started coroutine or `false`
 * if it was already started or completed.
 */
- (BOOL)start __attribute__((swift_name("start()")));

/**
 * Returns a sequence of this job's children.
 *
 * A job becomes a child of this job when it is constructed with this job in its
 * [CoroutineContext] or using an explicit `parent` parameter.
 *
 * A parent-child relation has the following effect:
 *
 * - Cancellation of parent with [cancel] or its exceptional completion (failure)
 *   immediately cancels all its children.
 * - Parent cannot complete until all its children are complete. Parent waits for all its children to
 *   complete in _completing_ or _cancelling_ state.
 * - Uncaught exception in a child, by default, cancels parent. This applies even to
 *   children created with [async][CoroutineScope.async] and other future-like
 *   coroutine builders, even though their exceptions are caught and are encapsulated in their result.
 *   This default behavior can be overridden with [SupervisorJob].
 */
@property (readonly) id<KmastodonKotlinSequence> children __attribute__((swift_name("children")));

/**
 * Returns `true` when this job is active -- it was already started and has not completed nor was cancelled yet.
 * The job that is waiting for its [children] to complete is still considered to be active if it
 * was not cancelled nor failed.
 *
 * See [Job] documentation for more details on job states.
 */
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));

/**
 * Returns `true` if this job was cancelled for any reason, either by explicit invocation of [cancel] or
 * because it had failed or its child or parent was cancelled.
 * In the general case, it does not imply that the
 * job has already [completed][isCompleted], because it may still be finishing whatever it was doing and
 * waiting for its [children] to complete.
 *
 * See [Job] documentation for more details on cancellation and failures.
 */
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));

/**
 * Returns `true` when this job has completed for any reason. A job that was cancelled or failed
 * and has finished its execution is also considered complete. Job becomes complete only after
 * all its [children] complete.
 *
 * See [Job] documentation for more details on job states.
 */
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));

/**
 * Clause for [select] expression of [join] suspending function that selects when the job is complete.
 * This clause never fails, even if the job completes exceptionally.
 */
@property (readonly) id<KmastodonKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));

/**
 * Returns the parent of the current job if the parent-child relationship
 * is established or `null` if the job has no parent or was successfully completed.
 *
 * Accesses to this property are not idempotent, the property becomes `null` as soon
 * as the job is transitioned to its final state, whether it is cancelled or completed,
 * and all job children are completed.
 *
 * For a coroutine, its corresponding job completes as soon as the coroutine itself
 * and all its children are complete.
 *
 * @see [Job] state transitions for additional details.
 *
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
@property (readonly) id<KmastodonKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((swift_name("KotlinKType")))
@protocol KmastodonKotlinKType
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) NSArray<KmastodonKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) id<KmastodonKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end


/**
 * Specifies a key for an attribute in [Attributes]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.AttributeKey)
 *
 * @param T is a type of the value stored in the attribute
 * @property name is a name of the attribute for diagnostic purposes. Can't be blank
 * @property type the recorded kotlin type of T
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface KmastodonKtor_utilsAttributeKey<T> : KmastodonBase
- (instancetype)initWithName:(NSString *)name type:(KmastodonKtor_utilsTypeInfo *)type __attribute__((swift_name("init(name:type:)"))) __attribute__((objc_designated_initializer));
- (KmastodonKtor_utilsAttributeKey<T> *)doCopyName:(NSString *)name type:(KmastodonKtor_utilsTypeInfo *)type __attribute__((swift_name("doCopy(name:type:)")));

/**
 * Specifies a key for an attribute in [Attributes]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.AttributeKey)
 *
 * @param T is a type of the value stored in the attribute
 * @property name is a name of the attribute for diagnostic purposes. Can't be blank
 * @property type the recorded kotlin type of T
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Specifies a key for an attribute in [Attributes]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.AttributeKey)
 *
 * @param T is a type of the value stored in the attribute
 * @property name is a name of the attribute for diagnostic purposes. Can't be blank
 * @property type the recorded kotlin type of T
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("Kotlinx_io_coreRawSink")))
@protocol KmastodonKotlinx_io_coreRawSink <KmastodonKotlinAutoCloseable>
@required
- (void)flush __attribute__((swift_name("flush()")));
- (void)writeSource:(KmastodonKotlinx_io_coreBuffer *)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
@end


/**
 * A sink that facilitates typed data writes and keeps a buffer internally so that caller can write some data without
 * sending it directly to an upstream.
 *
 * [Sink] is the main `kotlinx-io` interface to write data in client's code,
 * any [RawSink] could be turned into [Sink] using [RawSink.buffered].
 *
 * Depending on the kind of upstream and the number of bytes written, buffering may improve the performance
 * by hiding the latency of small writes.
 *
 * Data stored inside the internal buffer could be sent to an upstream using [flush], [emit], or [hintEmit]:
 * - [flush] writes the whole buffer to an upstream and then flushes the upstream.
 * - [emit] writes all data from the buffer into the upstream without flushing it.
 * - [hintEmit] hints the source that current write operation is now finished and a part of data from the buffer
 * may be partially emitted into the upstream.
 * The latter is aimed to reduce memory footprint by keeping the buffer as small as possible without excessive writes
 * to the upstream.
 * All write operations implicitly calls [hintEmit].
 *
 * ### Write methods' behavior and naming conventions
 *
 * Methods writing a value of some type are usually named `write<Type>`, like [writeByte] or [writeInt], except methods
 * writing data from a some collection of bytes, like `write(ByteArray, Int, Int)` or
 * `write(source: RawSource, byteCount: Long)`.
 * In the latter case, if a collection is consumable (i.e., once data was read from it will no longer be available for
 * reading again), write method will consume as many bytes as it was requested to write.
 *
 * Methods fully consuming its argument are named `transferFrom`, like [transferFrom].
 *
 * It is recommended to follow the same naming convention for Sink extensions.
 *
 * ### Thread-safety guarantees
 *
 * Until stated otherwise, [Sink] implementations are not thread safe.
 * If a [Sink] needs to be accessed from multiple threads, an additional synchronization is required.
 */
__attribute__((swift_name("Kotlinx_io_coreSink")))
@protocol KmastodonKotlinx_io_coreSink <KmastodonKotlinx_io_coreRawSink>
@required

/**
 * Writes all buffered data to the underlying sink if one exists.
 * The underlying sink will not be explicitly flushed.
 *
 * This method behaves like [flush], but has weaker guarantees.
 * Call this method before a buffered sink goes out of scope so that its data can reach its destination.
 *
 * @throws IllegalStateException when the sink is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.emit
 */
- (void)emit __attribute__((swift_name("emit()")));

/**
 * Hints that the buffer may be *partially* emitted (see [emit]) to the underlying sink.
 * The underlying sink will not be explicitly flushed.
 * There are no guarantees that this call will cause emit of buffered data as well as
 * there are no guarantees how many bytes will be emitted.
 *
 * Typically, application code will not need to call this: it is only necessary when
 * application code writes directly to this [buffered].
 * Use this to limit the memory held in the buffer.
 *
 * Consider using [Sink.writeToInternalBuffer] for writes into [buffered] followed by [hintEmit] call.
 *
 * @throws IllegalStateException when the sink is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
- (void)hintEmit __attribute__((swift_name("hintEmit()")));

/**
 * Removes all bytes from [source] and write them to this sink.
 * Returns the number of bytes read which will be 0 if [source] is exhausted.
 *
 * @param source the source to consume data from.
 *
 * @throws IllegalStateException when the sink or [source] is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.transferFrom
 *
 * @note annotations
 *   kotlin.IgnorableReturnValue
*/
- (int64_t)transferFromSource:(id<KmastodonKotlinx_io_coreRawSource>)source __attribute__((swift_name("transferFrom(source:)")));

/**
 * Removes [byteCount] bytes from [source] and write them to this sink.
 *
 * If [source] will be exhausted before reading [byteCount] from it then an exception throws on
 * an attempt to read remaining bytes will be propagated to a caller of this method.
 *
 * @param source the source to consume data from.
 * @param byteCount the number of bytes to read from [source] and to write into this sink.
 *
 * @throws IllegalArgumentException when [byteCount] is negative.
 * @throws IllegalStateException when the sink or [source] is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.writeSourceToSink
 */
- (void)writeSource:(id<KmastodonKotlinx_io_coreRawSource>)source byteCount_:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount_:)")));

/**
 * Writes bytes from [source] array or its subrange to this sink.
 *
 * @param source the array from which bytes will be written into this sink.
 * @param startIndex the start index (inclusive) of the [source] subrange to be written, 0 by default.
 * @param endIndex the endIndex (exclusive) of the [source] subrange to be written, size of the [source] by default.
 *
 * @throws IndexOutOfBoundsException when [startIndex] or [endIndex] is out of range of [source] array indices.
 * @throws IllegalArgumentException when `startIndex > endIndex`.
 * @throws IllegalStateException when the sink is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.writeByteArrayToSink
 */
- (void)writeSource:(KmastodonKotlinByteArray *)source startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("write(source:startIndex:endIndex:)")));

/**
 * Writes a byte to this sink.
 *
 * @param byte the byte to be written.
 *
 * @throws IllegalStateException when the sink is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.writeByte
 */
- (void)writeByteByte:(int8_t)byte __attribute__((swift_name("writeByte(byte:)")));

/**
 * Writes four bytes containing [int], in the big-endian order, to this sink.
 *
 * @param int the integer to be written.
 *
 * @throws IllegalStateException when the sink is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.writeInt
 */
- (void)writeIntInt:(int32_t)int_ __attribute__((swift_name("writeInt(int:)")));

/**
 * Writes eight bytes containing [long], in the big-endian order, to this sink.
 *
 * @param long the long integer to be written.
 *
 * @throws IllegalStateException when the sink is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.writeLong
 */
- (void)writeLongLong:(int64_t)long_ __attribute__((swift_name("writeLong(long:)")));

/**
 * Writes two bytes containing [short], in the big-endian order, to this sink.
 *
 * @param short the short integer to be written.
 *
 * @throws IllegalStateException when the sink is closed.
 * @throws IOException when some I/O error occurs.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.writeShort
 */
- (void)writeShortShort:(int16_t)short_ __attribute__((swift_name("writeShort(short:)")));

/**
 * This sink's internal buffer. It contains data written to the sink, but not yet flushed to the upstream.
 *
 * Incorrect use of the buffer may cause data loss or unexpected data being sent to the upstream.
 * Consider using alternative APIs to write data into the sink, if possible:
 * - write data into separate [Buffer] instance and write that buffer into the sink and then flush the sink to
 *   ensure that the upstream will receive complete data;
 * - implement [RawSink] and wrap an upstream sink into it to intercept data being written.
 *
 * If there is an actual need to write data directly into the buffer, consider using [Sink.writeToInternalBuffer] instead.
 *
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) KmastodonKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@end


/**
 * A collection of bytes in memory.
 *
 * The buffer can be viewed as an unbound queue whose size grows with the data being written
 * and shrinks with data being consumed. Internally, the buffer consists of data segments,
 * and the buffer's capacity grows and shrinks in units of data segments instead of individual bytes.
 *
 * The buffer was designed to reduce memory allocations when possible. Instead of copying bytes
 * from one place in memory to another, this class just changes ownership of the underlying data segments.
 *
 * To reduce allocations and speed up the buffer's extension, it may use data segments pooling.
 *
 * [Buffer] implements both [Source] and [Sink] and could be used as a source or a sink,
 * but unlike regular sinks and sources its [close], [flush], [emit], [hintEmit]
 * does not affect buffer's state and [exhausted] only indicates that a buffer is empty.
 *
 * ### Thread-safety guarantees
 *
 * [Buffer] does not provide any thread-safety guarantees.
 * If a [Buffer] needs to be accessed from multiple threads, an additional synchronization is required.
 * Failure to do so will result in possible data corruption, loss, and runtime errors.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_io_coreBuffer")))
@interface KmastodonKotlinx_io_coreBuffer : KmastodonBase <KmastodonKotlinx_io_coreSource, KmastodonKotlinx_io_coreSink>

/**
 * A collection of bytes in memory.
 *
 * The buffer can be viewed as an unbound queue whose size grows with the data being written
 * and shrinks with data being consumed. Internally, the buffer consists of data segments,
 * and the buffer's capacity grows and shrinks in units of data segments instead of individual bytes.
 *
 * The buffer was designed to reduce memory allocations when possible. Instead of copying bytes
 * from one place in memory to another, this class just changes ownership of the underlying data segments.
 *
 * To reduce allocations and speed up the buffer's extension, it may use data segments pooling.
 *
 * [Buffer] implements both [Source] and [Sink] and could be used as a source or a sink,
 * but unlike regular sinks and sources its [close], [flush], [emit], [hintEmit]
 * does not affect buffer's state and [exhausted] only indicates that a buffer is empty.
 *
 * ### Thread-safety guarantees
 *
 * [Buffer] does not provide any thread-safety guarantees.
 * If a [Buffer] needs to be accessed from multiple threads, an additional synchronization is required.
 * Failure to do so will result in possible data corruption, loss, and runtime errors.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * A collection of bytes in memory.
 *
 * The buffer can be viewed as an unbound queue whose size grows with the data being written
 * and shrinks with data being consumed. Internally, the buffer consists of data segments,
 * and the buffer's capacity grows and shrinks in units of data segments instead of individual bytes.
 *
 * The buffer was designed to reduce memory allocations when possible. Instead of copying bytes
 * from one place in memory to another, this class just changes ownership of the underlying data segments.
 *
 * To reduce allocations and speed up the buffer's extension, it may use data segments pooling.
 *
 * [Buffer] implements both [Source] and [Sink] and could be used as a source or a sink,
 * but unlike regular sinks and sources its [close], [flush], [emit], [hintEmit]
 * does not affect buffer's state and [exhausted] only indicates that a buffer is empty.
 *
 * ### Thread-safety guarantees
 *
 * [Buffer] does not provide any thread-safety guarantees.
 * If a [Buffer] needs to be accessed from multiple threads, an additional synchronization is required.
 * Failure to do so will result in possible data corruption, loss, and runtime errors.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * Discards all bytes in this buffer.
 *
 * Call to this method is equivalent to [skip] with `byteCount = size`.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.bufferClear
 */
- (void)clear __attribute__((swift_name("clear()")));

/**
 * This method does not affect the buffer.
 */
- (void)close __attribute__((swift_name("close()")));

/**
 * Returns a deep copy of this buffer.
 */
- (KmastodonKotlinx_io_coreBuffer *)doCopy __attribute__((swift_name("doCopy()")));

/**
 * Copies bytes from this buffer's subrange starting at [startIndex] and ending at [endIndex], to [out] buffer.
 * This method does not consume data from the buffer.
 *
 * @param out the destination buffer to copy data into.
 * @param startIndex the index (inclusive) of the first byte of data in this buffer to copy,
 * 0 by default.
 * @param endIndex the index (exclusive) of the last byte of data in this buffer to copy, `buffer.size` by default.
 *
 * @throws IndexOutOfBoundsException when [startIndex] or [endIndex] is out of this buffer bounds
 * (`[0..buffer.size)`).
 * @throws IllegalArgumentException when `startIndex > endIndex`.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.bufferCopy
 */
- (void)doCopyToOut:(KmastodonKotlinx_io_coreBuffer *)out startIndex:(int64_t)startIndex endIndex:(int64_t)endIndex __attribute__((swift_name("doCopyTo(out:startIndex:endIndex:)")));

/**
 * This method does not affect the buffer's content as there is no upstream to write data to.
 */
- (void)emit __attribute__((swift_name("emit()")));
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));

/**
 * This method does not affect the buffer's content as there is no upstream to write data to.
 */
- (void)flush __attribute__((swift_name("flush()")));

/**
 * Returns the byte at [position].
 *
 * Use of this method may expose significant performance penalties and it's not recommended to use it
 * for sequential access to a range of bytes within the buffer.
 *
 * @throws IndexOutOfBoundsException when [position] is negative or greater or equal to [Buffer.size].
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.bufferGetByte
 */
- (int8_t)getPosition:(int64_t)position __attribute__((swift_name("get(position:)")));

/**
 * This method does not affect the buffer's content as there is no upstream to write data to.
 *
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
- (void)hintEmit __attribute__((swift_name("hintEmit()")));
- (id<KmastodonKotlinx_io_coreSource>)peek __attribute__((swift_name("peek()")));
- (int64_t)readAtMostToSink:(KmastodonKotlinx_io_coreBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readAtMostTo(sink:byteCount:)")));
- (int32_t)readAtMostToSink:(KmastodonKotlinByteArray *)sink startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("readAtMostTo(sink:startIndex:endIndex:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (void)readToSink:(id<KmastodonKotlinx_io_coreRawSink>)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readTo(sink:byteCount:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));

/**
 * Discards [byteCount] bytes from the head of this buffer.
 *
 * @throws IllegalArgumentException when [byteCount] is negative.
 */
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));

/**
 * Returns a human-readable string that describes the contents of this buffer. For buffers containing
 * few bytes, this is a string like `Buffer(size=4 hex=0000ffff)`. However, if the buffer is too large,
 * a string will contain its size and only a prefix of data, like `Buffer(size=1024 hex=01234…)`.
 * Thus, the string could not be used to compare buffers or verify buffer's content.
 *
 * @sample kotlinx.io.samples.KotlinxIoCoreCommonSamples.bufferToString
 */
- (NSString *)description __attribute__((swift_name("description()")));
- (int64_t)transferFromSource:(id<KmastodonKotlinx_io_coreRawSource>)source __attribute__((swift_name("transferFrom(source:)")));
- (int64_t)transferToSink:(id<KmastodonKotlinx_io_coreRawSink>)sink __attribute__((swift_name("transferTo(sink:)")));
- (void)writeSource:(KmastodonKotlinx_io_coreBuffer *)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
- (void)writeSource:(id<KmastodonKotlinx_io_coreRawSource>)source byteCount_:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount_:)")));
- (void)writeSource:(KmastodonKotlinByteArray *)source startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("write(source:startIndex:endIndex:)")));
- (void)writeByteByte:(int8_t)byte __attribute__((swift_name("writeByte(byte:)")));
- (void)writeIntInt:(int32_t)int_ __attribute__((swift_name("writeInt(int:)")));
- (void)writeLongLong:(int64_t)long_ __attribute__((swift_name("writeLong(long:)")));
- (void)writeShortShort:(int16_t)short_ __attribute__((swift_name("writeShort(short:)")));

/**
 * Returns the buffer itself.
 *
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) KmastodonKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));

/**
 * The number of bytes accessible for read from this buffer.
 */
@property (readonly) int64_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface KmastodonKtor_utilsWeekDayCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));

/**
 * Lookup an instance by [ordinal]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.WeekDay.Companion.from)
 */
- (KmastodonKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));

/**
 * Lookup an instance by short week day name [WeekDay.value]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.WeekDay.Companion.from)
 */
- (KmastodonKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface KmastodonKtor_utilsMonthCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));

/**
 * Lookup an instance by [ordinal]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.Month.Companion.from)
 */
- (KmastodonKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));

/**
 * Lookup an instance by short month name [Month.value]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.date.Month.Companion.from)
 */
- (KmastodonKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface KmastodonKotlinAbstractCoroutineContextElement : KmastodonBase <KmastodonKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<KmastodonKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<KmastodonKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol KmastodonKotlinContinuationInterceptor <KmastodonKotlinCoroutineContextElement>
@required
- (id<KmastodonKotlinContinuation>)interceptContinuationContinuation:(id<KmastodonKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<KmastodonKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end


/**
 * Base class to be extended by all coroutine dispatcher implementations.
 *
 * If `kotlinx-coroutines` is used, it is recommended to avoid [ContinuationInterceptor] instances that are not
 * [CoroutineDispatcher] implementations, as [CoroutineDispatcher] ensures that the
 * debugging facilities in the [newCoroutineContext] function work properly.
 *
 * ## Predefined dispatchers
 *
 * The following standard implementations are provided by `kotlinx.coroutines` as properties on
 * the [Dispatchers] object:
 *
 * - [Dispatchers.Default] is used by all standard builders if no dispatcher or any other [ContinuationInterceptor]
 *   is specified in their context.
 *   It uses a common pool of shared background threads.
 *   This is an appropriate choice for compute-intensive coroutines that consume CPU resources.
 * - `Dispatchers.IO` (available on the JVM and Native targets)
 *   uses a shared pool of on-demand created threads and is designed for offloading of IO-intensive _blocking_
 *   operations (like file I/O and blocking socket I/O).
 * - [Dispatchers.Main] represents the UI thread if one is available.
 * - [Dispatchers.Unconfined] starts coroutine execution in the current call-frame until the first suspension,
 *   at which point the coroutine builder function returns.
 *   When the coroutine is resumed, the thread from which it is resumed will run the coroutine code until the next
 *   suspension, and so on.
 *   **The `Unconfined` dispatcher should not normally be used in code**.
 * - Calling [limitedParallelism] on any dispatcher creates a view of the dispatcher that limits the parallelism
 *   to the given value.
 *   This allows creating private thread pools without spawning new threads.
 *   For example, `Dispatchers.IO.limitedParallelism(4)` creates a dispatcher that allows running at most
 *   4 tasks in parallel, reusing the existing IO dispatcher threads.
 * - When thread pools completely separate from [Dispatchers.Default] and `Dispatchers.IO` are required,
 *   they can be created with `newSingleThreadContext` and `newFixedThreadPoolContext` on the JVM and Native targets.
 * - An arbitrary `java.util.concurrent.Executor` can be converted to a dispatcher with the
 *   `asCoroutineDispatcher` extension function.
 *
 * ## Dispatch procedure
 *
 * Typically, a dispatch procedure is performed as follows:
 *
 * - First, [isDispatchNeeded] is invoked to determine whether the coroutine should be dispatched
 *   or is already in the right context.
 * - If [isDispatchNeeded] returns `true`, the coroutine is dispatched using the [dispatch] method.
 *   It may take a while for the dispatcher to start the task,
 *   but the [dispatch] method itself may return immediately, before the task has even begun to execute.
 * - If no dispatch is needed (which is the case for [Dispatchers.Main.immediate][MainCoroutineDispatcher.immediate]
 *   when already on the main thread and for [Dispatchers.Unconfined]),
 *   [dispatch] is typically not called,
 *   and the coroutine is resumed in the thread performing the dispatch procedure,
 *   forming an event loop to prevent stack overflows.
 *   See [Dispatchers.Unconfined] for a description of event loops.
 *
 * This behavior may be different on the very first dispatch procedure for a given coroutine, depending on the
 * [CoroutineStart] parameter of the coroutine builder.
 */
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface KmastodonKotlinx_coroutines_coreCoroutineDispatcher : KmastodonKotlinAbstractCoroutineContextElement <KmastodonKotlinContinuationInterceptor>

/**
 * Base class to be extended by all coroutine dispatcher implementations.
 *
 * If `kotlinx-coroutines` is used, it is recommended to avoid [ContinuationInterceptor] instances that are not
 * [CoroutineDispatcher] implementations, as [CoroutineDispatcher] ensures that the
 * debugging facilities in the [newCoroutineContext] function work properly.
 *
 * ## Predefined dispatchers
 *
 * The following standard implementations are provided by `kotlinx.coroutines` as properties on
 * the [Dispatchers] object:
 *
 * - [Dispatchers.Default] is used by all standard builders if no dispatcher or any other [ContinuationInterceptor]
 *   is specified in their context.
 *   It uses a common pool of shared background threads.
 *   This is an appropriate choice for compute-intensive coroutines that consume CPU resources.
 * - `Dispatchers.IO` (available on the JVM and Native targets)
 *   uses a shared pool of on-demand created threads and is designed for offloading of IO-intensive _blocking_
 *   operations (like file I/O and blocking socket I/O).
 * - [Dispatchers.Main] represents the UI thread if one is available.
 * - [Dispatchers.Unconfined] starts coroutine execution in the current call-frame until the first suspension,
 *   at which point the coroutine builder function returns.
 *   When the coroutine is resumed, the thread from which it is resumed will run the coroutine code until the next
 *   suspension, and so on.
 *   **The `Unconfined` dispatcher should not normally be used in code**.
 * - Calling [limitedParallelism] on any dispatcher creates a view of the dispatcher that limits the parallelism
 *   to the given value.
 *   This allows creating private thread pools without spawning new threads.
 *   For example, `Dispatchers.IO.limitedParallelism(4)` creates a dispatcher that allows running at most
 *   4 tasks in parallel, reusing the existing IO dispatcher threads.
 * - When thread pools completely separate from [Dispatchers.Default] and `Dispatchers.IO` are required,
 *   they can be created with `newSingleThreadContext` and `newFixedThreadPoolContext` on the JVM and Native targets.
 * - An arbitrary `java.util.concurrent.Executor` can be converted to a dispatcher with the
 *   `asCoroutineDispatcher` extension function.
 *
 * ## Dispatch procedure
 *
 * Typically, a dispatch procedure is performed as follows:
 *
 * - First, [isDispatchNeeded] is invoked to determine whether the coroutine should be dispatched
 *   or is already in the right context.
 * - If [isDispatchNeeded] returns `true`, the coroutine is dispatched using the [dispatch] method.
 *   It may take a while for the dispatcher to start the task,
 *   but the [dispatch] method itself may return immediately, before the task has even begun to execute.
 * - If no dispatch is needed (which is the case for [Dispatchers.Main.immediate][MainCoroutineDispatcher.immediate]
 *   when already on the main thread and for [Dispatchers.Unconfined]),
 *   [dispatch] is typically not called,
 *   and the coroutine is resumed in the thread performing the dispatch procedure,
 *   forming an event loop to prevent stack overflows.
 *   See [Dispatchers.Unconfined] for a description of event loops.
 *
 * This behavior may be different on the very first dispatch procedure for a given coroutine, depending on the
 * [CoroutineStart] parameter of the coroutine builder.
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Base class to be extended by all coroutine dispatcher implementations.
 *
 * If `kotlinx-coroutines` is used, it is recommended to avoid [ContinuationInterceptor] instances that are not
 * [CoroutineDispatcher] implementations, as [CoroutineDispatcher] ensures that the
 * debugging facilities in the [newCoroutineContext] function work properly.
 *
 * ## Predefined dispatchers
 *
 * The following standard implementations are provided by `kotlinx.coroutines` as properties on
 * the [Dispatchers] object:
 *
 * - [Dispatchers.Default] is used by all standard builders if no dispatcher or any other [ContinuationInterceptor]
 *   is specified in their context.
 *   It uses a common pool of shared background threads.
 *   This is an appropriate choice for compute-intensive coroutines that consume CPU resources.
 * - `Dispatchers.IO` (available on the JVM and Native targets)
 *   uses a shared pool of on-demand created threads and is designed for offloading of IO-intensive _blocking_
 *   operations (like file I/O and blocking socket I/O).
 * - [Dispatchers.Main] represents the UI thread if one is available.
 * - [Dispatchers.Unconfined] starts coroutine execution in the current call-frame until the first suspension,
 *   at which point the coroutine builder function returns.
 *   When the coroutine is resumed, the thread from which it is resumed will run the coroutine code until the next
 *   suspension, and so on.
 *   **The `Unconfined` dispatcher should not normally be used in code**.
 * - Calling [limitedParallelism] on any dispatcher creates a view of the dispatcher that limits the parallelism
 *   to the given value.
 *   This allows creating private thread pools without spawning new threads.
 *   For example, `Dispatchers.IO.limitedParallelism(4)` creates a dispatcher that allows running at most
 *   4 tasks in parallel, reusing the existing IO dispatcher threads.
 * - When thread pools completely separate from [Dispatchers.Default] and `Dispatchers.IO` are required,
 *   they can be created with `newSingleThreadContext` and `newFixedThreadPoolContext` on the JVM and Native targets.
 * - An arbitrary `java.util.concurrent.Executor` can be converted to a dispatcher with the
 *   `asCoroutineDispatcher` extension function.
 *
 * ## Dispatch procedure
 *
 * Typically, a dispatch procedure is performed as follows:
 *
 * - First, [isDispatchNeeded] is invoked to determine whether the coroutine should be dispatched
 *   or is already in the right context.
 * - If [isDispatchNeeded] returns `true`, the coroutine is dispatched using the [dispatch] method.
 *   It may take a while for the dispatcher to start the task,
 *   but the [dispatch] method itself may return immediately, before the task has even begun to execute.
 * - If no dispatch is needed (which is the case for [Dispatchers.Main.immediate][MainCoroutineDispatcher.immediate]
 *   when already on the main thread and for [Dispatchers.Unconfined]),
 *   [dispatch] is typically not called,
 *   and the coroutine is resumed in the thread performing the dispatch procedure,
 *   forming an event loop to prevent stack overflows.
 *   See [Dispatchers.Unconfined] for a description of event loops.
 *
 * This behavior may be different on the very first dispatch procedure for a given coroutine, depending on the
 * [CoroutineStart] parameter of the coroutine builder.
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<KmastodonKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmastodonKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));

/**
 * Requests execution of a runnable [block].
 * The dispatcher guarantees that [block] will eventually execute, typically by dispatching it to a thread pool
 * or using a dedicated thread.
 * The [context] parameter represents the context of the coroutine that is being dispatched,
 * or [EmptyCoroutineContext] if a non-coroutine-specific [Runnable] is dispatched instead.
 * Implementations may use [context] for additional context-specific information,
 * such as priority, whether the dispatched coroutine can be invoked in place,
 * coroutine name, and additional diagnostic elements.
 *
 * This method should guarantee that the given [block] will be eventually invoked,
 * otherwise the system may reach a deadlock state and never leave it.
 * The cancellation mechanism is transparent for [CoroutineDispatcher] and is managed by [block] internals.
 *
 * This method should generally be exception-safe. An exception thrown from this method
 * may leave the coroutines that use this dispatcher in an inconsistent and hard-to-debug state.
 * It is assumed that if any exceptions do get thrown from this method, then [block] will not be executed.
 *
 * Most implementations should avoid calling [block] in-place. Doing so may result in `StackOverflowError`
 * when `dispatch` is invoked repeatedly, for example when [yield] is called in a loop.
 * In order to execute a block in place, it is recommended to return `false` from [isDispatchNeeded]
 * and delegate the `dispatch` implementation to `Dispatchers.Unconfined.dispatch` in such cases.
 * To support this, the coroutines machinery ensures in-place execution and forms an event-loop to
 * avoid unbound recursion.
 *
 * @see isDispatchNeeded
 * @see Dispatchers.Unconfined
 */
- (void)dispatchContext:(id<KmastodonKotlinCoroutineContext>)context block:(id<KmastodonKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));

/**
 * Dispatches execution of a runnable `block` onto another thread in the given `context`
 * with a hint for the dispatcher that the current dispatch is triggered by a [yield] call, so that the execution of this
 * continuation may be delayed in favor of already dispatched coroutines.
 *
 * Though the `yield` marker may be passed as a part of [context], this
 * is a separate method for performance reasons.
 *
 * Implementation note: this entry-point is used for `Dispatchers.IO` and [Dispatchers.Default]
 * unerlying implementations, see overrides for this method.
 *
 * @suppress **This an internal API and should not be used from general code.**
 *
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (void)dispatchYieldContext:(id<KmastodonKotlinCoroutineContext>)context block:(id<KmastodonKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));

/**
 * Returns a continuation that wraps the provided [continuation], thus intercepting all resumptions.
 *
 * This method should generally be exception-safe. An exception thrown from this method
 * may leave the coroutines that use this dispatcher in the inconsistent and hard to debug state.
 */
- (id<KmastodonKotlinContinuation>)interceptContinuationContinuation:(id<KmastodonKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));

/**
 * Returns `true` if the execution of the coroutine should be performed with [dispatch] method.
 * The default behavior for most dispatchers is to return `true`.
 *
 * If this method returns `false`, the coroutine is resumed immediately in the current thread,
 * potentially forming an event-loop to prevent stack overflows.
 * The event loop is an advanced topic and its implications can be found in [Dispatchers.Unconfined] documentation.
 *
 * The [context] parameter represents the context of the coroutine that is being dispatched,
 * or [EmptyCoroutineContext] if a non-coroutine-specific [Runnable] is dispatched instead.
 *
 * A dispatcher can override this method to provide a performance optimization and avoid paying a cost of an unnecessary dispatch.
 * E.g. [MainCoroutineDispatcher.immediate] checks whether we are already in the required UI thread in this method and avoids
 * an additional dispatch when it is not required.
 *
 * While this approach can be more efficient, it is not chosen by default to provide a consistent dispatching behaviour
 * so that users won't observe unexpected and non-consistent order of events by default.
 *
 * Coroutine builders like [launch][CoroutineScope.launch] and [async][CoroutineScope.async] accept an optional [CoroutineStart]
 * parameter that allows one to optionally choose the [undispatched][CoroutineStart.UNDISPATCHED] behavior to start coroutine immediately,
 * but to be resumed only in the provided dispatcher.
 *
 * This method should generally be exception-safe. An exception thrown from this method
 * may leave the coroutines that use this dispatcher in the inconsistent and hard to debug state.
 *
 * @see dispatch
 * @see Dispatchers.Unconfined
 */
- (BOOL)isDispatchNeededContext:(id<KmastodonKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));

/**
 * Creates a view of the current dispatcher that limits the parallelism to the given [value][parallelism].
 * The resulting view uses the original dispatcher for execution but with the guarantee that
 * no more than [parallelism] coroutines are executed at the same time.
 *
 * This method does not impose restrictions on the number of views or the total sum of parallelism values,
 * each view controls its own parallelism independently with the guarantee that the effective parallelism
 * of all views cannot exceed the actual parallelism of the original dispatcher.
 *
 * The resulting dispatcher does not guarantee that the coroutines will always be dispatched on the same
 * subset of threads, it only guarantees that at most [parallelism] coroutines are executed at the same time,
 * and reuses threads from the original dispatchers.
 * It does not constitute a resource -- it is a _view_ of the underlying dispatcher that can be thrown away
 * and is not required to be closed.
 *
 * ### Example of usage
 * ```
 * // Background dispatcher for the application
 * val dispatcher = newFixedThreadPoolContext(4, "App Background")
 * // At most 2 threads will be processing images as it is really slow and CPU-intensive
 * val imageProcessingDispatcher = dispatcher.limitedParallelism(2, "Image processor")
 * // At most 3 threads will be processing JSON to avoid image processing starvation
 * val jsonProcessingDispatcher = dispatcher.limitedParallelism(3, "Json processor")
 * // At most 1 thread will be doing IO
 * val fileWriterDispatcher = dispatcher.limitedParallelism(1, "File writer")
 * ```
 * Note how in this example the application has an executor with 4 threads, but the total sum of all limits
 * is 6. Still, at most 4 coroutines can be executed simultaneously as each view limits only its own parallelism,
 * and at most 4 threads can exist in the system.
 *
 * Note that this example was structured in such a way that it illustrates the parallelism guarantees.
 * In practice, it is usually better to use `Dispatchers.IO` or [Dispatchers.Default] instead of creating a
 * `dispatcher`.
 *
 * ### `limitedParallelism(1)` pattern
 *
 * One of the common patterns is confining the execution of specific tasks to a sequential execution in background
 * with `limitedParallelism(1)` invocation.
 * For that purpose, the implementation guarantees that sections of code between suspensions
 * are executed sequentially and that a happens-before relation
 * is established between them:
 *
 * ```
 * val confined = Dispatchers.Default.limitedParallelism(1, "incrementDispatcher")
 * var counter = 0
 *
 * // Invoked from arbitrary coroutines
 * launch(confined) {
 *     // This increment is sequential and race-free
 *     ++counter
 * }
 * ```
 * Note that there is no guarantee that the underlying system thread will always be the same.
 *
 * #### It is not a mutex!
 *
 * **Pitfall**: [limitedParallelism] limits how many threads can execute some code in parallel,
 * but does not limit how many coroutines execute concurrently!
 *
 * For example:
 *
 * ```
 * val notAMutex = Dispatchers.Default.limitedParallelism(1)
 *
 * repeat(3) {
 *     launch(notAMutex) {
 *         println("Coroutine $it entering...")
 *         delay(20.milliseconds)
 *         println("Coroutine $it leaving.")
 *     }
 * }
 * ```
 *
 * The output will be similar to this:
 *
 * ```
 * Coroutine 0 entering...
 * Coroutine 1 entering...
 * Coroutine 2 entering...
 * Coroutine 0 leaving.
 * Coroutine 1 leaving.
 * Coroutine 2 leaving.
 * ```
 *
 * This means that coroutines are not guaranteed to run to completion before the dispatcher starts executing
 * code from another coroutine.
 * The only guarantee in this example is that two `println` calls will not occur in several threads simultaneously.
 *
 * Use a [kotlinx.coroutines.sync.Mutex] or a [kotlinx.coroutines.sync.Semaphore] for limiting concurrency.
 *
 * ### Dispatchers.IO
 *
 * `Dispatcher.IO` is considered _elastic_ for the purposes of limited parallelism -- the sum of
 * views is not restricted by the capacity of `Dispatchers.IO`.
 * It means that it is safe to replace `newFixedThreadPoolContext(nThreads)` with
 * `Dispatchers.IO.limitedParallelism(nThreads)` w.r.t. available number of threads.
 * See `Dispatchers.IO` documentation for more details.
 *
 * ### Restrictions and implementation details
 *
 * The default implementation of `limitedParallelism` does not support direct dispatchers,
 * such as executing the given runnable in place during [dispatch] calls.
 * Any dispatcher that may return `false` from [isDispatchNeeded] is considered direct.
 * For direct dispatchers, it is recommended to override this method
 * and provide a domain-specific implementation or to throw an [UnsupportedOperationException].
 *
 * Implementations of this method are allowed to return `this` if the current dispatcher already satisfies the parallelism requirement.
 * For example, `Dispatchers.Main.limitedParallelism(1)` returns `Dispatchers.Main`, because the main dispatcher is already single-threaded.
 *
 * @param name optional name for the resulting dispatcher string representation if a new dispatcher was created.
 *        Implementations are free to ignore this parameter.
 * @throws IllegalArgumentException if the given [parallelism] is non-positive
 * @throws UnsupportedOperationException if the current dispatcher does not support limited parallelism views
 */
- (KmastodonKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism name:(NSString * _Nullable)name __attribute__((swift_name("limitedParallelism(parallelism:name:)")));

/**
 * @suppress **Error**: Operator '+' on two CoroutineDispatcher objects is meaningless.
 * CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts.
 * The dispatcher to the right of `+` just replaces the dispatcher to the left.
 */
- (KmastodonKotlinx_coroutines_coreCoroutineDispatcher *)plusOther_:(KmastodonKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<KmastodonKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));

/** @suppress for nicer debugging */
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * Proxy configuration.
 *
 * See [ProxyBuilder] to create proxy.
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.engine.ProxyConfig)
 *
 * @param url: proxy url address.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface KmastodonKtor_client_coreProxyConfig : KmastodonBase
- (instancetype)initWithUrl:(KmastodonKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KmastodonKtor_httpUrl *url __attribute__((swift_name("url")));
@end


/**
 * Base interface representing a [HttpClient] plugin.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.plugins.HttpClientPlugin)
 */
__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol KmastodonKtor_client_coreHttpClientPlugin
@required

/**
 * Installs the [plugin] class for a [HttpClient] defined at [scope].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.plugins.HttpClientPlugin.install)
 */
- (void)installPlugin:(id)plugin scope:(KmastodonKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));

/**
 * Builds a [TPlugin] by calling the [block] with a [TConfig] config instance as receiver.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.plugins.HttpClientPlugin.prepare)
 */
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));

/**
 * The [AttributeKey] for this plugin.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.plugins.HttpClientPlugin.key)
 */
@property (readonly) KmastodonKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end


/**
 * Definition of an event.
 * Event is used as a key so both [hashCode] and [equals] need to be implemented properly.
 * Inheriting of this class is an experimental feature.
 * Instantiate directly if inheritance not necessary.
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.events.EventDefinition)
 *
 * @param T specifies what is a type of value passed to the event
 */
__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface KmastodonKtor_eventsEventDefinition<T> : KmastodonBase

/**
 * Definition of an event.
 * Event is used as a key so both [hashCode] and [equals] need to be implemented properly.
 * Inheriting of this class is an experimental feature.
 * Instantiate directly if inheritance not necessary.
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.events.EventDefinition)
 *
 * @param T specifies what is a type of value passed to the event
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Definition of an event.
 * Event is used as a key so both [hashCode] and [equals] need to be implemented properly.
 * Inheriting of this class is an experimental feature.
 * Instantiate directly if inheritance not necessary.
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.events.EventDefinition)
 *
 * @param T specifies what is a type of value passed to the event
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end


/**
 * A handle to an allocated object that can be disposed to make it eligible for garbage collection.
 */
__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol KmastodonKotlinx_coroutines_coreDisposableHandle
@required

/**
 * Disposes the corresponding object, making it eligible for garbage collection.
 * Repeated invocation of this function has no effect.
 */
- (void)dispose __attribute__((swift_name("dispose()")));
@end


/**
 * Represents a phase in a pipeline
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.util.pipeline.PipelinePhase)
 *
 * @param name a name for this phase
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface KmastodonKtor_utilsPipelinePhase : KmastodonBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol KmastodonKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol KmastodonKotlinSuspendFunction2 <KmastodonKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface KmastodonKtor_client_coreHttpReceivePipelinePhases : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));

/**
 * Latest response pipeline phase
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpReceivePipeline.Phases.After)
 */
@property (readonly) KmastodonKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));

/**
 * The earliest phase that happens before any other
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpReceivePipeline.Phases.Before)
 */
@property (readonly) KmastodonKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));

/**
 * Use this phase to store request shared state
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpReceivePipeline.Phases.State)
 */
@property (readonly) KmastodonKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface KmastodonKotlinUnit : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end


/**
 * All interceptors accept payload as [subject] and try to convert it to [OutgoingContent].
 * Last phase should proceed with [HttpClientCall].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestPipeline.Phases)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface KmastodonKtor_client_coreHttpRequestPipelinePhases : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * All interceptors accept payload as [subject] and try to convert it to [OutgoingContent].
 * Last phase should proceed with [HttpClientCall].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestPipeline.Phases)
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));

/**
 * The earliest phase that happens before any other.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestPipeline.Phases.Before)
 */
@property (readonly) KmastodonKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));

/**
 * Encode a request body to [OutgoingContent].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestPipeline.Phases.Render)
 */
@property (readonly) KmastodonKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));

/**
 * A phase for the [HttpSend] plugin.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestPipeline.Phases.Send)
 */
@property (readonly) KmastodonKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));

/**
 * Use this phase to modify a request with a shared state.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestPipeline.Phases.State)
 */
@property (readonly) KmastodonKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));

/**
 * Transform a request body to supported render format.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestPipeline.Phases.Transform)
 */
@property (readonly) KmastodonKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end


/**
 * A builder message either for the client or the server,
 * that has a [headers] builder associated.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpMessageBuilder)
 */
__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol KmastodonKtor_httpHttpMessageBuilder
@required

/**
 * MessageBuilder [HeadersBuilder]
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpMessageBuilder.headers)
 */
@property (readonly) KmastodonKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end


/**
 * Contains parameters used to make an HTTP request.
 *
 * Learn more from [Making requests](https://ktor.io/docs/request.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder)
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface KmastodonKtor_client_coreHttpRequestBuilder : KmastodonBase <KmastodonKtor_httpHttpMessageBuilder>

/**
 * Contains parameters used to make an HTTP request.
 *
 * Learn more from [Making requests](https://ktor.io/docs/request.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder)
 */
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));

/**
 * Contains parameters used to make an HTTP request.
 *
 * Learn more from [Making requests](https://ktor.io/docs/request.html).
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder)
 */
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) KmastodonKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));

/**
 * Creates immutable [HttpRequestData].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.build)
 */
- (KmastodonKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));

/**
 * Retrieves capability by the key.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.getCapabilityOrNull)
 */
- (id _Nullable)getCapabilityOrNullKey:(id<KmastodonKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));

/**
 * Sets request-specific attributes specified by [block].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.setAttributes)
 */
- (void)setAttributesBlock:(void (^)(id<KmastodonKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));

/**
 * Sets capability configuration.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.setCapability)
 */
- (void)setCapabilityKey:(id<KmastodonKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));

/**
 * Mutates [this] by copying all the data but execution context from another [builder] using it as the base.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.takeFrom)
 */
- (KmastodonKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(KmastodonKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));

/**
 * Mutates [this] copying all the data from another [builder] using it as the base.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.takeFromWithExecutionContext)
 */
- (KmastodonKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(KmastodonKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));

/**
 * Executes a [block] that configures the [URLBuilder] associated to this request.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.url)
 */
- (void)urlBlock:(void (^)(KmastodonKtor_httpURLBuilder *, KmastodonKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));

/**
 * Provides access to attributes specific for this request.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.attributes)
 */
@property (readonly) id<KmastodonKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));

/**
 * The [body] for this request. Initially [EmptyContent].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.body)
 */
@property id body __attribute__((swift_name("body")));

/**
 * The [KType] of [body] for this request. Null for default types that don't need serialization.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.bodyType)
 */
@property KmastodonKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));

/**
 * A deferred used to control the execution of this request.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.executionContext)
 */
@property (readonly) id<KmastodonKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));

/**
 * [HeadersBuilder] to configure the headers for this request.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.headers)
 */
@property (readonly) KmastodonKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));

/**
 * [HttpMethod] used by this request. [HttpMethod.Get] by default.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.method)
 */
@property KmastodonKtor_httpHttpMethod *method __attribute__((swift_name("method")));

/**
 * [URLBuilder] to configure the URL for this request.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpRequestBuilder.url)
 */
@property (readonly) KmastodonKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface KmastodonKtor_client_coreHttpResponsePipelinePhases : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));

/**
 * Latest response pipeline phase
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponsePipeline.Phases.After)
 */
@property (readonly) KmastodonKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));

/**
 * Decode response body
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponsePipeline.Phases.Parse)
 */
@property (readonly) KmastodonKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));

/**
 * The earliest phase that happens before any other
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponsePipeline.Phases.Receive)
 */
@property (readonly) KmastodonKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));

/**
 * Use this phase to store request shared state
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponsePipeline.Phases.State)
 */
@property (readonly) KmastodonKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));

/**
 * Transform response body to expected format
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponsePipeline.Phases.Transform)
 */
@property (readonly) KmastodonKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end


/**
 * Class representing a typed [response] with an attached [expectedType].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponseContainer)
 *
 * @param expectedType: information about expected type.
 * @param response: current response state.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface KmastodonKtor_client_coreHttpResponseContainer : KmastodonBase
- (instancetype)initWithExpectedType:(KmastodonKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (KmastodonKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(KmastodonKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));

/**
 * Class representing a typed [response] with an attached [expectedType].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponseContainer)
 *
 * @param expectedType: information about expected type.
 * @param response: current response state.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Class representing a typed [response] with an attached [expectedType].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponseContainer)
 *
 * @param expectedType: information about expected type.
 * @param response: current response state.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Class representing a typed [response] with an attached [expectedType].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.statement.HttpResponseContainer)
 *
 * @param expectedType: information about expected type.
 * @param response: current response state.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KmastodonKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface KmastodonKtor_client_coreHttpSendPipelinePhases : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));

/**
 * The earliest phase that happens before any other.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpSendPipeline.Phases.Before)
 */
@property (readonly) KmastodonKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));

/**
 * Send a request to a remote server.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpSendPipeline.Phases.Engine)
 */
@property (readonly) KmastodonKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));

/**
 * Use this phase for logging and other actions that don't modify a request or shared data.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpSendPipeline.Phases.Monitoring)
 */
@property (readonly) KmastodonKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));

/**
 * Receive a pipeline execution phase.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpSendPipeline.Phases.Receive)
 */
@property (readonly) KmastodonKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));

/**
 * Use this phase to modify request with a shared state.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.client.request.HttpSendPipeline.Phases.State)
 */
@property (readonly) KmastodonKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface KmastodonKtor_httpUrlCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
- (id<KmastodonKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * Represents HTTP parameters as a map from case-insensitive names to collection of [String] values
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.Parameters)
 */
__attribute__((swift_name("Ktor_httpParameters")))
@protocol KmastodonKtor_httpParameters <KmastodonKtor_utilsStringValues>
@required
@end


/**
 * Represents URL protocol
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol)
 *
 * @property name of protocol (schema)
 * @property defaultPort default port for protocol or `-1` if not known
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface KmastodonKtor_httpURLProtocol : KmastodonBase <KmastodonKtor_ioJvmSerializable>
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmastodonKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (KmastodonKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));

/**
 * Represents URL protocol
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol)
 *
 * @property name of protocol (schema)
 * @property defaultPort default port for protocol or `-1` if not known
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Represents URL protocol
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol)
 *
 * @property name of protocol (schema)
 * @property defaultPort default port for protocol or `-1` if not known
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Represents URL protocol
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol)
 *
 * @property name of protocol (schema)
 * @property defaultPort default port for protocol or `-1` if not known
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface KmastodonKtor_httpHttpMethodCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (NSArray<KmastodonKtor_httpHttpMethod *> *)getDefaultMethods __attribute__((swift_name("getDefaultMethods()"))) __attribute__((deprecated("Use DefaultMethods const instead")));
- (KmastodonKtor_httpHttpMethod *)getDelete __attribute__((swift_name("getDelete()"))) __attribute__((deprecated("Use Delete const instead")));
- (KmastodonKtor_httpHttpMethod *)getGet __attribute__((swift_name("getGet()"))) __attribute__((deprecated("Use Get const instead")));
- (KmastodonKtor_httpHttpMethod *)getHead __attribute__((swift_name("getHead()"))) __attribute__((deprecated("Use Head const instead")));
- (KmastodonKtor_httpHttpMethod *)getOptions __attribute__((swift_name("getOptions()"))) __attribute__((deprecated("Use Options const instead")));
- (KmastodonKtor_httpHttpMethod *)getPatch __attribute__((swift_name("getPatch()"))) __attribute__((deprecated("Use Patch const instead")));
- (KmastodonKtor_httpHttpMethod *)getPost __attribute__((swift_name("getPost()"))) __attribute__((deprecated("Use Post const instead")));
- (KmastodonKtor_httpHttpMethod *)getPut __attribute__((swift_name("getPut()"))) __attribute__((deprecated("Use Put const instead")));
- (KmastodonKtor_httpHttpMethod *)getTrace __attribute__((swift_name("getTrace()"))) __attribute__((deprecated("Use Trace const instead")));

/**
 * Parse HTTP method by [method] string
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpMethod.Companion.parse)
 */
- (KmastodonKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));

/**
 * A list of default HTTP methods
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HttpMethod.Companion.DefaultMethods)
 */
@property (readonly) NSArray<KmastodonKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) KmastodonKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) KmastodonKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) KmastodonKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) KmastodonKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) KmastodonKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) KmastodonKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) KmastodonKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@property (readonly) KmastodonKtor_httpHttpMethod *Query __attribute__((swift_name("Query")));
@property (readonly) KmastodonKtor_httpHttpMethod *Trace __attribute__((swift_name("Trace")));
@end


/**
 * Represents a header value that consist of [content] followed by [parameters].
 * Useful for headers such as `Content-Type`, `Content-Disposition` and so on.
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HeaderValueWithParameters)
 *
 * @property content header's content without parameters
 * @property parameters
 */
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface KmastodonKtor_httpHeaderValueWithParameters : KmastodonBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<KmastodonKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmastodonKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));

/**
 * The first value for the parameter with [name] comparing case-insensitively or `null` if no such parameters found
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HeaderValueWithParameters.parameter)
 */
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<KmastodonKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end


/**
 * Represents a value for a `Content-Type` header.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.ContentType)
 *
 * @property contentType represents a type part of the media type.
 * @property contentSubtype represents a subtype part of the media type.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface KmastodonKtor_httpContentType : KmastodonKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<KmastodonKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<KmastodonKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KmastodonKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Checks if `this` type matches a [pattern] type taking into account placeholder symbols `*` and parameters.
 * The `this` type must be a more specific type than the [pattern] type. In other words:
 *
 * ```kotlin
 * ContentType("a", "b").match(ContentType("a", "b").withParameter("foo", "bar")) === false
 * ContentType("a", "b").withParameter("foo", "bar").match(ContentType("a", "b")) === true
 * ContentType("a", "*").match(ContentType("a", "b")) === false
 * ContentType("a", "b").match(ContentType("a", "*")) === true
 * ```
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.ContentType.match)
 */
- (BOOL)matchPattern:(KmastodonKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));

/**
 * Checks if `this` type matches a [pattern] type taking into account placeholder symbols `*` and parameters.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.ContentType.match)
 */
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));

/**
 * Creates a copy of `this` type with the added parameter with the [name] and [value].
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.ContentType.withParameter)
 */
- (KmastodonKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));

/**
 * Creates a copy of `this` type without any parameters
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.ContentType.withoutParameters)
 */
- (KmastodonKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end


/**
 * A handle that child keep onto its parent so that it is able to report its cancellation.
 *
 * @suppress **This is unstable API and it is subject to change.**
 *
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol KmastodonKotlinx_coroutines_coreChildHandle <KmastodonKotlinx_coroutines_coreDisposableHandle>
@required

/**
 * Child is cancelling its parent by invoking this method.
 * This method is invoked by the child twice. The first time child report its root cause as soon as possible,
 * so that all its siblings and the parent can start cancelling their work asap. The second time
 * child invokes this method when it had aggregated and determined its final cancellation cause.
 *
 * @suppress **This is unstable API and it is subject to change.**
 *
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (BOOL)childCancelledCause:(KmastodonKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));

/**
 * Returns the parent of the current parent-child relationship.
 * @suppress **This is unstable API and it is subject to change.**
 *
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
@property (readonly) id<KmastodonKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end


/**
 * A reference that parent receives from its child so that it can report its cancellation.
 *
 * @suppress **This is unstable API and it is subject to change.**
 *
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol KmastodonKotlinx_coroutines_coreChildJob <KmastodonKotlinx_coroutines_coreJob>
@required

/**
 * Parent is cancelling its child by invoking this method.
 * Child finds the cancellation cause using [ParentJob.getChildJobCancellationCause].
 * This method does nothing is the child is already being cancelled.
 *
 * @suppress **This is unstable API and it is subject to change.**
 *
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (void)parentCancelledParentJob:(id<KmastodonKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol KmastodonKotlinSequence
@required
- (id<KmastodonKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end


/**
 * Each [select] clause is specified with:
 * 1) the [object of this clause][clauseObject],
 *    such as the channel instance for [SendChannel.onSend];
 * 2) the function that specifies how this clause
 *    should be registered in the object above;
 * 3) the function that modifies the internal result
 *    (passed via [SelectInstance.trySelect] or
 *    [SelectInstance.selectInRegistrationPhase])
 *    to the argument of the user-specified block.
 * 4) the function that specifies how the internal result provided via
 *    [SelectInstance.trySelect] or [SelectInstance.selectInRegistrationPhase]
 *    should be processed in case of this `select` cancellation while dispatching.
 *
 * @suppress **This is unstable API, and it is subject to change.**
 *
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause")))
@protocol KmastodonKotlinx_coroutines_coreSelectClause
@required
@property (readonly) id clauseObject __attribute__((swift_name("clauseObject")));
@property (readonly) KmastodonKotlinUnit *(^(^ _Nullable onCancellationConstructor)(id<KmastodonKotlinx_coroutines_coreSelectInstance>, id _Nullable, id _Nullable))(KmastodonKotlinThrowable *, id _Nullable, id<KmastodonKotlinCoroutineContext>) __attribute__((swift_name("onCancellationConstructor")));
@property (readonly) id _Nullable (^processResFunc)(id, id _Nullable, id _Nullable) __attribute__((swift_name("processResFunc")));
@property (readonly) void (^regFunc)(id, id<KmastodonKotlinx_coroutines_coreSelectInstance>, id _Nullable) __attribute__((swift_name("regFunc")));
@end


/**
 * Clause for [select] expression without additional parameters that does not select any value.
 */
__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol KmastodonKotlinx_coroutines_coreSelectClause0 <KmastodonKotlinx_coroutines_coreSelectClause>
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface KmastodonKotlinKTypeProjection : KmastodonBase
- (instancetype)initWithVariance:(KmastodonKotlinKVariance * _Nullable)variance type:(id<KmastodonKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmastodonKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (KmastodonKotlinKTypeProjection *)doCopyVariance:(KmastodonKotlinKVariance * _Nullable)variance type:(id<KmastodonKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KmastodonKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) KmastodonKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol KmastodonKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<KmastodonKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
 *   kotlin.DeprecatedSinceKotlin(warningSince="2.4")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface KmastodonKotlinAbstractCoroutineContextKey<B, E> : KmastodonBase <KmastodonKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<KmastodonKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<KmastodonKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Polymorphic coroutine context keys are error-prone, difficult to implement correctly, and can encourage depending on implementation details. Prefer retrieving the element by its base key and casting it explicitly when needed or introducing a dedicated extension property.")));
@end


/** @suppress
 *
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface KmastodonKotlinx_coroutines_coreCoroutineDispatcherKey : KmastodonKotlinAbstractCoroutineContextKey<id<KmastodonKotlinContinuationInterceptor>, KmastodonKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));

/** @suppress */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<KmastodonKotlinCoroutineContextKey>)baseKey safeCast:(id<KmastodonKotlinCoroutineContextElement> _Nullable (^)(id<KmastodonKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end


/**
 * A runnable task for [CoroutineDispatcher.dispatch].
 *
 * Equivalent to the type `() -> Unit`.
 */
__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol KmastodonKotlinx_coroutines_coreRunnable
@required

/**
 * @suppress
 */
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol KmastodonKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<KmastodonKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<KmastodonKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<KmastodonKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<KmastodonKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface KmastodonKtor_utilsStringValuesBuilderImpl : KmastodonBase <KmastodonKtor_utilsStringValuesBuilder>
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<KmastodonKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<KmastodonKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<KmastodonKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<KmastodonKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) KmastodonMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface KmastodonKtor_httpHeadersBuilder : KmastodonKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<KmastodonKtor_httpHeaders>)build __attribute__((swift_name("build()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface KmastodonKtor_client_coreHttpRequestBuilderCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end


/**
 * A URL builder with all mutable components
 *
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLBuilder)
 *
 * @property protocol URL protocol (scheme)
 * @property host name without port (domain)
 * @property port port number
 * @property user username part (optional)
 * @property password password part (optional)
 * @property pathSegments URL path without query
 * @property parameters URL query parameters
 * @property fragment URL fragment (anchor name)
 * @property trailingQuery keep a trailing question character even if there are no query parameters
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface KmastodonKtor_httpURLBuilder : KmastodonBase
- (instancetype)initWithProtocol:(KmastodonKtor_httpURLProtocol * _Nullable)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<KmastodonKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KmastodonKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));

/**
 * Build a [Url] instance (everything is copied to a new instance)
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLBuilder.build)
 */
- (KmastodonKtor_httpUrl *)build __attribute__((swift_name("build()")));

/**
 * Build a URL string
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLBuilder.buildString)
 */
- (NSString *)buildString __attribute__((swift_name("buildString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<KmastodonKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<KmastodonKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property KmastodonKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property KmastodonKtor_httpURLProtocol * _Nullable protocolOrNull __attribute__((swift_name("protocolOrNull")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface KmastodonKtor_httpURLProtocolCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));

/**
 * Create an instance by [name] or use already existing instance
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol.Companion.createOrDefault)
 */
- (KmastodonKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));

/**
 * HTTP with port 80
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol.Companion.HTTP)
 */
@property (readonly) KmastodonKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));

/**
 * secure HTTPS with port 443
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol.Companion.HTTPS)
 */
@property (readonly) KmastodonKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));

/**
 * Socks proxy url protocol.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol.Companion.SOCKS)
 */
@property (readonly) KmastodonKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));

/**
 * Web socket over HTTP on port 80
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol.Companion.WS)
 */
@property (readonly) KmastodonKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));

/**
 * Web socket over secure HTTPS on port 443
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol.Companion.WSS)
 */
@property (readonly) KmastodonKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));

/**
 * Protocols by names map
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.URLProtocol.Companion.byName)
 */
@property (readonly) NSDictionary<NSString *, KmastodonKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end


/**
 * Represents a single value parameter
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HeaderValueParam)
 *
 * @property name of parameter
 * @property value of parameter
 * @property escapeValue specifies if the value should be escaped
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface KmastodonKtor_httpHeaderValueParam : KmastodonBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("init(name:value:escapeValue:)"))) __attribute__((objc_designated_initializer));
- (KmastodonKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("doCopy(name:value:escapeValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Represents a single value parameter
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HeaderValueParam)
 *
 * @property name of parameter
 * @property value of parameter
 * @property escapeValue specifies if the value should be escaped
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL escapeValue __attribute__((swift_name("escapeValue")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface KmastodonKtor_httpHeaderValueWithParametersCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));

/**
 * Parse header with parameter and pass it to [init] function to instantiate particular type
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.HeaderValueWithParameters.Companion.parse)
 */
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<KmastodonKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface KmastodonKtor_httpContentTypeCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));

/**
 * Parses a string representing a `Content-Type` header into a [ContentType] instance.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.ContentType.Companion.parse)
 */
- (KmastodonKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));

/**
 * Represents a pattern `* / *` to match any content type.
 *
 * [Report a problem](https://ktor.io/feedback/?fqname=io.ktor.http.ContentType.Companion.Any)
 */
@property (readonly) KmastodonKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end


/**
 * A reference that child receives from its parent when it is being cancelled by the parent.
 *
 * @suppress **This is unstable API and it is subject to change.**
 *
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol KmastodonKotlinx_coroutines_coreParentJob <KmastodonKotlinx_coroutines_coreJob>
@required

/**
 * Child job is using this method to learn its cancellation cause when the parent cancels it with [ChildJob.parentCancelled].
 * This method is invoked only if the child was not already being cancelled.
 *
 * Note that [CancellationException] is the method's return type: if child is cancelled by its parent,
 * then the original exception is **already** handled by either the parent or the original source of failure.
 *
 * @suppress **This is unstable API and it is subject to change.**
 *
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (KmastodonKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end


/**
 * Internal representation of `select` instance.
 *
 * @suppress **This is unstable API, and it is subject to change.**
 *
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol KmastodonKotlinx_coroutines_coreSelectInstance
@required

/**
 * When this `select` instance is stored as a waiter, the specified [handle][disposableHandle]
 * defines how the stored `select` should be removed in case of cancellation or another clause selection.
 */
- (void)disposeOnCompletionDisposableHandle:(id<KmastodonKotlinx_coroutines_coreDisposableHandle>)disposableHandle __attribute__((swift_name("disposeOnCompletion(disposableHandle:)")));

/**
 * When a clause becomes selected during registration, the corresponding internal result
 * (which is further passed to the clause's [ProcessResultFunction]) should be provided
 * via this function. After that, other clause registrations are ignored and [trySelect] fails.
 */
- (void)selectInRegistrationPhaseInternalResult:(id _Nullable)internalResult __attribute__((swift_name("selectInRegistrationPhase(internalResult:)")));

/**
 * This function should be called by other operations,
 * which are trying to perform a rendezvous with this `select`.
 * Returns `true` if the rendezvous succeeds, `false` otherwise.
 *
 * Note that according to the current implementation, a rendezvous attempt can fail
 * when either another clause is already selected or this `select` is still in
 * REGISTRATION phase. To distinguish the reasons, [SelectImplementation.trySelectDetailed]
 * function can be used instead.
 */
- (BOOL)trySelectClauseObject:(id)clauseObject result:(id _Nullable)result __attribute__((swift_name("trySelect(clauseObject:result:)")));

/**
 * The context of the coroutine that is performing this `select` operation.
 */
@property (readonly) id<KmastodonKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface KmastodonKotlinKVariance : KmastodonKotlinEnum<KmastodonKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KmastodonKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) KmastodonKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) KmastodonKotlinKVariance *out __attribute__((swift_name("out")));
+ (KmastodonKotlinArray<KmastodonKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<KmastodonKotlinKVariance *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface KmastodonKotlinKTypeProjectionCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));
- (KmastodonKotlinKTypeProjection *)contravariantType:(id<KmastodonKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));
- (KmastodonKotlinKTypeProjection *)covariantType:(id<KmastodonKotlinKType>)type __attribute__((swift_name("covariant(type:)")));
- (KmastodonKotlinKTypeProjection *)invariantType:(id<KmastodonKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) KmastodonKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface KmastodonKtor_httpURLBuilderCompanion : KmastodonBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KmastodonKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol KmastodonKtor_httpParametersBuilder <KmastodonKtor_utilsStringValuesBuilder>
@required
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
