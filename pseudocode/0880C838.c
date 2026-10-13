/* Entry 0x0880C838 | file offset 0x00009810 | FUN_0880c838 | bytes 636 */

void FUN_0880c838(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  float local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [64];
  undefined1 auStack_80 [64];
  undefined1 auStack_40 [16];
  
  iVar1 = *(int *)(param_3 + 0x158);
  FUN_089a405c(auStack_80,param_4);
  FUN_089a38e0(&local_f0,param_3,param_2);
  FUN_089a3f68(&local_f0,auStack_80,&local_f0);
  FUN_089a383c(local_f0,local_ec,0,0,auStack_e0);
  fVar2 = (float)FUN_0886808c(&DAT_09af8aa0,auStack_e0,&DAT_09af8ab0);
  if ((fVar2 < *(float *)(iVar1 + 8)) || (*(float *)(iVar1 + 0xc) < fVar2)) {
    uVar3 = FUN_0880c150();
    FUN_089a40c8(uVar3,auStack_c0,&DAT_09af8ac0);
    uVar3 = FUN_089a4500(local_f0);
    FUN_089a383c(uVar3,0,local_e8,0,&local_f0);
    FUN_089a3f40(&local_f0,auStack_c0,&local_f0);
  }
  FUN_089a383c(local_f0,0,local_e8,0,auStack_e0);
  if (local_f0 < 0.0) {
    FUN_089a3978(auStack_e0,auStack_e0);
  }
  fVar2 = (float)FUN_0886808c(&DAT_09af8aa0,auStack_e0,&DAT_09af84e0);
  if ((fVar2 < *(float *)(iVar1 + 0x10)) || (*(float *)(iVar1 + 0x14) < fVar2)) {
    uVar3 = FUN_0880c150();
    FUN_089a4124(uVar3,auStack_c0,&DAT_09af8ac0);
    FUN_089a383c(local_f0,local_ec,0,0,&local_f0);
    FUN_089a3f40(&local_f0,auStack_c0,&local_f0);
  }
  local_e4 = 0;
  FUN_089a3f68(auStack_d0,param_4,&local_f0);
  FUN_089a38a8(param_3,auStack_d0,param_2);
  uVar3 = *(undefined4 *)(param_3 + 0x160);
  FUN_089a38e0(auStack_40,param_3,param_2);
  FUN_089a3bc8(auStack_40,auStack_40);
  FUN_089a3a44(uVar3,auStack_40,auStack_40);
  FUN_089a38a8(param_3,auStack_40,param_2);
  *(undefined4 *)(param_3 + 0xc) = 0x3f800000;
  return;
}

