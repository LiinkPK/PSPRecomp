/* Entry 0x0883E3BC | file offset 0x0003B394 | FUN_0883e3bc | bytes 812 */

void FUN_0883e3bc(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar2 = *param_1;
  uVar3 = 0;
  if (*(char *)(iVar2 + 0x542) != '\x05') {
    iVar4 = *param_2;
    uVar3 = 3;
    if (*(char *)(iVar4 + 0x542) != '\x05') {
      if (((*(uint *)(iVar2 + 0x388) & 0x8000) != 0) ||
         (bVar1 = false, (*(byte *)(iVar2 + 0x195) & 0x80) != 0)) {
        bVar1 = true;
      }
      if (bVar1) {
        uVar3 = 1;
        if (((*(uint *)(iVar4 + 0x388) & 0x8000) != 0) ||
           (bVar1 = false, (*(byte *)(iVar4 + 0x195) & 0x80) != 0)) {
          bVar1 = true;
        }
        if (bVar1) {
          uVar3 = 2;
        }
      }
      else {
        uVar3 = 2;
        if (((*(uint *)(iVar4 + 0x388) & 0x8000) != 0) ||
           (bVar1 = false, (*(byte *)(iVar4 + 0x195) & 0x80) != 0)) {
          bVar1 = true;
        }
        if (bVar1) {
          uVar3 = 3;
        }
      }
    }
  }
  if ((*(uint *)(iVar2 + 0x38c) & 0x800) == 0) {
    if ((*(uint *)(iVar2 + 0x38c) & 0x1000) != 0) {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 3;
  }
  if (uVar3 < 2) {
    if (uVar3 == 0) {
      FUN_089a3868(param_4,&DAT_09af84c0);
      return;
    }
  }
  else if (uVar3 < 3) {
    FUN_08838e24();
    FUN_08838e24(*param_2);
    iVar2 = *param_1;
  }
  else if (uVar3 < 4) {
    return;
  }
  fVar5 = (float)FUN_08838e24(iVar2);
  fVar6 = (float)FUN_08838e24(*param_2);
  FUN_089a3a44(fVar5 / (fVar5 + fVar6),&local_40,param_4);
  FUN_089a3a44(fVar6 / fVar5,param_4,&local_40);
  local_30 = local_40;
  local_2c = local_3c;
  local_28 = local_38;
  local_50 = local_40;
  local_4c = local_3c;
  local_48 = local_38;
  FUN_089a34f4(*param_2 + 0x2d4,*param_2 + 0x2d4,&local_50);
  FUN_0883e2f4(param_2,&local_40);
  return;
}

