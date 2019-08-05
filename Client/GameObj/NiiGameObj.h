/*
-----------------------------------------------------------------------------
大型多媒体框架

时间: 2015-5-7

文本编码: utf-8

所属公司: 深圳闽登科技有限公司

命名风格: 概论命名法

编程风格: 统筹式

管理模式: 分布式

内部成分: UI对象 网络对象 音频对象 物理对象 事件驱动对象(扩散性设计)

主要成分: c++(80%) c(20%)

用途: 操作系统桌面(包围操作系统内核api)
      三维应用软件
        计算机辅助立体设计软件(CAD)
        地理信息系统软件(GIS)
        电影背景立体重构软件
        立体游戏软件

偏向用途: 立体游戏软件

主页: www.niiengine.com 电子邮箱: niiengine@gmail.com OR niiengine@163.com

授权方式:商业授权(www.niiengine.com/license)(3种)
------------------------------------------------------------------------------
*/

#ifndef _NII_GAME_OBJECT_H_
#define _NII_GAME_OBJECT_H_

#include "Nii.h"
#include "NiiGameEffect.h"

namespace NIIGame
{
    /** 这个对象是描述出现在游戏中的具体的一个事件或物体通过继承这个可以抽象出游戏
        中所有需要的任何物体或事件
    @remark 这是游戏中的最高对象层,这个也是一个游戏中的应用层
    @par
        这个是应用层的对象类,也就是说如操作显卡,声卡,和文件系统这一事件不要出现在这
        里对象里面
    @par 如果要添加具体显卡,声卡,和文件的操作请查看 xxxxSystem.xxx
    @version NIIEngine 3.0.0
    */
    class _NIIGameExport GameObj : public CommandObj, public EventObj,
        public GameAlloc
    {
        friend class WarScene;
    public:
        typedef map<Nid, GeometryObj *>::type Modes;
        typedef list<WarScene *>::type Scenes;
        typedef map<NCount, ControlItem *>::type ControlItems;
        typedef map<NCount, InternetItem *>::type InternetItems;
    public :
        GameObj(){}

        GameObj(WarScene * own);

        virtual ~GameObj(){}

        /** 启用纹理技术
        @param tech 仅仅是单一设置,不支持复合码,如果想开启多个.重复调用这个函数
        @see GameEffect_Texture
        @return 设置成功则返回 true
        */
        virtual bool On(GameTech_Texture tech);

        /** 阴影级应用
        @param tech 仅仅是单一设置,不支持复合码,如果想开启多个.重复调用这个函数
        @see GameEffect_Shadow
        @return 设置成功则返回 true
        */
        virtual bool On(GameTech_Shadow tech);

        /** 光照级应用
        @param tech 仅仅是单一设置,不支持复合码,如果想开启多个.重复调用这个函数
        @see GameEffect_Light
        @return 设置成功则返回 true
        */
        virtual bool On(GameTech_Light tech);

        /** 模型级应用
        @param tech 仅仅是单一设置,不支持复合码,如果想开启多个.重复调用这个函数
        @see GameEffect_Model
        @return 设置成功则返回 true
        */
        virtual bool On(GameTech_Model tech);

        /** 事件级应用
        @param tech 仅仅是单一设置,不支持复合码,如果想开启多个.重复调用这个函数
        @see GameEffect_Event
        @return 设置成功则返回 true
        */
        virtual bool On(GameTech_Event tech);

        /** 声音级应用
        @param tech 仅仅是单一设置,不支持复合码,如果想开启多个.重复调用这个函数
        @see GameEffect_Voice
        @return 设置成功则返回 true
        */
        virtual bool On(GameTech_Voice tech);

        /** 输入控制器效果
        @param tech 仅仅是单一设置,不支持复合码,如果想开启多个.重复调用这个函数
        @see PatternTech_Control
        @return 设置成功则返回 true
        */
        virtual bool On(PatternTech_Control tech);

        /** 物理逻辑效果
        @param tech 仅仅是单一设置,不支持复合码,如果想开启多个.重复调用这个函数
        @see PatternTech_Control
        @return 设置成功则返回 true
        */
        virtual bool On(PatternTech_Physical tech);

        /** 纹理级应用
        @param tech 仅仅是单一设置,不支持复合码,如果想开启多个.重复调用这个函数
        @see GameEffect_Texture
        @return 设置成功则返回 true
        */
        virtual bool Off(GameTech_Texture tech);

        /** 阴影级应用
        @param tech 仅仅是单一设置,不支持复合码,如果想开启多个.重复调用这个函数
        @see GameEffect_Shadow
        @return 设置成功则返回 true
        */
        virtual bool Off(GameTech_Shadow tech);

        /** 光照级应用
        @param tech 仅仅是单一设置,不支持复合码,如果想开启多个.重复调用这个函数
        @see GameEffect_Light
        @return 设置成功则返回 true
        */
        virtual bool Off(GameTech_Light tech);

        /** 模型级应用
        @param tech 仅仅是单一设置,不支持复合码,如果想开启多个.重复调用这个函数
        @see GameEffect_Model
        @return 设置成功则返回 true
        */
        virtual bool Off(GameTech_Model tech);

        /** 事件级应用
        @param tech 仅仅是单一设置,不支持复合码,如果想开启多个.重复调用这个函数
        @see GameEffect_Event
        @return 设置成功则返回 true
        */
        virtual bool Off(GameTech_Event tech);

        /** 声音级应用
        @param tech 仅仅是单一设置,不支持复合码,如果想开启多个.重复调用这个函数
        @see GameEffect_Voice
        @return 设置成功则返回 true
        */
        virtual bool Off(GameTech_Voice tech);

        /** 输入控制器效果
        @param tech 仅仅是单一设置,不支持复合码,如果想开启多个.重复调用这个函数
        @see PatternTech_Control
        @return 设置成功则返回 true
        */
        virtual bool Off(PatternTech_Control tech);

        /** 物理逻辑效果
        @param tech 仅仅是单一设置,不支持复合码,如果想开启多个.重复调用这个函数
        @see PatternTech_Control
        @return 设置成功则返回 true
        */
        virtual bool Off(PatternTech_Physical tech);

        /** 公共级别
        @param apply 要关闭的游戏效果,可以是多个组合体
        @see GameEffect
        @return 设置成功则返回 true
        */
        virtual bool On(GameEffect tech);

        /** 公共级别
        @param apply 要关闭的游戏效果,可以是多个组合体
        @see GameEffect
        @return 设置成功则返回 true
        */
        virtual bool Off(GameEffect tec);

        /** 返回创建这个游戏对象的动作场景
        @remark 可以从父对象中获取一些信息
        */
        WarScene * getParent() const;

        /** 立即执行
        @remark
        */
        virtual bool action();

        /**
        @remark
        */
        virtual bool action();

        /**
        @remark
        */
        virtual bool action();

        ///@copydetails EventObj::create
        virtual MemberFunctor * create(EventID id) const;
    protected:
        /** 这个游戏对象在创建后的第一瞬间触发
        @remark 对象都应该由动作场景去创建
        @param target 创建这个场景对象的动作场景
        @par NO 16(16-255)
        */
        virtual void onCreated(const EventArgs * arg);

        /** 在这个游戏对象从所有动作场景中移去的时候触发
        @remark
            但此时可能还有其他的场景正在引用它,此时并没有真正的把对象析构掉,但这个方
            法可能会把这个游戏对象完全蒸发掉,这个依赖于具体的设计
        @param target 删除这个游戏对象的动作场景
        @par N0 17(16-255)
        */
        virtual void onDestroyed(const EventArgs * arg);

        /** 在这个对象完全被析构掉的时候触发
        @remark
            这个方法告诉用户对象已经完全不存在了,如果要继续使用它必须再次调用初始化方
            法
        @param usrdata 调用事件用的额外数据
        @par N0 18(16-255)
        */
        virtual void onDeleted(const EventArgs * arg);

        /** 当对焦到这个对象后,鼠标按下的时候触发
        @remark 当鼠标选中了这个对象的时候触发,可以通过设置选中类型是大体或者精细选中
        @param usrdata 调用事件用的额外数据
        @par N0 19(16-255)
        */
        virtual void onMouseButtonPressed(const EventArgs * arg);

        /** 当对焦到这个对象后,鼠标放开的时候触发
        @remark
            当鼠标从当前选中的对象中离开并且又单击了鼠标,但选中的是空白或是另一个对象
            的时候触发
        @param usrdata 调用事件用的额外数据
        @paranm usrdata
        @par N0 20(16-255)
        */
        virtual void onMouseButtonReleased(const EventArgs * arg);

        /** 在对象显示的时候触发
        @remark
            这个方法是在每帧都执行的,所以要注意函数性能问题,这个方法合适分割可见和不可
            见时需要更新的数据方法,从而提升整体性能
        @param usrdata 调用事件用的额外数据
        @par N0 21(16-255)
        */
        virtual void onShown(const EventArgs * arg);

        /** 在对象隐藏的时候触发
        @remark
            这个方法是在每帧中执行的,所有要注意函数性能问题,这个方法合适分割可见和不可
            见时需要更新的数据方法,从而提升整体性能
        @param usrdata 调用事件用的额外数据
        @par N0 22(16-255)
        */
        virtual void onHidden(const EventArgs * arg);

        /** 在鼠标移动到这个对象内时触发
        @remark
            这个方法需要去设置ListenMark,默认是不监听这个事件的,当这个事件有效时,因为
            每帧都需要去执行,存在效率问题
        @param usrdata 调用事件用的额外数据
        @par N0 23(16-255)
        */
        virtual void onMouseMovesOver(const EventArgs * arg);

        /** 在鼠标移动到这个对象外的时候触发
        @remark
            这个方法需要去设置ListenMark,默认是不监听这个事件的,当这个事件有效时,因为
            每帧都需要去执行,存在效率问题
        @param usrdata 调用事件用的额外数据
        @par N0 24(16-255)
        */
        virtual void onMouseMovesLeft(const EventArgs * arg);

        /** 当对焦到这个对象后,按下键盘的时候触发
        @remark 对焦后将会监听用户按下的键盘消息
        @param usrdata 调用事件用的额外数据
        @par N0 25(16-255)
        */
        virtual void onKeyboardKeyDowned(const EventArgs * arg);

        /** 当对焦到这个对象后,松开键盘的时候触发
        @remark 对焦后将会监听用户松开的键盘消息
        @param usrdata 调用事件用的额外数据
        @par N0 26(16-255)
        */
        virtual void onKeyboardKeyReleased(const EventArgs * arg);

        /** 从没有执行动画到执行动画的时候触发
        @remark 在对象第一个动画开始时触发
        @param usrdata 调用事件用的额外数据
        @par NO 27(16-255)
        */
        virtual void onPreAnimate(const EventArgs * arg);

        /** 在执行动画期间触发
        @remark 这个方法是在对象执行动画期间的每帧中执行
        @param usrdata 调用事件用的额外数据
        @par NO 28(16-255)
        */
        virtual void onAnimating(const EventArgs * arg);

        /** 在一个动画结束后触发
        @remark
            这描述的是一个系列的动画走到最后才发生的,循环动画也是,如此,也就是说每个动
            画轨迹的最后一帧中都会执行这个方法
        @param usrdata 调用事件用的额外数据
        @par NO 29(16-255)
        */
        virtual void onAnimateEnd(const EventArgs * arg);

        /** 在一个动画状态改变的时候触发
        @remark 在动画开始到结束,或到转到另一个动画的时候会触发这个事件
        @param usrdata 调用事件用的额外数据
        @par NO 30(16-255)
        */
        virtual void onAnimateStateChange(const EventArgs * arg);

        /** 在一个动画中断的时候触发
        @remark 一般是一个对象在执行动画期间(还没结束),突然执行跳转到0.0时间处的状态
        @param usrdata 调用事件用的额外数据
        @par NO 31(16-255)
        */
        virtual void onAnimateStateInterrupt(const EventArgs * arg);

        /** 当使用的阴影技术设置改变时触发
        @remark 底层的阴影技术在运行时改变会触发这个事件
        @param apply 所应用的阴影技术
        @par NO 32(16-255)
        */
        virtual void onShadowTechChanged(const EventArgs * arg);

        /** 当使用的纹理技术设置改变时触发
        @remark 运行时的状态改变
        @param apply 所应用的纹理技术
        @par NO 33(16-255)
        */
        virtual void onTextureTechChanged(const EventArgs * arg);

        /** 当使用的灯光技术设置改变时触发
        @remark 运行时的状态改变
        @param apply 所应用的灯光技术
        @par NO 34(16-255)
        */
        virtual void onLightTechChanged(const EventArgs * arg);

        /** 当使用的模型技术设置改变时触发
        @remark 运行时的状态改变
        @param apply 所应用的模型技术
        @par NO 35(16-255)
        */
        virtual void onModelTechChanged(const EventArgs * arg);

        /** 当使用的事件技术设置改变时触发
        @remark 运行时的状态改变
        @param apply 所应用的时间技术
        @par NO 36(16-255)
        */
        virtual void onEventTechChanged(const EventArgs * arg);

        /** 当使用的声音技术设置改变时触发
        @remark 运行时的状态改变
        @param apply 所应用的声音技术
        @par NO 37(16-255)
        */
        virtual void onVoiceTechChanged(const EventArgs * arg);

        /** 在一个子对象分离的时候触发
        @remark
        @param dest 子对象
        @par NO 38(16-255)
        */
        virtual void onChildDetached(const EventArgs * arg);

        /** 在一个子对象在运行时附加到对象时触发
        @remark
        @param dest 子对象
        @par NO 39(16-255)
        */
        virtual void onChildAttached(const EventArgs * arg);

        /** 当一个对象的位置发生改变时触发
        @remark
        @param pos 改变后的位置(这个值是相对于动作场景)
        @par NO 40(16-255)
        */
        virtual void onPositionChanged(const EventArgs * arg);

        /** 当一个对象的方向发生改变时触发
        @remark
        @param dir 改变后的方向(这个值是相对于动作场景)
        @par NO 41(16-255)
        */
        virtual void onDirectionChanged(const EventArgs * arg);

        /** 当一个对象的缩放改变时触发
        @remark
        @param scale 改变后的缩放比(这个值是相对于动作场景)
        @par NO 42(16-255)
        */
        virtual void onScaleChanged(const EventArgs * arg);

        /** 当一个对象的空间发生改变时触发
        @remark 一个对象可以使用局部空间或者全局(世界)空间,当这种状态发生
            改变的时候触发
        @param usrdata 调用事件用的额外数据
        @par NO 43(16-255)
        */
        virtual void onRelationChanged(const EventArgs * arg);

        /** 当一个对象的子对象发生状态改变的时候触发
        @remark 在对象第一个动画开始时触发
        @param usrdata 调用事件用的额外数据
        @par NO 44(16-255)
        */
        virtual void onChildStateChanged(const EventArgs * arg);

        /** 从没有执行声音播放到执行声音播放的时候触发
        @remark
        @param usrdata 调用事件用的额外数据
        @par NO 45(16-255)
        */
        virtual void onPreVoice(const EventArgs * arg);

        /** 在执行播放声音期间触发
        @remark 在声音播放期间每帧都执行的回调
        @param usrdata 调用事件用的额外数据
        @par NO 46(16-255)
        */
        virtual void onVoicing(const EventArgs * arg);

        /** 在声音播放完后触发
        @remark 对象的发出的声音结束,而且下一刻后不继续播放
        @param usrdata 调用事件用的额外数据
        @par NO 47(16-255)
        */
        virtual void onVoiceEnd(const EventArgs * arg);

        /** 在一个播放中的声音状态改变的时候触发
        @remark 在声音播放开始到结束,或到转到另一个动画的时候会触发这个事件
        @param usrdata 调用事件用的额外数据
        @par NO 48(16-255)
        */
        virtual void onVoiceStateChanged(const EventArgs * arg);

        /** 在一个播放中的声音中断的时候触发
        @remark 一般是一个对象在播放声音期间(还没结束),突然执行跳转到0.0时
            间处的状态
        @param usrdata 调用事件用的额外数据
        @par NO 49(16-255)
        */
        virtual void onVoicedInterrupted(const EventArgs * arg);

        /** 物体空间冲突前触发
        @remark 通过这个函数可以配置物理引擎
        @param usrdata 调用事件用的额外数据
        @par NO 50(16-255)
        */
        virtual void onPrePhysicalEvent(const EventArgs * arg);

        /** 物体空间冲突后触发
        @remark
        @param usrdata 调用事件用的额外数据
        @par NO 51(16-255)
        */
        virtual void onPhysicalEventEnd(const EventArgs * arg);

        /** 对象从宿主对象中分离时触发
        @remark
        @param target 分离这个对象的动作场景的id
        @par NO 52(16-255)
        */
        virtual void onDetached(const EventArgs * arg);

        /** 对象附加到宿主对象中时触发
        @remark
        @param target 这个对象所附加到的动作场景的id
        @par NO 53(16-255)
        */
        virtual void onAttached(const EventArgs * arg);

        /** 对象被摄象机对焦的时触发
        @remark
            对焦事件驱动一般都是由游戏对象产生的,当重写这个方法的时候,尽量继承父类的
            这个方法,从而激活内部的控制驱动
        @param src 对焦的来源对象
        @par NO 54(16-255)
        */
        virtual void onFocused(const EventArgs * arg);

        /** 对象在摄象机中释放焦点时触发
        @remark
            对焦事件驱动一般都是由游戏对象产生的,当重写这个方法的时候,尽量继承父类的
            这个方法,从而释放内部的控制驱动
        @param usrdata 调用事件用的额外数据
        @par NO 55(16-255)
        */
        virtual void onReleased(const EventArgs * arg);

        /** 当对象接收来自外网数据时触发
        @remark
        @param in 向外部发送数据的处理模型id
        @par NO 56(16-255)
        */
        virtual void onInternetIn(const EventArgs * arg);

        /** 当对象某些数据发送到外网时触发
        @remark
        @param out 接收外部数据的处理模型的id
        @par NO 57(16-255)
        */
        virtual void onInternetOut(const EventArgs * arg);

        /** 在动画数据更新期间中触发
        @remark 在执行每个动画数据成份更新前触发
        @param animate 当前更新的动画的id,这个id所对应的动画都应该有个状态描述
        @par NO 58(16-255)
        */
        virtual void onAnimateUpdating(const EventArgs * arg);

        /** 在动画数据更新前触发
        @remark
        @param animate 当前更新的动画的id,这个id所对应的动画都应该有个状态描述
        @par NO 59(16-255)
        */
        virtual void onPreUpdateAnimate(const EventArgs * arg);

        /** 在动画数据更新完后触发
        @remark
        @param animate 当前更新的动画的id,这个id所对应的动画都应该有个状态描述
        @par NO 60(16-255)
        */
        virtual void onUpdateAnimateEnd(const EventArgs * arg);

        /** 从不渲染到渲染前触发
        @remark
        @param rend 当前执行渲染的可渲染对象的id
        @par NO 61(16-255)
        */
        virtual void onPreRender(const EventArgs * arg);

        /** 渲染期间触发
        @remark
        @param rend 当前执行渲染的可渲染对象的id
        @par NO 62(16-255)
        */
        virtual void onRendering(const EventArgs * arg);

        /** 对象的渲染结束触发
        @remark
        @param rend 当前执行渲染的可渲染对象的id
        @par NO 63(16-255)
        */
        virtual void onRenderEnd(const EventArgs * arg);

        /** 默认更新
        @remark
        */
        virtual void _update();

        /** 指定目标的更新
        @remark 如果参数为0值 将使用默认更新
        @param dest
        */
        virtual void _update(const WarScene * dest);
    private:
        /** 效验这个对象的完整性
        @param force
            强制补这个对象的全完整性,除非使用了完整的补全策略,不然尽量不要为true
        @param rel 效验这个对象的关系对象是否完整性
        */
        virtual bool checkComplete(bool force = false, rel = false);
    public:
        /** 这个游戏对象在创建后的第一瞬间触发
        @remark 对象都应该由动作场景去创建
        @par NO 16(16-255)
        */
        static const EventID CreatedEvent;

        /** 在这个游戏对象从所有动作场景中移去的时候触发
        @remark
            但此时可能还有其他的场景正在引用它,此时并没有真正的把对象析构掉,但这个方
            法可能会把这个游戏对象完全蒸发掉,这个依赖于具体的设计
        @par NO 17(16-255)
        */
        static const EventID DestroyedEvent;

        /** 在这个对象完全被析构掉的时候触发
        @remark
            这个方法告诉用户对象已经完全不存在了,如果要继续使用它必须再次调用初始化方
            法
        @par NO 18(16-255)
        */
        static const EventID DeletedEvent;

        /** 当对焦到这个对象后,鼠标按下的时候触发
        @remark 当鼠标选中了这个对象的时候触发,可以通过设置选中类型是大体或者精细选中
        @par NO 19(16-255)
        */
        static const EventID MouseButtonPressedEvent;

        /** 当对焦到这个对象后,鼠标放开的时候触发
        @remark
            当鼠标从当前选中的对象中离开并且又单击了鼠标,但选中的是空白或是另一个对象
            的时候触发
        @par NO 20(16-255)
        */
        static const EventID MouseButtonReleasedEvent;

        /** 在对象显示的时候触发
        @remark
            这个方法是在每帧都执行的,所以要注意函数性能问题,这个方法合适分割可见和不可
            见时需要更新的数据方法,从而提升整体性能
        @par NO 21(16-255)
        */
        static const EventID ShownEvent;

        /** 在对象隐藏的时候触发
        @remark
            这个方法是在每帧中执行的,所有要注意函数性能问题,这个方法合适分割可见和不可
            见时需要更新的数据方法,从而提升整体性能
        @par NO 22(16-255)
        */
        static const EventID HiddenEvent;

        /** 在鼠标移动到这个对象内时触发
        @remark
            这个方法需要去设置ListenMark,默认是不监听这个事件的,当这个事件有效时,因为
            每帧都需要去执行,存在效率问题
        @par NO 23(16-255)
        */
        static const EventID MouseMovesOverEvent;

        /** 在鼠标移动到这个对象外的时候触发
        @remark
            这个方法需要去设置ListenMark,默认是不监听这个事件的,当这个事件有效时,因为
            每帧都需要去执行,存在效率问题
        @par NO 24(16-255)
        */
        static const EventID MouseMovesLeftEvent;

        /** 当对焦到这个对象后,按下键盘的时候触发
        @remark 对焦后将会监听用户按下的键盘消息
        @par NO 25(16-255)
        */
        static const EventID KeyboardKeyDownedEvent;

        /** 当对焦到这个对象后,松开键盘的时候触发
        @remark 对焦后将会监听用户松开的键盘消息
        @par NO 26(16-255)
        */
        static const EventID KeyboardKeyReleasedEvent;

        /** 从没有执行动画到执行动画的时候触发
        @remark 在对象第一个动画开始时触发
        @par NO 27(16-255)
        */
        static const EventID PreAnimateEvent;

        /** 在执行动画期间触发
        @remark 这个方法是在对象执行动画期间的每帧中执行
        @par NO 28(16-255)
        */
        static const EventID AnimatingEvent;

        /** 在一个动画结束后触发
        @remark
            这描述的是一个系列的动画走到最后才发生的,循环动画也是,如此,也就是说每个动
            画轨迹的最后一帧中都会执行这个方法
        @par NO 29(16-255)
        */
        static const EventID AnimateEndEvent;

        /** 在一个动画状态改变的时候触发
        @remark 在动画开始到结束,或到转到另一个动画的时候会触发这个事件
        @par NO 30(16-255)
        */
        static const EventID AnimateStateChangeEvent;

        /** 在一个动画中断的时候触发
        @remark 一般是一个对象在执行动画期间(还没结束),突然执行跳转到0.0时间处的状态
        @par NO 31(16-255)
        */
        static const EventID AnimateStateInterruptEvent;

        /** 当使用的阴影技术设置改变时触发
        @remark 底层的阴影技术在运行时改变会触发这个事件
        @par NO 32(16-255)
        */
        static const EventID ShadowTechChangedEvent;

        /** 当使用的纹理技术设置改变时触发
        @remark 运行时的状态改变
        @par NO 33(16-255)
        */
        static const EventID TextureTechChangedEvent;

        /** 当使用的灯光技术设置改变时触发
        @remark 运行时的状态改变
        @par NO 34(16-255)
        */
        static const EventID LightTechChangedEvent;

        /** 当使用的模型技术设置改变时触发
        @remark 运行时的状态改变
        @par NO 35(16-255)
        */
        static const EventID ModelTechChangedEvent;

        /** 当使用的事件技术设置改变时触发
        @remark 运行时的状态改变
        @par NO 36(16-255)
        */
        static const EventID EventTechChangedEvent;

        /** 当使用的声音技术设置改变时触发
        @remark 运行时的状态改变
        @par NO 37(16-255)
        */
        static const EventID VoiceTechChangedEvent;

        /** 在一个子对象分离的时候触发
        @par NO 38(16-255)
        */
        static const EventID ChildDetachedEvent;

        /** 在一个子对象在运行时附加到对象时触发
        @par NO 39(16-255)
        */
        static const EventID ChildAttachedEvent;

        /** 当一个对象的位置发生改变时触发
        @par NO 40(16-255)
        */
        static const EventID PositionChangedEvent;

        /** 当一个对象的方向发生改变时触发
        @par NO 41(16-255)
        */
        static const EventID DirectionChangedEvent;

        /** 当一个对象的缩放改变时触发
        @par NO 42(16-255)
        */
        static const EventID ScaleChangedEvent;

        /** 当一个对象的空间发生改变时触发
        @remark
            一个对象可以使用局部空间或者全局(世界)空间,当这种状态发生改变的时候触发
        @par NO 43(16-255)
        */
        static const EventID RelationChangedEvent;

        /** 当一个对象的子对象发生状态改变的时候触发
        @remark 在对象第一个动画开始时触发
        @par NO 44(16-255)
        */
        static const EventID ChildStateChangedEvent;

        /** 从没有执行声音播放到执行声音播放的时候触发
        @par NO 45(16-255)
        */
        static const EventID PreVoiceEvent;

        /** 在执行播放声音期间触发
        @remark 在声音播放期间每帧都执行的回调
        @par NO 46(16-255)
        */
        static const EventID VoicingEvent;

        /** 在声音播放完后触发
        @remark 对象的发出的声音结束,而且下一刻后不继续播放
        @par NO 47(16-255)
        */
        static const EventID VoiceEndEvent;

        /** 在一个播放中的声音状态改变的时候触发
        @remark 在声音播放开始到结束,或到转到另一个动画的时候会触发这个事件
        @par NO 48(16-255)
        */
        static const EventID VoiceStateChangedEvent;

        /** 在一个播放中的声音中断的时候触发
        @remark 一般是一个对象在播放声音期间(还没结束),突然执行跳转到0.0时
            间处的状态
        @par NO 49(16-255)
        */
        static const EventID VoicedInterruptedEvent;

        /** 物体空间冲突前触发
        @remark 通过这个函数可以配置物理引擎
        @par NO 50(16-255)
        */
        static const EventID PrePhysicalEvent;

        /** 物体空间冲突后触发
        @par NO 51(16-255)
        */
        static const EventID PhysicalEndEvent;

        /** 对象从宿主对象中分离时触发
        @par NO 52(16-255)
        */
        static const EventID DetachedEvent;

        /** 对象附加到宿主对象中时触发
        @par NO 53(16-255)
        */
        static const EventID AttachedEvent;

        /** 对象被摄象机对焦的时触发
        @par NO 54(16-255)
        */
        static const EventID FocusedEvent;

        /** 对象在摄象机中释放焦点时触发
        @par NO 55(16-255)
        */
        static const EventID ReleasedEvent;

        /** 当对象接收来自外网数据时触发
        @par NO 56(16-255)
        */
        static const EventID InternetInEvent;

        /** 当对象某些数据发送到外网时触发
        @par NO 57(16-255)
        */
        static const EventID InternetOutEvent;
        
        /** 在动画数据更新前触发
        @par NO 58(16-255)
        */
        static const EventID PreUpdateAnimateEvent;
        
        /** 在动画数据更新期间中触发
        @par NO 59(16-255)
        */
        static const EventID AnimateUpdatingEvent;

        /** 在动画数据更新完后触发
        @par NO 60(16-255)
        */
        static const EventID UpdateAnimateEndEvent;

        /** 从不渲染到渲染前触发
        @par NO 61(16-255)
        */
        static const EventID PreRenderEvent;

        /** 渲染期间触发
        @par NO 62(16-255)
        */
        static const EventID RenderingEvent;

        /** 对象的渲染结束触发
        @par NO 63(16-255)
        */
        static const EventID RenderEndEvent;

        ///
        static const EventID EventCount;
    protected:
        WarScene * mParent;                 ///< 这个对象的父对象的句柄(仅充许一个父对象)
        Nid mId;                            ///< 这个对象的唯一句柄,有这个句柄可编写外部脚本控制
        Modes mModes;                       ///< 属于这个游戏对象的部件,可能是单实例/动态,静态多并聚
        Scenes mScenes;                     ///< 使用这个游戏对象的动作场景
        NIIi mShadowTechMark;               ///< 当前使用的阴影技术,把它记录下来方便识别和失败逆回操作
        NIIi mTextureTechMark;              ///< 当前使用的纹理技术,把它记录下来方便识别和失败逆回操作
        NIIi mLightTechMark;                ///< 当前使用的灯光技术,把它记录下来方便识别和失败逆回操作
        NIIi mModelTechMark;                ///< 当前使用的几何技术,把它记录下来方便识别和失败逆回操作
        NIIi mEventTechMark;                ///< 当前使用的事件技术,把它记录下来方便识别和失败逆回操作
        NIIi mVoiceTechMark;                ///< 当前使用的音频技术,把它记录下来方便识别和失败逆回操作
        NIIi mControlEffectMark;            ///< 当前使用的控制类型,把它记录下来方便识别和失败逆回操作
        NIIi mInternetEffectMark;           ///< 当前使用的网络类型,把它记录下来方便识别和失败逆回操作
        NIIi mGameEffectMark;               ///< 当前使用的环境效果(可以是复杂的组合)
        ControlItems mContorlItems;         ///< 当前这个对象已经映射的输入控制器单元
        ControlItems mValidContorlItems;    ///< 当前对这个对象有效的输入控制器单元
        InternetItems mInternetItems;       ///< 当前这个对象已经映射的网络单元
        InternetItems mValidInternetItems;  ///< 当前对这个对象有效的网络单元
    };
}
#endif