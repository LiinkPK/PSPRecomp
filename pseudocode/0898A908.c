/* Entry 0x0898A908 | file offset 0x001878E0 | FUN_0898a908 | bytes 632 */

void FUN_0898a908(undefined4 param_1,int param_2,int param_3,undefined1 (*param_4) [12],
                 undefined1 (*param_5) [12],int param_6,int param_7)

{
  undefined1 auVar1 [12];
  int iVar2;
  int iVar3;
  undefined1 (*pauVar4) [12];
  undefined1 (*pauVar5) [12];
  undefined1 (*pauVar6) [12];
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 (*local_40) [12];
  
  auVar1 = vsub_t(*(undefined1 (*) [12])(param_4[1] + 4),*param_4);
  uVar8 = vdot_t(auVar1,auVar1);
  fVar9 = (float)vsqrt_s(uVar8);
  auVar1 = vsub_t(*(undefined1 (*) [12])(param_5[1] + 4),*param_5);
  uVar8 = vdot_t(auVar1,auVar1);
  fVar10 = (float)vsqrt_s(uVar8);
  local_70 = fVar9;
  local_6c = fVar10;
  local_40 = param_5;
  FUN_089a3868(param_2,param_6);
  fVar7 = *(float *)(param_3 + 100);
  FUN_089a38e0(auStack_b0,(undefined1 (*) [12])(param_4[1] + 4),param_4);
  FUN_089a3bc8(auStack_b0,auStack_b0);
  FUN_089a3a44(fVar9 * fVar7,auStack_b0,auStack_b0);
  FUN_089a38c4(param_2 + 0x10,param_4,auStack_b0);
  fVar7 = *(float *)(param_3 + 100);
  FUN_089a38e0(auStack_a0,(undefined1 (*) [12])(param_5[1] + 4),param_5);
  FUN_089a3bc8(auStack_a0,auStack_a0);
  FUN_089a3a44(fVar10 * fVar7,auStack_a0,auStack_a0);
  FUN_089a38c4(param_2 + 0x20,param_5,auStack_a0);
  iVar3 = (param_7 + -1) * 0x10;
  pauVar4 = (undefined1 (*) [12])((int)param_4 + iVar3);
  iVar2 = (param_7 + -2) * 0x10;
  param_4 = (undefined1 (*) [12])((int)param_4 + iVar2);
  auVar1 = vsub_t(*pauVar4,*param_4);
  uVar8 = vdot_t(auVar1,auVar1);
  fVar9 = (float)vsqrt_s(uVar8);
  pauVar5 = (undefined1 (*) [12])((int)local_40 + iVar3);
  pauVar6 = (undefined1 (*) [12])((int)local_40 + iVar2);
  auVar1 = vsub_t(*pauVar5,*pauVar6);
  uVar8 = vdot_t(auVar1,auVar1);
  fVar10 = (float)vsqrt_s(uVar8);
  local_68 = fVar9;
  local_64 = fVar10;
  FUN_089a3868(param_2 + 0x30,param_6 + iVar3);
  fVar7 = *(float *)(param_3 + 100);
  FUN_089a38e0(auStack_90,param_4,pauVar4);
  FUN_089a3bc8(auStack_90,auStack_90);
  FUN_089a3a44(fVar9 * fVar7,auStack_90,auStack_90);
  FUN_089a38c4(param_2 + 0x40,pauVar4,auStack_90);
  fVar7 = *(float *)(param_3 + 100);
  FUN_089a38e0(auStack_80,pauVar6,pauVar5);
  FUN_089a3bc8(auStack_80,auStack_80);
  FUN_089a3a44(fVar10 * fVar7,auStack_80,auStack_80);
  FUN_089a38c4(param_2 + 0x50,pauVar5,auStack_80);
  return;
}

