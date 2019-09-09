/*
-----------------------------------------------------------------------------
���Ͷ�ý����

ʱ��: 2012-11-1

�ı�����: utf-8

������˾: �������ǿƼ����޹�˾

�������: ����������

��̷��: ͳ��ʽ

����ģʽ: �ֲ�ʽ

�ڲ��ɷ�: UI���� ������� ��Ƶ���� ������� �¼���������(��ɢ�����)

��Ҫ�ɷ�: c++(80%) c(20%)

��;: ����ϵͳ����(��Χ����ϵͳ�ں�api)
      ��άӦ�����
        �������������������(CAD)
        ������Ϣϵͳ���(GIS)
        ��Ӱ���������ع����
        ������Ϸ���

��ҳ: www.niiengine.com ��������: niiengine@gmail.com OR niiengine@163.com

��Ȩ��ʽ:��ҵ��Ȩ(www.niiengine.com/license)(3��)
------------------------------------------------------------------------------
*/

#ifndef NII_Action_SCENE_H
#define NII_Action_SCENE_H

namespace NIIGame
{
    /** һ����������
    @version NIIEngineGame 1.0.0
    */
    class _NIIGameExport ActionScene : public CommandObj, public EventObj
    {
    public:
        enum SceneObjectType
        {
            SOT_Sky,        ///< ���������
            SOT_Best,       ///< ����
            SOT_Book,       ///< 
            SOT_Chair,      ///< 
            SOT_Fluid,      ///< 
            SOT_Human,      ///< 
            SOT_Lamp,       ///< 
            SOT_Machine,    ///< 
            SOT_Music,      ///<
            SOT_Solid,      ///<
            SOT_Ball,       ///<
            SOT_Sky         ///<
        };
        typedef map<Nid, GameObj *>::type ObjectList;
        typedef map<Nid, SpaceManager *>::type SceneList;        
    public:
        ActionScene(){}

        virtual ~ActionScene();

        /** ���û�������(����������ɫ)
        @param id ��Ҫ���õĳ�����id
        @param type ������������
        @param value ��ɫֵ
        */
        virtual setEnv(Nid id, SceneObjectType type, Colour value);

        /** ���û�������(���)
        @param id ��Ҫ���õĳ�����id
        @param type ������������
        @param effect Ч��
        */
        virtual setEnv(Nid id, SceneObjectType type, GameEffect effect);

        /** 
        @param id
        @param type
        */
        virtual setEnv(NIIui id, SceneObjectType type, );

        /**
        @param id
        @param type
        */
        virtual setEnv(NIIui id, SceneObjectType type, );

        /** ����һ�����󵽶���������
        @remark ��������Ϸ�����Ѿ�����,���������κ�����
        @param src һ����û���ӵ����������������Ϸ����
        */
        ActionScene * operator +(const GameObj * src);

        /** �Ӷ��������з���һ����Ϸ����
        @remark ��������Ϸ����
        @param src һ�����ӵ�������������Ķ���
        */
        ActionScene * operator -(const GameObj * src);

        /** ����һ����Ϸ����
        @param 
        */
        virtual GameObj * createGameObject();

        /**
        @param dest 
        */
        virtual void destroy(GameObj * dest);
    public:
        const ViewWindow * getWindow() const;
    protected:
        Nid mID;                    ///< �������������ID
        ObjectList mExtObjects;     ///< ���ӵ�������������е��ⲿ����
        ObjectList mOwnObjects;     ///< ������������Լ��������ڲ����� 
        SceneList mScene;           ///< һ������������Ҫ��ͼ�γ����ɷ�(������ͬ�����ڸ��������)
        ViewWindow * mWindow;       ///< һ��ս������ֻ����һ�����ڸ�����
    };
}
#endif