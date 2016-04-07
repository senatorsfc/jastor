#import "ProductCategory.h"

@implementation ProductCategory

@synthesize name, children;

+ (Class)children_class { // used by Jastor
	return [ProductCategory class];
}

-(void) dealloc {
    name = nil;
    children = nil;
}
@end
