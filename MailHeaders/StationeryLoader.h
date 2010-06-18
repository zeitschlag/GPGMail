/*
 *     Generated by class-dump 3.2 (32 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface StationeryLoader : NSObject
{
    NSMutableDictionary *categoriesByDisplayName;
    NSMutableArray *orderedCategoryDisplayNames;
    NSMutableDictionary *orderedStationeryByCategoryDisplayName;
}

+ (id)sharedInstance;
+ (id)pathForCustomCategory;
+ (id)pathForCustomCategoryResources;
+ (void)purgeDeletedCustomStationery;
- (void)dealloc;
- (id)stationeryWithID:(id)arg1;
- (id)stationeryWithPath:(id)arg1;
- (id)pathForStationeryWithID:(id)arg1;
- (id)dictionaryForStationeryWithPath:(id)arg1 inCategoryWithDisplayName:(id)arg2;
- (id)dictionaryForStationeryWithPath:(id)arg1 inCategoryWithDisplayName:(id)arg2 position:(int *)arg3;
- (void)updateStationery;
- (id)orderedCategoryDisplayNamesIncludingFavorites;
- (id)orderedCategoryDictionaries;
- (id)orderedStationeryDictionariesForCategoryWithDisplayName:(id)arg1;
- (id)pathForFavoritesList;
- (void)createAppleUserCompanyBundleIfNecessary;
- (id)bundlePathForCategoryWithFolderName:(id)arg1 company:(id)arg2 type:(long)arg3;
- (id)pathForStationeryNamed:(id)arg1 inCategoryWithDisplayName:(id)arg2;
- (id)cachedTOCWithName:(id)arg1;
- (void)cacheTOC:(id)arg1 withName:(id)arg2;
- (id)cacheNameForCompany:(id)arg1 categoryDisplayName:(id)arg2 type:(long)arg3;
- (void)updateCategories;
- (id)companyTOCWithName:(id)arg1 type:(long)arg2 isFromCache:(char *)arg3;
- (void)combinePartialTOCs:(id)arg1;
- (id)newDictionaryForCustomCategoryForCompany:(BOOL)arg1;
- (id)validatedCompanyCategoryDictionary:(id)arg1 categoryFolderName:(id)arg2 companyBundle:(id)arg3 type:(long)arg4;
- (id)validatedStationeryDictionary:(id)arg1 withName:(id)arg2 categoryBundle:(id)arg3 needsThumbnail:(char *)arg4;
- (void)updateStationeryInCategoryWithDisplayName:(id)arg1;
- (id)categoryTOCForCategoryFolderName:(id)arg1 company:(id)arg2 type:(long)arg3 categoryDisplayName:(id)arg4;
- (void)thumbnailCreatorDidCompletelyFinish:(id)arg1;
- (void)thumbnailCreatorDidCreateThumbnailForCustomStationery:(id)arg1;
- (void)thumbnailCreator:(id)arg1 didCreateThumbnail:(id)arg2 forCustomStationeryWithPath:(id)arg3;
- (BOOL)stationery:(id)arg1 isInCategoryWithDisplayName:(id)arg2;
- (BOOL)customStationeryWithNameExists:(id)arg1 index:(int *)arg2;
- (void)addToFavoritesStationeryWithPath:(id)arg1 inCategoryWithDisplayName:(id)arg2;
- (void)addToFavoritesInPosition:(long)arg1 stationeryWithPath:(id)arg2 inCategoryWithDisplayName:(id)arg3;
- (BOOL)recursivelyCreateDirectory:(id)arg1 error:(id *)arg2;
- (BOOL)saveCustomStationery:(id)arg1 error:(id *)arg2;
- (BOOL)saveCustomStationery:(id)arg1 byMovingFromPath:(id)arg2 error:(id *)arg3;
- (BOOL)installStationery:(id)arg1;
- (void)deleteStationeryWithDictionary:(id)arg1 fromCategoryWithDisplayName:(id)arg2 undoManager:(id)arg3;
- (void)reinsertStationeryWithInformation:(id)arg1;
- (void)purgeDeletedCustomStationery:(id)arg1;
- (void)synchronouslyPurgeDeletedCustomStationery:(id)arg1;

@end

