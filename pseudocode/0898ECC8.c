/* Entry 0x0898ECC8 | file offset 0x0018BCA0 | FUN_0898ecc8 | bytes 332 */

void FUN_0898ecc8(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5,short param_6,uint param_7)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 *local_58;
  undefined1 *local_54;
  
  FUN_089a38e0(auStack_90,param_4,param_5);
  FUN_089a3bc8(auStack_90,auStack_90);
  FUN_089a3a44(param_1,auStack_80,auStack_90);
  FUN_089a3a44(param_2,auStack_70,auStack_90);
  local_60 = 7;
  uVar3 = 0;
  if (param_7 != 0) {
    local_5c = param_4;
    local_58 = auStack_80;
    local_54 = auStack_70;
    do {
      iVar1 = FUN_0894c244(0,DAT_09b6f478,(int)param_6,&local_60);
      if ((iVar1 != 0) && (piVar2 = *(int **)(param_3 + 0x2c), piVar2 != (int *)0x0)) {
        (**(code **)(*piVar2 + 0x14))((int)piVar2 + (int)*(short *)(*piVar2 + 0x10),iVar1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_7);
  }
  return;
}

