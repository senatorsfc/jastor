//
//  Jastor.h
//  Jastor
//
//  Created by Elad Ossadon on 12/14/11.
//  http://devign.me | http://elad.ossadon.com | http://twitter.com/elado
//

@interface Jastor : NSObject <NSCoding>

@property (nonatomic, copy) NSString *objectId;
+ (id)objectFromDictionary:(NSDictionary*)dictionary;

- (id)initWithDictionary:(NSDictionary *)dictionary;


/**
 *  This method initialiazes a Jastor object using arrayClass if specified to parse arrays into.
 *  Alternatively there is an optional method, key_instance_class, a subclass can implement that
 *  array values will be parsed into if the value is not specified.
 *
 *  @param dictionary       The parsed json object
 *  @param arrayClass       The class array values will get parsed into if specified, otherwise class
 *                          methods are called.
 */
- (id)initWithDictionary:(NSDictionary *)dictionary arrayClass:(Class)arrayClass;

- (NSMutableDictionary *)toDictionary;

- (NSDictionary *)map;

@end
