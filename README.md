# SDAlertView
自定义弹出框


使用简单 无需担心9.0方法过期 ，不用设置代理直接block 回调


    SDAlertView *alert=[[SDAlertView alloc] initWithTitle:@"警告" message:@"SuDream" cancelBtnTitle:@"取消" otherBtnTitle:@"sss" clickIndexBlock:^(NSInteger btnindex, NSString *btnTitle) {
        
        NSLog(@"%zd--%@",btnindex,btnTitle);
    }];
    
    //    alert.cancelColor=[UIColor redColor]; 可以设置按钮颜色
    //设置动画类型(默认是缩放)
    alert.animationStyle=SDAnimationLeftShake;

    [alert showsSDAlertView];
    
    
    
    //动画类型
typedef NS_ENUM(NSInteger ,SDShowAnimationStyle) {
    SDAnimationDefault    = 0, 
    SDAnimationLeftShake  ,
    SDAnimationTopShake   ,
    SDAnimationNO         ,
};
