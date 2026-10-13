/* Entry 0x088DE0E8 | file offset 0x000DB0C0 | FUN_088de0e8 | bytes 176 */

bool FUN_088de0e8(int *param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4,
                 undefined2 param_5,undefined1 param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0899b9f0(0);
  *param_1 = iVar1;
  iVar1 = FUN_0899bb68(iVar1,param_2,param_3,0);
  iVar2 = *param_1;
  if (iVar1 != 0) {
    *(undefined2 *)((int)param_1 + 6) = param_4;
    *(undefined2 *)(param_1 + 2) = param_5;
    *(undefined2 *)(param_1 + 1) = 1;
    *(undefined1 *)((int)param_1 + 10) = param_6;
  }
  else {
    FUN_0899bb1c();
    *param_1 = 0;
  }
  return iVar1 != 0 && iVar2 != 0;
}

