/* Entry 0x0893FCA8 | file offset 0x0013CC80 | FUN_0893fca8 | bytes 292 */

int FUN_0893fca8(undefined2 *param_1,uint param_2,undefined4 param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined4 local_30;
  undefined2 local_2c [2];
  undefined2 *local_28;
  
  iVar4 = 0;
  if (param_2 < 2) {
    iVar4 = 0;
  }
  else {
    param_2 = param_2 - 2;
    puVar5 = param_1 + 1;
    local_30 = param_3;
    while (iVar2 = FUN_0893fb08(&local_30), iVar2 != 0) {
      local_28 = local_2c;
      FUN_0893fa70(&local_28,iVar2);
      iVar2 = ((int)local_28 - (int)local_2c) / 2;
      if (param_2 < (uint)(iVar2 * 2)) break;
      param_2 = param_2 + iVar2 * -2;
      puVar3 = local_2c;
      for (; iVar2 != 0; iVar2 = iVar2 + -1) {
        uVar1 = *puVar3;
        puVar3 = puVar3 + 1;
        *param_1 = uVar1;
        iVar4 = iVar4 + 1;
        param_1 = puVar5;
        puVar5 = puVar5 + 1;
      }
    }
    *param_1 = 0;
  }
  return iVar4;
}

