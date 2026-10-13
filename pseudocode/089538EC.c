/* Entry 0x089538EC | file offset 0x001508C4 | FUN_089538ec | bytes 136 */

/* Candidate function recovered from a code pointer stored in this EBOOT's initialized data. Pointer
   sites: 089db7dc. Boundary still requires runtime validation. */

void FUN_089538ec(undefined4 param_1,int param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 (*pauVar8) [16];
  
  iVar6 = *(int *)(*(int *)(param_2 + 0x90) + 8);
  iVar5 = *(int *)(*(int *)(param_2 + 0x90) + 4);
  iVar7 = *(int *)(param_2 + 0x8c) + (uint)*(ushort *)(iVar6 + iVar5 * 2);
  pauVar8 = (undefined1 (*) [16])(iVar7 + 0x60);
  uVar4 = *(undefined8 *)(iVar7 + 0x68);
  uVar3 = *(undefined8 *)(iVar7 + 0x68);
  auVar1 = vmul_q(*pauVar8,*(undefined1 (*) [16])
                            (*(int *)(param_2 + 0x8c) + (uint)*(ushort *)(iVar6 + (iVar5 + 1) * 2) +
                            0x60));
  *(int *)*pauVar8 = auVar1._0_4_;
  *(int *)(iVar7 + 100) = auVar1._4_4_;
  *(int *)(iVar7 + 0x68) = auVar1._8_4_;
  *(int *)(iVar7 + 0x6c) = auVar1._12_4_;
  vpfxt(0,0,0,0);
  auVar1._4_8_ = uVar3;
  auVar1._0_4_ = 0x437f0000;
  auVar1._12_4_ = 0;
  auVar1 = vmax_q(*pauVar8,auVar1 << 0x20);
  vpfxt(1,1,1,1);
  auVar2._4_8_ = uVar4;
  auVar2._0_4_ = 0x437f0000;
  auVar2._12_4_ = 0;
  auVar1 = vmin_q(auVar1,auVar2 << 0x20);
  *(int *)*pauVar8 = auVar1._0_4_;
  *(int *)(iVar7 + 100) = auVar1._4_4_;
  *(int *)(iVar7 + 0x68) = auVar1._8_4_;
  *(int *)(iVar7 + 0x6c) = auVar1._12_4_;
  return;
}

