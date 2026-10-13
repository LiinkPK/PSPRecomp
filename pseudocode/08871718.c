/* Entry 0x08871718 | file offset 0x0006E6F0 | FUN_08871718 | bytes 256 */

undefined4
FUN_08871718(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar2 = *(uint *)(param_2 + 4);
    param_1[0x17] = param_2;
    param_1[0x18] = param_3;
    if (param_7 == '\0') {
      uVar4 = FUN_088716f0(param_1,param_2);
      iVar3 = param_1[1];
      uVar1 = *param_1;
    }
    else {
      uVar4 = *(uint *)(param_2 + 8) & 0xfffffff;
      iVar3 = param_1[1];
      uVar1 = *param_1;
    }
    param_1[0x19] = uVar4;
    param_1[0x1a] = param_5;
    param_1[0x1b] = param_6;
    *(char *)((int)param_1 + 0x71) = param_7;
    *(undefined1 *)(param_1 + 0x1c) = 0;
    (**(code **)(*(int *)(iVar3 + 0x154) + 0xec))
              (iVar3 + *(short *)(*(int *)(iVar3 + 0x154) + 0xe8),uVar1,(uVar2 & 0xfffff) << 0xb,0,
               FUN_08871ab0,param_1);
    uVar1 = 1;
  }
  return uVar1;
}

