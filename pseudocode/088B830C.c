/* Entry 0x088B830C | file offset 0x000B52E4 | FUN_088b830c | bytes 120 */

void FUN_088b830c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_088b1d9c(param_2);
  if ((iVar1 != 0) && (iVar2 = FUN_088b8414(param_1,param_2,1), iVar2 != 0)) {
    *(undefined2 *)(iVar2 + 2) = *(undefined2 *)(iVar1 + 0x12);
    *(ushort *)(iVar2 + 4) = *(ushort *)(iVar2 + 4) | 2;
  }
  return;
}

