/* Entry 0x089A7658 | file offset 0x001A4630 | FUN_089a7658 | bytes 360 */

undefined4
FUN_089a7658(int param_1,uint *param_2,int param_3,uint param_4,uint param_5,undefined4 param_6)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint local_30;
  uint local_2c;
  undefined1 local_20 [16];
  
  uVar1 = *(uint *)(param_1 + 0x40);
  if (*(uint *)(param_1 + 0x40) <= param_5) {
    uVar1 = param_5;
  }
  *(uint *)(param_1 + 0x40) = uVar1;
  local_20[0] = 0;
  if (param_3 == 0x6277) {
    local_30 = 0x62773130;
    uVar1 = *(uint *)(param_1 + 0x48);
    if (*(uint *)(param_1 + 0x48) <= param_5) {
      uVar1 = param_5;
    }
    *(uint *)(param_1 + 0x48) = uVar1;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
  }
  else {
    local_30 = param_3 << 0x10 | 0x3030;
    uVar1 = *(uint *)(param_1 + 0x44);
    if (*(uint *)(param_1 + 0x44) <= param_5) {
      uVar1 = param_5;
    }
    *(uint *)(param_1 + 0x44) = uVar1;
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  }
  if (param_2 != (uint *)0x0) {
    param_2[1] = param_4;
    *param_2 = local_30;
    iVar3 = *(int *)(param_1 + 0x3c);
    param_2[3] = param_5;
    param_2[2] = iVar3 + 4;
  }
  local_2c = param_5;
  iVar3 = FUN_089a9470(param_1,&local_30);
  uVar2 = 0x80660001;
  if (iVar3 == 0) {
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 8;
    uVar1 = FUN_089a91b8(param_1,param_6,param_5);
    uVar2 = 0x80660001;
    if (uVar1 == param_5) {
      *(uint *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + param_5;
      uVar1 = FUN_089a92c4(param_1);
      if ((uVar1 & 1) != 0) {
        iVar3 = FUN_089a91b8(param_1,local_20,1);
        if (iVar3 != 1) {
          return 0x80660001;
        }
        *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
      }
      uVar2 = 0;
      *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x3c) + 4;
    }
  }
  return uVar2;
}

