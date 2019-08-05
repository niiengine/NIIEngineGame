/*
-----------------------------------------------------------------------------
面向游戏设计引擎

时间: 2012-11-1

文本编码: utf-8

所属公司: 深圳闽登科技有限公司

命名风格: 概论命名法

编程风格: 统筹式

管理模式: 分布式

内部成分: UI对象 网络对象 音频对象 物理对象 事件驱动对象(扩散性设计)

主要成分: c++(80%) c(20%)

主页: www.niiengine.com 电子邮箱: niiengine@gmail.com OR niiengine@163.com

授权方式:商业授权(www.niiengine.com/license)(3种)
------------------------------------------------------------------------------
*/

#include "NiiGameObj.h"

namespace NIIGame
{
    //------------------------------------------------------------------------
    NII_EVENT(CommandObj, GameObj, CreatedEvent,                0);
    NII_EVENT(CommandObj, GameObj, DestroyedEvent,              1);
    NII_EVENT(CommandObj, GameObj, DeletedEvent,                2);
    NII_EVENT(CommandObj, GameObj, MouseButtonPressedEvent,     3);
    NII_EVENT(CommandObj, GameObj, MouseButtonReleasedEvent,    4);
    NII_EVENT(CommandObj, GameObj, ShownEvent,                  5);
    NII_EVENT(CommandObj, GameObj, HiddenEvent,                 6);
    NII_EVENT(CommandObj, GameObj, MouseMovesOverEvent,         7);
    NII_EVENT(CommandObj, GameObj, MouseMovesLeftEvent,         8);
    NII_EVENT(CommandObj, GameObj, KeyboardKeyDownedEvent,      9);
    NII_EVENT(CommandObj, GameObj, KeyboardKeyReleasedEvent,    10);
    NII_EVENT(CommandObj, GameObj, PreAnimateEvent,             11);
    NII_EVENT(CommandObj, GameObj, AnimatingEvent,              12);
    NII_EVENT(CommandObj, GameObj, AnimateEndEvent,             13);
    NII_EVENT(CommandObj, GameObj, AnimateStateChangeEvent,     14);
    NII_EVENT(CommandObj, GameObj, AnimateStateInterruptEvent,  15);
    NII_EVENT(CommandObj, GameObj, ShadowTechChangedEvent,      16);
    NII_EVENT(CommandObj, GameObj, TextureTechChangedEvent,     17);
    NII_EVENT(CommandObj, GameObj, LightTechChangedEvent,       18);
    NII_EVENT(CommandObj, GameObj, ModelTechChangedEvent,       19);
    NII_EVENT(CommandObj, GameObj, EventTechChangedEvent,       20);
    NII_EVENT(CommandObj, GameObj, VoiceTechChangedEvent,       21);
    NII_EVENT(CommandObj, GameObj, ChildDetachedEvent,          22);
    NII_EVENT(CommandObj, GameObj, ChildAttachedEvent,          23);
    NII_EVENT(CommandObj, GameObj, PositionChangedEvent,        24);
    NII_EVENT(CommandObj, GameObj, DirectionChangedEvent,       25);
    NII_EVENT(CommandObj, GameObj, ScaleChangedEvent,           26);
    NII_EVENT(CommandObj, GameObj, RelationChangedEvent,        27);
    NII_EVENT(CommandObj, GameObj, ChildStateChangedEvent,      28);
    NII_EVENT(CommandObj, GameObj, PreVoiceEvent,               29);
    NII_EVENT(CommandObj, GameObj, VoicingEvent,                30);
    NII_EVENT(CommandObj, GameObj, VoiceEndEvent,               31);
    NII_EVENT(CommandObj, GameObj, VoiceStateChangedEvent,      32);
    NII_EVENT(CommandObj, GameObj, VoicedInterruptedEvent,      33);
    NII_EVENT(CommandObj, GameObj, PrePhysicalEvent,            34);
    NII_EVENT(CommandObj, GameObj, PhysicalEndEvent,            35);
    NII_EVENT(CommandObj, GameObj, DetachedEvent,               36);
    NII_EVENT(CommandObj, GameObj, AttachedEvent,               37);
    NII_EVENT(CommandObj, GameObj, FocusedEvent,                38);
    NII_EVENT(CommandObj, GameObj, ReleasedEvent,               39);
    NII_EVENT(CommandObj, GameObj, InternetInEvent,             40);
    NII_EVENT(CommandObj, GameObj, InternetOutEvent,            41);
    NII_EVENT(CommandObj, GameObj, PreUpdateAnimateEvent,       42);
    NII_EVENT(CommandObj, GameObj, AnimateUpdatingEvent,        43);
    NII_EVENT(CommandObj, GameObj, UpdateAnimateEndEvent,       44);
    NII_EVENT(CommandObj, GameObj, PreRenderEvent,              45);
    NII_EVENT(CommandObj, GameObj, RenderingEvent,              46);
    NII_EVENT(CommandObj, GameObj, RenderEndEvent,              47);
    NII_EVENT(CommandObj, GameObj, EventCount,                  48);
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    // CreatedMemberFunctor
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    class CreatedMemberFunctor : public MemberFunctor
    {
    public:
        CreatedMemberFunctor();
        ~CreatedMemberFunctor();
    protected:
        /// @copydetails MemberFunctor::process
        bool process(CmpMode cp, const EventArgs * args)
        {

        }

        /// @copydetails MemberFunctor::check
        bool check(const EventArgs * arg)
        {

        }
    };
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    // DestroyedMemberFunctor
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    class DestroyedMemberFunctor : public MemberFunctor
    {
    public:
        DestroyedMemberFunctor();
        ~DestroyedMemberFunctor();
    protected:
        /// @copydetails MemberFunctor::process
        bool process(CmpMode cp, const EventArgs * args)
        {

        }

        /// @copydetails MemberFunctor::check
        bool check(const EventArgs * arg)
        {

        }
    };
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    // DeletedMemberFunctor
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    class DeletedMemberFunctor : public MemberFunctor
    {
    public:
        DeletedMemberFunctor();
        ~DeletedMemberFunctor();
    protected:
        /// @copydetails MemberFunctor::process
        bool process(CmpMode cp, const EventArgs * args)
        {

        }

        /// @copydetails MemberFunctor::check
        bool check(const EventArgs * arg)
        {

        }
    };
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    // MouseButtonPressedMemberFunctor
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    class MouseButtonPressedMemberFunctor : public MemberFunctor
    {
    public:
        MouseButtonPressedMemberFunctor();
        ~MouseButtonPressedMemberFunctor();
    protected:
        /// @copydetails MemberFunctor::process
        bool process(CmpMode cp, const EventArgs * args)
        {

        }

        /// @copydetails MemberFunctor::check
        bool check(const EventArgs * arg)
        {

        }
    };
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    // MouseButtonReleasedMemberFunctor
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    class MouseButtonReleasedMemberFunctor : public MemberFunctor
    {
    public:
        MouseButtonReleasedMemberFunctor();
        ~MouseButtonReleasedMemberFunctor();
    protected:
        /// @copydetails MemberFunctor::process
        bool process(CmpMode cp, const EventArgs * args)
        {

        }

        /// @copydetails MemberFunctor::check
        bool check(const EventArgs * arg)
        {

        }
    };
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    // ShownMemberFunctor
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    class ShownMemberFunctor : public MemberFunctor
    {
    public:
        ShownMemberFunctor();
        ~ShownMemberFunctor();
    protected:
        /// @copydetails MemberFunctor::process
        bool process(CmpMode cp, const EventArgs * args)
        {

        }

        /// @copydetails MemberFunctor::check
        bool check(const EventArgs * arg)
        {

        }
    };
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    // HiddenMemberFunctor
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    class HiddenMemberFunctor : public MemberFunctor
    {
    public:
        HiddenMemberFunctor();
        ~HiddenMemberFunctor();
    protected:
        /// @copydetails MemberFunctor::process
        bool process(CmpMode cp, const EventArgs * args)
        {

        }

        /// @copydetails MemberFunctor::check
        bool check(const EventArgs * arg)
        {

        }
    };
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    // MouseMovesOverMemberFunctor
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    class MouseMovesOverMemberFunctor : public MemberFunctor
    {
    public:
        MouseMovesOverMemberFunctor();
        ~MouseMovesOverMemberFunctor();
    protected:
        /// @copydetails MemberFunctor::process
        bool process(CmpMode cp, const EventArgs * args)
        {

        }

        /// @copydetails MemberFunctor::check
        bool check(const EventArgs * arg)
        {

        }
    };
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    // MouseMovesLeftMemberFunctor
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    class MouseMovesLeftMemberFunctor : public MemberFunctor
    {
    public:
        MouseMovesLeftMemberFunctor();
        ~MouseMovesLeftMemberFunctor();
    protected:
        /// @copydetails MemberFunctor::process
        bool process(CmpMode cp, const EventArgs * args)
        {

        }

        /// @copydetails MemberFunctor::check
        bool check(const EventArgs * arg)
        {

        }
    };
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    // KeyboardKeyDownedMemberFunctor
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    class KeyboardKeyDownedMemberFunctor : public MemberFunctor
    {
    public:
        KeyboardKeyDownedMemberFunctor();
        ~KeyboardKeyDownedMemberFunctor();
    protected:
        /// @copydetails MemberFunctor::process
        bool process(CmpMode cp, const EventArgs * args)
        {

        }

        /// @copydetails MemberFunctor::check
        bool check(const EventArgs * arg)
        {

        }
    };
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    // KeyboardKeyReleasedMemberFunctor
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    class KeyboardKeyReleasedMemberFunctor : public MemberFunctor
    {
    public :
        KeyboardKeyReleasedMemberFunctor();
        ~KeyboardKeyReleasedMemberFunctor();
    protected:
        /// @copydetails MemberFunctor::process
        bool process(CmpMode cp, const EventArgs * args)
        {

        }

        /// @copydetails MemberFunctor::check
        bool check(const EventArgs * arg)
        {

        }
    };
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    // PreAnimateMemberFunctor
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    class PreAnimateMemberFunctor : public MemberFunctor
    {
    public:
        PreAnimateMemberFunctor();
        ~PreAnimateMemberFunctor();
    protected:
        /// @copydetails MemberFunctor::process
        bool process(CmpMode cp, const EventArgs * args)
        {

        }

        /// @copydetails MemberFunctor::check
        bool check(const EventArgs * arg)
        {

        }
    };
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    // AnimatingMemberFunctor
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    class AnimatingMemberFunctor : public MemberFunctor
    {
    public:
        AnimatingMemberFunctor();
        ~AnimatingMemberFunctor();
    protected:
        /// @copydetails MemberFunctor::process
        bool process(CmpMode cp, const EventArgs * args)
        {

        }

        /// @copydetails MemberFunctor::check
        bool check(const EventArgs * arg)
        {

        }
    };
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    // AnimateEndMemberFunctor
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    class AnimateEndMemberFunctor : public MemberFunctor
    {
    public:
        AnimateEndMemberFunctor();
        ~AnimateEndMemberFunctor();
    protected:
        /// @copydetails MemberFunctor::process
        bool process(CmpMode cp, const EventArgs * args)
        {

        }

        /// @copydetails MemberFunctor::check
        bool check(const EventArgs * arg)
        {

        }
    };
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    // AnimateStateChangeMemberFunctor
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    class AnimateStateChangeMemberFunctor : public MemberFunctor
    {
    public:
        AnimateStateChangeMemberFunctor();
        ~AnimateStateChangeMemberFunctor();
    protected:
        /// @copydetails MemberFunctor::process
        bool process(CmpMode cp, const EventArgs * args)
        {

        }

        /// @copydetails MemberFunctor::check
        bool check(const EventArgs * arg)
        {

        }
    };
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    // AnimateStateInterruptMemberFunctor
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    class AnimateStateInterruptMemberFunctor : public MemberFunctor
    {
    public:
        AnimateStateInterruptMemberFunctor();
        ~AnimateStateInterruptMemberFunctor();
    protected:
        /// @copydetails MemberFunctor::process
        bool process(CmpMode cp, const EventArgs * args)
        {

        }

        /// @copydetails MemberFunctor::check
        bool check(const EventArgs * arg)
        {

        }
    };
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    // ShadowTechChangedMemberFunctor
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    class ShadowTechChangedMemberFunctor : public MemberFunctor
    {
    public:
        ShadowTechChangedMemberFunctor();
        ~ShadowTechChangedMemberFunctor();
    protected:
        /// @copydetails MemberFunctor::process
        bool process(CmpMode cp, const EventArgs * args)
        {

        }

        /// @copydetails MemberFunctor::check
        bool check(const EventArgs * arg)
        {

        }
    };
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    // TextureTechChangedMemberFunctor
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    class TextureTechChangedMemberFunctor : public MemberFunctor
    {
    public:
        TextureTechChangedMemberFunctor();
        ~TextureTechChangedMemberFunctor();
    protected:
        /// @copydetails MemberFunctor::process
        bool process(CmpMode cp, const EventArgs * args)
        {

        }

        /// @copydetails MemberFunctor::check
        bool check(const EventArgs * arg)
        {

        }
    };
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    // LightTechChangedMemberFunctor
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    class LightTechChangedMemberFunctor : public MemberFunctor
    {
    public:
        LightTechChangedMemberFunctor();
        ~LightTechChangedMemberFunctor();
    protected:
        /// @copydetails MemberFunctor::process
        bool process(CmpMode cp, const EventArgs * args)
        {

        }

        /// @copydetails MemberFunctor::check
        bool check(const EventArgs * arg)
        {

        }
    };
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    // ModelTechChangedMemberFunctor
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    class ModelTechChangedMemberFunctor : public MemberFunctor
    {
    public:
        ModelTechChangedMemberFunctor();
        ~ModelTechChangedMemberFunctor();
    protected:
        /// @copydetails MemberFunctor::process
        bool process(CmpMode cp, const EventArgs * args)
        {

        }

        /// @copydetails MemberFunctor::check
        bool check(const EventArgs * arg)
        {

        }
    };
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    // EventTechChangedMemberFunctor
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    class EventTechChangedMemberFunctor : public MemberFunctor
    {
    public:
        EventTechChangedMemberFunctor();
        ~EventTechChangedMemberFunctor();
    protected:
        /// @copydetails MemberFunctor::process
        bool process(CmpMode cp, const EventArgs * args)
        {

        }

        /// @copydetails MemberFunctor::check
        bool check(const EventArgs * arg)
        {

        }
    };
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    // VoiceTechChangedMemberFunctor
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    class VoiceTechChangedMemberFunctor : public MemberFunctor
    {
    public:
        VoiceTechChangedMemberFunctor();
        ~VoiceTechChangedMemberFunctor();
    protected:
        /// @copydetails MemberFunctor::process
        bool process(CmpMode cp, const EventArgs * args)
        {

        }

        /// @copydetails MemberFunctor::check
        bool check(const EventArgs * arg)
        {

        }
    };
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    // ChildDetachedMemberFunctor
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    class ChildDetachedMemberFunctor : public MemberFunctor
    {
    public:
        ChildDetachedMemberFunctor();
        ~ChildDetachedMemberFunctor();
    protected:
        /// @copydetails MemberFunctor::process
        bool process(CmpMode cp, const EventArgs * args)
        {

        }

        /// @copydetails MemberFunctor::check
        bool check(const EventArgs * arg)
        {

        }
    };
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    // ChildAttachedMemberFunctor
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    class ChildAttachedMemberFunctor : public MemberFunctor
    {
    public:
        ChildAttachedMemberFunctor();
        ~ChildAttachedMemberFunctor();
    protected:
        /// @copydetails MemberFunctor::process
        bool process(CmpMode cp, const EventArgs * args)
        {

        }

        /// @copydetails MemberFunctor::check
        bool check(const EventArgs * arg)
        {

        }
    };
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    // PositionChangedMemberFunctor
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    class PositionChangedMemberFunctor : public MemberFunctor
    {
    public:
        PositionChangedMemberFunctor();
        ~PositionChangedMemberFunctor();
    protected:
        /// @copydetails MemberFunctor::process
        bool process(CmpMode cp, const EventArgs * args)
        {

        }

        /// @copydetails MemberFunctor::check
        bool check(const EventArgs * arg)
        {

        }
    };
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    // DirectionChangedMemberFunctor
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    class DirectionChangedMemberFunctor : public MemberFunctor
    {
    public:
        DirectionChangedMemberFunctor();
        ~DirectionChangedMemberFunctor();
    protected:
        /// @copydetails MemberFunctor::process
        bool process(CmpMode cp, const EventArgs * args)
        {

        }

        /// @copydetails MemberFunctor::check
        bool check(const EventArgs * arg)
        {

        }
    };
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    // ScaleChangedMemberFunctor
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    class ScaleChangedMemberFunctor : public MemberFunctor
    {
    public:
        ScaleChangedMemberFunctor();
        ~ScaleChangedMemberFunctor();
    protected:
        /// @copydetails MemberFunctor::process
        bool process(CmpMode cp, const EventArgs * args)
        {

        }

        /// @copydetails MemberFunctor::check
        bool check(const EventArgs * arg)
        {

        }
    };
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    // RelationChangedMemberFunctor
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    class RelationChangedMemberFunctor : public MemberFunctor
    {
    public:
        RelationChangedMemberFunctor();
        ~RelationChangedMemberFunctor();
    protected:
        /// @copydetails MemberFunctor::process
        bool process(CmpMode cp, const EventArgs * args)
        {

        }

        /// @copydetails MemberFunctor::check
        bool check(const EventArgs * arg)
        {

        }
    };
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    // ChildStateChangedMemberFunctor
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    class ChildStateChangedMemberFunctor : public MemberFunctor
    {
    public:
        ChildStateChangedMemberFunctor();
        ~ChildStateChangedMemberFunctor();
    protected:
        /// @copydetails MemberFunctor::process
        bool process(CmpMode cp, const EventArgs * args)
        {

        }

        /// @copydetails MemberFunctor::check
        bool check(const EventArgs * arg)
        {

        }
    };
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    // PreVoiceMemberFunctor
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    class PreVoiceMemberFunctor : public MemberFunctor
    {
    public:
        PreVoiceMemberFunctor()
        ~PreVoiceMemberFunctor();
    protected:
        /// @copydetails MemberFunctor::process
        bool process(CmpMode cp, const EventArgs * args)
        {

        }

        /// @copydetails MemberFunctor::check
        bool check(const EventArgs * arg)
        {

        }
    }
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    // VoicingMemberFunctor
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    class VoicingMemberFunctor : public MemberFunctor
    {
    public:
        VoicingMemberFunctor();
        ~VoicingMemberFunctor();
    protected:
        /// @copydetails MemberFunctor::process
        bool process(CmpMode cp, const EventArgs * args)
        {

        }

        /// @copydetails MemberFunctor::check
        bool check(const EventArgs * arg)
        {

        }
    }
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    // VoiceEndMemberFunctor
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    class VoiceEndMemberFunctor : public MemberFunctor
    {
    public:
        VoiceEndMemberFunctor();
        ~VoiceEndMemberFunctor();
    protected:
        /// @copydetails MemberFunctor::process
        bool process(CmpMode cp, const EventArgs * args)
        {

        }

        /// @copydetails MemberFunctor::check
        bool check(const EventArgs * arg)
        {

        }
    };
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    // VoiceStateChangedMemberFunctor
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    class VoiceStateChangedMemberFunctor : public MemberFunctor
    {
    public:
        VoiceStateChangedMemberFunctor();
        ~VoiceStateChangedMemberFunctor();
    protected:
        /// @copydetails MemberFunctor::process
        bool process(CmpMode cp, const EventArgs * args)
        {

        }

        /// @copydetails MemberFunctor::check
        bool check(const EventArgs * arg)
        {

        }
    };
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    // VoicedInterruptedMemberFunctor
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    class VoicedInterruptedMemberFunctor : public MemberFunctor
    {
    public:
        VoicedInterruptedMemberFunctor();
        ~VoicedInterruptedMemberFunctor();
    protected:
        /// @copydetails MemberFunctor::process
        bool process(CmpMode cp, const EventArgs * args)
        {

        }

        /// @copydetails MemberFunctor::check
        bool check(const EventArgs * arg)
        {

        }
    };
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    // PrePhysicalEventMemberFunctor
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    class PrePhysicalEventMemberFunctor : public MemberFunctor
    {
    public:
        PrePhysicalEventMemberFunctor();
        ~PrePhysicalEventMemberFunctor();
    protected:
        /// @copydetails MemberFunctor::process
        bool process(CmpMode cp, const EventArgs * args)
        {

        }

        /// @copydetails MemberFunctor::check
        bool check(const EventArgs * arg)
        {

        }
    };
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    // PhysicalEventEndMemberFunctor
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    class PhysicalEventEndMemberFunctor : public MemberFunctor
    {
    public:
        PhysicalEventEndMemberFunctor();
        ~PhysicalEventEndMemberFunctor();
    protected:
        /// @copydetails MemberFunctor::process
        bool process(CmpMode cp, const EventArgs * args)
        {

        }

        /// @copydetails MemberFunctor::check
        bool check(const EventArgs * arg)
        {

        }
    };
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    // DetachedMemberFunctor
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    class DetachedMemberFunctor : public MemberFunctor
    {
    public:
        DetachedMemberFunctor();
        ~DetachedMemberFunctor();
    protected:
        /// @copydetails MemberFunctor::process
        bool process(CmpMode cp, const EventArgs * args)
        {

        }

        /// @copydetails MemberFunctor::check
        bool check(const EventArgs * arg)
        {

        }
    };
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    // AttachedMemberFunctor
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    class AttachedMemberFunctor : public MemberFunctor
    {
    public:
        AttachedMemberFunctor();
        ~AttachedMemberFunctor();
    protected:
        /// @copydetails MemberFunctor::process
        bool process(CmpMode cp, const EventArgs * args)
        {

        }

        /// @copydetails MemberFunctor::check
        bool check(const EventArgs * arg)
        {

        }
    };
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    // FocusedMemberFunctor
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    class FocusedMemberFunctor : public MemberFunctor
    {
    public:
        FocusedMemberFunctor();
        ~FocusedMemberFunctor();
    protected:
        /// @copydetails MemberFunctor::process
        bool process(CmpMode cp, const EventArgs * args)
        {

        }

        /// @copydetails MemberFunctor::check
        bool check(const EventArgs * arg)
        {

        }
    };
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    // ReleasedMemberFunctor
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    class ReleasedMemberFunctor : public MemberFunctor
    {
    public:
        ReleasedMemberFunctor();
        ~ReleasedMemberFunctor();
    protected:
        /// @copydetails MemberFunctor::process
        bool process(CmpMode cp, const EventArgs * args)
        {

        }

        /// @copydetails MemberFunctor::check
        bool check(const EventArgs * arg)
        {

        }
    };
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    // InternetInMemberFunctor
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    class InternetInMemberFunctor : public MemberFunctor
    {
    public:
        InternetInMemberFunctor();
        ~InternetInMemberFunctor();
    protected:
        /// @copydetails MemberFunctor::process
        bool process(CmpMode cp, const EventArgs * args)
        {

        }

        /// @copydetails MemberFunctor::check
        bool check(const EventArgs * arg)
        {

        }
    };
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    // InternetOutMemberFunctor
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    class InternetOutMemberFunctor : public MemberFunctor
    {
    public:
        InternetOutMemberFunctor();
        ~InternetOutMemberFunctor();
    protected:
        /// @copydetails MemberFunctor::process
        bool process(CmpMode cp, const EventArgs * args)
        {

        }

        /// @copydetails MemberFunctor::check
        bool check(const EventArgs * arg)
        {

        }
    }
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    // AnimateUpdatingMemberFunctor
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    class AnimateUpdatingMemberFunctor : public MemberFunctor
    {
    public:
        AnimateUpdatingMemberFunctor();
        ~AnimateUpdatingMemberFunctor();
    protected:
        /// @copydetails MemberFunctor::process
        bool process(CmpMode cp, const EventArgs * args)
        {

        }

        /// @copydetails MemberFunctor::check
        bool check(const EventArgs * arg)
        {

        }
    }
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    // PreUpdateAnimateMemberFunctor
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    class PreUpdateAnimateMemberFunctor : public MemberFunctor
    {
    public:
        PreUpdateAnimateMemberFunctor();
        ~PreUpdateAnimateMemberFunctor();
    protected:
        /// @copydetails MemberFunctor::process
        bool process(CmpMode cp, const EventArgs * args)
        {

        }

        /// @copydetails MemberFunctor::check
        bool check(const EventArgs * arg)
        {

        }
    }
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    // UpdateAnimateEndMemberFunctor
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    class UpdateAnimateEndMemberFunctor : public MemberFunctor
    {
    public:
        UpdateAnimateEndMemberFunctor();
        ~UpdateAnimateEndMemberFunctor();
    protected:
        /// @copydetails MemberFunctor::process
        bool process(CmpMode cp, const EventArgs * args)
        {

        }

        /// @copydetails MemberFunctor::check
        bool check(const EventArgs * arg)
        {

        }
    }
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    // PreRenderMemberFunctor
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    class PreRenderMemberFunctor : public MemberFunctor
    {
    public:
        PreRenderMemberFunctor();
        ~PreRenderMemberFunctor();
    protected:
        /// @copydetails MemberFunctor::process
        bool process(CmpMode cp, const EventArgs * args)
        {

        }

        /// @copydetails MemberFunctor::check
        bool check(const EventArgs * arg)
        {

        }
    }
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    // RenderingMemberFunctor
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    class RenderingMemberFunctor : public MemberFunctor
    {
    public:
        RenderingMemberFunctor();
        ~RenderingMemberFunctor();
    protected:
        /// @copydetails MemberFunctor::process
        bool process(CmpMode cp, const EventArgs * args)
        {

        }

        /// @copydetails MemberFunctor::check
        bool check(const EventArgs * arg)
        {

        }
    }
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    // RenderEndMemberFunctor
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    class RenderEndMemberFunctor : public MemberFunctor
    {
    public:
        RenderEndMemberFunctor();
        ~RenderEndMemberFunctor();
    protected:
        /// @copydetails MemberFunctor::process
        bool process(CmpMode cp, const EventArgs * args)
        {

        }

        /// @copydetails MemberFunctor::check
        bool check(const EventArgs * arg)
        {

        }
    }
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    // GameObj
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    GameObj::GameObj(WarScene * own) :
    {

    }
    //------------------------------------------------------------------------
    GameObj::~GameObj()
    {

    }
    //------------------------------------------------------------------------
    bool GameObj::On(GameEffect_Texture tech)
    {
        mTextureTechMark |= tech;
        onTextureStateChange(tech);
    }
    //------------------------------------------------------------------------
    bool GameObj::On(GameEffect_Shadow tech)
    {
        mShadowTechMark |= tech;
        onShadowStateChange(tech);
    }
    //------------------------------------------------------------------------
    bool GameObj::On(GameEffect_Light tech)
    {
        mLightTechMark |= tech;
        onLightStateChange(tech);
    }
    //------------------------------------------------------------------------
    bool GameObj::On(GameEffect_Model tech)
    {
        mModelTechMark |= tech;
        onModelStateChange(tech);
    }
    //------------------------------------------------------------------------
    bool GameObj::On(GameEffect_Event tech)
    {
        mEventTechMark |= tech;
        onEventStateChange(tech);
    }
    //------------------------------------------------------------------------
    bool GameObj::On(GameEffect_Voice tech)
    {
        mVoiceTechMark |= tech;
        onVoiceStateChanged(tech);
    }
    //------------------------------------------------------------------------
    bool GameObj::On(PatternTech_Control tech)
    {
        ControlItemList::iterator it, itend = mContorlItems.end();
        switch(tech)
        {
        case tech & PT_C_Refuse:
            mValidContorlItems.clear();
            break;
        case tech & PT_C_Keyboard:
            for(it = mContorlItems.begin(); it != itend; itend++)
            {
                if((it->second)->getType() == ControlPatternManager::CDT_Keyboard)
                    mValidContorlItems.insert(ControlItemList::value_type(it->first, it->second));
            }
            break;
        case tech & PT_C_Mouse:
            for(it = mContorlItems.begin(); it != itend; itend++)
            {
                if((it->second)->getType() == ControlPatternManager::CDT_Mouse)
                    mValidContorlItems.insert(ControlItemList::value_type(it->first, it->second));
            }
            break;
        case tech & PT_C_Joystick:
            for(it = mContorlItems.begin(); it != itend; itend++)
            {
                if((it->second)->getType() == ControlPatternManager::CDT_JoyStick)
                    mValidContorlItems.insert(ControlItemList::value_type(it->first, it->second));
            }
            break;
        default
            mControlEffectMark = PT_C_Defalut;
        }
        mControlEffectMark |= tech;
    }
    //------------------------------------------------------------------------
    bool GameObj::Off(GameEffect_Texture tech)
    {
        mTextureTechMark &= ~tech;
        onTextureStateChange(tech);
    }
    //------------------------------------------------------------------------
    bool GameObj::Off(GameEffect_Shadow tech)
    {
        mShadowTechMark &= ~tech;
        onShadowStateChange(tech);
    }
    //------------------------------------------------------------------------
    bool GameObj::Off(GameEffect_Light tech)
    {
        mLightTechMark &= ~tech;
        onLightStateChange(tech);
    }
    //------------------------------------------------------------------------
    bool GameObj::Off(GameEffect_Model tech)
    {
        mModelTechMark &= ~tech;
        onModelStateChange(tech);
    }
    //------------------------------------------------------------------------
    bool GameObj::Off(GameEffect_Event tech)
    {
        mEventTechMark &= ~tech;
        onEventStateChange(tech);
    }
    //------------------------------------------------------------------------
    bool GameObj::Off(GameEffect_Voice tech)
    {
        mVoiceTechMark &= ~tech;
        onVoiceStateChanged(tech);
    }
    //------------------------------------------------------------------------
    bool GameObj::Off(PatternTech_Control tech)
    {
        ControlItemList::iterator temp, it, itend = mValidContorlItems.end();
        switch(tech)
        {
        case tech & PT_C_Refuse :
            for(it = mContorlItems.begin(); it != itend; itend++)
            {
                mValidContorlItems.insert(ControlItemList::value_type(it->first, it->second));
            }
            break;
        case apply & PT_C_Keyboard:
            for(it = mValidContorlItems.begin(); it != itend; )
            {
                temp = itend++;
                if((temp->second)->getType() == ControlPatternManager::CDT_Keyboard)
                    mValidContorlItems.erase(temp);
            }
            break;
        case apply & PT_C_Mouse:
            for(it = mValidContorlItems.begin(); it != itend; )
            {
                temp = itend++;
                if((temp->second)->getType() == ControlPatternManager::CDT_Mouse)
                    mValidContorlItems.erase(temp);
            }
            break;
        case apply & PT_C_Joystick:
            for(it = mValidContorlItems.begin(); it != itend; )
            {
                temp = itend++;
                if((temp->second)->getType() == ControlPatternManager::CDT_JoyStick)
                   mValidContorlItems.erase(temp);
            }
            break;
        default
            mControlEffectMark = PT_C_Defalut;
        }
        mControlEffectMark |= apply;
    }
    //------------------------------------------------------------------------
    bool GameObj::On(GameEffect tech)
    {

    }
    //------------------------------------------------------------------------
    bool GameObj::Off(GameEffect tech)
    {

    }
    //------------------------------------------------------------------------
    MemberFunctor * GameObj::create(EventID id) const
    {
        MemberFunctor * ret;
        switch(id)
        {
        case CreatedEvent :
            ret = NII_NEW CreatedMemberFunctor();
            break;
        case DestroyedEvent :
            ret = NII_NEW DestroyedMemberFunctor();
            break;
        case DeletedEvent :
            ret = NII_NEW DeletedMemberFunctor();
            break;
        case MouseButtonPressedEvent :
            ret = NII_NEW MouseButtonPressedMemberFunctor();
            break;
        case MouseButtonReleasedEvent :
            ret = NII_NEW MouseButtonReleasedMemberFunctor();
            break;
        case ShownEvent :
            ret = NII_NEW ShownMemberFunctor();
            break;
        case HiddenEvent :
            ret = NII_NEW HiddenMemberFunctor();
            break;
        case MouseMovesOverEvent :
            ret = NII_NEW MouseMovesOverMemberFunctor();
            break;
        case MouseMovesLeftEvent :
            ret = NII_NEW MouseMovesLeftMemberFunctor();
            break;
        case KeyboardKeyDownedEvent :
            ret = NII_NEW KeyboardKeyDownedMemberFunctor();
            break;
        case KeyboardKeyReleasedEvent :
            ret = NII_NEW KeyboardKeyReleasedMemberFunctor();
            break;
        case PreAnimateEvent :
            ret = NII_NEW PreAnimateMemberFunctor();
            break;
        case AnimatingEvent :
            ret = NII_NEW AnimatingMemberFunctor();
            break;
        case AnimateEndEvent :
            ret = NII_NEW AnimateEndMemberFunctor();
            break;
        case AnimateStateChangeEvent :
            ret = NII_NEW AnimateStateChangeMemberFunctor();
            break;
        case AnimateStateInterruptEvent :
            ret = NII_NEW AnimateStateInterruptMemberFunctor();
            break;
        case ShadowTechChangedEvent :
            ret = NII_NEW ShadowTechChangedMemberFunctor();
            break;
        case TextureTechChangedEvent :
            ret = NII_NEW TextureTechChangedMemberFunctor();
            break;
        case LightTechChangedEvent :
            ret = NII_NEW LightTechChangedMemberFunctor();
            break;
        case ModelTechChangedEvent :
            ret = NII_NEW ModelTechChangedMemberFunctor();
            break;
        case EventTechChangedEvent :
            ret = NII_NEW EventTechChangedMemberFunctor();
            break;
        case VoiceTechChangedEvent :
            ret = NII_NEW VoiceTechChangedMemberFunctor();
            break;
        case ChildDetachedEvent :
            ret = NII_NEW ChildDetachedMemberFunctor();
            break;
        case ChildAttachedEvent :
            ret = NII_NEW ChildAttachedMemberFunctor();
            break;
        case PositionChangedEvent :
            ret = NII_NEW PositionChangedMemberFunctor();
            break;
        case DirectionChangedEvent :
            ret = NII_NEW DirectionChangedMemberFunctor();
            break;
        case ScaleChangedEvent :
            ret = NII_NEW ScaleChangedMemberFunctor();
            break;
        case RelationChangedEvent :
            ret = NII_NEW RelationChangedMemberFunctor();
            break;
        case ChildStateChangedEvent :
            ret = NII_NEW ChildStateChangedMemberFunctor();
            break;
        case PreVoiceEvent :
            ret = NII_NEW PreVoiceMemberFunctor();
            break;
        case VoicingEvent :
            ret = NII_NEW VoicingMemberFunctor();
            break;
        case VoiceEndEvent :
            ret = NII_NEW VoiceEndMemberFunctor();
            break;
        case VoiceStateChangedEvent :
            ret = NII_NEW VoiceStateChangedMemberFunctor();
            break;
        case VoicedInterruptedEvent :
            ret = NII_NEW VoicedInterruptedMemberFunctor();
            break;
        case PrePhysicalEvent :
            ret = NII_NEW PrePhysicalMemberFunctor();
            break;
        case PhysicalEndEvent :
            ret = NII_NEW PhysicalEndMemberFunctor();
            break;
        case DetachedEvent :
            ret = NII_NEW DetachedMemberFunctor();
            break;
        case AttachedEvent :
            ret = NII_NEW AttachedMemberFunctor();
            break;
        case FocusedEvent :
            ret = NII_NEW FocusedMemberFunctor();
            break;
        case ReleasedEvent :
            ret = NII_NEW ReleasedMemberFunctor();
            break;
        case InternetInEvent :
            ret = NII_NEW InternetInMemberFunctor();
            break;
        case InternetOutEvent :
            ret = NII_NEW InternetOutMemberFunctor();
            break;
        case PreUpdateAnimateEvent :
            ret = NII_NEW PreUpdateAnimateMemberFunctor();
            break;
        case AnimateUpdatingEvent :
            ret = NII_NEW AnimateUpdatingMemberFunctor();
            break;
        case UpdateAnimateEndEvent :
            ret = NII_NEW UpdateAnimateEndMemberFunctor();
            break;
        case PreRenderEvent :
            ret = NII_NEW PreRenderMemberFunctor();
            break;
        case RenderingEvent :
            ret = NII_NEW RenderingMemberFunctor();
            break;
        case RenderEndEvent :
            ret = NII_NEW RenderEndMemberFunctor();
            break;
        }
        return ret;
    }
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    //------------------------------------------------------------------------
    bool GameObj::checkComplete(bool force, bool rel)
    {

    }
    //------------------------------------------------------------------------

