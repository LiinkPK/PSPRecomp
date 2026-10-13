/* Entry 0x089A8654 | file offset 0x001A562C | FUN_089a8654 | bytes 364 */

undefined4 FUN_089a8654(int param_1,int *param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 local_60;
  undefined2 local_5e;
  int local_5c;
  int local_58;
  uint local_54;
  int local_50;
  undefined4 local_4c;
  int local_40;
  uint local_3c;
  undefined4 local_30;
  int local_2c;
  
  local_2c = param_4 * 8 + 0x18;
  local_60 = 2;
  local_54 = *(int *)(param_1 + 0x78) + 4;
  local_50 = *(int *)(param_1 + 0x7c) + (uint)(local_54 < 4);
  local_5e = 0x100;
  local_4c = 0;
  local_5c = param_4;
  local_58 = param_5;
  local_30 = param_3;
  iVar1 = FUN_089a9470(param_1,&local_30);
  uVar2 = 0x80660001;
  if (iVar1 == 0) {
    iVar1 = FUN_089a8f0c(param_1,&local_60,"SSLLDL");
    uVar2 = 0x80660001;
    if (iVar1 == 0) {
      uVar4 = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x54);
      uVar3 = 0;
      if (uVar4 != 0) {
        do {
          uVar3 = uVar3 + 1;
          if (*param_2 == param_5) {
            local_3c = param_2[3];
            local_40 = param_2[2] + 4;
            if ((param_5 == *(int *)(param_1 + 0x1a0)) && ((param_2[1] & 0x10U) == 0)) {
              local_3c = local_3c | 0x80000000;
            }
            iVar1 = FUN_089a9540(param_1,&local_40,2);
            if (iVar1 != 2) {
              return 0x80660001;
            }
          }
          param_2 = param_2 + 4;
        } while (uVar3 < uVar4);
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}

