/* Entry 0x0888696C | file offset 0x00083944 | FUN_0888696c | bytes 204 */

bool FUN_0888696c(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if ((*(char *)(param_1 + 0x16) == '\0') || (*(char *)((int)param_1 + 0x59) == '\0')) {
    bVar1 = false;
  }
  else {
    iVar5 = 0;
    puVar4 = param_1;
    do {
      iVar3 = *(int *)*puVar4;
      if ((((*(byte *)(iVar3 + 0x5b2) & 0x10) != 0) ||
          (iVar2 = func_0x08acaa74(iVar3 + 0x784), iVar2 == 1)) &&
         (iVar2 = FUN_08886a60(param_1), iVar3 != iVar2)) {
        return false;
      }
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar5 < 2);
    bVar1 = param_1[0x2d] != 0;
  }
  return bVar1;
}