    void GameObj::onCreated(const EventArgs * arg)
    {
        signal(CreatedEvent, arg);
        receive(CreatedEvent, arg);
    }
    //------------------------------------------------------------------------
    void GameObj::onDestroyed(const EventArgs * arg)
    {
        signal(DestroyedEvent, arg);
        receive(DestroyedEvent, arg);
    }
    //------------------------------------------------------------------------
    void GameObj::onDeleted(const EventArgs * arg)
    {
        signal(DeletedEvent, arg);
        receive(DeletedEvent, arg);
    }
    //------------------------------------------------------------------------
    void GameObj::onMouseButtonPressed(const EventArgs * arg)
    {
        signal(MouseButtonPressedEvent, arg);
        receive(MouseButtonPressedEvent, arg);
    }
    //------------------------------------------------------------------------
    void GameObj::onMouseButtonReleased(const EventArgs * arg)
    {
        signal(MouseButtonReleasedEvent, arg);
        receive(MouseButtonReleasedEvent, arg);
    }
    //------------------------------------------------------------------------
    void GameObj::onShown(const EventArgs * arg)
    {
        signal(ShownEvent, arg);
        receive(ShownEvent, arg);
    }
    //------------------------------------------------------------------------
    void GameObj::onHidden(const EventArgs * arg)
    {
        signal(HiddenEvent, arg);
        receive(HiddenEvent, arg);
    }
    //------------------------------------------------------------------------
    void GameObj::onMouseMovesOver(const EventArgs * arg)
    {
        signal(MouseMovesOverEvent, arg);
        receive(MouseMovesOverEvent, arg);
    }
    //------------------------------------------------------------------------
    void GameObj::onMouseMovesLeft(const EventArgs * arg)
    {
        signal(MouseMovesLeftEvent, arg);
        receive(MouseMovesLeftEvent, arg);
    }
    //------------------------------------------------------------------------
    void GameObj::onKeyboardKeyDowned(const EventArgs * arg)
    {
        signal(KeyboardKeyDownedEvent, arg);
        receive(KeyboardKeyDownedEvent, arg);
    }
    //------------------------------------------------------------------------
    void GameObj::onKeyboardKeyReleased(const EventArgs * arg)
    {
        signal(KeyboardKeyReleasedEvent, arg);
        receive(KeyboardKeyReleasedEvent, arg);
    }
    //------------------------------------------------------------------------
    void GameObj::onPreAnimate(const EventArgs * arg)
    {
        signal(PreAnimateEvent, arg);
        receive(PreAnimateEvent, arg);
    }
    //------------------------------------------------------------------------
    void GameObj::onAnimating(const EventArgs * arg)
    {
        signal(AnimatingEvent, arg);
        receive(AnimatingEvent, arg);
    }
    //------------------------------------------------------------------------
    void GameObj::onAnimateEnd(const EventArgs * arg)
    {
        signal(AnimateEndEvent, arg);
        receive(AnimateEndEvent, arg);
    }
    //------------------------------------------------------------------------
    void GameObj::onAnimateStateChange(const EventArgs * arg)
    {
        signal(AnimateStateChangeEvent, arg);
        receive(AnimateStateChangeEvent, arg);
    }
    //------------------------------------------------------------------------
    void GameObj::onAnimateStateInterrupt(const EventArgs * arg)
    {
        signal(AnimateStateInterruptEvent, arg);
        receive(AnimateStateInterruptEvent, arg);
    }
    //------------------------------------------------------------------------
    void GameObj::onShadowTechChanged(const EventArgs * arg)
    {
        signal(ShadowTechChangedEvent, arg);
        receive(ShadowTechChangedEvent, arg);
    }
    //------------------------------------------------------------------------
    void GameObj::onTextureTechChanged(const EventArgs * arg)
    {
        signal(TextureTechChangedEvent, arg);
        receive(TextureTechChangedEvent, arg);
    }
    //------------------------------------------------------------------------
    void GameObj::onLightTechChanged(const EventArgs * arg)
    {
        signal(LightTechChangedEvent, arg);
        receive(LightTechChangedEvent, arg);
    }
    //------------------------------------------------------------------------
    void GameObj::onModelTechChange(const EventArgs * arg)
    {
        signal(ModelTechChangeEvent, arg);
        receive(ModelTechChangeEvent, arg);
    }
    //------------------------------------------------------------------------
    void GameObj::onEventTechChanged(const EventArgs * arg)
    {
        signal(EventTechChangedEvent, arg);
        receive(EventTechChangedEvent, arg);
    }
    //------------------------------------------------------------------------
    void GameObj::onVoiceTechChanged(const EventArgs * arg)
    {
        signal(VoiceTechChangedEvent, arg);
        receive(VoiceTechChangedEvent, arg);
    }
    //------------------------------------------------------------------------
    void GameObj::onChildDetached(const EventArgs * arg)
    {
        signal(ChildDetachedEvent, arg);
        receive(ChildDetachedEvent, arg);
    }
    //------------------------------------------------------------------------
    void GameObj::onChildAttached(const EventArgs * arg)
    {
        signal(ChildAttachedEvent, arg);
        receive(ChildAttachedEvent, arg);
    }
    //------------------------------------------------------------------------
    void GameObj::onPositionChanged(const EventArgs * arg)
    {
        signal(PositionChangedEvent, arg);
        receive(PositionChangedEvent, arg);
    }
    //------------------------------------------------------------------------
    void GameObj::onDirectionChanged(const EventArgs * arg)
    {
        signal(DirectionChangedEvent, arg);
        receive(DirectionChangedEvent, arg);
    }
    //------------------------------------------------------------------------
    void GameObj::onScaleChanged(const EventArgs * arg)
    {
        signal(ScaleChangedEvent, arg);
        receive(ScaleChangedEvent, arg);
    }
    //------------------------------------------------------------------------
    void GameObj::onRelationChanged(const EventArgs * arg)
    {
        signal(RelationChangedEvent, arg);
        receive(RelationChangedEvent, arg);
    }
    //------------------------------------------------------------------------
    void GameObj::onChildStateChanged(const EventArgs * arg)
    {
        signal(ChildStateChangedEvent, arg);
        receive(ChildStateChangedEvent, arg);
    }
    //------------------------------------------------------------------------
    void GameObj::onPreVoice(const EventArgs * arg)
    {
        signal(PreVoiceEvent, arg);
        receive(PreVoiceEvent, arg);
    }
    //------------------------------------------------------------------------
    void GameObj::onVoicing(const EventArgs * arg)
    {
        signal(VoicingEvent, arg);
        receive(VoicingEvent, arg);
    }
    //------------------------------------------------------------------------
    void GameObj::onVoiceEnd(const EventArgs * arg)
    {
        signal(VoiceEndEvent, arg);
        receive(VoiceEndEvent, arg);
    }
    //------------------------------------------------------------------------
    void GameObj::onVoiceStateChanged(const EventArgs * arg)
    {
        signal(VoiceStateChangedEvent, arg);
        receive(VoiceStateChangedEvent, arg);
    }
    //------------------------------------------------------------------------
    void GameObj::onVoicedInterrupted(const EventArgs * arg)
    {
        signal(VoicedInterruptedEvent, arg);
        receive(VoicedInterruptedEvent, arg);
    }
    //------------------------------------------------------------------------
    void GameObj::onPrePhysicalEvent(const EventArgs * arg)
    {
        signal(PrePhysicalEvent, arg);
        receive(PrePhysicalEvent, arg);
    }
    //------------------------------------------------------------------------
    void GameObj::onPhysicalEventEnd(const EventArgs * arg)
    {
        signal(PhysicalEndEvent, arg);
        receive(PhysicalEndEvent, arg);
    }
    //------------------------------------------------------------------------
    void GameObj::onDetached(const EventArgs * arg)
    {
        signal(DetachedEvent, arg);
        receive(DetachedEvent, arg);
    }
    //------------------------------------------------------------------------
    void GameObj::onAttached(const EventArgs * arg)
    {
        signal(AttachedEvent, arg);
        receive(AttachedEvent, arg);
    }
    //------------------------------------------------------------------------
    void GameObj::onFocused(const EventArgs * arg)
    {
        signal(FocusedEvent, arg);
        receive(FocusedEvent, arg);

        ViewWindow * window = mParent->getWin();
        ControlItemList::iterator it, itend = mContorlItems.end();
        for(it = mContorlItems.begin(); it != itend; ++itend)
        {
            ControlPatternManager::getSingleton().apply(window, it->second);
        }
    }
    //------------------------------------------------------------------------
    void GameObj::onReleased(const EventArgs * arg)
    {
        signal(ReleasedEvent, arg);
        receive(ReleasedEvent, arg);
    }
    //------------------------------------------------------------------------
    void GameObj::onInternetIn(const EventArgs * arg)
    {
        signal(InternetInEvent, arg);
        receive(InternetInEvent, arg);
    }
    //------------------------------------------------------------------------
    void GameObj::onInternetOut(const EventArgs * arg)
    {
        signal(InternetOutEvent, arg);
        receive(InternetOutEvent, arg);
    }
    //------------------------------------------------------------------------
    void GameObj::onPreUpdateAnimate(const EventArgs * arg)
    {
        signal(PreUpdateAnimateEvent, arg);
        receive(PreUpdateAnimateEvent, arg);
    }
    //------------------------------------------------------------------------
    void GameObj::onAnimateUpdating(const EventArgs * arg)
    {
        signal(AnimateUpdatingEvent, arg);
        receive(AnimateUpdatingEvent, arg);
    }
    //------------------------------------------------------------------------
    void GameObj::onUpdateAnimateEnd(const EventArgs * arg)
    {
        signal(UpdateAnimateEndEvent, arg);
        receive(UpdateAnimateEndEvent, arg);
    }
    //------------------------------------------------------------------------
    void GameObj::onPreRender(const EventArgs * arg)
    {
        signal(PreRenderEvent, arg);
        receive(PreRenderEvent, arg);
    }
    //------------------------------------------------------------------------
    void GameObj::onRendering(const EventArgs * arg)
    {
        rend->preRender();
        signal(RenderingEvent, arg);
        receive(RenderingEvent, arg);
    }
    //------------------------------------------------------------------------
    void GameObj::onRenderEnd(const EventArgs * arg)
    {
        signal(RenderEndEvent, arg);
        receive(RenderEndEvent, arg);
    }
    //------------------------------------------------------------------------
}