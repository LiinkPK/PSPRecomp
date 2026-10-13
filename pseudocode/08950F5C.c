/* Entry 0x08950F5C | file offset 0x0014DF34 | FUN_08950f5c | bytes 512 */

undefined4 FUN_08950f5c(undefined4 param_1,int param_2,undefined1 *param_3)

{
  undefined1 auVar1 [64];
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  
  iVar2 = *(int *)(param_2 + 0x8c);
  iVar4 = *(int *)(*(int *)(param_2 + 0x90) + 8);
  iVar3 = *(int *)(*(int *)(param_2 + 0x90) + 4);
  iVar5 = iVar2 + (uint)*(ushort *)(iVar4 + iVar3 * 2);
  iVar6 = iVar2 + (uint)*(ushort *)(iVar4 + (iVar3 + 1) * 2);
  iVar2 = iVar2 + (uint)*(ushort *)(iVar4 + (iVar3 + 2) * 2);
  local_40 = *(undefined4 *)(iVar5 + 0x60);
  local_34 = *(undefined4 *)(iVar5 + 0x6c);
  local_30 = *(undefined4 *)(iVar2 + 0x60);
  local_24 = *(undefined4 *)(iVar2 + 0x6c);
  local_3c = -*(float *)(iVar5 + 100);
  local_38 = -*(float *)(iVar5 + 0x68);
  local_2c = -*(float *)(iVar2 + 100);
  local_28 = -*(float *)(iVar2 + 0x68);
  puVar7 = *(undefined4 **)(*(int *)(param_2 + 0x8c) + 0x50);
  auVar1 = vmidt_q();
  uVar8 = vmul_s(auVar1._0_4_,*(undefined4 *)(iVar6 + 0x60));
  uVar9 = vmul_s(auVar1._20_4_,*(undefined4 *)(iVar6 + 100));
  uVar10 = vmul_s(auVar1._40_4_,*(undefined4 *)(iVar6 + 0x68));
  *puVar7 = uVar8;
  puVar7[1] = auVar1._4_4_;
  puVar7[2] = auVar1._8_4_;
  puVar7[3] = auVar1._12_4_;
  puVar7[4] = auVar1._16_4_;
  puVar7[5] = uVar9;
  puVar7[6] = auVar1._24_4_;
  puVar7[7] = auVar1._28_4_;
  puVar7[8] = auVar1._32_4_;
  puVar7[9] = auVar1._36_4_;
  puVar7[10] = uVar10;
  puVar7[0xb] = auVar1._44_4_;
  puVar7[0xc] = auVar1._48_4_;
  puVar7[0xd] = auVar1._52_4_;
  puVar7[0xe] = auVar1._56_4_;
  puVar7[0xf] = auVar1._60_4_;
  FUN_08950c58(puVar7,puVar7,&local_30,&local_40,param_3[3]);
  if ((int)param_3 < 0x1000) {
    param_3 = *(undefined1 **)
               (*(int *)(*(int *)(param_2 + 0x8c) + 0x48) +
               (uint)*(ushort *)(*(int *)(*(int *)(param_2 + 0x90) + 8) + (int)param_3 * 2) * 4);
  }
  FUN_08946d88(0x3f800000,param_2,*(undefined4 *)(param_2 + 0x8c),puVar7,*param_3,param_3[1],
               param_3[2],puVar7);
  return 1;
}

