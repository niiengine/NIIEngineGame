/*
-----------------------------------------------------------------------------
���Ͷ�ý����

ʱ��: 2014-4-26

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

#ifndef _NII_API_H_
#define _NII_API_H_

#include "NiiPreInclude.h"

namespace NII
{
    class _NIIExport NII
    {
    public:
        NII();
        ~NII();

        /// ��ʼ�����
        void init();

        /// NII�������
        void main();
    public:
        /** �������
        @version NIIEngine 3.0.0
        */
        void nii();
    protected:
        WarSceneManager * mSceneManager;    ///< ս������
        GameObjectManager * mObjectManager; ///< ս����������
        Root * mCore;                       ///< ���Ĳ���
        Camera * mCamera;                   ///< ����ͷ
        ViewWindow * mWindow;               ///< ������
    };
}
#endif